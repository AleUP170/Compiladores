/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */


    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "tablaSimbolos.h"
    #include "tablaTipos.h"
    #include "Quad.h"
    #include "CodigoIntermedio.h"
    extern int yylex();
    extern char * yyin;
    extern char * yyout;
    void yyerror(char *s);
    int labelCounter = 0, tempCounter = 0;
    char createdLabel[15], createdTemp[15];
    char* newLabel();
    char* newTemp(); 
    void amp(char *dir, int t1, int t2, char* res);
    int min(int a, int b);
    int max(int a, int b);


#line 89 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ID = 258,
    COMMA = 259,
    POINT = 260,
    SCOLON = 261,
    COLON = 262,
    INT = 263,
    FLOAT = 264,
    DOUBLE = 265,
    CHAR = 266,
    VOID = 267,
    STRUCT = 268,
    IF = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    SWITCH = 273,
    CASE = 274,
    FOR = 275,
    RETURN = 276,
    BREAK = 277,
    PRINT = 278,
    DEFAULT = 279,
    FUNC = 280,
    TRUE = 281,
    FALSE = 282,
    INTNUM = 283,
    HEXNUM = 284,
    DECNUM = 285,
    EXPNUM = 286,
    CONSCHAR = 287,
    CONSSTRING = 288,
    LPAR = 289,
    RPAR = 290,
    LBRA = 291,
    RBRA = 292,
    LCUR = 293,
    RCUR = 294,
    IFX = 295,
    NOT = 296,
    PLUS2 = 297,
    MINUS2 = 298,
    MUL = 299,
    DIV = 300,
    MOD = 301,
    PLUS = 302,
    MINUS = 303,
    LESS = 304,
    LESSEQ = 305,
    MOREEQ = 306,
    MORE = 307,
    EQUAL2 = 308,
    NOTQ = 309,
    AND = 310,
    OR = 311,
    EQUAL = 312
  };
#endif
/* Tokens.  */
#define ID 258
#define COMMA 259
#define POINT 260
#define SCOLON 261
#define COLON 262
#define INT 263
#define FLOAT 264
#define DOUBLE 265
#define CHAR 266
#define VOID 267
#define STRUCT 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define SWITCH 273
#define CASE 274
#define FOR 275
#define RETURN 276
#define BREAK 277
#define PRINT 278
#define DEFAULT 279
#define FUNC 280
#define TRUE 281
#define FALSE 282
#define INTNUM 283
#define HEXNUM 284
#define DECNUM 285
#define EXPNUM 286
#define CONSCHAR 287
#define CONSSTRING 288
#define LPAR 289
#define RPAR 290
#define LBRA 291
#define RBRA 292
#define LCUR 293
#define RCUR 294
#define IFX 295
#define NOT 296
#define PLUS2 297
#define MINUS2 298
#define MUL 299
#define DIV 300
#define MOD 301
#define PLUS 302
#define MINUS 303
#define LESS 304
#define LESSEQ 305
#define MOREEQ 306
#define MORE 307
#define EQUAL2 308
#define NOTQ 309
#define AND 310
#define OR 311
#define EQUAL 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "parser.y" /* yacc.c:355  */


    /// Datos necesarios para ingresar a la tabla de simbolos
    struct{
        char *id;
        int tipo;
        char *tipoVar;
        int direccion;
        int tipoArgs;
        int numArgs;
        char *ambito;
    }id;

    lista *headCI;

    struct{


    }boolean;
    
    struct{
        char *tipo;
        int tipoBase;
        int tamanio;
        int dimension;	    
    } tipo;

    struct{
        char dir[32];
        int tipo;
    }expresion;
    
    struct{
        char valor[64];
        int tipo;
    }num;
    
    char op[32];

