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
#line 1 "compilator.y"

#include <stdio.h>
int yylex(void);
int yyerror(char* s);
#include <stdlib.h>
#include "tabele.h"
#define MAXNUMBEROFVARIABLES 1024
#define MAXNUMBEROFFUNCTIONS 1024
#define ERR 12312312
#define YYERROR_VERBOSE 1
struct celulaTabelaVariabila tabelaVariabile[MAXNUMBEROFVARIABLES];
struct celulaTabelaFunctii tabelaFunctii[MAXNUMBEROFFUNCTIONS];
int nrVariabile = 0;
int nrFunctii = 0;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;



#line 93 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    STRCPY = 258,                  /* STRCPY  */
    CONST = 259,                   /* CONST  */
    STRCMP = 260,                  /* STRCMP  */
    PRINT = 261,                   /* PRINT  */
    PRINTF = 262,                  /* PRINTF  */
    INICIO = 263,                  /* INICIO  */
    FIN = 264,                     /* FIN  */
    HASTA = 265,                   /* HASTA  */
    CON = 266,                     /* CON  */
    PASO = 267,                    /* PASO  */
    LIBRARIE = 268,                /* LIBRARIE  */
    MAIN = 269,                    /* MAIN  */
    TIP = 270,                     /* TIP  */
    NUME = 271,                    /* NUME  */
    VECTOR = 272,                  /* VECTOR  */
    CARACTER = 273,                /* CARACTER  */
    NUMAR = 274,                   /* NUMAR  */
    STRUCT = 275,                  /* STRUCT  */
    ATRIBUIRE = 276,               /* ATRIBUIRE  */
    MMARE = 277,                   /* MMARE  */
    MMIC = 278,                    /* MMIC  */
    DIFERIT = 279,                 /* DIFERIT  */
    EGAL = 280,                    /* EGAL  */
    PRODUS = 281,                  /* PRODUS  */
    IMPARTIRE = 282,               /* IMPARTIRE  */
    PLUS = 283,                    /* PLUS  */
    MINUS = 284,                   /* MINUS  */
    SI = 285,                      /* SI  */
    SAU = 286,                     /* SAU  */
    IF = 287,                      /* IF  */
    ELSE = 288,                    /* ELSE  */
    FOR = 289,                     /* FOR  */
    WHILE = 290,                   /* WHILE  */
    RETURN = 291                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define STRCPY 258
#define CONST 259
#define STRCMP 260
#define PRINT 261
#define PRINTF 262
#define INICIO 263
#define FIN 264
#define HASTA 265
#define CON 266
#define PASO 267
#define LIBRARIE 268
#define MAIN 269
#define TIP 270
#define NUME 271
#define VECTOR 272
#define CARACTER 273
#define NUMAR 274
#define STRUCT 275
#define ATRIBUIRE 276
#define MMARE 277
#define MMIC 278
#define DIFERIT 279
#define EGAL 280
#define PRODUS 281
#define IMPARTIRE 282
#define PLUS 283
#define MINUS 284
#define SI 285
#define SAU 286
#define IF 287
#define ELSE 288
#define FOR 289
#define WHILE 290
#define RETURN 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "compilator.y"

char strval[2048];
int intval;

