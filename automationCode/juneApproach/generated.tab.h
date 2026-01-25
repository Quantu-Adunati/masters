/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GENERATED_TAB_H_INCLUDED
# define YY_YY_GENERATED_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ARRAYCLOSE = 258,              /* ARRAYCLOSE  */
    ARRAYOPEN = 259,               /* ARRAYOPEN  */
    CATALOG = 260,                 /* CATALOG  */
    CONTENTS = 261,                /* CONTENTS  */
    COUNT = 262,                   /* COUNT  */
    CREATIONDATE = 263,            /* CREATIONDATE  */
    DIFFERENCES = 264,             /* DIFFERENCES  */
    ENCODING = 265,                /* ENCODING  */
    ENDOBJ = 266,                  /* ENDOBJ  */
    FONE = 267,                    /* FONE  */
    FONT = 268,                    /* FONT  */
    GREATERTHAN = 269,             /* GREATERTHAN  */
    INFO = 270,                    /* INFO  */
    KIDS = 271,                    /* KIDS  */
    KIDSLOOP = 272,                /* KIDSLOOP  */
    LENGTH = 273,                  /* LENGTH  */
    LESSTHAN = 274,                /* LESSTHAN  */
    MEDIABOX = 275,                /* MEDIABOX  */
    NAME = 276,                    /* NAME  */
    NEWLINE = 277,                 /* NEWLINE  */
    NUM = 278,                     /* NUM  */
    NUMBERLOOP = 279,              /* NUMBERLOOP  */
    OBJ = 280,                     /* OBJ  */
    OBJREF = 281,                  /* OBJREF  */
    PAGES = 282,                   /* PAGES  */
    PARENT = 283,                  /* PARENT  */
    PDFDECLARATION = 284,          /* PDFDECLARATION  */
    PDFSTRING = 285,               /* PDFSTRING  */
    PROCSET = 286,                 /* PROCSET  */
    PRODUCER = 287,                /* PRODUCER  */
    RESOURCES = 288,               /* RESOURCES  */
    ROOT = 289,                    /* ROOT  */
    SIZE = 290,                    /* SIZE  */
    SLASHWORD = 291,               /* SLASHWORD  */
    SLASHWORDTWO = 292,            /* SLASHWORDTWO  */
    SPACE = 293,                   /* SPACE  */
    STARTXREF = 294,               /* STARTXREF  */
    STREAMENDSTREAM = 295,         /* STREAMENDSTREAM  */
    STRING = 296,                  /* STRING  */
    SUBTYPE = 297,                 /* SUBTYPE  */
    TEXTSTRING = 298,              /* TEXTSTRING  */
    TITLE = 299,                   /* TITLE  */
    TRAILER = 300,                 /* TRAILER  */
    TYPE = 301,                    /* TYPE  */
    TYPEONE = 302,                 /* TYPEONE  */
    TYPEPAGE = 303,                /* TYPEPAGE  */
    XREF = 304                     /* XREF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "generated.y"

    int ival;
    char* str;

#line 118 "generated.tab.h"

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


#endif /* !YY_YY_GENERATED_TAB_H_INCLUDED  */
