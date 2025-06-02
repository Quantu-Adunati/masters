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

#ifndef YY_YY_MANUALFLEXBISON_TAB_H_INCLUDED
# define YY_YY_MANUALFLEXBISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    NUM = 258,                     /* NUM  */
    PDFDECLARATION = 259,          /* PDFDECLARATION  */
    CREATIONDATE = 260,            /* CREATIONDATE  */
    ENDOBJ = 261,                  /* ENDOBJ  */
    PRODUCER = 262,                /* PRODUCER  */
    TITLE = 263,                   /* TITLE  */
    TYPECATALOG = 264,             /* TYPECATALOG  */
    PAGES = 265,                   /* PAGES  */
    TYPEFONT = 266,                /* TYPEFONT  */
    SUBTYPE = 267,                 /* SUBTYPE  */
    NAME = 268,                    /* NAME  */
    FONE = 269,                    /* FONE  */
    BASEFONT = 270,                /* BASEFONT  */
    FONT = 271,                    /* FONT  */
    PROCSET = 272,                 /* PROCSET  */
    PDFSTRING = 273,               /* PDFSTRING  */
    TEXTSTRING = 274,              /* TEXTSTRING  */
    ARRAYOPEN = 275,               /* ARRAYOPEN  */
    ARRAYCLOSE = 276,              /* ARRAYCLOSE  */
    LESSTHAN = 277,                /* LESSTHAN  */
    GREATERTHAN = 278,             /* GREATERTHAN  */
    NUMBERLOOP = 279,              /* NUMBERLOOP  */
    KIDSLOOP = 280,                /* KIDSLOOP  */
    STREAMENDSTREAM = 281,         /* STREAMENDSTREAM  */
    OBJ = 282,                     /* OBJ  */
    SPACE = 283,                   /* SPACE  */
    NEWLINE = 284,                 /* NEWLINE  */
    STRING = 285,                  /* STRING  */
    TYPEPAGE = 286,                /* TYPEPAGE  */
    TYPEPAGES = 287,               /* TYPEPAGES  */
    PARENT = 288,                  /* PARENT  */
    RESOURCES = 289,               /* RESOURCES  */
    CONTENTS = 290,                /* CONTENTS  */
    LENGTH = 291,                  /* LENGTH  */
    COUNT = 292,                   /* COUNT  */
    KIDS = 293,                    /* KIDS  */
    MEDIABOX = 294,                /* MEDIABOX  */
    XREF = 295,                    /* XREF  */
    TRAILER = 296,                 /* TRAILER  */
    SIZE = 297,                    /* SIZE  */
    ROOT = 298,                    /* ROOT  */
    INFO = 299,                    /* INFO  */
    STARTXREF = 300                /* STARTXREF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "manualFLexBison.y"

    int ival;
    char* str;

#line 114 "manualFLexBison.tab.h"

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


#endif /* !YY_YY_MANUALFLEXBISON_TAB_H_INCLUDED  */