#line 223 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRCPY = 3,                     /* STRCPY  */
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_STRCMP = 5,                     /* STRCMP  */
  YYSYMBOL_PRINT = 6,                      /* PRINT  */
  YYSYMBOL_PRINTF = 7,                     /* PRINTF  */
  YYSYMBOL_INICIO = 8,                     /* INICIO  */
  YYSYMBOL_FIN = 9,                        /* FIN  */
  YYSYMBOL_HASTA = 10,                     /* HASTA  */
  YYSYMBOL_CON = 11,                       /* CON  */
  YYSYMBOL_PASO = 12,                      /* PASO  */
  YYSYMBOL_LIBRARIE = 13,                  /* LIBRARIE  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_TIP = 15,                       /* TIP  */
  YYSYMBOL_NUME = 16,                      /* NUME  */
  YYSYMBOL_VECTOR = 17,                    /* VECTOR  */
  YYSYMBOL_CARACTER = 18,                  /* CARACTER  */
  YYSYMBOL_NUMAR = 19,                     /* NUMAR  */
  YYSYMBOL_STRUCT = 20,                    /* STRUCT  */
  YYSYMBOL_ATRIBUIRE = 21,                 /* ATRIBUIRE  */
  YYSYMBOL_MMARE = 22,                     /* MMARE  */
  YYSYMBOL_MMIC = 23,                      /* MMIC  */
  YYSYMBOL_DIFERIT = 24,                   /* DIFERIT  */
  YYSYMBOL_EGAL = 25,                      /* EGAL  */
  YYSYMBOL_PRODUS = 26,                    /* PRODUS  */
  YYSYMBOL_IMPARTIRE = 27,                 /* IMPARTIRE  */
  YYSYMBOL_PLUS = 28,                      /* PLUS  */
  YYSYMBOL_MINUS = 29,                     /* MINUS  */
  YYSYMBOL_SI = 30,                        /* SI  */
  YYSYMBOL_SAU = 31,                       /* SAU  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_progr = 45,                     /* progr  */
  YYSYMBOL_listaLibrarii = 46,             /* listaLibrarii  */
  YYSYMBOL_declaratii = 47,                /* declaratii  */
  YYSYMBOL_declaratie = 48,                /* declaratie  */
  YYSYMBOL_listaParametrii = 49,           /* listaParametrii  */
  YYSYMBOL_parametru = 50,                 /* parametru  */
  YYSYMBOL_functieMain = 51,               /* functieMain  */
  YYSYMBOL_bloc = 52,                      /* bloc  */
  YYSYMBOL_listaInstructiuni = 53,         /* listaInstructiuni  */
  YYSYMBOL_instructiuneControl = 54,       /* instructiuneControl  */
  YYSYMBOL_conditie = 55,                  /* conditie  */
  YYSYMBOL_instructiune = 56,              /* instructiune  */
  YYSYMBOL_expresie = 57,                  /* expresie  */
  YYSYMBOL_definitiiFunctii = 58,          /* definitiiFunctii  */
  YYSYMBOL_listaApelFunctie = 59,          /* listaApelFunctie  */
  YYSYMBOL_valoare = 60                    /* valoare  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   360

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      37,    38,     2,     2,    42,     2,    43,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    50,    51,    52,    55,
      56,    59,    60,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    77,    78,    81,    85,    88,
      89,    90,    93,    94,    95,    96,   100,   101,   102,   103,
     107,   108,   109,   110,   111,   112,   113,   114,   119,   120,
     124,   125,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   156,   157,   158,   159,   160,   161,   168,   171,   172,
     173,   174,   175,   176,   177,   184,   202,   205,   206,   207,
     208,   209,   210,   211,   212,   215
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STRCPY", "CONST",
  "STRCMP", "PRINT", "PRINTF", "INICIO", "FIN", "HASTA", "CON", "PASO",
  "LIBRARIE", "MAIN", "TIP", "NUME", "VECTOR", "CARACTER", "NUMAR",
  "STRUCT", "ATRIBUIRE", "MMARE", "MMIC", "DIFERIT", "EGAL", "PRODUS",
  "IMPARTIRE", "PLUS", "MINUS", "SI", "SAU", "IF", "ELSE", "FOR", "WHILE",
  "RETURN", "'('", "')'", "';'", "'{'", "'}'", "','", "'.'", "$accept",
  "progr", "listaLibrarii", "declaratii", "declaratie", "listaParametrii",
  "parametru", "functieMain", "bloc", "listaInstructiuni",
  "instructiuneControl", "conditie", "instructiune", "expresie",
  "definitiiFunctii", "listaApelFunctie", "valoare", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,    49,  -145,    16,   187,    17,    43,   241,   292,    13,
      46,   208,    42,   228,  -145,    55,  -145,    -5,  -145,  -145,
     292,  -145,    41,    46,  -145,    81,  -145,    66,  -145,    -4,
      82,   109,   122,   128,    10,   140,   147,   150,  -145,   101,
    -145,   159,     0,  -145,   158,    46,  -145,  -145,   172,     4,
    -145,   158,    95,   138,    18,   203,    44,   189,   214,    72,
     261,    72,  -145,    83,  -145,   197,  -145,   221,  -145,     7,
    -145,     3,  -145,   225,  -145,    51,     5,   211,   217,   232,
     233,   243,  -145,    18,    96,   231,   -15,  -145,   304,  -145,
     251,  -145,  -145,    56,   288,  -145,  -145,  -145,    72,   248,
     325,   260,   276,   275,  -145,  -145,  -145,   225,  -145,   106,
    -145,  -145,   178,   199,   271,   281,   189,   290,    18,    18,
      18,    18,  -145,  -145,   321,   189,  -145,   210,   318,   270,
      72,    72,    72,    72,    72,    72,   330,    72,   331,   332,
     333,  -145,    16,   305,   306,   307,   308,   309,   310,   311,
     312,   107,  -145,   313,  -145,   284,   220,  -145,   141,   314,
    -145,  -145,   315,  -145,  -145,  -145,  -145,  -145,  -145,   298,
     302,   228,   227,   228,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,   189,   336,   123,
     341,   165,   144,  -145,   322,   228,  -145,  -145,   346,    80,
     228,   348,   186,   228,  -145,   207,  -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,    28,    13,    14,     0,     1,    10,
       0,     7,     0,     5,    11,     0,     6,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      34,     0,     0,    18,     0,     3,    12,     4,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    35,     0,    32,     0,    15,     0,
      25,     0,     2,     0,    21,     0,     0,     0,     0,     0,
       0,    74,    73,     0,     0,     0,    74,    85,    51,    50,
      77,    81,    79,     0,     0,    47,    48,    49,     0,     0,
       0,     0,     0,     0,    33,    27,    16,     0,    17,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    69,    71,    68,    70,    64,     0,    78,
      82,    80,    63,    61,    46,    40,    41,    42,    43,    44,
      45,     0,     0,     0,    29,    30,    76,    52,    53,    55,
      54,    56,    57,    59,    58,    75,    83,     0,     0,     0,
       0,     0,     0,    62,    36,     0,    38,    84,     0,     0,
       0,     0,     0,     0,    37,     0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,    -3,     6,   -33,   250,   168,   218,  -144,
     -38,   -59,   -39,   -53,     9,  -108,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    38,    69,    70,    10,    14,    39,
      40,    99,    41,    84,    26,    93,    89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      65,    64,   101,    88,    20,   103,     9,     1,   151,     1,
     102,    43,    50,     9,    22,    67,    75,   158,     4,    67,
       4,   100,   116,     5,    13,     5,    22,   189,   124,   191,
     117,    56,    47,    17,    81,    44,    51,    82,    68,   129,
     109,    71,    74,    18,   108,   106,   111,    57,    76,   107,
       9,   199,    24,    58,    72,    83,   202,     9,    29,   205,
      86,    25,    87,    82,    11,   153,   154,   155,   156,    12,
     163,   165,   166,   167,   168,   169,   170,    22,   172,   192,
      46,    83,    22,    30,     1,    31,    32,    33,    95,   110,
      96,    97,    42,   107,   126,     4,    34,    48,   127,    81,
       5,    87,    82,    49,    30,     1,    31,    32,    33,    98,
      62,    77,    35,    78,    36,    37,     4,    34,   201,    52,
      83,     5,   118,   119,   120,   121,    30,     1,    31,    32,
      33,     1,   194,    35,   122,    36,    37,    63,     4,    34,
       2,     3,     4,     5,   142,   185,    53,     5,   107,   127,
      65,    64,    65,    64,    79,    35,    80,    36,    37,    54,
      65,    64,     1,    65,    64,    55,    65,    64,    30,     1,
      31,    32,    33,     4,   196,    21,    23,    59,     5,   186,
       4,    34,   197,   127,    60,     5,   127,    61,    45,    30,
       1,    31,    32,    33,   143,   204,   144,    35,    66,    36,
      37,     4,    34,    15,    16,    90,     5,    91,    92,    73,
      30,     1,    31,    32,    33,   145,   206,   146,    35,    85,
      36,    37,     4,    34,    27,    28,   159,     5,   160,   161,
      94,    30,     1,    31,    32,    33,   104,   105,   190,    35,
      67,    36,    37,     4,    34,     1,   118,   119,     5,   130,
     131,   132,   133,   112,    19,     3,     4,   134,   135,   113,
      35,     5,    36,    37,    30,     1,    31,    32,    33,   123,
     130,   131,   132,   133,   114,   115,     4,    34,   134,   135,
     116,     5,   130,   131,   132,   133,   136,   147,   125,   148,
     134,   135,   130,   131,   132,   133,     1,   149,   138,   150,
     134,   135,   118,   119,   120,   121,     3,     4,   164,   128,
     118,   119,     5,   121,   140,   139,   118,   119,   120,   121,
     130,   131,   132,   133,   130,   131,   132,   133,   152,   135,
     118,   119,   120,   121,   162,   137,    87,   157,   171,   173,
     119,   174,   175,   177,   178,   179,   180,   181,   182,   183,
     184,   187,   193,   195,   200,   198,   203,   141,   188,     0,
     176
};

static const yytype_int16 yycheck[] =
{
      39,    39,    61,    56,     7,    63,     0,     4,   116,     4,
      63,    16,    16,     7,     8,    15,    49,   125,    15,    15,
      15,    60,    37,    20,     8,    20,    20,   171,    43,   173,
      83,    21,    23,    16,    16,    40,    40,    19,    38,    98,
      73,    44,    38,     0,    41,    38,    41,    37,    51,    42,
      44,   195,    39,    43,    45,    37,   200,    51,    16,   203,
      16,    15,    18,    19,    15,   118,   119,   120,   121,    20,
     128,   130,   131,   132,   133,   134,   135,    71,   137,   187,
      39,    37,    76,     3,     4,     5,     6,     7,    16,    38,
      18,    19,    37,    42,    38,    15,    16,    16,    42,    16,
      20,    18,    19,    37,     3,     4,     5,     6,     7,    37,
       9,    16,    32,    18,    34,    35,    15,    16,    38,    37,
      37,    20,    26,    27,    28,    29,     3,     4,     5,     6,
       7,     4,     9,    32,    38,    34,    35,    36,    15,    16,
      13,    14,    15,    20,    38,    38,    37,    20,    42,    42,
     189,   189,   191,   191,    16,    32,    18,    34,    35,    37,
     199,   199,     4,   202,   202,    37,   205,   205,     3,     4,
       5,     6,     7,    15,     9,     7,     8,    37,    20,    38,
      15,    16,    38,    42,    37,    20,    42,    37,    20,     3,
       4,     5,     6,     7,    16,     9,    18,    32,    39,    34,
      35,    15,    16,    16,    17,    16,    20,    18,    19,    37,
       3,     4,     5,     6,     7,    16,     9,    18,    32,    16,
      34,    35,    15,    16,    16,    17,    16,    20,    18,    19,
      16,     3,     4,     5,     6,     7,    39,    16,    11,    32,
      15,    34,    35,    15,    16,     4,    26,    27,    20,    22,
      23,    24,    25,    42,    13,    14,    15,    30,    31,    42,
      32,    20,    34,    35,     3,     4,     5,     6,     7,    38,
      22,    23,    24,    25,    42,    42,    15,    16,    30,    31,
      37,    20,    22,    23,    24,    25,    38,    16,    37,    18,
      30,    31,    22,    23,    24,    25,     4,    16,    38,    18,
      30,    31,    26,    27,    28,    29,    14,    15,    38,    21,
      26,    27,    20,    29,    39,    39,    26,    27,    28,    29,
      22,    23,    24,    25,    22,    23,    24,    25,    38,    31,
      26,    27,    28,    29,    16,    10,    18,    16,     8,     8,
      27,     9,     9,    38,    38,    38,    38,    38,    38,    38,
      38,    37,    16,    12,     8,    33,     8,   107,    43,    -1,
     142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    13,    14,    15,    20,    45,    46,    47,    48,
      51,    15,    20,     8,    52,    16,    17,    16,     0,    13,
      47,    51,    48,    51,    39,    15,    58,    16,    17,    16,
       3,     5,     6,     7,    16,    32,    34,    35,    48,    53,
      54,    56,    37,    16,    40,    51,    39,    58,    16,    37,
      16,    40,    37,    37,    37,    37,    21,    37,    43,    37,
      37,    37,     9,    36,    54,    56,    39,    15,    38,    49,
      50,    47,    58,    37,    38,    49,    47,    16,    18,    16,
      18,    16,    19,    37,    57,    16,    16,    18,    57,    60,
      16,    18,    19,    59,    16,    16,    18,    19,    37,    55,
      56,    55,    57,    60,    39,    16,    38,    42,    41,    49,
      38,    41,    42,    42,    42,    42,    37,    57,    26,    27,
      28,    29,    38,    38,    43,    37,    38,    42,    21,    55,
      22,    23,    24,    25,    30,    31,    38,    10,    38,    39,
      39,    50,    38,    16,    18,    16,    18,    16,    18,    16,
      18,    59,    38,    57,    57,    57,    57,    16,    59,    16,
      18,    19,    16,    60,    38,    55,    55,    55,    55,    55,
      55,     8,    55,     8,     9,     9,    52,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    37,    43,    53,
      11,    53,    59,    16,     9,    12,     9,    38,    33,    53,
       8,    38,    53,     8,     9,    53,     9
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    50,    51,    52,
      52,    52,    53,    53,    53,    53,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     2,     2,     1,     1,
       2,     2,     3,     2,     2,     4,     5,     5,     3,     3,
       3,     5,     6,     6,     4,     1,     3,     2,     2,     6,
       6,     3,     2,     3,     1,     2,     7,    11,     7,    12,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       3,     3,     6,     6,     6,     6,     6,     6,     6,     6,
       4,     5,     7,     5,     5,     1,     4,     4,     3,     3,
       3,     3,     3,     1,     1,     4,     6,     1,     3,     1,
       3,     1,     3,     4,     6,     1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* progr: listaLibrarii declaratii functieMain definitiiFunctii  */
