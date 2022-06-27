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
%token <str> PDFDECLARATION CREATIONDATE ENDOBJ PRODUCER TITLE TYPECATALOG PAGES TYPEFONT SUBTYPE NAME FONE BASEFONT FONT PROCSET PDFSTRING TEXTSTRING 
%token <str> ARRAYOPEN ARRAYCLOSE LESSTHAN GREATERTHAN NUMBERLOOP KIDSLOOP STREAMENDSTREAM
%token <str> OBJ SPACE EMPTY NEWLINE STRING TYPEPAGE TYPEPAGES PARENT RESOURCES CONTENTS LENGTH COUNT KIDS MEDIABOX XREF TRAILER SIZE ROOT INFO STARTXREF

%type main writeheader writeRest startobj endobj string stringR numString num numR

%start main

%%
writeheader:PDFDECLARATION NEWLINE startobj 
            NEWLINE CREATIONDATE string 
            NEWLINE PRODUCER string 
            NEWLINE TITLE string
            NEWLINE endobj 
            NEWLINE startobj
            NEWLINE TYPECATALOG
            NEWLINE stringR 
            NEWLINE endobj
            NEWLINE startobj 
            NEWLINE TYPEFONT 
            NEWLINE SUBTYPE 
            NEWLINE NAME SPACE FONE
            NEWLINE BASEFONT 
            NEWLINE endobj
            NEWLINE startobj 
            NEWLINE FONT SPACE LESSTHAN SPACE FONE SPACE numR SPACE GREATERTHAN
            NEWLINE PROCSET SPACE ARRAYOPEN SPACE PDFSTRING SPACE TEXTSTRING SPACE ARRAYCLOSE
            NEWLINE endobj
            writePages

writePages: pageobjs
            writeRest
                  
pageobjs:   pages | pageobjs pages

pages:      NEWLINE startobj
            NEWLINE TYPEPAGE
            NEWLINE stringR //PARENT
            NEWLINE stringR //RESOURCES
            NEWLINE stringR //CONTENTS
            NEWLINE endobj
            NEWLINE startobj 
            NEWLINE stringR //LENGTH
            NEWLINE STREAMENDSTREAM
            NEWLINE pageObj  

writeRest:  NEWLINE startobj 
            NEWLINE TYPEPAGES
            NEWLINE COUNT num
            NEWLINE MEDIABOX SPACE ARRAYOPEN SPACE num SPACE num SPACE ARRAYCLOSE
            NEWLINE KIDS SPACE KIDSLOOP
            NEWLINE endobj
            NEWLINE XREF
            NEWLINE num
            NEWLINE NUMBERLOOP
            TRAILER
            NEWLINE LESSTHAN
            NEWLINE SIZE SPACE NUM
            NEWLINE ROOT SPACE numR
            NEWLINE INFO SPACE numR
            NEWLINE GREATERTHAN
            NEWLINE STARTXREF
            NEWLINE NUM
            NEWLINE STRING STRING
            NEWLINE

string:     STRING | SPACE STRING

num:        NUM | SPACE NUM | NUM SPACE NUM

objReuse:   num SPACE OBJ NEWLINE

startobj:   objReuse LESSTHAN

endobj:     GREATERTHAN NEWLINE ENDOBJ |
            ENDOBJ

pageObj:    objReuse num NEWLINE endobj

numString:  PAGES | RESOURCES | PARENT | CONTENTS | LENGTH

stringR:    numString SPACE numR 

numR:       num SPACE string

main:       writeheader {}
%%


int main(int argc, char ** argv) {
     /* #ifdef YYDEBUG
        yydebug = 1;
    #endif   */
    // add -t to bison and -d to flex in makefile
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
}