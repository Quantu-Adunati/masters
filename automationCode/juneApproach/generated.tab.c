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
  YYSYMBOL_LESSTHANNEWLINE = 22,           /* LESSTHANNEWLINE  */
  YYSYMBOL_MEDIABOX = 23,                  /* MEDIABOX  */
  YYSYMBOL_NAME = 24,                      /* NAME  */
  YYSYMBOL_NEWLINE = 25,                   /* NEWLINE  */
  YYSYMBOL_NOTDEF = 26,                    /* NOTDEF  */
  YYSYMBOL_NUM = 27,                       /* NUM  */
  YYSYMBOL_NUMBERLOOP = 28,                /* NUMBERLOOP  */
  YYSYMBOL_OBJ = 29,                       /* OBJ  */
  YYSYMBOL_OBJREF = 30,                    /* OBJREF  */
  YYSYMBOL_PAGES = 31,                     /* PAGES  */
  YYSYMBOL_PARENT = 32,                    /* PARENT  */
  YYSYMBOL_PDFDECLARATION = 33,            /* PDFDECLARATION  */
  YYSYMBOL_PDFSTRING = 34,                 /* PDFSTRING  */
  YYSYMBOL_PROCSET = 35,                   /* PROCSET  */
  YYSYMBOL_PRODUCER = 36,                  /* PRODUCER  */
  YYSYMBOL_RESOURCES = 37,                 /* RESOURCES  */
  YYSYMBOL_ROOT = 38,                      /* ROOT  */
  YYSYMBOL_SIZE = 39,                      /* SIZE  */
  YYSYMBOL_SLASHWORD = 40,                 /* SLASHWORD  */
  YYSYMBOL_SPACE = 41,                     /* SPACE  */
  YYSYMBOL_STARTXREF = 42,                 /* STARTXREF  */
  YYSYMBOL_STREAMENDSTREAM = 43,           /* STREAMENDSTREAM  */
  YYSYMBOL_STRING = 44,                    /* STRING  */
  YYSYMBOL_SUBTYPE = 45,                   /* SUBTYPE  */
  YYSYMBOL_TEXTSTRING = 46,                /* TEXTSTRING  */
  YYSYMBOL_TITLE = 47,                     /* TITLE  */
  YYSYMBOL_TRAILER = 48,                   /* TRAILER  */
  YYSYMBOL_TYPE = 49,                      /* TYPE  */
  YYSYMBOL_TYPEONE = 50,                   /* TYPEONE  */
  YYSYMBOL_TYPEPAGE = 51,                  /* TYPEPAGE  */
  YYSYMBOL_XREF = 52,                      /* XREF  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_main = 54,                      /* main  */
  YYSYMBOL_StartPage = 55,                 /* StartPage  */
  YYSYMBOL_WriteHeader = 56,               /* WriteHeader  */
  YYSYMBOL_WriteRest = 57,                 /* WriteRest  */
  YYSYMBOL_WritePages = 58,                /* WritePages  */
  YYSYMBOL_WriteHeader_C0 = 59,            /* WriteHeader_C0  */
  YYSYMBOL_WriteHeader_C1 = 60,            /* WriteHeader_C1  */
  YYSYMBOL_WritePages_C0 = 61,             /* WritePages_C0  */
  YYSYMBOL_WritePages_C1 = 62,             /* WritePages_C1  */
  YYSYMBOL_WritePages_C10 = 63,            /* WritePages_C10  */
  YYSYMBOL_WritePages_C11 = 64,            /* WritePages_C11  */
  YYSYMBOL_WritePages_C12 = 65,            /* WritePages_C12  */
  YYSYMBOL_WritePages_C13 = 66,            /* WritePages_C13  */
  YYSYMBOL_WritePages_C14 = 67,            /* WritePages_C14  */
  YYSYMBOL_WritePages_C15 = 68,            /* WritePages_C15  */
  YYSYMBOL_WritePages_C16 = 69,            /* WritePages_C16  */
  YYSYMBOL_WritePages_C17 = 70,            /* WritePages_C17  */
  YYSYMBOL_WritePages_C2 = 71,             /* WritePages_C2  */
  YYSYMBOL_WritePages_C3 = 72,             /* WritePages_C3  */
  YYSYMBOL_WritePages_C4 = 73,             /* WritePages_C4  */
  YYSYMBOL_WritePages_C5 = 74,             /* WritePages_C5  */
  YYSYMBOL_WritePages_C6 = 75,             /* WritePages_C6  */
  YYSYMBOL_WritePages_C7 = 76,             /* WritePages_C7  */
  YYSYMBOL_WritePages_C8 = 77,             /* WritePages_C8  */
  YYSYMBOL_WritePages_C9 = 78,             /* WritePages_C9  */
  YYSYMBOL_WritePages_L0 = 79,             /* WritePages_L0  */
  YYSYMBOL_WritePages_L1 = 80,             /* WritePages_L1  */
  YYSYMBOL_WritePages_L2 = 81,             /* WritePages_L2  */
  YYSYMBOL_WritePages_L3 = 82,             /* WritePages_L3  */
  YYSYMBOL_WriteRest_L0 = 83,              /* WriteRest_L0  */
  YYSYMBOL_WriteRest_L1 = 84               /* WriteRest_L1  */
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
#define YYLAST   995

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  873

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   109,   109,   110,   111,   112,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   120,   121,
     122,   122,   123,   124,   125,   125,   126,   127,   127,   128,
     129,   129,   130,   131,   132,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139
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
  "LESSTHANNEWLINE", "MEDIABOX", "NAME", "NEWLINE", "NOTDEF", "NUM",
  "NUMBERLOOP", "OBJ", "OBJREF", "PAGES", "PARENT", "PDFDECLARATION",
  "PDFSTRING", "PROCSET", "PRODUCER", "RESOURCES", "ROOT", "SIZE",
  "SLASHWORD", "SPACE", "STARTXREF", "STREAMENDSTREAM", "STRING",
  "SUBTYPE", "TEXTSTRING", "TITLE", "TRAILER", "TYPE", "TYPEONE",
  "TYPEPAGE", "XREF", "$accept", "main", "StartPage", "WriteHeader",
  "WriteRest", "WritePages", "WriteHeader_C0", "WriteHeader_C1",
  "WritePages_C0", "WritePages_C1", "WritePages_C10", "WritePages_C11",
  "WritePages_C12", "WritePages_C13", "WritePages_C14", "WritePages_C15",
  "WritePages_C16", "WritePages_C17", "WritePages_C2", "WritePages_C3",
  "WritePages_C4", "WritePages_C5", "WritePages_C6", "WritePages_C7",
  "WritePages_C8", "WritePages_C9", "WritePages_L0", "WritePages_L1",
  "WritePages_L2", "WritePages_L3", "WriteRest_L0", "WriteRest_L1", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-42)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,   -23,     4,   -39,   -21,   -42,   -34,   -36,   -18,   -42,
     -31,   -16,   -30,   -42,   -15,   -28,   -42,   -12,   -25,   -42,
      -8,   -26,   -22,   -42,    -7,   -20,    -6,   -42,   -42,    -5,
     -17,    -4,     1,   -42,   -41,   -14,    -1,     5,     7,   -42,
     -42,   -42,   -42,     6,     9,    10,   -13,   -42,    -9,   -10,
      15,    28,    -2,   -42,   -42,   -42,   -42,    13,    -3,     0,
       2,   -42,   -42,   -42,   -42,     3,     8,    11,    17,   -42,
     -42,    12,    14,    18,    16,    19,    22,    21,    20,    23,
      42,    24,    25,    27,    29,    30,    31,    32,    33,    34,
      35,    26,    38,    36,    37,   -42,    41,    40,    39,    43,
      44,    48,    50,    45,    52,    46,    49,    51,    55,    47,
      58,    54,    56,    53,    57,    63,    59,    66,    69,    60,
      68,    86,    61,    62,   -42,    75,    64,    70,    77,    80,
      65,    71,    72,    73,    83,    74,   104,    76,    78,    88,
      87,    79,   100,    94,    96,    84,    99,    85,   120,    81,
      89,    90,    91,   102,    92,   122,   113,    93,   132,   112,
     114,   111,   115,   110,   129,   103,   127,   105,   123,   101,
     124,   125,   106,   -42,   134,   116,   117,   126,   128,   133,
     107,   121,   130,   131,   109,   135,   136,   140,   141,   137,
     138,   139,   142,   143,   147,   144,   157,   146,   145,   148,
     149,   150,   152,   151,   153,   154,   155,   156,   158,   159,
     160,   161,   162,   164,   165,   163,   166,   171,   167,   168,
     176,   174,   180,   169,   170,   172,   173,   178,   177,   183,
     179,   189,   175,   181,   185,   182,   187,   188,   184,   186,
     190,   201,   -42,   192,   191,   193,   195,   194,   196,   199,
     197,   198,   200,   205,   202,   203,   204,   206,   207,   210,
     211,   215,   208,   209,   212,   238,   220,   213,   214,   217,
     224,   226,   225,   237,   244,   218,   219,   221,   245,   236,
     239,   243,   240,   227,   228,   242,   257,   246,   247,   260,
     250,   231,   235,   241,   251,   233,   248,   275,   249,   252,
     255,   253,   254,   256,   267,   258,   261,   259,   262,   263,
     266,   264,   265,   270,   272,   268,   273,   269,   277,   271,
     276,   279,   278,   281,   286,   280,   282,   -42,   -42,   287,
     274,   283,   284,   288,   291,   292,   285,   290,   289,   293,
     294,   296,   300,   295,   297,   302,   303,   298,   299,   305,
     301,   306,   307,   311,   304,   308,   316,   317,   309,   319,
     310,   320,   318,   313,   314,   326,   325,   315,   321,   331,
     324,   322,   323,   333,   327,   328,   329,   334,   330,   335,
     336,   339,   350,   342,   343,   345,   359,   337,   349,   351,
     -42,   338,   354,   340,   356,   344,   357,   346,   358,   361,
     362,   348,   364,   352,   365,   353,   366,   355,   369,   360,
     371,   373,   374,   363,   376,   367,   377,   368,   379,   370,
     372,   375,   378,   381,   380,   382,   384,   385,   387,   388,
     390,   391,   393,   389,   394,   395,   397,   398,   400,   401,
     403,   404,   406,   407,   409,   392,   410,   411,   413,   414,
     416,   417,   419,   420,   422,   423,   425,   426,   428,   429,
     431,   432,   434,   396,   435,   436,   438,   439,   441,   442,
     444,   445,   447,   448,   450,   451,   453,   454,   456,   457,
     458,   459,   461,   462,   464,   465,   467,   468,   470,   471,
     473,   474,   476,   477,   479,   480,   482,   483,   485,   486,
     488,   489,   491,   492,   494,   495,   497,   498,   500,   460,
     501,   502,   504,   505,   507,   508,   510,   511,   513,   514,
     516,   517,   519,   520,   522,   523,   525,   526,   528,   529,
     531,   532,   534,   535,   537,   538,   540,   541,   543,   463,
     544,   545,   547,   548,   550,   551,   553,   466,   554,   555,
     557,   558,   560,   561,   563,   564,   566,   567,   569,   570,
     572,   573,   575,   576,   578,   579,   581,   582,   584,   585,
     587,   588,   590,   591,   593,   594,   596,   597,   599,   600,
     602,   469,   603,   604,   606,   607,   609,   610,   612,   613,
     615,   616,   618,   619,   621,   622,   624,   625,   627,   628,
     630,   631,   633,   634,   636,   637,   639,   472,   640,   641,
     399,   642,   402,   643,   405,   644,   412,   645,   415,   556,
     418,   646,   421,   647,   437,   648,   440,   649,   443,   650,
     446,   652,   503,   651,   506,   653,   509,   654,   512,   655,
     546,   656,   549,   668,   658,   659,   661,   662,   664,   665,
     667,   669,   671,   672,   674,   675,   677,   680,   678,   679,
     681,   682,   552,   683,   685,   686,   688,   689,   559,   684,
     691,   692,   694,   695,   697,   698,   700,   701,   703,   704,
     706,   687,   707,   708,   710,   711,   713,   714,   716,   717,
     719,   720,   722,   690,   723,   724,   726,   727,   729,   730,
     732,   733,   735,   739,   736,   737,   740,   738,   741,   742,
     744,   745,   747,   748,   749,   750,   752,   753,   755,   756,
     758,   759,   761,   757,   762,   763,   765,   766,   768,   769,
     771,   760,   772,   773,   775,   776,   778,   779,   781,   782,
     784,   774,   785,   786,   788,   789,   791,   792,   794,   795,
     797,   798,   800,   801,   802,   803,   805,   806,   808,   809,
     811,   812,   814,   815,   817,   804,   818,   819,   821,   822,
     824,   825,   827,   828,   830,   831,   833,   807,   834,   835,
     837,   838,   840,   841,   843,   844,   846,   847,   849,   810,
     850,   851,   853,   854,   856,   857,   859,   860,   862,   863,
     865,   813,   866,   867,   869,   870,   872,   873,   875,   876,
     878,   879,   881,   816,   882,   883,   885,   886,   888,   889,
     891,   892,   894,   895,   897,   898,   899,   900,   902,   903,
     905,   906,   908,   909,   911,   912,   914,   901,   915,   916,
     918,   919,   921,   922,   924,   925,   927,   928,   930,   904,
     931,   932,   934,   935,   937,   938,   940,   941,   943,   944,
     946,   907,   947,   948,   950,   951,   953,   954,   496,   910,
     383,   913,   -42
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    37,     0,     1,     0,    39,     0,     6,
       0,     0,    12,    36,     0,     0,     2,     0,     0,    13,
       0,     0,     0,    38,     0,     0,     0,    33,    26,     0,
       0,     0,     0,    34,    28,     0,     0,     0,     0,    35,
      42,    11,    29,     0,     0,     0,     0,    16,    31,     0,
       0,     0,     0,    21,    18,    32,    27,     0,     0,     0,
       0,    40,    23,    19,    30,     0,     0,     0,     0,    20,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     9
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     7,     3,    16,     8,   113,   278,    20,    21,
      53,    54,    63,    70,    61,    62,    69,    23,    34,    41,
      48,    56,    64,    33,    39,    47,     9,    13,    14,    42,
     158,   223
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,     1,     4,   -43,     5,     6,    10,    11,    12,    15,
      17,    18,    22,    24,    19,    25,    26,    27,    28,    29,
      30,    31,    35,    32,    36,    37,    38,    43,    44,    46,
      45,    57,    51,    49,    50,    55,    52,    58,    59,    60,
      65,    67,    74,    77,    71,    76,    66,    80,    78,    72,
      84,    95,    86,    68,   105,    73,    75,    81,     0,     0,
      79,    82,    94,    96,    99,    85,     0,    83,    87,   117,
      88,    89,    90,   104,   109,    93,    91,    92,    98,   135,
      97,   100,   111,   101,   102,   114,   106,   108,   103,   107,
     119,   121,   110,   124,   112,   115,   122,   116,   118,   125,
     128,   123,   126,   120,   131,   132,   127,   139,   129,   133,
     137,   130,   134,   142,   136,   138,   143,   140,   145,   146,
     144,   149,   141,   147,   151,   148,   150,   156,   159,   160,
     152,   154,   155,   153,   161,   162,   157,   163,   165,   164,
     166,   167,   168,   170,   169,   173,   171,   177,   172,   174,
     176,   180,   175,   187,   193,   181,   186,   178,   179,   183,
     182,   194,   184,   189,   188,   190,   191,   197,   196,   198,
     199,   185,   201,   202,     0,     0,     0,     0,   192,   205,
     207,     0,   209,   221,     0,   211,   195,   200,   218,     0,
     236,   204,   206,   203,   217,   208,   220,   210,   224,   225,
     212,     0,   214,   231,   213,   216,   215,   226,   233,   222,
     219,   235,   240,   241,   230,   245,   229,   227,   232,   228,
     249,   239,   253,   234,   262,   237,   238,   243,   242,   256,
     258,   260,   247,   265,   248,   244,   246,   252,   263,   254,
     251,   255,   264,   268,   250,   259,   257,   269,   261,   273,
     266,   274,   275,   267,   276,   271,   277,   270,   272,   279,
     280,   282,   281,   283,   285,   286,   284,   289,   287,   288,
     290,   293,   295,   291,   292,   294,   296,   299,   298,   301,
     304,   306,   297,   308,   311,   309,     0,   312,     0,   332,
     302,     0,   300,   303,   305,   314,   317,   318,   320,   322,
     307,   324,   310,   340,   313,   325,   327,   316,   315,   319,
     321,   328,   336,   331,   335,   323,   339,   337,     0,   326,
     356,   329,   343,   330,   333,   334,   338,   344,   347,   368,
     348,   351,     0,   380,   341,   342,   345,   355,   346,   349,
     350,   358,     0,   359,   361,   352,   363,   353,   354,   357,
     360,   362,   367,   364,   365,   366,   369,   371,   372,   375,
     379,   382,   370,   373,   374,   383,   384,   385,   386,   377,
     378,   387,   388,   376,   390,     0,   381,   391,   389,   392,
     393,   394,   395,   397,   399,   396,   400,   398,   401,   402,
     403,   405,   407,   404,   406,   409,   408,   411,   412,   871,
     413,   410,   415,   417,   414,   419,   424,     0,   416,   418,
       0,   420,   421,     0,   434,     0,   422,   446,   423,     0,
     425,   464,     0,   426,   427,   611,   428,   429,   613,   430,
     431,   615,   432,   433,   435,     0,   436,   437,   617,   438,
     439,   619,   440,   441,   621,   442,   443,   623,   444,   445,
     447,     0,   448,   449,     0,   450,   451,     0,   452,   453,
       0,   454,   455,   625,   456,   457,   627,   458,   459,   629,
     460,   461,   631,   462,   463,   465,     0,   466,   467,     0,
     468,   469,   480,   470,   471,   510,   472,   473,   540,   474,
     475,   548,   476,   477,   582,   478,   479,   608,   481,   869,
     482,   483,     0,   484,   485,     0,   486,   487,     0,   488,
     489,     0,   490,   491,     0,   492,   493,     0,   494,   495,
       0,   496,   497,     0,   498,   499,     0,   500,   501,   633,
     502,   503,   635,   504,   505,   637,   506,   507,   639,   508,
     509,   511,     0,   512,   513,     0,   514,   515,     0,   516,
     517,     0,   518,   519,     0,   520,   521,     0,   522,   523,
       0,   524,   525,     0,   526,   527,     0,   528,   529,     0,
     530,   531,   641,   532,   533,   643,   534,   535,   663,   536,
     537,   620,   538,   539,   541,   669,   542,   543,     0,   544,
     545,     0,   546,   547,   549,     0,   550,   551,     0,   552,
     553,     0,   554,   555,     0,   556,   557,     0,   558,   559,
       0,   560,   561,     0,   562,   563,     0,   564,   565,     0,
     566,   567,     0,   568,   569,     0,   570,   571,     0,   572,
     573,     0,   574,   575,     0,   576,   577,     0,   578,   579,
       0,   580,   581,   583,     0,   584,   585,     0,   586,   587,
       0,   588,   589,     0,   590,   591,     0,   592,   593,     0,
     594,   595,     0,   596,   597,     0,   598,   599,     0,   600,
     601,     0,   602,   603,     0,   604,   605,   632,   606,   607,
     609,     0,   610,   612,   614,   616,   618,   622,   624,   626,
     628,   630,   634,   644,   636,   638,   640,   642,   645,     0,
     646,   647,     0,   648,   649,   658,   650,   651,     0,   670,
     652,   653,   682,   654,   655,   694,   656,   657,   659,     0,
     660,   661,     0,   662,   664,   665,     0,   666,   667,     0,
     668,   671,     0,   672,   673,     0,   674,   675,     0,   676,
     677,     0,   678,   679,     0,   680,   681,   683,     0,   684,
     685,     0,   686,   687,     0,   688,   689,     0,   690,   691,
       0,   692,   693,   695,   704,   696,   697,     0,   698,   699,
       0,   700,   701,   714,   702,   703,   705,     0,   706,   708,
     707,   709,   724,   710,   711,   732,   712,   713,     0,   715,
       0,   716,   717,     0,   718,   719,     0,   720,   721,   742,
     722,   723,   725,     0,   726,   727,     0,   728,   729,     0,
     730,   731,   733,     0,   734,   735,     0,   736,   737,     0,
     738,   739,     0,   740,   741,   743,   754,   744,   745,   766,
     746,   747,   778,   748,   749,   790,   750,   751,   802,   752,
     753,   814,   755,     0,   756,   757,     0,   758,   759,     0,
     760,   761,     0,   762,   763,     0,   764,   765,   767,     0,
     768,   769,     0,   770,   771,     0,   772,   773,     0,   774,
     775,     0,   776,   777,   779,     0,   780,   781,     0,   782,
     783,     0,   784,   785,     0,   786,   787,     0,   788,   789,
     791,     0,   792,   793,     0,   794,   795,     0,   796,   797,
       0,   798,   799,     0,   800,   801,   803,     0,   804,   805,
       0,   806,   807,     0,   808,   809,     0,   810,   811,     0,
     812,   813,   815,   826,   816,   817,   838,   818,   819,   850,
     820,   821,   862,   822,   823,   870,   824,   825,   872,   827,
       0,   828,   829,     0,   830,   831,     0,   832,   833,     0,
     834,   835,     0,   836,   837,   839,     0,   840,   841,     0,
     842,   843,     0,   844,   845,     0,   846,   847,     0,   848,
     849,   851,     0,   852,   853,     0,   854,   855,     0,   856,
     857,     0,   858,   859,     0,   860,   861,   863,     0,   864,
     865,     0,   866,   867,     0,   868
};

