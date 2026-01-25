/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "generated.y"

#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyin;
extern char *yytext;
int yylex(void);
void yyerror(const char *s);

#line 83 "generated.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "generated.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ARRAYCLOSE = 3,                 /* ARRAYCLOSE  */
  YYSYMBOL_ARRAYOPEN = 4,                  /* ARRAYOPEN  */
  YYSYMBOL_CATALOG = 5,                    /* CATALOG  */
  YYSYMBOL_CONTENTS = 6,                   /* CONTENTS  */
  YYSYMBOL_COUNT = 7,                      /* COUNT  */
  YYSYMBOL_CREATIONDATE = 8,               /* CREATIONDATE  */
  YYSYMBOL_DIFFERENCES = 9,                /* DIFFERENCES  */
  YYSYMBOL_ENCODING = 10,                  /* ENCODING  */
  YYSYMBOL_ENDOBJ = 11,                    /* ENDOBJ  */
  YYSYMBOL_FONE = 12,                      /* FONE  */
  YYSYMBOL_FONT = 13,                      /* FONT  */
  YYSYMBOL_GREATERTHAN = 14,               /* GREATERTHAN  */
  YYSYMBOL_INFO = 15,                      /* INFO  */
  YYSYMBOL_KIDS = 16,                      /* KIDS  */
  YYSYMBOL_KIDSLOOP = 17,                  /* KIDSLOOP  */
  YYSYMBOL_LENGTH = 18,                    /* LENGTH  */
  YYSYMBOL_LESSTHAN = 19,                  /* LESSTHAN  */
  YYSYMBOL_MEDIABOX = 20,                  /* MEDIABOX  */
  YYSYMBOL_NAME = 21,                      /* NAME  */
  YYSYMBOL_NEWLINE = 22,                   /* NEWLINE  */
  YYSYMBOL_NUM = 23,                       /* NUM  */
  YYSYMBOL_NUMBERLOOP = 24,                /* NUMBERLOOP  */
  YYSYMBOL_OBJ = 25,                       /* OBJ  */
  YYSYMBOL_OBJREF = 26,                    /* OBJREF  */
  YYSYMBOL_PAGES = 27,                     /* PAGES  */
  YYSYMBOL_PARENT = 28,                    /* PARENT  */
  YYSYMBOL_PDFDECLARATION = 29,            /* PDFDECLARATION  */
  YYSYMBOL_PDFSTRING = 30,                 /* PDFSTRING  */
  YYSYMBOL_PROCSET = 31,                   /* PROCSET  */
  YYSYMBOL_PRODUCER = 32,                  /* PRODUCER  */
  YYSYMBOL_RESOURCES = 33,                 /* RESOURCES  */
  YYSYMBOL_ROOT = 34,                      /* ROOT  */
  YYSYMBOL_SIZE = 35,                      /* SIZE  */
  YYSYMBOL_SLASHWORD = 36,                 /* SLASHWORD  */
  YYSYMBOL_SLASHWORDTWO = 37,              /* SLASHWORDTWO  */
  YYSYMBOL_SPACE = 38,                     /* SPACE  */
  YYSYMBOL_STARTXREF = 39,                 /* STARTXREF  */
  YYSYMBOL_STREAMENDSTREAM = 40,           /* STREAMENDSTREAM  */
  YYSYMBOL_STRING = 41,                    /* STRING  */
  YYSYMBOL_SUBTYPE = 42,                   /* SUBTYPE  */
  YYSYMBOL_TEXTSTRING = 43,                /* TEXTSTRING  */
  YYSYMBOL_TITLE = 44,                     /* TITLE  */
  YYSYMBOL_TRAILER = 45,                   /* TRAILER  */
  YYSYMBOL_TYPE = 46,                      /* TYPE  */
  YYSYMBOL_TYPEONE = 47,                   /* TYPEONE  */
  YYSYMBOL_TYPEPAGE = 48,                  /* TYPEPAGE  */
  YYSYMBOL_XREF = 49,                      /* XREF  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_main = 51,                      /* main  */
  YYSYMBOL_HeaderSection = 52,             /* HeaderSection  */
  YYSYMBOL_PagesSection = 53,              /* PagesSection  */
  YYSYMBOL_STRING_LIST = 54,               /* STRING_LIST  */
  YYSYMBOL_StartPage = 55,                 /* StartPage  */
  YYSYMBOL_TrailerSection = 56,            /* TrailerSection  */
  YYSYMBOL_WriteHeader_C0 = 57,            /* WriteHeader_C0  */
  YYSYMBOL_WritePages_L0 = 58,             /* WritePages_L0  */
  YYSYMBOL_WritePages_L0_L0 = 59,          /* WritePages_L0_L0  */
  YYSYMBOL_WritePages_L0_L0_C0 = 60,       /* WritePages_L0_L0_C0  */
  YYSYMBOL_WritePages_L0_L0_L0 = 61,       /* WritePages_L0_L0_L0  */
  YYSYMBOL_WritePages_L0_L0_L0_C0 = 62,    /* WritePages_L0_L0_L0_C0  */
  YYSYMBOL_WritePages_L0_L0_L0_C0_C0 = 63, /* WritePages_L0_L0_L0_C0_C0  */
  YYSYMBOL_WritePages_L0_L0_L0_C0_C1 = 64, /* WritePages_L0_L0_L0_C0_C1  */
  YYSYMBOL_WritePages_L0_L0_L0_C0_C1_C0 = 65, /* WritePages_L0_L0_L0_C0_C1_C0  */
  YYSYMBOL_WriteRest_L0 = 66               /* WriteRest_L0  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  28
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  866

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,   104,   107,   108,   108,   111,   114,   117,
     117,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   130,   130
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ARRAYCLOSE",
  "ARRAYOPEN", "CATALOG", "CONTENTS", "COUNT", "CREATIONDATE",
  "DIFFERENCES", "ENCODING", "ENDOBJ", "FONE", "FONT", "GREATERTHAN",
  "INFO", "KIDS", "KIDSLOOP", "LENGTH", "LESSTHAN", "MEDIABOX", "NAME",
  "NEWLINE", "NUM", "NUMBERLOOP", "OBJ", "OBJREF", "PAGES", "PARENT",
  "PDFDECLARATION", "PDFSTRING", "PROCSET", "PRODUCER", "RESOURCES",
  "ROOT", "SIZE", "SLASHWORD", "SLASHWORDTWO", "SPACE", "STARTXREF",
  "STREAMENDSTREAM", "STRING", "SUBTYPE", "TEXTSTRING", "TITLE", "TRAILER",
  "TYPE", "TYPEONE", "TYPEPAGE", "XREF", "$accept", "main",
  "HeaderSection", "PagesSection", "STRING_LIST", "StartPage",
  "TrailerSection", "WriteHeader_C0", "WritePages_L0", "WritePages_L0_L0",
  "WritePages_L0_L0_C0", "WritePages_L0_L0_L0", "WritePages_L0_L0_L0_C0",
  "WritePages_L0_L0_L0_C0_C0", "WritePages_L0_L0_L0_C0_C1",
  "WritePages_L0_L0_L0_C0_C1_C0", "WriteRest_L0", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,   -20,     3,   -37,   -18,   -38,   -31,   -15,   -32,   -38,
     -27,   -13,   -26,   -38,   -25,   -38,   -10,    -9,   -21,    -5,
     -38,   -19,   -19,   -17,   -38,   -14,    -6,   -12,   -19,    -2,
     -16,     0,     2,     6,     4,   -38,   -38,   -19,   -38,    -8,
       9,    13,    11,   -38,   -38,    12,    15,    14,    18,     1,
      16,    -4,    19,    17,    35,     7,     5,     8,    10,    -1,
      20,    21,    22,    27,    23,    26,    30,    25,    32,    24,
      28,    29,    37,    31,    33,    34,    36,    38,    39,    40,
      41,    44,    46,    47,    50,   -38,    42,    43,    53,    45,
      48,    49,    51,    54,    52,    55,    57,    56,    61,    58,
      62,    66,    68,    59,    73,    60,    70,    77,    72,    63,
      79,    65,    64,    69,    67,    71,    81,    78,    74,    75,
     100,    76,    85,    80,   108,    90,    82,    94,    98,    83,
     103,   102,    97,    84,    86,    87,   122,    89,    88,    92,
     123,   109,    93,   111,   121,    99,   112,   114,   115,   104,
     129,   105,   118,   124,   106,   107,   110,   116,   125,   117,
     141,   119,   126,   128,   120,   127,   138,   131,   133,   134,
     145,   140,   149,   142,   144,   146,   155,   147,   130,   148,
     153,   150,   151,   135,   152,   139,   137,   143,   157,   156,
     158,   159,   160,   154,   161,   162,   164,   163,   165,   166,
     169,   167,   168,   171,   170,   172,   136,   174,   173,   175,
     176,   177,   185,   179,   -19,   180,   178,   -19,   181,   183,
     182,   184,   186,   191,   188,   187,   189,   190,   192,   193,
     194,   196,   197,   199,   201,   195,   202,   132,   203,   198,
     -19,   204,   213,   205,   -38,   206,   209,   211,   210,   207,
     208,   214,   212,   221,   215,   216,   217,   222,   227,   228,
     218,   225,   220,   229,   223,   240,   236,   224,   241,   242,
     230,   226,   243,   252,   246,   244,   261,   249,   234,   258,
     237,   251,   235,   239,   274,   245,   247,   256,   248,   257,
     250,   254,   259,   255,   262,   264,   260,   263,   253,   265,
     266,   267,   268,   269,   271,   276,   270,   275,   272,   277,
     278,   282,   279,   273,   -38,   280,   281,   288,   284,   283,
     286,   290,   285,   296,   287,   294,   289,   297,   291,   292,
     -19,   293,   295,   298,   299,   302,   -38,   300,   301,   303,
     306,   304,   305,   307,   308,   309,   312,   310,   316,   314,
     313,   315,   317,   319,   322,   318,   323,   324,   330,   325,
     326,   327,   333,   328,   329,   332,   238,   331,   335,   336,
     334,   337,   338,   339,   340,   341,   346,   349,   344,   342,
     353,   343,   -38,   345,   347,   348,   350,   351,   352,   354,
     355,   356,   357,   358,   360,   359,   363,   361,   365,   364,
     366,   367,   368,   369,   362,   370,   371,   372,   374,   373,
     377,   375,   379,   321,   380,   383,   385,   384,   386,   387,
     388,   389,   390,   391,   392,   393,   399,   395,   394,   397,
     396,   400,   401,   402,   403,   404,   405,   406,   413,   408,
     407,   410,   409,   412,   411,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   429,   426,   425,   428,
     427,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   445,   442,   441,   444,   443,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   486,   473,   472,   475,   474,   477,   476,   479,
     478,   481,   480,   483,   482,   485,   484,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     518,   511,   510,   513,   512,   515,   514,   517,   516,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   559,   546,   545,   548,   547,   550,
     549,   552,   551,   554,   553,   556,   555,   558,   557,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     575,   572,   571,   381,   573,   574,   576,   577,   578,   579,
     581,   580,   588,   582,   584,   583,   587,   585,   589,   590,
     591,   592,   594,   593,   595,   596,   597,   598,   600,   599,
     603,   601,   605,   604,   606,   607,   608,   610,   609,   613,
     612,   615,   614,   617,   616,   619,   618,   621,   620,   623,
     638,   625,   624,   627,   626,   628,   629,   630,   632,   635,
     634,   633,   643,   637,   639,   640,   641,   642,   644,   645,
     646,   647,   648,   649,   653,   651,   650,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   667,   664,   663,   666,
     665,   668,   669,   670,   671,   672,   683,   674,   673,   676,
     675,   678,   677,   680,   679,   682,   697,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   699,   694,   693,   696,
     695,   698,   700,   701,   713,   703,   702,   705,   704,   707,
     706,   709,   708,   711,   714,   712,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   727,   726,   725,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   743,   738,
     737,   740,   739,   742,   741,   744,   745,   746,   747,   748,
     759,   750,   749,   752,   751,   754,   753,   756,   755,   758,
     757,   760,   775,   762,   761,   764,   763,   766,   765,   768,
     767,   770,   769,   772,   787,   774,   773,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   791,   786,   785,   788,
     789,   790,   792,   793,   794,   795,   796,   797,   803,   799,
     798,   801,   800,   804,   805,   806,   807,   808,   809,   810,
     817,   812,   811,   814,   813,   816,   815,   818,   819,   820,
     821,   822,   833,   824,   823,   826,   825,   828,   827,   830,
     829,   832,   831,   834,   849,   836,   835,   838,   837,   840,
     839,   875,   857,   382,   858,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    12,     0,     1,     0,     0,    14,     4,
       0,     0,     0,     2,     0,    11,     0,     0,     0,     0,
      21,     0,     0,     0,    13,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     5,    17,     0,    19,     0,
       0,     0,     0,    25,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -22,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     7,    29,     8,    13,   265,     9,    15,
      24,    16,    21,    22,    38,    44,   221
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,     1,     4,     5,     6,    10,    35,    11,    12,    14,
      18,    17,    19,    23,    25,    43,    20,    26,    27,    33,
      36,    31,    28,    39,    32,    37,    34,    40,    41,    42,
      45,    46,    47,    48,    50,    49,    51,    52,    54,    53,
      57,    56,    55,    58,    76,    59,    61,    63,    62,    67,
      68,    60,    70,    71,    72,     0,    97,    79,    64,     0,
      74,     0,    65,    66,    69,    73,    85,    75,    86,    77,
      87,    78,    88,    91,    80,   101,    96,    98,    83,    81,
      82,    90,    84,    92,   107,   103,    89,    94,   104,    93,
      99,   105,    95,   109,   100,   111,   102,   106,   108,   110,
     120,   112,   113,   114,   119,   115,   123,   116,   117,   118,
     125,   127,   128,   122,   124,   121,   130,   131,   126,   133,
     135,   132,   136,   129,   134,   138,   139,   140,   143,   141,
     142,   144,   137,   146,   145,   147,   150,   148,   151,   149,
     153,   155,   152,   154,   163,   158,   156,   157,   161,   165,
     166,   159,   169,   170,   160,   162,   172,   164,   171,   173,
     175,   167,   174,   177,   176,   168,   179,   241,   178,   180,
     182,   183,   184,   186,   185,   187,   196,   188,   189,   181,
     191,   190,   209,   195,   207,   200,   197,   199,   203,   204,
       0,   205,   217,   206,   192,   220,   210,   194,   215,   193,
     198,   216,   218,   227,   202,   223,   201,     0,     0,   229,
     208,   228,   233,   212,   211,   214,   234,   213,   244,   219,
     224,   237,   238,   222,   226,   246,     0,   247,   231,   225,
     232,   249,   251,   239,   250,   264,   230,   235,   236,   243,
     240,   242,   245,   252,   256,   260,   253,   248,   254,   261,
     255,   262,   267,   257,   269,   259,   263,   258,   266,   270,
     272,   268,   271,   277,   273,   276,   279,   275,   274,   278,
     280,   281,   282,   283,   285,   284,   286,   287,   288,   291,
     293,   368,   296,   289,   298,   290,   292,   299,   301,   305,
       0,   294,   295,   297,   302,   309,   315,   311,   300,   313,
     314,   320,   318,   303,   332,     0,   306,   304,   333,   308,
     307,   310,   324,   312,   317,   326,   328,   316,     0,   330,
     336,   322,   319,   321,   323,   338,   325,   329,   327,   342,
     350,   334,   331,   335,   360,   352,     0,   372,   339,   340,
     337,   355,   343,   344,   341,     0,     0,   347,   345,   346,
     348,   349,   351,   356,   376,   380,   353,   414,   354,   357,
     374,   358,   359,   364,   362,   363,   361,   366,   378,   365,
     367,   379,   369,   370,   371,   382,     0,   375,   373,   393,
       0,   383,   377,   381,   405,   385,   384,     0,   387,   386,
     389,     0,   388,   391,     0,   390,   864,   392,   395,   394,
     396,   397,   398,   399,   401,   400,   403,   417,   402,   407,
     404,   406,   409,   408,   410,   411,   412,   413,   415,   416,
     418,   427,   604,   420,   419,   422,   421,   424,   423,   426,
     425,   428,   429,   430,   431,   439,   432,     0,   434,   433,
     436,   435,   438,   437,   440,   441,   442,   443,   444,   445,
     446,   457,   448,   447,   450,   449,   452,   451,   454,   453,
     456,   455,   458,   459,   460,   461,   462,   473,   464,   463,
     466,   465,   468,   467,   470,   469,   472,   471,   474,   475,
     476,   477,   478,     0,   480,   479,   482,   481,   484,   483,
     486,   485,   488,   487,   490,   489,   492,   491,   494,   493,
     496,   495,   498,   497,   500,   499,   502,   501,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   533,   520,   519,   522,   521,   524,
     523,   526,   525,   528,   527,   530,   529,   532,   531,   534,
     541,   536,   535,   538,   537,   540,   539,   542,   543,   544,
     545,   546,   547,   548,   549,   550,     0,   552,   551,   554,
     553,   556,   555,   558,   557,   560,   559,   562,   561,   564,
     563,   566,   565,   568,   567,   570,   569,   572,   571,   574,
     573,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   601,   592,   591,
     594,   593,   596,   595,   598,   597,   600,   599,   602,   603,
     613,   605,     0,     0,   607,   606,   609,   625,   608,   611,
     610,   612,   615,   614,   616,   617,   618,   619,     0,   621,
     637,   620,   623,   622,   624,   627,     0,   626,   629,   628,
     630,   631,   632,   633,   635,   634,   638,   639,   636,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   663,   658,   657,     0,   656,
     659,   660,   661,   664,   662,   675,   666,   665,   668,   667,
       0,   670,   669,   672,   671,   674,   673,   676,   677,   687,
     678,     0,   680,   679,   682,   681,   684,   683,   686,   685,
     688,   689,   690,   691,   692,   697,   694,   693,   696,   695,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   717,   710,   709,   712,   711,   714,   713,   716,   715,
     718,   719,   720,   721,   722,   725,   735,   724,   723,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   736,   747,
       0,     0,   738,   737,   740,   739,   742,   741,   744,   743,
     746,   745,   748,   749,   750,   759,   752,   751,   754,   753,
     756,   755,   758,   757,   760,   761,   762,   763,   764,   765,
     766,   771,   768,   767,   770,   769,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   807,   800,   799,   802,   801,   804,   803,
     806,   805,   808,   809,   810,   819,   812,   811,     0,   814,
     813,   816,   815,   818,   817,   820,   821,   822,   823,   831,
     824,     0,   826,   825,   828,   827,   830,   829,   832,   833,
     834,   835,   836,   837,   838,   843,   840,   839,   842,   841,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   856,   857,   858,   859,   860,   861,   862,   863,
     865
};

static const yytype_int16 yycheck[] =
{
      22,    29,    22,     0,    41,    23,    28,    38,    23,    41,
      23,    38,    38,    23,    23,    37,    41,    38,    23,    25,
      22,    38,    41,    23,    38,    41,    38,    25,    22,    25,
      38,    22,    19,    22,    19,    23,    22,    19,    22,    38,
      23,    22,    46,     8,     7,    38,    38,    48,    38,    22,
      27,    46,    22,    28,    22,    -1,     4,    23,    38,    -1,
      32,    -1,    41,    41,    38,    41,    22,    38,    22,    38,
      23,    38,    22,    20,    38,    14,    22,    22,    38,    41,
      41,    38,    41,    38,    11,    23,    44,    38,    22,    41,
      33,    23,    41,    23,    38,    23,    38,    38,    38,    22,
      22,    38,    23,    38,    23,    41,     6,    38,    41,    38,
      25,     3,    22,    38,    38,    41,    22,    19,    38,    16,
      23,    38,    38,    41,    22,    38,     4,    38,     5,    41,
      38,    22,    46,    22,    41,    14,    22,    38,    23,    27,
      11,    23,    38,    38,     3,    38,    22,    41,    23,    23,
      22,    41,    14,    22,    38,    38,    22,    38,    25,    14,
      11,    41,    22,    19,    22,    38,    11,    35,    22,    22,
      22,    18,    22,    38,    23,    23,    22,    38,    41,    49,
      23,    38,    46,    23,    14,    22,    25,    23,    19,    22,
      -1,    23,   214,    22,    38,   217,    22,    38,    13,    41,
      38,    22,    22,    12,    38,    22,    41,    -1,    -1,    22,
      38,    23,    19,    38,    41,    38,    22,    41,   240,    41,
      38,    22,    21,    42,    38,    12,    -1,    22,    38,    45,
      38,    22,    22,    38,    23,    10,    47,    41,    41,    41,
      38,    38,    38,    36,    23,    23,    38,    41,    34,    22,
      38,    23,    23,    38,    14,    38,    38,    41,    38,    23,
      19,    38,    38,    11,    22,    22,    22,    41,    38,    23,
       9,    22,    38,    15,    23,    38,    41,    38,     4,    23,
      23,    43,    23,    38,    22,    38,    38,    23,    25,    22,
      -1,    41,    38,    38,    41,    19,    14,    22,    38,    22,
      22,    13,    22,    38,    12,    -1,    38,    41,   330,    38,
      41,    41,    22,    41,    41,    19,    22,    38,    -1,    22,
      22,    38,    41,    39,    38,    23,    41,    38,    41,    23,
      14,    38,    41,    38,     4,    22,    -1,     3,    38,    38,
      41,    22,    38,    38,    41,    -1,    -1,    38,    41,    41,
      38,    41,    38,    31,    14,    11,    41,    36,    41,    41,
      22,    38,    38,    30,    38,    38,    41,    38,    22,    41,
      38,    22,    41,    38,    38,    22,    -1,    38,    41,    22,
      -1,    38,    41,    41,    22,    38,    41,    -1,    38,    41,
      38,    -1,    41,    38,    -1,    41,    14,    41,    38,    41,
      41,    38,    41,    38,    38,    41,    38,    22,    41,    38,
      41,    41,    38,    41,    41,    38,    41,    38,    38,    36,
      36,    22,    41,    36,    38,    36,    38,    36,    38,    36,
      38,    36,    38,    36,    38,    22,    36,    -1,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    -1,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    22,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    38,    36,
      38,    36,    38,    36,    22,    36,    38,    36,    38,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    38,    36,
      22,    36,    38,    36,    38,    36,    38,    36,    38,    36,
      38,    36,    38,    36,    38,    36,    -1,    36,    38,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    38,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    38,    36,
      38,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      22,    38,    -1,    -1,    38,    41,    38,    22,    41,    38,
      41,    41,    38,    41,    41,    38,    41,    38,    -1,    38,
      22,    41,    38,    41,    41,    38,    -1,    41,    38,    41,
      41,    38,    41,    38,    38,    41,    36,    38,    41,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    38,    36,
      22,    36,    38,    36,    38,    22,    36,    38,    -1,    41,
      38,    36,    38,    36,    41,    22,    36,    38,    36,    38,
      -1,    36,    38,    36,    38,    36,    38,    36,    38,    22,
      36,    -1,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    22,
      36,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    22,    36,    38,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    36,    22,
      -1,    -1,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    22,
      36,    38,    36,    22,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    -1,    36,
      38,    36,    38,    36,    38,    36,    38,    36,    38,    22,
      36,    -1,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    36,    38,     3,    22,
      22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    51,    52,    22,     0,    41,    53,    55,    58,
      23,    38,    23,    56,    41,    59,    61,    38,    23,    38,
      41,    62,    63,    23,    60,    23,    38,    23,    41,    54,
      54,    38,    38,    25,    38,    54,    22,    41,    64,    23,
      25,    22,    25,    54,    65,    38,    22,    19,    22,    23,
      19,    22,    19,    38,    22,    46,    22,    23,     8,    38,
      46,    38,    38,    48,    38,    41,    41,    22,    27,    38,
      22,    28,    22,    41,    32,    38,     7,    38,    38,    23,
      38,    41,    41,    38,    41,    22,    22,    23,    22,    44,
      38,    20,    38,    41,    38,    41,    22,     4,    22,    33,
      38,    14,    38,    23,    22,    23,    38,    11,    38,    23,
      22,    23,    38,    23,    38,    41,    38,    41,    38,    23,
      22,    41,    38,     6,    38,    25,    38,     3,    22,    41,
      22,    19,    38,    16,    22,    23,    38,    46,    38,     4,
      38,    41,    38,     5,    22,    41,    22,    14,    38,    27,
      22,    23,    38,    11,    38,    23,    22,    41,    38,    41,
      38,    23,    38,     3,    38,    23,    22,    41,    38,    14,
      22,    25,    22,    14,    22,    11,    22,    19,    22,    11,
      22,    49,    22,    18,    22,    23,    38,    23,    38,    41,
      38,    23,    38,    41,    38,    23,    22,    25,    38,    23,
      22,    41,    38,    19,    22,    23,    22,    14,    38,    46,
      22,    41,    38,    41,    38,    13,    22,    54,    22,    41,
      54,    66,    42,    22,    38,    45,    38,    12,    23,    22,
      47,    38,    38,    19,    22,    41,    41,    22,    21,    38,
      38,    35,    38,    41,    54,    38,    12,    22,    41,    22,
      23,    22,    36,    38,    34,    38,    23,    38,    41,    38,
      23,    22,    23,    38,    10,    57,    38,    23,    38,    14,
      23,    38,    19,    22,    38,    41,    22,    11,    23,    22,
       9,    22,    38,    15,    38,    23,    41,    38,     4,    38,
      38,    23,    38,    23,    41,    38,    23,    38,    22,    23,
      38,    25,    41,    38,    41,    22,    38,    41,    38,    19,
      41,    22,    41,    22,    22,    14,    38,    41,    22,    41,
      13,    39,    38,    38,    22,    41,    19,    41,    22,    38,
      22,    41,    12,    54,    38,    38,    22,    41,    23,    38,
      38,    41,    23,    38,    38,    41,    41,    38,    38,    41,
      14,    38,    22,    41,    41,    22,    31,    41,    38,    38,
       4,    41,    38,    38,    30,    41,    38,    38,    43,    41,
      38,    38,     3,    41,    22,    38,    14,    41,    22,    22,
      11,    41,    22,    38,    41,    38,    41,    38,    41,    38,
      41,    38,    41,    22,    41,    38,    41,    38,    41,    38,
      41,    38,    41,    38,    41,    22,    41,    38,    41,    38,
      41,    38,    41,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    22,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    22,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    22,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    22,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    41,    38,    41,    38,    41,    38,
      41,    38,    41,    22,    41,    38,    41,    38,    41,    38,
      41,    38,    41,    38,    41,    22,    41,    38,    41,    38,
      41,    38,    41,    38,    41,    38,    41,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    41,    38,    36,    38,
      36,    38,    41,    22,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    22,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    22,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    22,    36,    38,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    22,
      36,    38,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    22,    36,    38,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    22,    36,    38,    36,    38,    36,    38,
      36,    38,    36,    38,    36,    22,    36,    38,    36,    38,
      36,    38,     3,    22,    14,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    53,    54,    54,    55,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr2[] =
{
       0,     2,     3,   117,     1,     2,     1,    86,    92,   526,
       0,     2,     0,     2,     0,    14,     0,     4,     0,     3,
       0,     1,     0,     2,     0,     1,     0,     7,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1966 "generated.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 132 "generated.y"


    int main(int argc, char ** argv) {
     #ifdef YYDEBUG
            yydebug = 1;
        #endif
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
    
    void yyerror(const char *s) {
        fprintf(stderr, "Error: %s\n", s);
    }
    
