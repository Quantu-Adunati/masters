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
  YYSYMBOL_BASEFONT = 5,                   /* BASEFONT  */
  YYSYMBOL_CATALOG = 6,                    /* CATALOG  */
  YYSYMBOL_CONTENTS = 7,                   /* CONTENTS  */
  YYSYMBOL_COUNT = 8,                      /* COUNT  */
  YYSYMBOL_COURIER = 9,                    /* COURIER  */
  YYSYMBOL_CREATIONDATE = 10,              /* CREATIONDATE  */
  YYSYMBOL_DIFFERENCES = 11,               /* DIFFERENCES  */
  YYSYMBOL_ENCODING = 12,                  /* ENCODING  */
  YYSYMBOL_ENDOBJ = 13,                    /* ENDOBJ  */
  YYSYMBOL_FONE = 14,                      /* FONE  */
  YYSYMBOL_FONT = 15,                      /* FONT  */
  YYSYMBOL_GREATERTHAN = 16,               /* GREATERTHAN  */
  YYSYMBOL_INFO = 17,                      /* INFO  */
  YYSYMBOL_KIDS = 18,                      /* KIDS  */
  YYSYMBOL_KIDSLOOP = 19,                  /* KIDSLOOP  */
  YYSYMBOL_LENGTH = 20,                    /* LENGTH  */
  YYSYMBOL_LESSTHAN = 21,                  /* LESSTHAN  */
  YYSYMBOL_MEDIABOX = 22,                  /* MEDIABOX  */
  YYSYMBOL_NAME = 23,                      /* NAME  */
  YYSYMBOL_NEWLINE = 24,                   /* NEWLINE  */
  YYSYMBOL_NUM = 25,                       /* NUM  */
  YYSYMBOL_NUMBERLOOP = 26,                /* NUMBERLOOP  */
  YYSYMBOL_OBJ = 27,                       /* OBJ  */
  YYSYMBOL_OBJREF = 28,                    /* OBJREF  */
  YYSYMBOL_PAGES = 29,                     /* PAGES  */
  YYSYMBOL_PARENT = 30,                    /* PARENT  */
  YYSYMBOL_PDFDECLARATION = 31,            /* PDFDECLARATION  */
  YYSYMBOL_PDFSTRING = 32,                 /* PDFSTRING  */
  YYSYMBOL_PROCSET = 33,                   /* PROCSET  */
  YYSYMBOL_PRODUCER = 34,                  /* PRODUCER  */
  YYSYMBOL_RESOURCES = 35,                 /* RESOURCES  */
  YYSYMBOL_ROOT = 36,                      /* ROOT  */
  YYSYMBOL_SIZE = 37,                      /* SIZE  */
  YYSYMBOL_SLASHWORD = 38,                 /* SLASHWORD  */
  YYSYMBOL_SPACE = 39,                     /* SPACE  */
  YYSYMBOL_STARTXREF = 40,                 /* STARTXREF  */
  YYSYMBOL_STREAMENDSTREAM = 41,           /* STREAMENDSTREAM  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_SUBTYPE = 43,                   /* SUBTYPE  */
  YYSYMBOL_TEXTSTRING = 44,                /* TEXTSTRING  */
  YYSYMBOL_TITLE = 45,                     /* TITLE  */
  YYSYMBOL_TRAILER = 46,                   /* TRAILER  */
  YYSYMBOL_TYPE = 47,                      /* TYPE  */
  YYSYMBOL_TYPEONE = 48,                   /* TYPEONE  */
  YYSYMBOL_TYPEPAGE = 49,                  /* TYPEPAGE  */
  YYSYMBOL_XREF = 50,                      /* XREF  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_main = 52,                      /* main  */
  YYSYMBOL_HeaderSection = 53,             /* HeaderSection  */
  YYSYMBOL_PagesSection = 54,              /* PagesSection  */
  YYSYMBOL_STRING_LIST = 55,               /* STRING_LIST  */
  YYSYMBOL_StartPage = 56,                 /* StartPage  */
  YYSYMBOL_TrailerSection = 57,            /* TrailerSection  */
  YYSYMBOL_WriteHeader_C0 = 58,            /* WriteHeader_C0  */
  YYSYMBOL_WritePages_L0 = 59,             /* WritePages_L0  */
  YYSYMBOL_WritePages_L0_L1 = 60,          /* WritePages_L0_L1  */
  YYSYMBOL_WritePages_L0_L1_C10 = 61,      /* WritePages_L0_L1_C10  */
  YYSYMBOL_WritePages_L0_L1_L2 = 62,       /* WritePages_L0_L1_L2  */
  YYSYMBOL_WritePages_L0_L1_L2_B5_C0 = 63, /* WritePages_L0_L1_L2_B5_C0  */
  YYSYMBOL_WritePages_L0_L1_L2_B5_C0_C1 = 64, /* WritePages_L0_L1_L2_B5_C0_C1  */
  YYSYMBOL_WritePages_L0_L1_L2_B5_C0_C1_C2 = 65, /* WritePages_L0_L1_L2_B5_C0_C1_C2  */
  YYSYMBOL_WritePages_L0_L1_L2_C3 = 66,    /* WritePages_L0_L1_L2_C3  */
  YYSYMBOL_WritePages_L0_L1_L2_C4 = 67,    /* WritePages_L0_L1_L2_C4  */
  YYSYMBOL_WritePages_L0_L1_L2_C5 = 68,    /* WritePages_L0_L1_L2_C5  */
  YYSYMBOL_WritePages_L0_L1_L2_C6 = 69,    /* WritePages_L0_L1_L2_C6  */
  YYSYMBOL_WritePages_L0_L1_L2_C6_C7 = 70, /* WritePages_L0_L1_L2_C6_C7  */
  YYSYMBOL_WritePages_L0_L1_L2_C6_C8 = 71, /* WritePages_L0_L1_L2_C6_C8  */
  YYSYMBOL_WritePages_L0_L1_L2_C6_ELSE_C9 = 72, /* WritePages_L0_L1_L2_C6_ELSE_C9  */
  YYSYMBOL_WriteRest_L0 = 73               /* WriteRest_L0  */
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
#define YYLAST   735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  34
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  739

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    98,    98,    99,   100,   101,   101,   102,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   114,   115,   115,
     116,   117,   118,   119,   119
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
  "ARRAYOPEN", "BASEFONT", "CATALOG", "CONTENTS", "COUNT", "COURIER",
  "CREATIONDATE", "DIFFERENCES", "ENCODING", "ENDOBJ", "FONE", "FONT",
  "GREATERTHAN", "INFO", "KIDS", "KIDSLOOP", "LENGTH", "LESSTHAN",
  "MEDIABOX", "NAME", "NEWLINE", "NUM", "NUMBERLOOP", "OBJ", "OBJREF",
  "PAGES", "PARENT", "PDFDECLARATION", "PDFSTRING", "PROCSET", "PRODUCER",
  "RESOURCES", "ROOT", "SIZE", "SLASHWORD", "SPACE", "STARTXREF",
  "STREAMENDSTREAM", "STRING", "SUBTYPE", "TEXTSTRING", "TITLE", "TRAILER",
  "TYPE", "TYPEONE", "TYPEPAGE", "XREF", "$accept", "main",
  "HeaderSection", "PagesSection", "STRING_LIST", "StartPage",
  "TrailerSection", "WriteHeader_C0", "WritePages_L0", "WritePages_L0_L1",
  "WritePages_L0_L1_C10", "WritePages_L0_L1_L2",
  "WritePages_L0_L1_L2_B5_C0", "WritePages_L0_L1_L2_B5_C0_C1",
  "WritePages_L0_L1_L2_B5_C0_C1_C2", "WritePages_L0_L1_L2_C3",
  "WritePages_L0_L1_L2_C4", "WritePages_L0_L1_L2_C5",
  "WritePages_L0_L1_L2_C6", "WritePages_L0_L1_L2_C6_C7",
  "WritePages_L0_L1_L2_C6_C8", "WritePages_L0_L1_L2_C6_ELSE_C9",
  "WriteRest_L0", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,   -22,     3,   -38,   -20,   -39,   -38,   -19,   -18,   -34,
     -39,   -33,   -39,   -31,   -39,   -29,   -38,   -39,   -13,   -11,
     -10,    -9,   -26,   -38,   -23,   -39,   -21,   -17,    -4,   -38,
     -39,    -2,    -1,     0,     1,     5,   -39,   -39,   -39,   -12,
       7,     8,     9,   -39,     4,    13,    14,    -8,   -39,    -5,
      12,    16,     2,   -39,    17,    28,     6,    -3,   -39,   -39,
     -39,   -38,   -38,    10,    19,   -39,    21,    23,    20,    11,
     -39,    24,    26,    15,   -38,    40,    29,    34,   -38,    18,
     -38,    27,    36,    37,    41,   -38,   -38,    22,    42,    43,
      61,    35,    30,    31,    39,   -38,    44,    46,    52,    45,
      48,    62,    57,    58,    53,   -38,   -38,    71,    82,    64,
      67,    68,    79,    69,    75,   -38,    54,    55,    70,    73,
      97,   -38,    60,   -38,    80,    76,    81,    89,    83,   -38,
      84,    90,   107,    99,    92,    94,    95,    66,    98,   -38,
      78,   100,    96,   116,   112,    85,   102,   104,   103,   105,
      86,   108,    87,   111,   110,   113,   114,   117,   101,   -38,
     120,   119,   118,   -38,   -38,   121,   122,   124,   109,   -38,
     129,   125,   128,   130,   -38,   133,   142,   -38,   132,   135,
     136,    91,   123,   137,   -38,   140,   143,   127,   -39,   139,
     131,   141,   146,   148,   134,   138,   160,   150,   -38,   -38,
     155,   156,   157,   161,   147,   159,   162,   145,   149,   151,
     163,   164,   152,   153,   154,   170,   165,   172,   175,   -38,
     158,   166,   177,   178,   168,   185,   169,   167,   174,   179,
     181,   182,   -38,   183,   176,   184,   180,   187,   -38,   200,
     -38,   193,   195,   196,   -39,   216,   207,   -38,   201,   203,
     188,   212,   205,   189,   214,   -38,   215,   209,   211,   213,
     225,   -38,   228,   218,   219,   198,   220,   -39,   240,   204,
     206,   222,   226,   208,   -38,   227,   229,   232,   -38,   231,
     233,   234,   -38,   217,   236,   246,   -38,   221,   238,   243,
     -38,   223,   242,   253,   -38,   235,   237,   244,   239,   241,
     247,   245,   249,   -38,   248,   255,   250,   254,   251,   252,
     256,   257,   258,   259,   260,   270,   261,   262,   263,   268,
     265,   264,   267,   266,   269,   271,   272,   276,   273,   284,
     274,   277,   279,   285,   278,   282,   280,   288,   281,   -39,
     283,   286,   287,   291,   289,   290,   292,   293,   295,   294,
     296,   297,   299,   298,   300,   301,   303,   302,   304,   305,
     307,   322,   310,   308,   311,   309,   314,   312,   315,   313,
     318,   316,   319,   317,   323,   320,   325,   336,   326,   324,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   337,
     339,   338,   340,   341,   343,   342,   344,   345,   347,   346,
     348,   349,   351,   350,   352,   353,   355,   370,   358,   356,
     359,   357,   362,   360,   363,   361,   366,   364,   367,   365,
     371,   368,   373,   372,   374,   375,   377,   376,   378,   379,
     381,   380,   382,   383,   385,   384,   386,   389,   390,   387,
     392,   391,   393,   394,   396,   403,   397,   395,   400,   398,
     401,   399,   404,   402,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   445,
     433,   430,   435,   432,   437,   434,   439,   436,   441,   438,
     443,   440,   446,   444,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   459,   461,   -38,   464,   -38,
     473,   -38,   476,   466,   460,   468,   465,   470,   467,   472,
     469,   474,   471,   477,   475,   478,   490,   480,   479,   481,
     -38,   482,   483,   484,   -38,   499,   488,   485,   491,   489,
     492,   493,   494,   495,   496,   497,   498,   509,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   510,   512,   517,
     513,   511,   516,   514,   519,   518,   520,   521,   523,   524,
     526,   525,   527,   528,   530,   529,   531,   532,   534,   535,
     537,   536,   538,   539,   541,   540,   542,   543,   545,   549,
     546,   544,   550,   547,   552,   551,   553,   563,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   571,   564,   565,
     566,   567,   568,   569,   570,   572,   574,   573,   575,   581,
     578,   576,   579,   577,   582,   580,   583,   584,   585,   586,
     587,   600,   589,   588,   591,   590,   593,   592,   595,   594,
     597,   596,   599,   615,   602,   601,   603,   604,   606,   605,
     607,   608,   610,   609,   611,   618,   614,   612,   617,   616,
     619,   620,   621,   622,   623,   624,   625,   629,   627,   626,
     631,   628,   633,   630,   635,   632,   637,   634,   639,   636,
     640,   638,   641,   642,   643,   644,   645,   646,   647,   648,
     649,   658,   651,   650,   653,   652,   655,   654,   657,   656,
     659,   660,   661,   676,   663,   662,   665,   664,   667,   666,
     669,   668,   671,   670,   673,   689,   677,   672,   678,   675,
     680,   679,   681,   682,   684,   683,   685,   696,   688,   686,
     691,   690,   692,   693,   321,   703,   306,   707,   -39
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    12,     0,     1,     6,     0,     0,    14,
       4,     0,     5,     0,     2,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,    23,    21,    25,     0,
       0,     0,     0,    26,     0,     0,     0,     0,    27,     0,
       0,     0,     0,    30,     0,     0,     0,     0,    17,    31,
      29,     0,     0,     0,     0,    28,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
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
       0,     0,     0,     0,     0,     0,     0,     0,     9
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,   -39,    -6,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     7,     8,     9,    14,   254,    10,    17,
      25,    18,    23,    30,    37,    43,    48,    53,    58,    59,
      65,    60,   181
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,     1,     4,     5,     6,    11,    13,    15,    16,    19,
      22,    20,    24,    21,    26,    27,    29,    31,    28,    32,
      35,    33,    38,    36,    39,    34,    42,    40,    41,    49,
      44,    45,    46,    47,    50,    51,    55,    54,    62,    52,
      56,    73,    61,    69,    57,    70,    64,    71,    78,    72,
      75,    84,    68,    63,    79,    66,    67,    76,    74,    80,
      82,    85,    86,    87,    90,    93,    91,    92,    77,    99,
      94,   100,    81,    96,    83,    95,   101,   107,   104,    88,
      89,    97,   105,   106,   110,   111,   115,   102,   112,    98,
     103,   113,   114,   117,   116,   121,   119,   120,   122,   108,
     109,   123,   125,   128,   127,   130,   129,   131,   133,   118,
     135,   134,   136,   140,   141,   124,   137,   126,   138,   139,
     143,   145,   146,   132,   144,   147,   149,   148,   150,   155,
     151,   157,   154,   142,   152,   156,   153,   185,   158,   159,
     163,   160,   165,   161,   164,   173,   168,   169,   170,   178,
     174,   171,   175,   162,   176,   179,   182,   166,   167,   183,
     192,   184,   187,   172,   189,   186,   194,   190,   177,   191,
     195,   180,   196,   193,   199,   198,   197,   200,   188,   203,
     204,   205,   206,   207,   208,   218,   209,   210,   213,   214,
     219,   211,   201,   202,   215,   216,   217,   220,   212,   221,
     223,   225,   228,   226,   232,   233,   236,   234,   238,   224,
     227,   229,   240,   222,   242,   230,   231,   244,   237,   245,
     246,   247,   239,   248,   253,   250,   235,   251,   252,   255,
     257,   256,   241,   260,   243,   261,   259,   262,   263,   265,
     268,   249,   266,   267,   270,   269,   271,   273,   272,   258,
     275,   274,   281,   278,   277,   264,   279,   282,   283,   285,
     286,   287,   290,   289,   291,   293,   294,   295,   276,   299,
     303,   307,   280,   304,   317,   298,   284,   297,   309,   329,
     288,   300,     0,   301,   292,   302,   306,     0,   296,   310,
     313,   324,   308,   333,   311,   337,   314,   305,   312,   318,
     321,   315,   316,   322,   319,   320,   323,   326,   331,   335,
     325,   330,   339,   327,   328,   344,   332,   334,   338,     0,
     336,   341,   737,   340,   735,   343,     0,   345,   342,     0,
     347,     0,   346,   349,   351,   348,   350,   353,   355,   352,
     354,   357,   359,   356,   358,   361,   362,   360,   363,   365,
     364,   366,   367,   369,   368,   370,   371,   373,   372,   374,
     378,   375,   376,   377,   379,   381,   380,   383,     0,   385,
     382,   387,   384,   389,   386,     0,   388,   391,   393,   390,
     392,   395,   397,   394,   396,   399,   401,   398,   400,   403,
     405,   402,   404,   407,   408,   406,   409,   411,   410,   412,
     413,   415,   414,   416,   417,   419,   418,   420,     0,   421,
     422,   423,   425,   438,   424,   427,   429,   426,   428,   431,
     433,   430,   432,   435,   437,   434,   436,   446,   439,   440,
     441,   443,     0,   442,   445,   447,   444,   448,   449,   451,
     450,   452,   453,   455,   454,   457,     0,   459,   456,   461,
     458,   463,   460,   465,   462,   467,   464,   469,   466,   471,
     468,   473,   470,   475,   472,   477,   474,   479,   476,   480,
     478,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   506,   493,   495,   494,   497,   509,   499,
     496,   501,   498,   503,   500,   505,   502,   511,   504,   507,
     513,   508,   515,   510,   514,   512,   516,   517,   518,   519,
     520,   521,   522,   523,   527,   524,   526,   525,   528,   530,
     532,   529,   534,   536,   531,   533,   537,   538,   535,   539,
     541,   540,   543,   548,   545,   542,   547,   544,   549,   546,
     551,   560,   553,   550,   555,   552,   557,   554,   570,   556,
     559,   561,   558,   562,   563,     0,   564,   565,   567,   580,
     566,   569,     0,   568,   571,   573,     0,   572,   575,   577,
     574,   576,   579,   590,   578,   581,   583,     0,   582,   585,
     587,   584,   586,   589,   591,   588,   592,   598,   593,   594,
     595,   597,   599,   596,   601,   608,   603,   600,   605,   602,
     607,   604,   609,   606,   611,   620,   613,   610,   615,   612,
       0,   614,   617,   619,   616,   618,   621,   623,   622,   624,
     625,   627,   626,   629,   632,   631,   628,   633,   630,   635,
     634,   637,   636,   639,   638,   641,   640,   643,   642,   644,
     645,   647,   656,   646,   649,   651,   648,   650,   653,   655,
     652,   654,   657,   668,   658,   659,     0,   661,   660,   663,
     680,   665,   662,   667,   664,   669,   666,     0,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   681,   683,
     682,   685,   692,   687,   684,   689,   686,   691,   688,   693,
     690,   695,   694,   697,   696,   699,   698,   701,   700,   703,
     704,   705,   702,   707,   706,   709,   708,   711,   710,   713,
     712,   715,   714,   716,   718,   717,   719,   720,   721,   723,
     728,   722,   725,   727,   724,   726,   729,   736,   730,   731,
     733,   738,   732,     0,     0,   734
};

