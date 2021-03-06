/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_TEXT2PDF_TAB_H_INCLUDED
# define YY_YY_TEXT2PDF_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    PDFDECLARATION = 259,
    CREATIONDATE = 260,
    ENDOBJ = 261,
    PRODUCER = 262,
    TITLE = 263,
    TYPECATALOG = 264,
    PAGES = 265,
    TYPEFONT = 266,
    SUBTYPE = 267,
    NAME = 268,
    FONE = 269,
    BASEFONT = 270,
    FONT = 271,
    PROCSET = 272,
    PDFSTRING = 273,
    TEXTSTRING = 274,
    ARRAYOPEN = 275,
    ARRAYCLOSE = 276,
    LESSTHAN = 277,
    GREATERTHAN = 278,
    NUMBERLOOP = 279,
    KIDSLOOP = 280,
    STREAMENDSTREAM = 281,
    OBJ = 282,
    SPACE = 283,
    EMPTY = 284,
    NEWLINE = 285,
    STRING = 286,
    TYPEPAGE = 287,
    TYPEPAGES = 288,
    PARENT = 289,
    RESOURCES = 290,
    CONTENTS = 291,
    LENGTH = 292,
    COUNT = 293,
    KIDS = 294,
    MEDIABOX = 295,
    XREF = 296,
    TRAILER = 297,
    SIZE = 298,
    ROOT = 299,
    INFO = 300,
    STARTXREF = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "text2PDF.y"

    int ival;
    char* str;

#line 109 "text2PDF.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_TEXT2PDF_TAB_H_INCLUDED  */
