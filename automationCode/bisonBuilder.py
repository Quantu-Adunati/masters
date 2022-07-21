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
        fprintf(stderr, "Could not open '%s': %s\n", argv[1] , strerror(errno));
        exit(1);
    }
    yyparse();
    int token;
    while ((token = yylex()) != 0) {
        printf("Token: %d (%s)\n", token, yytext);
    }
    return 0;
}'''

nonMethodKeywords = 'if while switch else'
keywordsToLookFor = 'printf putchar'
tokenDictionary = dict([])
methodDictionary = dict([])


def main():
    print('Starting Main')
    print('\n=============')
    readFlexFile(sys.argv[1])
    readCodeFile(sys.argv[2])
    extractTokens()
    extractAllMethods()
    createBisonFile()
    visitEachMethod()


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
            tokenDictionary[splitToken[0]] = splitToken[1]

    print('\nThe token dictionary is =>'+str(tokenDictionary))


def setMethodDictionary(methodName, method):
    global methodDictionary
    methodDictionary[methodName] = method


def createGrammarRules():
    grammarRules = '%start main\n\n%%'

    grammarRules += '\n%%\n'
    return grammarRules


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
        setMethodDictionary(methodName[0][1], str(match.group()))


def visitEachMethod():
    # Thinking of making this a recursive thing. Will need to see how this plays out.
    # Idea is to go from writeHeader to writeStr, realize it does a putChar(keywordToLookFor)
    # then backtrack to find the actual string, use that to determine the token(findTokenValue)
    # Then add to the grammar.
    global methodDictionary
    # The next line is a test. Remove when actualyl coding
    print(str(findTokenValue("%PDF-1.1\n")))
    

def findTokenValue(stringToBePrinted):
    global tokenDictionary
    matchedTokens = []
    for tokenRegex in tokenDictionary:
        # Need to figure out how to handle the proper regex strings in tokens. It gets escaped and then another escape.
        match = re.findall(re.escape(tokenRegex), stringToBePrinted)
        if(len(match) > 0):
            matchedTokens.append(tokenDictionary[tokenRegex])
    return matchedTokens


def createBisonFile():
    with open('test.y', 'w') as f:
        f.write(bisonStartString)
        f.write(createTokenDeclaration())
        f.write(createGrammarRules())
        f.write(bisonMainString)


if __name__ == '__main__':
    main()
