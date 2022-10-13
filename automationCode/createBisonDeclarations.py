from dictionaryBuilder import tokenDictionary

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

def createGrammarRulesStart():
    grammarRules = '%start main\n\n%%'
    grammarRules += '\nmain: '
    return grammarRules


def createGrammarRulesEnd():
    return '\n%%\n'

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
