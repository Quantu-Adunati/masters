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
    BASEFONT = 260,                /* BASEFONT  */
    CATALOG = 261,                 /* CATALOG  */
    CONTENTS = 262,                /* CONTENTS  */
    COUNT = 263,                   /* COUNT  */
    COURIER = 264,                 /* COURIER  */
    CREATIONDATE = 265,            /* CREATIONDATE  */
    DIFFERENCES = 266,             /* DIFFERENCES  */
    ENCODING = 267,                /* ENCODING  */
    ENDOBJ = 268,                  /* ENDOBJ  */
    FONE = 269,                    /* FONE  */
    FONT = 270,                    /* FONT  */
    GREATERTHAN = 271,             /* GREATERTHAN  */
    INFO = 272,                    /* INFO  */
    KIDS = 273,                    /* KIDS  */
    KIDSLOOP = 274,                /* KIDSLOOP  */
    LENGTH = 275,                  /* LENGTH  */
    LESSTHAN = 276,                /* LESSTHAN  */
    MEDIABOX = 277,                /* MEDIABOX  */
    NAME = 278,                    /* NAME  */
    NEWLINE = 279,                 /* NEWLINE  */
    NUM = 280,                     /* NUM  */
    NUMBERLOOP = 281,              /* NUMBERLOOP  */
    OBJ = 282,                     /* OBJ  */
    OBJREF = 283,                  /* OBJREF  */
    PAGES = 284,                   /* PAGES  */
    PARENT = 285,                  /* PARENT  */
    PDFDECLARATION = 286,          /* PDFDECLARATION  */
    PDFSTRING = 287,               /* PDFSTRING  */
    PROCSET = 288,                 /* PROCSET  */
    PRODUCER = 289,                /* PRODUCER  */
    RESOURCES = 290,               /* RESOURCES  */
    ROOT = 291,                    /* ROOT  */
    SIZE = 292,                    /* SIZE  */
    SLASHWORD = 293,               /* SLASHWORD  */
    SPACE = 294,                   /* SPACE  */
    STARTXREF = 295,               /* STARTXREF  */
    STREAMENDSTREAM = 296,         /* STREAMENDSTREAM  */
    STRING = 297,                  /* STRING  */
    SUBTYPE = 298,                 /* SUBTYPE  */
    TEXTSTRING = 299,              /* TEXTSTRING  */
    TITLE = 300,                   /* TITLE  */
    TRAILER = 301,                 /* TRAILER  */
    TYPE = 302,                    /* TYPE  */
    TYPEONE = 303,                 /* TYPEONE  */
    TYPEPAGE = 304,                /* TYPEPAGE  */
    XREF = 305                     /* XREF  */
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

#line 119 "generated.tab.h"

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