#line 283 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 300 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    89,    98,   102,   104,   108,   112,   116,
     120,   124,   129,   133,   136,   139,   148,   148,   151,   151,
     153,   154,   156,   156,   158,   158,   164,   166,   164,   169,
     171,   169,   176,   176,   181,   183,   181,   188,   191,   194,
     197,   200,   202,   200,   207,   210,   214,   214,   214,   219,
     223,   225,   228,   229,   232,   233,   236,   244,   252,   260,
     268,   276,   279,   282,   285,   290,   290,   292,   293,   295,
     295,   298,   298,   301,   304,   309,   315,   318,   322,   323,
     324,   325,   326,   327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "COMMA", "POINT", "SCOLON",
  "COLON", "INT", "FLOAT", "DOUBLE", "CHAR", "VOID", "STRUCT", "IF",
  "ELSE", "WHILE", "DO", "SWITCH", "CASE", "FOR", "RETURN", "BREAK",
  "PRINT", "DEFAULT", "FUNC", "TRUE", "FALSE", "INTNUM", "HEXNUM",
  "DECNUM", "EXPNUM", "CONSCHAR", "CONSSTRING", "LPAR", "RPAR", "LBRA",
  "RBRA", "LCUR", "RCUR", "IFX", "NOT", "PLUS2", "MINUS2", "MUL", "DIV",
  "MOD", "PLUS", "MINUS", "LESS", "LESSEQ", "MOREEQ", "MORE", "EQUAL2",
  "NOTQ", "AND", "OR", "EQUAL", "$accept", "programa", "$@1", "declarns",
  "type", "list", "array", "functs", "argumts", "listArgumts", "partArray",
  "sentns", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "sentnspri", "$@12", "cases", "predeterm", "partLeft",
  "varArray", "exprc", "paramtrs", "listParamtrs", "condic", "$@13",
  "$@14", "relacn", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -73

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-73)))

#define YYTABLE_NINF -51

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-51)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     183,   -73,   -73,   -73,   -73,   -73,     7,    32,   -73,    76,
     183,   -73,   183,     6,    79,    41,    82,   -73,    50,   -73,
      86,   -73,    57,    56,     6,   183,     6,   -73,    89,    60,
      93,   -73,    62,    66,   130,    81,   -73,   183,    62,    62,
     106,   -73,   -73,    -1,   102,   103,   106,   104,   107,   129,
     134,    55,   106,   108,    85,    77,   140,    55,    74,   -73,
     132,    55,   106,   119,   -73,   -73,   -73,   -73,     9,   -73,
      23,   125,   183,   106,    55,    55,   -73,   126,   -73,   -73,
      74,    74,   136,   -32,    74,   133,   111,   159,    55,   -73,
      55,    55,    55,    55,    55,   -73,   -73,   -73,     4,    28,
     131,   -73,   -15,   -34,   -73,   -73,   -73,   -73,   -73,   -73,
      55,   -73,   -73,   -73,    47,   -73,   -73,   -73,   153,   167,
     162,   -22,   -22,   -22,   -73,   -73,   -73,   -73,   -73,   153,
     106,    74,    74,   -73,    74,   165,    74,   -73,    55,    75,
     113,   -73,   106,    96,   185,    -4,   153,   190,   110,   200,
     201,   -73,   -73,   -73,   -73,   179,   186,   106,   106,   202,
     172,   177,   186,   106,   -73,   106,   -73,    -6,   115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     8,     9,    10,     7,     6,     0,     0,     2,     0,
       5,     1,    16,    14,     4,     0,     0,     3,     0,    13,
       0,    11,     0,     0,    14,    18,    14,    12,     0,     0,
      19,    15,    22,     0,     0,     0,    21,     5,    22,    22,
       0,    20,    23,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    52,     0,     0,     0,    29,
      24,     0,     0,     0,    39,    62,    63,    61,     0,    44,
       0,    24,    16,     0,     0,     0,    53,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,    24,    65,    38,
       0,     0,     0,     0,     0,    45,    40,    17,    24,     0,
       0,    54,     0,    73,    78,    81,    80,    79,    83,    82,
       0,    26,    71,    69,     0,    32,    41,    34,    68,     0,
      66,    58,    59,    60,    56,    57,    37,    55,    74,    75,
       0,     0,     0,    30,     0,     0,     0,    64,     0,    24,
      72,    70,     0,     0,     0,     0,    67,    46,    24,     0,
       0,    42,    35,    28,    33,     0,     0,     0,     0,     0,
       0,    24,    24,     0,    43,     0,    49,    24,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,     1,   -11,   -73,    39,   141,   -73,   -73,
      -2,   -46,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,    52,   -73,   -73,   -44,   -73,
     -73,   -72,   -73,   -73,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    12,     8,     9,    14,    19,    17,    29,    30,
      36,    53,    73,   130,   147,    84,   142,   134,   136,   157,
     135,   156,   153,    -1,   151,   160,    54,    55,    82,   119,
     120,    83,   132,   131,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    16,   152,   111,    56,    68,    71,    70,   102,   103,
     -25,    15,   114,    77,    28,    89,    87,    86,   -50,   -25,
     128,   112,   113,   112,   113,    93,    94,    98,   -25,    95,
      99,   100,    11,   -50,   126,    57,    41,    42,    40,   -25,
     112,   113,    18,   -25,   118,    10,   121,   122,   123,   124,
     125,   112,   113,    90,    91,    92,    93,    94,    63,   140,
     141,    16,   143,    27,   145,    31,   129,    90,    91,    92,
      93,    94,    90,    91,    92,    93,    94,    63,    23,    13,
      21,   -27,   133,    20,   139,    22,    65,    66,    67,    24,
     -27,    25,    32,    26,   146,    33,   148,    34,    35,   -27,
      78,    79,   112,   113,    37,    65,    66,    67,    80,    43,
     -27,   161,   162,    75,   -27,    81,   -31,   167,    39,   168,
      44,   -36,    45,    46,    47,   -31,    48,    49,    50,    51,
     -36,   149,    63,    38,   -31,    64,    58,    59,    61,   -36,
      69,    62,    74,    76,    52,   -31,   116,    72,    85,   -31,
     -36,   112,   113,    88,   -36,    90,    91,    92,    93,    94,
      65,    66,    67,   101,    96,   117,   138,   115,   127,   113,
      90,    91,    92,    93,    94,    90,    91,    92,    93,    94,
      90,    91,    92,    93,    94,   104,   105,   106,   107,   108,
     109,     1,     2,     3,     4,     5,     6,    90,    91,    92,
      93,    94,   137,   144,   150,   -51,   154,   158,   155,   163,
     159,   164,   165,    97,   166
};

