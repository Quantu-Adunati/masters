%defines
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

/* Tokens*/
%token <ival> NUM
%token <str> ROOT OBJ TYPEPAGE SUBTYPE INFO PROCSET COUNT GREATERTHAN EMPTY PRODUCER FONT STARTXREF PDFDECLARATION CONTENTS ARRAYCLOSE STRING CREATIONDATE TYPECATALOG STREAMENDSTREAM TYPEPAGES ENDOBJ KIDS NEWLINE TYPEFONT TRAILER ARRAYOPEN TITLE NUMBERLOOP LESSTHAN TEXTSTRING MEDIABOX XREF FONE BASEFONT PARENT SIZE PDFSTRING KIDSLOOP PAGES LENGTH NAME SPACE RESOURCES 


%start main

%%
%%

int main(int argc, char ** argv) {
    yyin = fopen(argv[1],"r");
    if (yyin == NULL) {
        fprintf(stderr, "Could not open '%s': %s
", argv[1] , strerror(errno));
        exit(1);
    }
    yyparse();
    int token;
    while ((token = yylex()) != 0) {
        printf("Token: %d (%s)
", token, yytext);
    }
    return 0;
}