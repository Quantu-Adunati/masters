from lib2to3.pgen2 import grammar
from operator import eq
import re
import sys

flexFileString = ''
codeFileString = ''
bisonStartString = '''%defines
%locations
%define parse.error verbose

%{
#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <stdlib.h>
extern FILE *yyin;
extern char *yytext;
%}

%union {
    int ival;
    char* str;
}

'''
bisonMainString = '''
int main(int argc, char ** argv) {
    yyin = fopen(argv[1],"r");
    if (yyin == NULL) {
        fprintf(stderr, "Could not open '%s': %s\\n", argv[1] , strerror(errno));
        exit(1);
    }
    yyparse();
    int token;
    while ((token = yylex()) != 0) {
        printf("Token: %d (%s)\\n", token, yytext);
    }
    return 0;
}'''

nonMethodKeywords = 'if while switch else'
keywordsToLookFor = 'writestr sprintf'
formatingTokens = '%s %d'  # Todo: might need to split this.
tokenDictionary = dict([])
methodDictionary = dict([])
visitedMethods = []


def main():
    print('Starting Main')
    print('\n=============')
    readFlexFile(sys.argv[1])
    readCodeFile(sys.argv[2])
    extractTokens()
    extractAllMethods()
    createBisonFile()


def readFlexFile(flexFileName):
    global flexFileString
    flexFileString = readFile(flexFileName)


def readCodeFile(codeFileName):
    global codeFileString
    codeFileString = readFile(codeFileName)


def readFile(fileName):
    print('Reading File With Name: ' + fileName)
    file = open(fileName, "rt")

    fileString = file.read()
    print('\File Contents => ' + fileString)
    file.close()

    return fileString


def extractTokens():
    print('\nExtracting All Tokens')
    print('\n=====================')
    patternToFindAllTokens = '/\* Token Specifications start \*/[\n]((.*\n)*)/\* Token Specifications End \*/'
    allTokens = re.findall(patternToFindAllTokens, flexFileString)

    print('\nExtracting Individual Tokens')
    print('\n============================')
    tokenList = allTokens[0][0].replace('\t', '').split('\n')
    setTokenDictionary(tokenList)


def setTokenDictionary(tokenList):
    global tokenDictionary
    for token in tokenList:
        if "yyterminate" not in str(token) and "return" in str(token):
            splitToken = re.split('[ \t]*\{ return ', token)
            splitToken[0] = splitToken[0].replace('"', '')
            splitToken[1] = splitToken[1].replace('; }', '')
            tokenKey = splitToken[0].encode().decode('unicode_escape')
            tokenDictionary[tokenKey] = splitToken[1]

    print('\nThe token dictionary is =>'+str(tokenDictionary))


def setMethodDictionary(methodName, method):
    global methodDictionary
    methodDictionary[methodName] = method


def createGrammarRulesStart():
    grammarRules = '%start main\n\n%%'

    grammarRules += '\n%%\n'
    return grammarRules


def createGrammarRulesEnd():
    return '\n%%\n'


def createTypeDeclarations():
    # Writes to whiteSpace created by the tokenDeclaration() method
    # TODO figure out how to do. This will be the last step
    typeDeclaration = '%type main'
    print(":")


def createTokenDeclaration():
    tokenDeclaration = '/* Tokens*/'
    strList = set()
    for tokenValue in tokenDictionary.values():
        if(str(tokenValue) == 'NUM'):
            tokenDeclaration += '\n%token <ival> NUM'
        else:
            strList.add(tokenValue + ' ')

    tokenDeclaration += '\n%token <str> ' + ''.join(strList)
    tokenDeclaration += '\n\n\n'
    return tokenDeclaration


def extractAllMethods():
    global codeFileString
    methodRegex = r"^(int|char|long|void)\s+(\w+)\s*\(.*\)[\S\s]*?\{(?:.*\n(?!}))*.*\n}$"
    matches = re.finditer(methodRegex, codeFileString, re.MULTILINE)
    for matchNum, match in enumerate(matches, start=1):
        # print("Match {matchNum} was found at {start}-{end}: {match}".format(matchNum=matchNum, start=match.start(), end=match.end(), match=match.group()))

        methodNameRegex = r"(int|char|long|void)[\s]+(\w+)"
        methodName = re.findall(methodNameRegex, match.group())
        if(methodName[0][1] != 'ShowHelp'):
            setMethodDictionary(methodName[0][1], str(match.group()))


def extractSprintFMethodParam(methodCall):
    regexPattern = r"\((.*?)\)"
    return "TODO FIGURE THIS ONE OUT"


def extractWriteStrMethodParam(methodCall):
    regexPattern = r"\((.*?)\)"
    return cleanStringUp(re.search(regexPattern, methodCall).group())


def cleanStringUp(regexMatch):
    cleanerRegexMatch = regexMatch.translate({ord(ch): '' for ch in '()"'})
    return cleanerRegexMatch.encode().decode('unicode-escape')


def visitEachMethod(methodToVisit):
    global methodDictionary
    innerGrammarCount = 1
    if(hasMethodBeenVisited(methodToVisit) is False):
        grammar = methodToVisit + ':'
        for line in methodDictionary.get(methodToVisit).split(';'):
            # Need to check loops and conditional statements
            # Use grammarCount(as key) to create the subgrammars and
            # reference in caller grammar
            params = ''
            if('writestr' in line):
                params = extractWriteStrMethodParam(line)
            elif('sprintf' in line):
                params = extractSprintFMethodParam(line)

            if(params):
                grammar += findTokenValue(params)
        # TODO: Current placeholder. Not sure if this is returned
        return grammar


def visitMainMethod():
    global methodDictionary
    mainMethod = methodDictionary.get('main')
    grammarRules = ''
    for word in mainMethod.split('\n'):
        methodName = word.strip().split('(')[0]
        if(methodName in methodDictionary):
            grammarRules += visitEachMethod(methodName)
            if(not (not grammarRules)):
                grammarRules += '\n' + methodName
            # TODO add following grammar(like writePages) at end of writeHeader?

    return grammarRules


def hasMethodBeenVisited(methodName):
    if(methodName not in visitedMethods):
        visitedMethods.append(methodName)
        return False
    return True


def findTokenValue(stringToBePrinted):
    global tokenDictionary
    matchedTokens = []
    if(stringToBePrinted):
        stringToBePrintedSplit = stringToBePrinted.split(' ')
        for index, character in enumerate(stringToBePrintedSplit):
            for tokenRegex in tokenDictionary:
                regexPattern = re.escape(tokenRegex) if len(tokenRegex) == 1 else tokenRegex
#TODO currently it finds PDFDECLARATION string num and newline on %PDF-1.1\n
#It should only be PDFDECLARATION newline
#think easy fix when splitting by newline and break if it went into 226 if
                match = re.findall(regexPattern, character)
                if(len(match) > 0):
                    matchedTokens.append(tokenDictionary[tokenRegex])
                    if(index < (len(stringToBePrintedSplit)-1)):
                        matchedTokens.append("SPACE")
    return ' '.join(matchedTokens)


def createBisonFile():
    with open('test.y', 'w') as f:
        f.write(bisonStartString)
        f.write(createTokenDeclaration())
        f.write(createGrammarRulesStart())
        f.write(bisonMainString)
        f.write(visitMainMethod())
        f.write(createGrammarRulesEnd())


if __name__ == '__main__':
    main()
