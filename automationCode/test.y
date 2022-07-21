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
%token <str> MEDIABOX ROOT INFO PARENT NUMBERLOOP TYPEFONT STREAMENDSTREAM SUBTYPE TYPEPAGE FONT PAGES PRODUCER FONE TEXTSTRING LESSTHAN NEWLINE PDFDECLARATION RESOURCES PROCSET KIDSLOOP ARRAYOPEN ARRAYCLOSE OBJ NAME PDFSTRING COUNT SIZE EMPTY STARTXREF XREF TYPEPAGES TRAILER ENDOBJ TYPECATALOG CONTENTS KIDS BASEFONT SPACE STRING LENGTH GREATERTHAN TITLE CREATIONDATE 


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