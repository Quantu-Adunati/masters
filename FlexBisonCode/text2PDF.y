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
%token <str> ARRAYOPEN ARRAYCLOSE LESSTHAN GREATERTHAN NUMBERLOOP KIDSLOOP
%token <str> OBJ SPACE EMPTY NEWLINE STRING TYPEPAGE TYPEPAGES PARENT RESOURCES CONTENTS LENGTH COUNT KIDS MEDIABOX XREF TRAILER SIZE ROOT INFO STARTXREF

%type main writeheader writeRest startobj endobj string obj stringR numStringType num numR

%start main

%%
writeheader:PDFDECLARATION NEWLINE obj 
            NEWLINE CREATIONDATE string 
            NEWLINE PRODUCER string 
            NEWLINE TITLE string
            NEWLINE obj 
            NEWLINE TYPECATALOG
            NEWLINE stringR 
            NEWLINE obj 
            NEWLINE TYPEFONT 
            NEWLINE SUBTYPE 
            NEWLINE NAME SPACE FONE
            NEWLINE BASEFONT 
            NEWLINE obj
            NEWLINE FONT SPACE LESSTHAN SPACE FONE SPACE numR SPACE GREATERTHAN
            NEWLINE PROCSET SPACE ARRAYOPEN SPACE PDFSTRING SPACE TEXTSTRING SPACE ARRAYCLOSE
            NEWLINE obj
            writeRest
                  
writeRest:  NEWLINE TYPEPAGE
            NEWLINE stringR //PARENT
            NEWLINE stringR //RESOURCES
            NEWLINE stringR //CONTENTS
            NEWLINE obj
            NEWLINE stringR //LENGTH
            NEWLINE obj
            NEWLINE obj
            NEWLINE TYPEPAGES
            NEWLINE COUNT num
            NEWLINE MEDIABOX SPACE ARRAYOPEN SPACE num SPACE num SPACE ARRAYCLOSE
            NEWLINE KIDS SPACE KIDSLOOP
            NEWLINE obj
            NEWLINE XREF
            NEWLINE num
            NEWLINE NUMBERLOOP
            /*NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE
            NEWLINE numR SPACE*/
            TRAILER
            NEWLINE LESSTHAN
            NEWLINE SIZE SPACE NUM
            NEWLINE ROOT SPACE numR
            NEWLINE INFO SPACE numR
            NEWLINE GREATERTHAN
            NEWLINE STARTXREF
            NEWLINE NUM
            NEWLINE

string: STRING | SPACE STRING
        

num: NUM | SPACE NUM | NUM SPACE NUM

startobj: num SPACE OBJ NEWLINE LESSTHAN |
          num SPACE OBJ NEWLINE num

endobj: GREATERTHAN NEWLINE ENDOBJ |
        ENDOBJ

obj: obj NEWLINE startobj |
     startobj |
     endobj 

numStringType: PAGES | RESOURCES | PARENT | CONTENTS | LENGTH

stringR: numStringType SPACE numR 

numR: num SPACE string

main: writeheader {}
%%


int main() {
     /* #ifdef YYDEBUG
        yydebug = 1;
    #endif   */
    // add -t to bison and -d to flex in makefile
    yyin = fopen("text2PDFExample.pdf","r");
    if (yyin == NULL) {
        fprintf(stderr, "Could not open 'text2PDFExample.pdf': %s\n", strerror(errno));
        exit(1);
    }
    yyparse();
    int token;
    while ((token = yylex()) != 0) {
        printf("Token: %d (%s)\n", token, yytext);
    }
    return 0;
}