static const yytype_int16 yycheck[] =
{
       6,    31,    24,     0,    42,    25,    25,    25,    42,    42,
      16,    42,    25,    42,    25,    25,    42,    23,    27,    42,
      24,    42,    24,    29,    25,    42,    21,    27,    27,    25,
      42,    24,    24,    24,    21,    21,    24,    42,    10,    47,
      24,    30,    25,    24,    42,    24,    49,    24,     8,    29,
      24,    24,    42,    47,    25,    61,    62,    42,    34,    25,
      42,    25,    25,    22,    42,     4,    24,    24,    74,    25,
      35,    25,    78,    42,    80,    45,    24,    24,    16,    85,
      86,    42,    25,    25,    13,     3,     7,    42,    24,    95,
      42,    24,    24,    18,    25,    25,    42,    42,    25,   105,
     106,     4,    42,    27,    24,    16,    25,    24,    24,   115,
       3,    21,    13,    47,    16,   121,    24,   123,    24,    24,
      42,    25,     6,   129,    24,    13,    24,    42,    24,    42,
      27,    21,    24,   139,    29,    24,    50,    46,    25,    25,
      20,    24,    24,    42,    25,    16,    25,    25,    24,    16,
      25,    42,    24,   159,    24,    13,    24,   163,   164,    24,
      21,    25,    25,   169,    24,    42,    25,    24,   174,    42,
      24,   177,    24,    42,    14,    37,    42,    27,   184,    24,
      24,    24,    21,    36,    25,    15,    24,    42,    25,    25,
      25,    42,   198,   199,    42,    42,    42,    25,    47,    24,
      42,    24,    17,    25,    25,    24,    23,    25,    24,    43,
      42,    42,    25,   219,    14,    48,    42,    24,    42,    24,
      24,     5,    42,    16,    12,    24,   232,    24,    40,    24,
      16,    42,   238,    24,   240,    24,    21,    24,    13,    11,
      42,   247,    24,    24,     4,    25,    42,    25,    42,   255,
      42,    25,    21,    24,    27,   261,    24,    24,    24,    42,
      24,    15,    24,    42,    21,    42,    24,    14,   274,    25,
      25,    16,   278,    24,     4,    38,   282,    42,    24,     3,
     286,    42,    -1,    42,   290,    38,    38,    -1,   294,    38,
      33,    24,    42,    16,    42,    13,    38,   303,    42,    38,
      32,    42,    42,    38,    42,    42,    42,    38,    24,    24,
      44,    38,    24,    42,    42,    24,    42,    38,    38,    -1,
      42,    38,    16,    42,     3,    38,    -1,    38,    42,    -1,
      38,    -1,    42,    38,    38,    42,    42,    38,    38,    42,
      42,    38,    38,    42,    42,    38,    24,    42,    38,    38,
      42,    42,    38,    38,    42,    42,    38,    38,    42,    42,
      24,    38,    42,    38,    38,    38,    42,    38,    -1,    38,
      42,    38,    42,    38,    42,    -1,    42,    38,    38,    42,
      42,    38,    38,    42,    42,    38,    38,    42,    42,    38,
      38,    42,    42,    38,    24,    42,    38,    38,    42,    42,
      38,    38,    42,    42,    38,    38,    42,    42,    -1,    38,
      42,    38,    38,    24,    42,    38,    38,    42,    42,    38,
      38,    42,    42,    38,    38,    42,    42,    24,    38,    42,
      38,    38,    -1,    42,    38,    38,    42,    42,    38,    38,
      42,    42,    38,    38,    42,    38,    -1,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    24,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    24,    38,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    24,    42,    38,
      24,   507,    42,   509,    38,   511,    38,    42,    38,    42,
      38,    42,    38,    42,    24,    38,    38,    42,    38,    38,
      38,    42,    38,    24,   530,    42,    38,    42,   534,    38,
      38,    42,    38,    24,    38,    42,    38,    42,    38,    42,
      38,    24,    38,    42,    38,    42,    38,    42,    24,    42,
      38,    38,    42,    42,    38,    -1,    42,    38,    38,    24,
      42,    38,    -1,    42,    38,    38,    -1,    42,    38,    38,
      42,    42,    38,    24,    42,    38,    38,    -1,    42,    38,
      38,    42,    42,    38,    38,    42,    42,    24,    38,    42,
      38,    38,    38,    42,    38,    24,    38,    42,    38,    42,
      38,    42,    38,    42,    38,    24,    38,    42,    38,    42,
      -1,    42,    38,    38,    42,    42,    38,    38,    42,    42,
      38,    38,    42,    38,    24,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    24,
      38,    38,    24,    42,    38,    38,    42,    42,    38,    38,
      42,    42,    38,    24,    42,    38,    -1,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    -1,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    38,    38,
      42,    38,    24,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    24,    42,    38,    38,    42,    38,    38,
      24,    42,    38,    38,    42,    42,    38,    24,    42,    38,
      38,    24,    42,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    52,    53,    24,     0,    42,    54,    55,    56,
      59,    25,    55,    25,    57,    25,    42,    60,    62,    42,
      42,    42,    55,    63,    25,    61,    25,    25,    27,    42,
      64,    55,    42,    42,    42,    24,    55,    65,    24,    25,
      27,    27,    21,    66,    42,    24,    24,    24,    67,    25,
      21,    21,    47,    68,    42,    24,    24,    42,    69,    70,
      72,    25,    10,    47,    49,    71,    55,    55,    42,    24,
      24,    24,    29,    30,    34,    24,    42,    55,     8,    25,
      25,    55,    42,    55,    24,    25,    25,    22,    55,    55,
      42,    24,    24,     4,    35,    45,    42,    42,    55,    25,
      25,    24,    42,    42,    16,    25,    25,    24,    55,    55,
      13,     3,    24,    24,    24,     7,    25,    18,    55,    42,
      42,    25,    25,     4,    55,    42,    55,    24,    27,    25,
      16,    24,    55,    24,    21,     3,    13,    24,    24,    24,
      47,    16,    55,    42,    24,    25,     6,    13,    42,    24,
      24,    27,    29,    50,    24,    42,    24,    21,    25,    25,
      24,    42,    55,    20,    25,    24,    55,    55,    25,    25,
      24,    42,    55,    16,    25,    24,    24,    55,    16,    13,
      55,    73,    24,    24,    25,    46,    42,    25,    55,    24,
      24,    42,    21,    42,    25,    24,    24,    42,    37,    14,
      27,    55,    55,    24,    24,    24,    21,    36,    25,    24,
      42,    42,    47,    25,    25,    42,    42,    42,    15,    25,
      25,    24,    55,    42,    43,    24,    25,    42,    17,    42,
      48,    42,    25,    24,    25,    55,    23,    42,    24,    42,
      25,    55,    14,    55,    24,    24,    24,     5,    16,    55,
      24,    24,    40,    12,    58,    24,    42,    16,    55,    21,
      24,    24,    24,    13,    55,    11,    24,    24,    42,    25,
       4,    42,    42,    25,    25,    42,    55,    27,    24,    24,
      55,    21,    24,    24,    55,    42,    24,    15,    55,    42,
      24,    21,    55,    42,    24,    14,    55,    42,    38,    25,
      42,    42,    38,    25,    24,    55,    38,    16,    42,    24,
      38,    42,    42,    33,    38,    42,    42,     4,    38,    42,
      42,    32,    38,    42,    24,    44,    38,    42,    42,     3,
      38,    24,    42,    16,    38,    24,    42,    13,    38,    24,
      42,    38,    42,    38,    24,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    24,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    24,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    24,    38,    55,    24,
      55,    24,    55,    24,    38,    42,    38,    42,    38,    42,
      38,    42,    38,    42,    38,    42,    38,    24,    38,    42,
      38,    55,    38,    42,    38,    55,    24,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    24,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    24,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    24,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      24,    38,    42,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    24,    38,    42,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    24,    38,    42,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    24,    38,    42,    38,
      42,    38,    42,    38,    42,    38,    42,    38,    24,    38,
      42,    38,    42,    38,    42,     3,    24,    16,    24
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    55,    55,    56,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    67,    68,    69,    69,
      70,    71,    72,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr2[] =
{
       0,     2,     3,   114,     1,     2,     1,    68,    76,   440,
       0,     2,     0,     2,     0,     9,     0,     8,     0,     2,
       0,     2,     0,     1,     0,     0,     0,     0,     2,     1,
       0,     0,     0,     3,     0
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

#line 1913 "generated.tab.c"

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

#line 121 "generated.y"


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
    