static const yytype_int8 yycheck[] =
{
      41,    33,    25,    44,     0,    44,    27,    41,    44,    27,
      41,    27,    27,    41,    44,    27,    41,    25,    44,    41,
      27,    41,    27,    29,    41,    29,    25,    41,    29,    22,
      25,    41,    22,    27,    25,    44,    49,    22,    10,    41,
      27,    41,    25,    25,    41,    31,    49,    25,    32,    41,
       8,    25,    27,    51,     4,    44,    44,    36,    -1,    -1,
      41,    41,    27,    25,    23,    41,    -1,    44,    41,    16,
      41,    41,    41,    25,    25,    41,    44,    44,    41,     7,
      44,    41,    27,    44,    41,    27,    41,    41,    44,    37,
      27,    25,    41,    25,    47,    41,    27,    41,    41,    13,
      25,    41,    41,    44,    27,    25,    44,     3,    44,    44,
      27,    41,    41,    25,    41,    41,    29,    41,    18,    25,
      41,    22,    44,    27,     4,    41,    41,    25,     6,    16,
      49,    41,    41,    44,    41,     3,    44,    25,    27,    25,
      25,    31,    13,    16,    41,    44,    41,    13,    25,    25,
      44,    25,    27,    44,    16,    27,    25,    41,    41,    52,
      27,    22,    41,    27,    29,    25,    25,    20,    25,    25,
      13,    41,    27,    25,    -1,    -1,    -1,    -1,    41,    27,
      27,    -1,    27,    16,    -1,    27,    44,    41,    25,    -1,
      15,    41,    41,    44,    29,    41,    25,    41,    22,    25,
      41,    -1,    41,    25,    44,    41,    44,    27,    25,    41,
      44,    22,    25,    25,    41,    14,    44,    48,    41,    49,
      25,    39,    25,    44,    14,    44,    41,    41,    44,    24,
      27,    25,    41,    25,    41,    45,    44,    38,    27,    41,
      44,    41,    27,     5,    50,    41,    44,    27,    41,    25,
      41,    25,    27,    41,    17,    41,    12,    44,    41,    41,
      41,    16,    41,    27,    21,    25,    27,    25,    41,    41,
      13,    11,    41,    27,    27,    25,    41,    44,    27,     4,
      25,    27,    41,    16,    25,    27,    -1,    25,    -1,    15,
      41,    -1,    44,    41,    41,    29,    26,    25,    25,    22,
      44,    25,    41,    14,    41,    26,    25,    42,    44,    41,
      41,    25,    21,    26,    26,    44,    26,    25,    -1,    41,
      16,    41,    26,    41,    41,    41,    41,    27,    26,     4,
      27,    26,    -1,     3,    41,    41,    41,    26,    41,    41,
      41,    25,    -1,    26,    25,    44,    26,    41,    41,    41,
      41,    41,    26,    35,    41,    41,    41,    26,    34,    26,
      26,    25,    41,    41,    41,    26,    16,    25,    25,    41,
      41,    26,    13,    46,    25,    -1,    41,    26,    41,    41,
      26,    41,    26,    26,    26,    41,    25,    41,    26,    41,
      26,    26,    26,    41,    41,    26,    41,    26,    25,    16,
      26,    41,    26,    26,    41,    26,    25,    -1,    41,    41,
      -1,    41,    40,    -1,    25,    -1,    41,    25,    40,    -1,
      40,    25,    -1,    41,    40,    26,    41,    40,    26,    41,
      40,    26,    41,    40,    40,    -1,    41,    40,    26,    41,
      40,    26,    41,    40,    26,    41,    40,    26,    41,    40,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    26,    41,    40,    26,    41,    40,    26,
      41,    40,    26,    41,    40,    40,    -1,    41,    40,    -1,
      41,    40,    25,    41,    40,    25,    41,    40,    25,    41,
      40,    25,    41,    40,    25,    41,    40,    25,    40,     3,
      41,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    26,
      41,    40,    26,    41,    40,    26,    41,    40,    26,    41,
      40,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    26,    41,    40,    26,    41,    40,    26,    41,
      40,    25,    41,    40,    40,    26,    41,    40,    -1,    41,
      40,    -1,    41,    40,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    25,    41,    40,
      40,    -1,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    25,    41,    41,    41,    41,    40,    -1,
      41,    40,    -1,    41,    40,    25,    41,    40,    -1,    25,
      41,    40,    25,    41,    40,    25,    41,    40,    40,    -1,
      41,    40,    -1,    41,    41,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    40,    25,    41,    40,    -1,    41,    40,
      -1,    41,    40,    25,    41,    40,    40,    -1,    41,    41,
      40,    40,    25,    41,    40,    25,    41,    40,    -1,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    25,
      41,    40,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    40,    25,    41,    40,    25,
      41,    40,    25,    41,    40,    25,    41,    40,    25,    41,
      40,    25,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    -1,    41,    40,    40,    -1,
      41,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      40,    -1,    41,    40,    -1,    41,    40,    -1,    41,    40,
      -1,    41,    40,    -1,    41,    40,    40,    -1,    41,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    40,    25,    41,    40,    25,    41,    40,    25,
      41,    40,    25,    41,    40,    25,    41,    40,    25,    40,
      -1,    41,    40,    -1,    41,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    40,    -1,    41,    40,    -1,
      41,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    40,    -1,    41,    40,    -1,    41,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41,    40,    40,    -1,    41,
      40,    -1,    41,    40,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    54,    56,    25,     0,    44,    55,    58,    79,
      27,    41,    44,    80,    81,    27,    57,    41,    27,    44,
      61,    62,    27,    70,    41,    27,    41,    25,    44,    41,
      27,    41,    29,    76,    71,    27,    41,    29,    25,    77,
      41,    72,    82,    41,    29,    25,    22,    78,    73,    27,
      25,    22,    49,    63,    64,    44,    74,    41,    22,    10,
      41,    67,    68,    65,    75,    27,    49,    41,    51,    69,
      66,    41,    41,    44,    25,    44,    31,    25,    32,    41,
      25,    36,    41,    44,     8,    41,    27,    41,    41,    41,
      41,    44,    44,    41,    27,    25,    25,    44,    41,    23,
      41,    44,    41,    44,    25,     4,    41,    37,    41,    25,
      41,    27,    47,    59,    27,    41,    41,    16,    41,    27,
      44,    25,    27,    41,    25,    13,    41,    44,    25,    44,
      41,    27,    25,    44,    41,     7,    41,    27,    41,     3,
      41,    44,    25,    29,    41,    18,    25,    27,    41,    22,
      41,     4,    49,    44,    41,    41,    25,    44,    83,     6,
      16,    41,     3,    25,    25,    27,    25,    31,    13,    41,
      16,    41,    25,    44,    25,    27,    44,    13,    41,    41,
      25,    27,    27,    52,    41,    41,    25,    44,    29,    27,
      25,    25,    41,    16,    22,    44,    25,    20,    25,    13,
      41,    27,    25,    44,    41,    27,    41,    27,    41,    27,
      41,    27,    41,    44,    41,    44,    41,    29,    25,    44,
      25,    16,    41,    84,    22,    25,    27,    48,    49,    44,
      41,    25,    41,    25,    44,    22,    15,    44,    41,    39,
      25,    25,    44,    41,    45,    14,    44,    41,    41,    25,
      50,    44,    38,    25,    41,    41,    24,    44,    27,    41,
      25,    41,    14,    27,    27,    25,    41,    41,     5,    27,
      44,    41,    41,    25,    25,    27,    17,    12,    60,    41,
      41,    41,    16,    27,    27,    21,    25,    41,    41,    25,
      13,    27,    27,    11,    25,    41,    41,    41,    27,    44,
      44,     4,    41,    41,    25,    41,    27,    44,    16,    27,
      41,    25,    25,    41,    29,    44,    42,    26,    25,    41,
      25,    41,    22,    44,    25,    26,    41,    25,    25,    41,
      41,    26,    15,    41,    41,    26,    21,    25,    41,    26,
      14,    41,    41,    26,    27,    41,    41,    26,    27,    41,
      41,    26,    44,    41,    41,    26,    16,    41,    25,    26,
      41,    25,    41,    26,    35,    41,    41,    26,     4,    41,
      41,    26,    34,    41,    41,    26,    46,    41,    41,    26,
       3,    41,    25,    26,    16,    25,    25,    26,    13,    41,
      25,    26,    41,    26,    41,    26,    41,    26,    41,    26,
      25,    26,    41,    26,    41,    26,    41,    26,    41,    26,
      41,    26,    25,    26,    41,    26,    41,    26,    41,    26,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    25,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      25,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      25,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      25,    40,    41,    40,    41,    40,    41,    40,    25,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    25,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    25,    40,
      41,    26,    41,    26,    41,    26,    41,    26,    41,    26,
      25,    26,    41,    26,    41,    26,    41,    26,    41,    26,
      41,    26,    25,    26,    41,    26,    41,    26,    41,    26,
      41,    26,    41,    26,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    25,    40,
      41,    40,    41,    26,    41,    40,    41,    40,    41,    26,
      25,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    25,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    25,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    25,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    25,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    25,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      25,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    25,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    25,    40,    41,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    25,    40,    41,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    25,    40,
      41,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      25,    40,    41,    40,    41,    40,    41,    40,    41,    40,
      41,    40,    25,    40,    41,    40,    41,    40,    41,     3,
      25,    16,    25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    56,    57,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    65,    66,
      67,    67,    68,    69,    70,    70,    71,    72,    72,    73,
      74,    74,    75,    76,    77,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr2[] =
{
       0,     2,     3,    84,   116,    83,     1,     4,     0,   526,
       0,     4,     0,     1,     0,     3,     0,     0,     0,     0,
       2,     0,     0,     0,    14,     0,     0,     3,     0,     0,
       2,     0,     0,     0,     0,     0,     2,     0,     2,     0,
       8,     0,     1,     0,     5,     0,     6,     0
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

#line 2022 "generated.tab.c"

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

#line 141 "generated.y"


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
