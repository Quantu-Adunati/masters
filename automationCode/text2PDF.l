/*C stuff like header files,declarations, variables etc.*/
%option noyywrap nodefault yylineno
%{
# include "generated.tab.h"
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
"/Encoding"  	      { return ENCODING; }
"/Differences"  	   { return DIFFERENCES; }
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
"\["	               { return ARRAYOPEN; }
"\]"	               { return ARRAYCLOSE; }
"/Text"	            { return TEXTSTRING; }
"[0-9]+[ \t]+[0-9]+[ \t]+R"    { return OBJREF; }
"obj"	               { return OBJ; }
"endobj"             { return ENDOBJ; }
"<<"                 { return LESSTHAN; }
">>"                 { return GREATERTHAN; }
[1-9][0-9]*    { return NUM; }
0              { return NUM; }
"%%EOF"              { return STRING; }
"'"                  { return STRING; }
"\\\\"               { return STRING; }
"%%"                 { return STRING; }
"\("                 { return STRING; }
\((.*)\)             { return STRING; }
"/[a-zA-Z]+"         { return SLASHWORD; }
"[a-zA-Z]+"          { return STRING; }
"."                  { return STRING; }
"\n"                 { return NEWLINE; }
" "                  { return SPACE; }
"//".*[ \t]          { }
([0-9]+[ \n\t\r]+[0-9]+[ \n\t\r]+[a-z][ \t\r]+[\n]?)+    { return NUMBERLOOP; }
(\[[ \t\r]+[0-9]+[ \t\r]+[0-9]+[ \t\r]+[a-zA-Z][ \t\r]?\])+ { return KIDSLOOP; }
(\>\>[ \n\t\r]stream[ \n\t\r]BT[ \n\t\r]((.*[ \n\t\r])*)ET[ \n\t\r]endstream[ \n\t\r]endobj) { return STREAMENDSTREAM; }
<<EOF>>              { yyterminate(); return 0; }
.   { return STRING; }
    /* Token Specifications End */
%%