#line 46 "compilator.y"
                                                             {}
#line 1418 "y.tab.c"
    break;

  case 3: /* progr: listaLibrarii declaratii functieMain  */
#line 47 "compilator.y"
                                            {}
#line 1424 "y.tab.c"
    break;

  case 4: /* progr: declaratii functieMain definitiiFunctii  */
#line 48 "compilator.y"
                                               {}
#line 1430 "y.tab.c"
    break;

  case 5: /* progr: declaratii functieMain  */
#line 49 "compilator.y"
                              {}
#line 1436 "y.tab.c"
    break;

  case 6: /* progr: functieMain definitiiFunctii  */
#line 50 "compilator.y"
                                    {}
#line 1442 "y.tab.c"
    break;

  case 7: /* progr: listaLibrarii functieMain  */
#line 51 "compilator.y"
                                 {}
#line 1448 "y.tab.c"
    break;

  case 8: /* progr: functieMain  */
#line 52 "compilator.y"
                   {}
#line 1454 "y.tab.c"
    break;

  case 13: /* declaratie: TIP NUME  */
#line 63 "compilator.y"
                       { int rez = adaugaVariabilaInTabela((yyvsp[-1].strval), (yyvsp[0].strval), nrVariabile, tabelaVariabile); if (rez == 0) { } else {nrVariabile++;} }