static const yytype_uint8 yycheck[] =
{
      46,    12,     6,    35,     5,    49,    52,    51,    80,    81,
       6,    10,    84,    57,    25,     6,    62,    61,    24,    15,
      35,    55,    56,    55,    56,    47,    48,    73,    24,     6,
      74,    75,     0,    39,     6,    36,    38,    39,    37,    35,
      55,    56,    36,    39,    88,    38,    90,    91,    92,    93,
      94,    55,    56,    44,    45,    46,    47,    48,     3,   131,
     132,    72,   134,    24,   136,    26,   110,    44,    45,    46,
      47,    48,    44,    45,    46,    47,    48,     3,    28,     3,
      39,     6,    35,     4,   130,     3,    31,    32,    33,     3,
      15,    34,     3,    37,   138,    35,   142,     4,    36,    24,
      26,    27,    55,    56,    38,    31,    32,    33,    34,     3,
      35,   157,   158,    36,    39,    41,     6,   163,    37,   165,
      14,     6,    16,    17,    18,    15,    20,    21,    22,    23,
      15,    35,     3,     3,    24,     6,    34,    34,    34,    24,
       6,    34,    57,     3,    38,    35,    35,    39,    16,    39,
      35,    55,    56,    34,    39,    44,    45,    46,    47,    48,
      31,    32,    33,    37,    39,     6,     4,    34,    37,    56,
      44,    45,    46,    47,    48,    44,    45,    46,    47,    48,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     8,     9,    10,    11,    12,    13,    44,    45,    46,
      47,    48,    35,    38,    19,    15,     6,    28,     7,     7,
      24,    39,    35,    72,   162
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    59,    61,    62,
      38,     0,    60,     3,    63,    61,    62,    65,    36,    64,
       4,    39,     3,    28,     3,    34,    37,    64,    62,    66,
      67,    64,     3,    35,     4,    36,    68,    38,     3,    37,
      61,    68,    68,     3,    14,    16,    17,    18,    20,    21,
      22,    23,    38,    69,    84,    85,     5,    36,    34,    34,
      69,    34,    34,     3,     6,    31,    32,    33,    86,     6,
      86,    69,    39,    70,    57,    36,     3,    86,    26,    27,
      34,    41,    86,    89,    73,    16,    86,    69,    34,     6,
      44,    45,    46,    47,    48,     6,    39,    65,    69,    86,
      86,    37,    89,    89,    49,    50,    51,    52,    53,    54,
      92,    35,    55,    56,    89,    34,    35,     6,    86,    87,
      88,    86,    86,    86,    86,    86,     6,    37,    35,    86,
      71,    91,    90,    35,    75,    78,    76,    35,     4,    69,
      89,    89,    74,    89,    38,    89,    86,    72,    69,    35,
      19,    82,     6,    80,     6,     7,    79,    77,    28,    24,
      83,    69,    69,     7,    39,    35,    83,    69,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    60,    59,    61,    61,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    70,    69,    71,    72,    69,    73,
      74,    69,    75,    69,    76,    77,    69,    69,    69,    69,
      69,    78,    79,    69,    69,    69,    80,    81,    80,    82,
      83,    84,    84,    84,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    90,
      89,    91,    89,    89,    89,    89,    89,    89,    92,    92,
      92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     0,     1,     1,     1,     1,
       1,     4,     4,     2,     0,     4,     0,    10,     0,     1,
       4,     3,     0,     3,     0,     3,     0,     0,     8,     0,
       0,     7,     0,     8,     0,     0,    11,     4,     3,     2,
       3,     0,     0,    10,     2,     3,     0,     0,     3,     5,
       3,     1,     1,     3,     4,     4,     3,     3,     3,     3,
       3,     1,     1,     1,     4,     0,     1,     3,     1,     0,
       4,     0,     4,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 89 "parser.y" /* yacc.c:1646  */
    {

            init_tableS();
            init_tableT();
            
        }
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 94 "parser.y" /* yacc.c:1646  */
    {
            printf("Se realizo correctamente el análisis\n");
        }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[0].tipo).tipo = (yyvsp[-1].tipo).tipo;
            (yyvsp[0].tipo).dimension = (yyvsp[-1].tipo).dimension;
        }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 104 "parser.y" /* yacc.c:1646  */
    {
        (yyval.tipo).tipo = 0; 
        (yyval.tipo).tamanio = 1;
        }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 108 "parser.y" /* yacc.c:1646  */
    {
        (yyval.tipo).tipo = 1; 
        (yyval.tipo).tamanio = 2;
        }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "parser.y" /* yacc.c:1646  */
    {
        (yyval.tipo).tipo = 2; 
        (yyval.tipo).tamanio = 4;
        }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 116 "parser.y" /* yacc.c:1646  */
    {
        (yyval.tipo).tipo = 3; 
        (yyval.tipo).tamanio = 8;
        }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "parser.y" /* yacc.c:1646  */
    {
        (yyval.tipo).tipo = 4;
        (yyval.tipo).tamanio = 16;
        }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 124 "parser.y" /* yacc.c:1646  */
    {
            (yyval.tipo).tipo = 5;
            //$$.tamanio = $2.tamanio;
        }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "parser.y" /* yacc.c:1646  */
    {
        
        
    }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "parser.y" /* yacc.c:1646  */
    {
    }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 136 "parser.y" /* yacc.c:1646  */
    { 
        (yyval.tipo).tipo =  (yyval.tipo).base;
     }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 139 "parser.y" /* yacc.c:1646  */
    {
            tablaTipo *t;
        if((yyvsp[-2].num).tipo == 2){
                insertarTipo(crear_Tipo(iDTipo, "array", (yyvsp[0].tipo).tipo , (yyvsp[0].tipo).tamanio * (yyvsp[-2].num).valor, (yyvsp[-2].num).valor) );
        } else {
	 	    yyerror("La dimensión debe de ser un valor entero");
	    }
        }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 148 "parser.y" /* yacc.c:1646  */
    {
        }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 158 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");

        }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 161 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
        }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 164 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "parser.y" /* yacc.c:1646  */
    {
            addQuad("goto", "", "", "__");
      }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 168 "parser.y" /* yacc.c:1646  */
    {}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 169 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 171 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 173 "parser.y" /* yacc.c:1646  */
    {
            addQuad("goto", "", "", etiqueta);
      }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 178 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 181 "parser.y" /* yacc.c:1646  */
    {
          addQuad("label", "", "", "__");
      }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 183 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", "__");
      }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 185 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", etiqueta);
      }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 188 "parser.y" /* yacc.c:1646  */
    {
          addQuad("label", "", "", "__");
      }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 191 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", "__");
      }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 194 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", "__");
      }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", etiqueta);
      }
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 200 "parser.y" /* yacc.c:1646  */
    {
          addQuad("label", "", "", "__");
      }
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 202 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", "__");
      }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 204 "parser.y" /* yacc.c:1646  */
    {
          addQuad("label", "", "", "__");
      }
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 207 "parser.y" /* yacc.c:1646  */
    {
          addQuad("goto", "", "", "__");
      }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 210 "parser.y" /* yacc.c:1646  */
    {
          addQuad("label", "", "", "__");
      }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
        }
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 219 "parser.y" /* yacc.c:1646  */
    {
  
}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 225 "parser.y" /* yacc.c:1646  */
    {
            
        }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 236 "parser.y" /* yacc.c:1646  */
    {
        (yyval.expresion).tipo = max((yyvsp[-2].expresion).tipo, (yyvsp[0].expresion).tipo);
        strcpy((yyval.expresion).dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp((yyvsp[-2].expresion).dir, (yyvsp[-2].expresion).tipo, (yyval.expresion).tipo, dirAlpha1);
        amp((yyvsp[0].expresion).dir, (yyvsp[0].expresion).tipo, (yyval.expresion).tipo, dirAlpha2);
        fprintf(yyout, "%s = %s + %s\n", (yyval.expresion).dir, dirAlpha1, dirAlpha2);
     }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 244 "parser.y" /* yacc.c:1646  */
    {
        (yyval.expresion).tipo = max((yyvsp[-2].expresion).tipo, (yyvsp[0].expresion).tipo);
        strcpy((yyval.expresion).dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp((yyvsp[-2].expresion).dir, (yyvsp[-2].expresion).tipo, (yyval.expresion).tipo, dirAlpha1);
        amp((yyvsp[0].expresion).dir, (yyvsp[0].expresion).tipo, (yyval.expresion).tipo, dirAlpha2);
        fprintf(yyout, "%s = %s - %s\n", (yyval.expresion).dir, dirAlpha1, dirAlpha2);
     }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 252 "parser.y" /* yacc.c:1646  */
    {
        (yyval.expresion).tipo = max((yyvsp[-2].expresion).tipo, (yyvsp[0].expresion).tipo);
        strcpy((yyval.expresion).dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp((yyvsp[-2].expresion).dir, (yyvsp[-2].expresion).tipo, (yyval.expresion).tipo, dirAlpha1);
        amp((yyvsp[0].expresion).dir, (yyvsp[0].expresion).tipo, (yyval.expresion).tipo, dirAlpha2);
        fprintf(yyout, "%s = %s * %s\n", (yyval.expresion).dir, dirAlpha1, dirAlpha2);
     }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 260 "parser.y" /* yacc.c:1646  */
    {
        (yyval.expresion).tipo = max((yyvsp[-2].expresion).tipo, (yyvsp[0].expresion).tipo);
        strcpy((yyval.expresion).dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp((yyvsp[-2].expresion).dir, (yyvsp[-2].expresion).tipo, (yyval.expresion).tipo, dirAlpha1);
        amp((yyvsp[0].expresion).dir, (yyvsp[0].expresion).tipo, (yyval.expresion).tipo, dirAlpha2);
        fprintf(yyout, "%s = %s / %s \n", (yyval.expresion).dir, dirAlpha1, dirAlpha2);
     }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 268 "parser.y" /* yacc.c:1646  */
    {
        (yyval.expresion).tipo = max((yyvsp[-2].expresion).tipo, (yyvsp[0].expresion).tipo);
        strcpy((yyval.expresion).dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp((yyvsp[-2].expresion).dir, (yyvsp[-2].expresion).tipo, (yyval.expresion).tipo, dirAlpha1);
        amp((yyvsp[0].expresion).dir, (yyvsp[0].expresion).tipo, (yyval.expresion).tipo, dirAlpha2);
        fprintf(yyout, "%s = %s \% %s \n", (yyval.expresion).dir, dirAlpha1, dirAlpha2);
     }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 276 "parser.y" /* yacc.c:1646  */
    {

     }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 279 "parser.y" /* yacc.c:1646  */
    {

     }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 282 "parser.y" /* yacc.c:1646  */
    {

     }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 285 "parser.y" /* yacc.c:1646  */
    {
        (yyval.expresion).tipo = get_tipo((yyvsp[-3].id));
        strcpy((yyval.expresion).dir, (yyvsp[-3].id));
     }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 295 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
        }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 297 "parser.y" /* yacc.c:1646  */
    {}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 298 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 300 "parser.y" /* yacc.c:1646  */
    {}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 301 "parser.y" /* yacc.c:1646  */
    {
            addQuad("label", "", "", "__");
      }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 304 "parser.y" /* yacc.c:1646  */
    {
          //$$ = $2;
          //$$.dir = $2.dir;
          //$$.tipo = $2.tipo;
      }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 309 "parser.y" /* yacc.c:1646  */
    {
            
            addQuad("if", temp, "goto", "__");
            addQuad("goto", "", "", "_");

      }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 315 "parser.y" /* yacc.c:1646  */
    {
            addQuad("goto", "", "", "__");
      }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 318 "parser.y" /* yacc.c:1646  */
    {
            addQuad("goto", "", "", "__");
      }
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 322 "parser.y" /* yacc.c:1646  */
    {strcpy( (yyval.op), (yyvsp[0].op));}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 323 "parser.y" /* yacc.c:1646  */
    {strcpy( (yyval.op), (yyvsp[0].op));}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 324 "parser.y" /* yacc.c:1646  */
    {strcpy( (yyval.op), (yyvsp[0].op));}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 325 "parser.y" /* yacc.c:1646  */
    {strcpy( (yyval.op), (yyvsp[0].op));}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 326 "parser.y" /* yacc.c:1646  */
    {strcpy( (yyval.op), (yyvsp[0].op));}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 327 "parser.y" /* yacc.c:1646  */
    {strcpy( (yyval.op), (yyvsp[0].op));}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2037 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 329 "parser.y" /* yacc.c:1906  */

void yyerror(char *s){
	printf("%s\n", s);
}
char* newLabel(){
    char labelNumber[10];
    sprintf(labelNumber, "%d", labelCounter);
    strcpy(createdLabel,"L ");
    strcat(createdLabel, labelNumber);
    return createdLabel;
}
char* newTemp(){
    char tempNumber[10];
    sprintf(tempNumber, "%d", labelCounter);
    strcpy(createdTemp,"temp");
    strcat(createdTemp, tempNumber);
    return createdTemp;
}
// los argumentos deben de ser pasados con la funcion sizeof
int max(int a, int b){
    return (a > b) ? a : b;
}
// los argumentos deben de ser pasados con la funcion sizeof
int min(int a, int b){
    return (a < b) ? a : b;
}
void amp(char *dir, int t1, int t2, char* res){
    if(t1 == t2){
        strcpy(res, dir);
    }else if(t1==1 && t2==2){
        char temp[20];
        strcpy(temp , newTemp());
        fprintf(yyout, "%s = (float) %s\n", temp, dir);
        strcpy(res, temp);
    }else if(t1== 2 && t2 == 1){
        char temp[20];
        strcpy(temp , newTemp());
        fprintf(yyout, "%s = (float) %s\n", temp, dir);
        strcpy(res, temp);
    }else{
        yyerror("Error Semántico: Los tipos no son compatibles");
    }
}
int main(int argc, char** argv){
    FILE* file;
    if(argc >1){
        file = fopen(argv[1], "r");
        if(file==NULL){
            printf("no existe el fichero %s\n", argv[1]);
            exit(1);
        }
        char nombre[50];
        strcpy(nombre, argv[1]);
        strcat(nombre, ".ci");
        yyout = fopen(nombre, "w");
        //printf("se abrio el archivo\n");
        yyin = file;        
        //yylval.sval = (char*) malloc(2*sizeof(char));
        yyparse();
        fclose(yyin);
        fclose(yyout);
    }
    
    return 1;
}
