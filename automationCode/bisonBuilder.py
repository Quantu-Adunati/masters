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

def main():
    print('Starting Main')
    print('\n=============')
    readFlexFile(sys.argv[1])
    readCodeFile(sys.argv[2])
    extractTokens()
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
    tokenList = allTokens[0][0].replace('\t','').split('\n')
    setDictionary(tokenList)

def setDictionary(tokenList):
    global tokenDictionary
    for token in tokenList:
        if "yyterminate" not in str(token) and "return" in str(token):
            splitToken = re.split('[ \t]*\{ return ', token)
            splitToken[0] = splitToken[0].replace('"', '')
            splitToken[1] = splitToken[1].replace('; }','')
            tokenDictionary[splitToken[0]] = splitToken[1]
    
    print('\nThe token dictionary is =>'+str(tokenDictionary))


def createGrammarRules():
    grammarRules ='%start main\n\n%%'

    grammarRules +='\n%%\n'
    return grammarRules

def createTypeDeclarations():
    #Writes to whiteSpace created by the tokenDeclaration() method
    #TODO figure out how to do. This will be the last step
    typeDeclaration = '%type main'
    print(":")

def createTokenDeclaration():
    tokenDeclaration = '/* Tokens*/'
    strList = set()
    for tokenValue in tokenDictionary.values():
        if(str(tokenValue)=='NUM'):
            tokenDeclaration += '\n%token <ival> NUM'
        else:
            strList.add(tokenValue + ' ')
    
    tokenDeclaration += '\n%token <str> ' + ''.join(strList)
    tokenDeclaration += '\n\n\n'
    return tokenDeclaration
        

def createBisonFile():
    with open('test.y', 'w') as f:
        f.write(bisonStartString)
        f.write(createTokenDeclaration())
        f.write(createGrammarRules())
        f.write(bisonMainString)


if __name__ == '__main__':
    main()