#line 1460 "y.tab.c"
    break;

  case 16: /* declaratie: TIP NUME '(' listaParametrii ')'  */
#line 66 "compilator.y"
                                               { adaugaFunctieInTabela((yyvsp[-3].strval), (yyvsp[-4].strval), (yyvsp[-1].strval), nrFunctii++,tabelaFunctii, 0); }
#line 1466 "y.tab.c"
    break;

  case 25: /* listaParametrii: parametru  */
#line 77 "compilator.y"
                            { for (int i = 0; i < 2048; i++) { (yyval.strval)[i] = (yyvsp[0].strval)[i];} }
#line 1472 "y.tab.c"
    break;

  case 26: /* listaParametrii: listaParametrii ',' parametru  */
#line 78 "compilator.y"
                                                 { char s[2048]; strcpy(s, (yyvsp[-2].strval)); strcat(s, " "); strcat(s, (yyvsp[0].strval)); for (int i = 0; i < 2048; i++) { (yyval.strval)[i] = s[i];} }
#line 1478 "y.tab.c"
    break;

  case 47: /* conditie: NUME  */
#line 114 "compilator.y"
                {
            int pozitie = pozitiaVariabileiInTabela((yyvsp[0].strval), tabelaVariabile, nrVariabile);
            if (pozitie == -1) {
            }
         }
