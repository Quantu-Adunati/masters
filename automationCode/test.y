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
%token <str> STARTXREF COUNT TYPECATALOG TYPEPAGES CREATIONDATE PDFSTRING STRING SPACE RESOURCES TRAILER LESSTHAN ARRAYCLOSE GREATERTHAN TYPEPAGE TYPEFONT SUBTYPE TITLE FONT SIZE ARRAYOPEN LENGTH PAGES PARENT ROOT ENDOBJ PDFDECLARATION NUMBERLOOP BASEFONT FONE MEDIABOX STREAMENDSTREAM PROCSET PRODUCER XREF TEXTSTRING OBJ KIDSLOOP CONTENTS NAME KIDS EMPTY NEWLINE INFO 


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