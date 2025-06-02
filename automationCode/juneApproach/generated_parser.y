%defines
%locations
%define parse.error verbose

%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern char *yytext;
%}

%union { int ival; char* str; }


%start main

%%

main: /* derived from function */
    /* /* happens to give 60 as default */ */
    /* WriteHeader(ifilename); */
    /* WritePages(); */
    /* WriteRest(); */
    /* return 0; */
    /* } */
    block
    if
    if
    WriteHeader
    WritePages
    WriteRest
    ;

block: /* derived from block */
    /* int main(int argc, char **argv){ */
    /* int i = 1; */
    /* int tmp, landscape = 0; */
    /* char *ifilename = NULL; */
    /* strcpy(font, "/"); */
    /* strcat(font, defaultFont); */
    /* infile = stdin;  /* default */ */
    /* i++; */
    /* } */
    while
    ;

while: /* derived from while */
    /* while (i < argc) { */
    /* } */
    if
    switch
    ;

if: /* derived from if */
    /* if (*argv[i] != '-') {  /* input filename */ */
    /* ifilename = argv[i]; */
    /* } else { */
    if
    ;

switch: /* derived from switch */
    /* switch (*++argv[i]) { */
    /* case 'h': */
    /* ShowHelp(); */
    /* exit(0); */
    /* case 'f': */
    /* strcpy(font, "/"); */
    /* strcat(font, ++argv[i]); */
    /* break; */
    /* case 'I': */
    /* ISOEnc = 1; */
    /* break; */
    /* case 'F': */
    /* doFFs = 0; */
    /* break; */
    /* case 's': */
    /* pointSize = atoi(++argv[i]); */
    /* case 'v': */
    /* vertSpace = atoi(++argv[i]); */
    /* case 'l': */
    /* lines = atoi(++argv[i]); */
    /* case 'c': */
    /* cols = atoi(++argv[i]); */
    /* case '2': */
    /* columns = 2; */
    /* break; */
    /* case 't': */
    /* tab = atoi(++argv[i]); */
    /* case 'A': */
    /* break; */
    /* case 'x': */
    /* pageWidth = atoi(++argv[i]); */
    /* case 'y': */
    /* pageHeight = atoi(++argv[i]); */
    /* case 'L': */
    /* landscape = 1; */
    /* break; */
    /* default: */
    /* fprintf(stderr, "%s: ignoring invalid switch: -%s\n", progname, argv[i]); */
    /* } */
    ShowHelp
    if
    if
    if
    if
    if
    switch
    if
    if
    ;

ShowHelp: /* derived from function */
    block
    ;

WriteHeader: /* derived from function */
    block
    ;

WritePages: /* derived from function */
    /* } */
    /* EndPage(beginstream); */
    /* } */
    /* } */
    block
    if
    EndPage
    ;

EndPage: /* derived from function */
    block
    ;

WriteRest: /* derived from function */
    block
    ;


%%

int main(int argc, char **argv) {
    yyin = fopen(argv[1], "r");
    if (!yyin) { perror("open"); exit(1); }
    yyparse();
    return 0;
}