#line 1488 "y.tab.c"
    break;

  case 50: /* instructiune: NUME ATRIBUIRE valoare  */
#line 124 "compilator.y"
                                     { if (seteazaValoare((yyvsp[-2].strval), (yyvsp[0].strval), tabelaVariabile, nrVariabile) == 1) {} else {} }
#line 1494 "y.tab.c"
    break;

  case 51: /* instructiune: NUME ATRIBUIRE expresie  */
#line 125 "compilator.y"
                                      {
                char buff[2048];
                int rezultat = (yyvsp[0].intval);
                sprintf(buff, "%d", rezultat);
                if (seteazaValoare((yyvsp[-2].strval), buff, tabelaVariabile, nrVariabile) && (yyvsp[0].intval) != ERR)
		{}
                else printf("Eroare semantica la linia %d\n", yylineno);
            }
#line 1507 "y.tab.c"
    break;

  case 60: /* instructiune: NUME '(' listaApelFunctie ')'  */
#line 141 "compilator.y"
                                            {int rez;
                if ((rez = verificaFunctie((yyvsp[-3].strval), (yyvsp[-1].strval), tabelaFunctii, tabelaVariabile, nrFunctii, nrVariabile)) == 1) { }
                else { }
                if (rez == 1) {
                        int pozitie = -1;
                        for (int i = 0; i < nrFunctii; i++) {
                                if (strcmp(tabelaFunctii[i].nume, (yyvsp[-3].strval)) == 0) {
                                        pozitie = i;
                                        break;
                                }
                        }
                        if (tabelaFunctii[pozitie].rezervata == 1) {
                                printf("%d\n", executaFunctieRezervata(pozitie,(yyvsp[-1].strval) ,tabelaVariabile, nrVariabile, tabelaFunctii, nrFunctii));
                        }
                } }
