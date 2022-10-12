/*C stuff like header files,declarations, variables etc.*/
%option noyywrap nodefault yylineno
%{
# include "text2PDF.tab.h"
%}
/*Regular Expressions*/

%%
/* Token Specifications start */
"%PDF-1.1"	         { return PDFDECLARATION; }
"/CreationDate"      { return CREATIONDATE; }
"/Producer"	         { return PRODUCER; }
"/Title"	            { return TITLE; }
"/Type"  	         { return TYPE; }
"/Catalog"  	      { return CATALOG; }
"/Pages"	            { return PAGES; }
"/Font"	            { return FONT; }
"/Type1"	            { return TYPEONE; }
"/Subtype"	         { return SUBTYPE; }
"/Page"	            { return TYPEPAGE; }
"/Parent"	         { return PARENT; }
"/Resources"	      { return RESOURCES; }
"/Contents"	         { return CONTENTS; }
"/Length"	         { return LENGTH; }
"/Count"	            { return COUNT; }
"/MediaBox"	         { return MEDIABOX; }
"/Kids"	            { return KIDS; }
"xref"	            { return XREF; }
"trailer"	         { return TRAILER; }
"/Name"	            { return NAME; }
"/Size"	            { return SIZE; }
"/Root"	            { return ROOT; }
"/Info"	            { return INFO; }
"startxref"	         { return STARTXREF; }
"/F1"	               { return FONE; }
"/BaseFont"          { return BASEFONT; }
"/Courier"           { return COURIER; }
"/ProcSet"	         { return PROCSET; }
"/PDF"	            { return PDFSTRING; }
"["	               { return ARRAYOPEN; }
"]"	               { return ARRAYCLOSE; }
"/Text"	            { return TEXTSTRING; }
"obj"	               { return OBJ; }
"endobj"             { return ENDOBJ; }
" "                  { return SPACE; }
"<<"                 { return LESSTHAN; }
">>"                 { return GREATERTHAN; }
\((.*)\)             { return STRING; }
"[a-zA-Z]+"          { return STRING; }
"[0-9]+"	            { return NUM; }
"%%"                 { return STRING; }
<<EOF>>              { yyterminate(); return 0; }
"\n"                 { return NEWLINE; }
"//".*[ \t]          { }
(\>\>[ \n\t\r]stream[ \n\t\r]BT[ \n\t\r]((.*[ \n\t\r])*)ET[ \n\t\r]endstream[ \n\t\r]endobj) { return STREAMENDSTREAM; }
([0-9]+[ \n\t\r]+[0-9]+[ \n\t\r]+[a-z][ \t\r]+[\n]?)+                            { return NUMBERLOOP; }
(\[[ \t\r]+[0-9]+[ \t\r]+[0-9]+[ \t\r]+[a-zA-Z][ \t\r]?\])+                      { return KIDSLOOP; }
.	printf("bad input character '%s' at line %d\n", yytext, yylineno);
/* Token Specifications End */
%%

void yyerror (char const *s) {
   fprintf (stderr, "Error | Line: %d\n%s\n",yylineno,s);
}
/* C functions( like the main)*/