#line 1527 "y.tab.c"
    break;

  case 66: /* instructiune: PRINT '(' expresie ')'  */
#line 161 "compilator.y"
                                     {
            	printf("%d\n",(yyvsp[-1].intval));
	        FILE* fptr;
	        fptr = fopen("output.txt", "a");
	        fprintf(fptr, "%d\n", (yyvsp[-1].intval));
	        fclose(fptr);
             }
#line 1539 "y.tab.c"
    break;

  case 67: /* instructiune: PRINTF '(' NUME ')'  */
#line 168 "compilator.y"
                                  { print((yyvsp[-1].strval), tabelaVariabile, nrVariabile); printf("\n");}
#line 1545 "y.tab.c"
    break;

  case 68: /* expresie: expresie PLUS expresie  */
#line 171 "compilator.y"
                                 { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1551 "y.tab.c"
    break;

  case 69: /* expresie: expresie PRODUS expresie  */
#line 172 "compilator.y"
                                    { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1557 "y.tab.c"
    break;

  case 70: /* expresie: expresie MINUS expresie  */
#line 173 "compilator.y"
                                  { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1563 "y.tab.c"
    break;

  case 71: /* expresie: expresie IMPARTIRE expresie  */
#line 174 "compilator.y"
                                      { (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval); }
#line 1569 "y.tab.c"
    break;

  case 72: /* expresie: '(' expresie ')'  */
#line 175 "compilator.y"
                           { (yyval.intval) = (yyvsp[-1].intval); }
#line 1575 "y.tab.c"
    break;

  case 73: /* expresie: NUMAR  */
#line 176 "compilator.y"
                { (yyval.intval) = atoi((yyvsp[0].strval)); }
#line 1581 "y.tab.c"
    break;

  case 74: /* expresie: NUME  */
#line 177 "compilator.y"
               { int poz = pozitiaVariabileiInTabela((yyvsp[0].strval), tabelaVariabile, nrVariabile);
                if (poz == -1) { (yyval.intval) = ERR;}
                else {
                  if (tabelaVariabile[poz].initializata == 0) { (yyval.intval) = ERR; }
                  if (strcmp(tabelaVariabile[poz].variabilaCurenta.tip, "numero") != 0) { (yyval.intval) = ERR;}
                  else { (yyval.intval) = *((int *)(tabelaVariabile[poz].adresa)); } }
                }
#line 1593 "y.tab.c"
    break;

  case 75: /* expresie: NUME '(' listaApelFunctie ')'  */
#line 184 "compilator.y"
                                        {int rez;
                if ((rez = verificaFunctie((yyvsp[-3].strval), (yyvsp[-1].strval), tabelaFunctii, tabelaVariabile, nrFunctii, nrVariabile)) == 1) { }
                else { }
                if (rez == 1) {
                        int pozitie = -1;
                        for (int i = 0; i < nrFunctii; i++) {
                                if (strcmp(tabelaFunctii[i].nume, (yyvsp[-3].strval)) == 0) {
                                        pozitie = i;
                                        break;
                                }
                        }
                        if (tabelaFunctii[pozitie].rezervata == 1) {
                                (yyval.intval) = executaFunctieRezervata(pozitie,(yyvsp[-1].strval) ,tabelaVariabile, nrVariabile, tabelaFunctii, nrFunctii);
                        }
                } }
#line 1613 "y.tab.c"
    break;

  case 77: /* listaApelFunctie: NUME  */
#line 205 "compilator.y"
                        { for (int i = 0; i < 2048; i++) { (yyval.strval)[i] = (yyvsp[0].strval)[i];} }
#line 1619 "y.tab.c"
    break;

  case 78: /* listaApelFunctie: listaApelFunctie ',' NUME  */
#line 206 "compilator.y"
                                             { char s[2048]; strcpy(s, (yyvsp[-2].strval)); strcat(s, " "); strcat(s , (yyvsp[0].strval));  for (int i = 0; i < 2048; i++) { (yyval.strval)[i] = s[i];}}
#line 1625 "y.tab.c"
    break;

  case 85: /* valoare: CARACTER  */
#line 215 "compilator.y"
                    { for (int i = 0; i < 2048; i++) { (yyval.strval)[i] = (yyvsp[0].strval)[i];} }
#line 1631 "y.tab.c"
    break;


#line 1635 "y.tab.c"

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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 218 "compilator.y"

int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
	FILE* fptr;
	fptr = fopen("output.txt", "w");
	fprintf(fptr, "");
	fclose(fptr);


        adaugaFunctieInTabela("maximum", "int", "int int", nrFunctii++, tabelaFunctii, 1);
        adaugaFunctieInTabela("minimum", "int", "int int", nrFunctii++, tabelaFunctii, 1);
        yyin=fopen(argv[1],"r");
        yyparse();

        freopen("stareFinala.txt", "w", stdout);
        printf("Functiile declarate in program: \n\n");
        for (int i = 0; i < nrFunctii; i++) {
                printf("Functia %d\n", i);
                printf("Nume: %s\n", tabelaFunctii[i].nume);
                printf("Tipul returnat: %s\n", tabelaFunctii[i].tipReturnat);
                printf("Functia rezervata: %d\n", tabelaFunctii[i].rezervata);
                for (int j = 0; j < tabelaFunctii[i].numarParametrii; j++) {
                        printf("Tip parametru %d: %s\n", j, tabelaFunctii[i].tipParametrii[j]);
                }
                printf("\n");
        }

        printf("\n");

        printf("Situatia variabilelor declarate dupa executia programului:\n");
        for (int i = 0; i < nrVariabile; i++) {
                struct variabila v;
                v = tabelaVariabile[i].variabilaCurenta;
                printf("Nume: %s\n", v.nume);
                printf("Tip: %s\n", v.tip);
                print(v.nume, tabelaVariabile, nrVariabile);
                printf("\n");
        }
}
