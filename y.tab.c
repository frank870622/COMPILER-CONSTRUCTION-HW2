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
#line 2 "compiler_hw2.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex

#define CLEANBUF { buf[0] = '\0'; }

void yyerror(char*);

/* Symbol table function - you can add new function if needed. */
int lookup_symbol(char*);
void create_symbol();
void insert_symbol(char*, int, int);
void dump_symbol(int);
void set_symbol_type();
void set_function_parameter();
void clear_symbol(int);

typedef struct parse_table{
    //from 0~
    int index;
    char* name;
    // 1:variable 2:function 3:parameter
    int kind;
    // 1:int 2:float 3:bool 4:string 5:void
    int type;
    // from 0~
    int scope;
    // 1:int 2:float 3:bool 4:string 5:void
    int* attribute;
    struct parse_table* next;
    struct parse_table* back;
}parse_table;

parse_table *head;

int scope_num = 0;
int index_num = 0;
int function_parameter_num = 0;
int variable_declare_count = 0;
int function_parameter_array[512];
char error_buf[128];
int had_print_flag = 0;
int dump_scope_flag = -1;
int syntax_error_flag = 0;

void reset_function_array();
void print_error(char*, char*);
void can_dump(int);



#line 122 "y.tab.c" /* yacc.c:339  */

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
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    MOD = 262,
    INC = 263,
    DEC = 264,
    MT = 265,
    LT = 266,
    MTE = 267,
    LTE = 268,
    EQ = 269,
    NE = 270,
    ASGN = 271,
    ADDASGN = 272,
    SUBASGN = 273,
    MULASGN = 274,
    DIVASGN = 275,
    MODASGN = 276,
    AND = 277,
    OR = 278,
    NOT = 279,
    LB = 280,
    RB = 281,
    LCB = 282,
    RCB = 283,
    LSB = 284,
    RSB = 285,
    COMMA = 286,
    PRINT = 287,
    IF = 288,
    ELSE = 289,
    FOR = 290,
    WHILE = 291,
    VOID = 292,
    INT = 293,
    FLOAT = 294,
    STRING = 295,
    BOOL = 296,
    TRUE = 297,
    FALSE = 298,
    RETURN = 299,
    SEMICOLON = 300,
    ENDFILE = 301,
    I_CONST = 302,
    F_CONST = 303,
    STRING_TEXT = 304,
    ID = 305
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define MOD 262
#define INC 263
#define DEC 264
#define MT 265
#define LT 266
#define MTE 267
#define LTE 268
#define EQ 269
#define NE 270
#define ASGN 271
#define ADDASGN 272
#define SUBASGN 273
#define MULASGN 274
#define DIVASGN 275
#define MODASGN 276
#define AND 277
#define OR 278
#define NOT 279
#define LB 280
#define RB 281
#define LCB 282
#define RCB 283
#define LSB 284
#define RSB 285
#define COMMA 286
#define PRINT 287
#define IF 288
#define ELSE 289
#define FOR 290
#define WHILE 291
#define VOID 292
#define INT 293
#define FLOAT 294
#define STRING 295
#define BOOL 296
#define TRUE 297
#define FALSE 298
#define RETURN 299
#define SEMICOLON 300
#define ENDFILE 301
#define I_CONST 302
#define F_CONST 303
#define STRING_TEXT 304
#define ID 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 61 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    double f_val;
    char* string;

#line 268 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 285 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   109,   113,   114,   118,   119,   123,   124,
     125,   126,   130,   134,   141,   148,   155,   165,   169,   170,
     171,   175,   176,   177,   178,   182,   183,   184,   185,   186,
     192,   193,   194,   195,   199,   200,   201,   202,   203,   210,
     219,   229,   230,   231,   232,   237,   241,   248,   257,   269,
     270,   274,   275,   279,   283,   287,   288,   289,   293,   297,
     301,   302,   303,   307,   308,   312,   313,   314,   315,   316,
     317,   318,   322,   323,   327,   331,   335,   336,   337,   341,
     342,   343,   347,   348,   349,   350,   351,   352,   353,   354,
     358,   365,   366,   367,   371,   375,   379,   384,   385,   386,
     387,   388
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "MOD", "INC",
  "DEC", "MT", "LT", "MTE", "LTE", "EQ", "NE", "ASGN", "ADDASGN",
  "SUBASGN", "MULASGN", "DIVASGN", "MODASGN", "AND", "OR", "NOT", "LB",
  "RB", "LCB", "RCB", "LSB", "RSB", "COMMA", "PRINT", "IF", "ELSE", "FOR",
  "WHILE", "VOID", "INT", "FLOAT", "STRING", "BOOL", "TRUE", "FALSE",
  "RETURN", "SEMICOLON", "ENDFILE", "I_CONST", "F_CONST", "STRING_TEXT",
  "ID", "$accept", "program", "stats", "stat_list", "stat",
  "declaration_stat", "declaration", "initializer", "arithmetic_stat",
  "lv2_arithmetic_stat", "lv3_arithmetic_stat", "value_stat", "value",
  "funtcion_declation", "function_declation_part1",
  "function_declation_part2", "function_parameter_decl",
  "function_parameter", "compound_stat", "if_else_stat", "if_stat",
  "if_stat_part1", "if_stat_part2", "else_stat", "else_stat_part1",
  "else_stat_part2", "logical_stats", "logical_stat", "logical_operation",
  "while_stat", "while_stat_part1", "while_stat_part2", "expression_stat",
  "assignment_stat", "function_call", "function_send_parameter",
  "print_func", "print_item", "type", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -130

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define YYTABLE_NINF -72

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     351,   360,   360,    83,    83,   -17,   -15,   -13,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,    83,  -130,  -130,  -130,    82,
      23,  -130,  -130,  -130,  -130,    65,   103,  -130,  -130,  -130,
      56,  -130,  -130,    -4,   147,  -130,   173,  -130,   -16,   -27,
     -24,     4,  -130,  -130,  -130,    76,    76,    79,   360,   360,
      30,    83,    83,    83,    83,    83,    83,    83,  -130,  -130,
      83,    83,    83,    83,    83,  -130,  -130,   -21,  -130,   -12,
      22,    40,  -130,  -130,   199,   351,  -130,  -130,  -130,    70,
     351,  -130,    77,  -130,   110,  -130,  -130,  -130,    -9,   100,
    -130,  -130,     7,   151,   121,  -130,   146,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,    66,    93,    26,  -130,  -130,
    -130,  -130,  -130,   351,  -130,   122,   380,   143,   380,  -130,
     351,  -130,   128,  -130,   225,  -130,    -3,   251,  -130,   395,
     117,    83,  -130,    70,  -130,  -130,   360,   360,   360,   360,
     360,   360,  -130,  -130,  -130,   360,  -130,  -130,    83,   277,
    -130,  -130,   351,   125,   303,  -130,  -130,  -130,  -130,   162,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,   329,  -130,  -130,    70,  -130,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,   101,    97,
      98,   100,    99,    36,    37,     0,    34,    35,    32,    38,
       0,     3,     4,     8,    88,    20,    24,    29,    33,     5,
       0,     9,    49,    51,     0,    50,     0,    10,     0,     0,
       0,     0,    38,    30,    31,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       0,     0,     0,     0,     0,    27,    28,     0,    39,     0,
       0,    45,    59,    52,     0,     0,    55,    56,    53,     0,
       0,    76,     0,    74,     0,    79,    80,    11,    14,     0,
      96,    95,     0,    71,     0,    64,     0,    81,    82,    83,
      84,    85,    86,    87,    92,    29,    93,     0,    18,    19,
      21,    22,    23,     0,    42,     0,     0,     0,     0,    47,
       0,    62,     0,    58,     0,     7,    14,     0,    77,    38,
      89,     0,    40,     0,    12,    94,     0,     0,     0,     0,
       0,     0,    72,    73,    54,     0,    75,    90,     0,     0,
      41,    46,     0,     0,     0,    60,    57,     6,    78,    13,
      17,    16,    65,    66,    67,    68,    69,    70,    63,    91,
      44,     0,    48,    61,     0,    43,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,   158,   -69,     0,  -130,  -129,  -130,   -14,    42,
     132,     1,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,   -40,    53,  -130,  -130,
    -130,  -130,  -130,   115,  -130,  -130,  -130,  -130,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,   124,   125,    23,    89,   159,    24,    25,
      26,    27,    28,    29,    30,    68,    69,    70,    31,    32,
      33,    34,    78,    73,    74,   123,    94,    95,   145,    35,
      36,    83,    37,    38,    39,   107,    40,    92,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    50,    43,    44,   161,    41,   113,   131,    47,    96,
      48,   127,    49,   131,   115,    84,   132,   106,    86,   116,
      22,    87,   133,    58,   114,    41,     1,     2,   133,    85,
      72,     3,     4,   135,    77,    71,    82,    98,    99,   100,
     101,   102,   103,   104,   149,   176,   108,   109,   117,    93,
      93,   154,   147,   118,    88,     5,     6,   148,   105,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    60,    61,
      16,    17,    18,    19,   122,    97,   136,   137,   138,   139,
     140,   141,    67,   171,    65,    66,     1,     2,   -71,   -71,
     119,     3,     4,     8,     9,    10,    11,    12,    51,    52,
      53,    54,    55,    56,   110,   111,   112,    57,    62,    63,
      64,    65,    66,     1,     2,   142,   143,   160,     3,     4,
     126,   151,   128,   153,   157,    13,    14,   157,    90,    91,
      16,    17,    18,    42,   169,    45,    46,   162,   163,   164,
     165,   166,   167,   142,   143,   134,    93,   144,    84,   157,
       1,     2,    13,    14,   157,     3,     4,    16,    17,    18,
     129,   136,   137,   138,   139,   140,   141,   150,   142,   143,
     152,   157,   146,   155,    75,   172,     1,     2,    59,     5,
       6,     3,     4,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    76,   174,    16,    17,    18,    19,   168,   130,
      80,     0,     1,     2,     0,     5,     6,     3,     4,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    81,     0,
      16,    17,    18,    19,     0,     0,   120,     0,     1,     2,
       0,     5,     6,     3,     4,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   121,     0,    16,    17,    18,    19,
       0,     0,     0,   156,     1,     2,     0,     5,     6,     3,
       4,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,    16,    17,    18,    19,     0,     0,     0,   158,
       1,     2,     0,     5,     6,     3,     4,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    16,    17,
      18,    19,     0,     0,     0,   170,     1,     2,     0,     5,
       6,     3,     4,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,    16,    17,    18,    19,     0,     0,
       0,   173,     1,     2,     0,     5,     6,     3,     4,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
      16,    17,    18,    19,     1,     2,     0,   175,     0,     3,
       4,     5,     6,     1,     2,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,    16,    17,    18,    19,
       0,     0,     0,     5,     6,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    16,    17,
      18,    19,    13,    14,     0,     0,     0,    16,    17,    18,
      42,    51,    52,    53,    54,    55,    56,     8,     9,    10,
      11,    12
};

static const yytype_int16 yycheck[] =
{
       0,    15,     1,     2,   133,     0,    27,    16,    25,    49,
      25,    80,    25,    16,    26,    31,    25,    57,    45,    31,
      20,    45,    31,     0,    45,    20,     3,     4,    31,    45,
      34,     8,     9,    26,    34,    30,    36,    51,    52,    53,
      54,    55,    56,    57,   113,   174,    60,    61,    26,    48,
      49,   120,    26,    31,    50,    32,    33,    31,    57,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     3,     4,
      47,    48,    49,    50,    74,    45,    10,    11,    12,    13,
      14,    15,    26,   152,     8,     9,     3,     4,    22,    23,
      50,     8,     9,    37,    38,    39,    40,    41,    16,    17,
      18,    19,    20,    21,    62,    63,    64,    25,     5,     6,
       7,     8,     9,     3,     4,    22,    23,   131,     8,     9,
      50,   116,    45,   118,   124,    42,    43,   127,    49,    50,
      47,    48,    49,    50,   148,     3,     4,   136,   137,   138,
     139,   140,   141,    22,    23,    45,   145,    26,    31,   149,
       3,     4,    42,    43,   154,     8,     9,    47,    48,    49,
      50,    10,    11,    12,    13,    14,    15,    45,    22,    23,
      27,   171,    26,    45,    27,    50,     3,     4,    20,    32,
      33,     8,     9,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    31,    47,    48,    49,    50,   145,    84,
      27,    -1,     3,     4,    -1,    32,    33,     8,     9,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    -1,    -1,    27,    -1,     3,     4,
      -1,    32,    33,     8,     9,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    50,
      -1,    -1,    -1,    28,     3,     4,    -1,    32,    33,     8,
       9,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    -1,    -1,    -1,    28,
       3,     4,    -1,    32,    33,     8,     9,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    -1,    -1,    -1,    28,     3,     4,    -1,    32,
      33,     8,     9,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    47,    48,    49,    50,    -1,    -1,
      -1,    28,     3,     4,    -1,    32,    33,     8,     9,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    49,    50,     3,     4,    -1,    28,    -1,     8,
       9,    32,    33,     3,     4,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,    48,    49,    50,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    16,    17,    18,    19,    20,    21,    37,    38,    39,
      40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     8,     9,    32,    33,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    47,    48,    49,    50,
      52,    53,    55,    56,    59,    60,    61,    62,    63,    64,
      65,    69,    70,    71,    72,    80,    81,    83,    84,    85,
      87,    89,    50,    62,    62,    61,    61,    25,    25,    25,
      59,    16,    17,    18,    19,    20,    21,    25,     0,    53,
       3,     4,     5,     6,     7,     8,     9,    26,    66,    67,
      68,    89,    34,    74,    75,    27,    45,    55,    73,    89,
      27,    45,    55,    82,    31,    45,    45,    45,    50,    57,
      49,    50,    88,    62,    77,    78,    77,    45,    59,    59,
      59,    59,    59,    59,    59,    62,    77,    86,    59,    59,
      60,    60,    60,    27,    45,    26,    31,    26,    31,    50,
      27,    45,    55,    76,    54,    55,    50,    54,    45,    50,
      84,    16,    25,    31,    45,    26,    10,    11,    12,    13,
      14,    15,    22,    23,    26,    79,    26,    26,    31,    54,
      45,    89,    27,    89,    54,    45,    28,    55,    28,    58,
      59,    57,    62,    62,    62,    62,    62,    62,    78,    59,
      28,    54,    50,    28,    31,    28,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    55,    56,    57,    57,    57,    57,    58,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    64,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    72,    73,    73,    73,    74,    75,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    81,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    86,    86,    86,    87,    88,    88,    89,    89,    89,
      89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     2,     3,     3,     1,     5,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     2,     5,     4,     1,     3,     2,     4,     1,
       1,     1,     2,     2,     4,     1,     1,     3,     2,     1,
       2,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     2,     4,     1,     2,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       4,     3,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1
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
        case 12:
#line 130 "compiler_hw2.y" /* yacc.c:1646  */
    {set_symbol_type((yyvsp[-2].i_val));}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 134 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) != 0){
            insert_symbol((yyvsp[-2].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[-2].string));
    }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 141 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[0].string)) != 0){
            insert_symbol((yyvsp[0].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[0].string));
    }
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 148 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-4].string)) != 0){
            insert_symbol((yyvsp[-4].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[-4].string));
    }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 155 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) != 0){
            insert_symbol((yyvsp[-2].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[-2].string));
    }
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 203 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[0].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[0].string));
    }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 210 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(function_parameter_num > 0)
            set_function_parameter();
        can_dump(scope_num);
        --scope_num;
    }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 219 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-1].string)) == -1){
            insert_symbol((yyvsp[-1].string), 2, (yyvsp[-2].i_val));
        }
        else print_error("Redeclared function ", (yyvsp[-1].string));
        ++scope_num;
    }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 237 "compiler_hw2.y" /* yacc.c:1646  */
    {
        function_parameter_array[function_parameter_num] = (yyvsp[0].i_val);
        ++function_parameter_num;
    }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 241 "compiler_hw2.y" /* yacc.c:1646  */
    {
        function_parameter_array[function_parameter_num] = (yyvsp[0].i_val);
        ++function_parameter_num;
    }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 248 "compiler_hw2.y" /* yacc.c:1646  */
    {
        function_parameter_array[function_parameter_num] = (yyvsp[-1].i_val);
        ++function_parameter_num;

        if(lookup_symbol((yyvsp[0].string)) != 0){
            insert_symbol((yyvsp[0].string), 3, (yyvsp[-1].i_val));
        }
        else    print_error("Redeclared variable ", (yyvsp[0].string));
    }
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 257 "compiler_hw2.y" /* yacc.c:1646  */
    {
        function_parameter_array[function_parameter_num] = (yyvsp[-1].i_val);
        ++function_parameter_num;

        if(lookup_symbol((yyvsp[0].string)) != 0){
            insert_symbol((yyvsp[0].string), 3, (yyvsp[-1].i_val));
        }
        else    print_error("Redeclared variable ", (yyvsp[0].string));
    }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 279 "compiler_hw2.y" /* yacc.c:1646  */
    {can_dump(scope_num); --scope_num;}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "compiler_hw2.y" /* yacc.c:1646  */
    {++scope_num;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 293 "compiler_hw2.y" /* yacc.c:1646  */
    {can_dump(scope_num); --scope_num;}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 297 "compiler_hw2.y" /* yacc.c:1646  */
    {++scope_num;}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 327 "compiler_hw2.y" /* yacc.c:1646  */
    {can_dump(scope_num); --scope_num;}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 331 "compiler_hw2.y" /* yacc.c:1646  */
    {++scope_num;}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 358 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-3].string)) == -1)
            print_error("Undeclared function ", (yyvsp[-3].string));
    }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 375 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[0].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[0].string));
    }
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 384 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 1;}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 385 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 2;}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 386 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 3;}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 387 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 4;}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 388 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 5;}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1760 "y.tab.c" /* yacc.c:1646  */
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
#line 391 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;
    create_symbol();
    reset_function_array();

    yyparse();
    if(syntax_error_flag == 0){
        dump_symbol(scope_num);
        printf("\nTotal lines: %d \n",yylineno);
    }

    return 0;
}

void yyerror(char *s)
{
    if(had_print_flag == 0){
        printf("%d: %s\n", yylineno+1, buf);
        had_print_flag = 1;
    }
    if(strstr(s, "syntax") != NULL) syntax_error_flag = 1;
    printf("\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", yylineno+1, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n\n");
}

void create_symbol() {
    head = (parse_table*)malloc(sizeof(parse_table));
    head->index = -1;
    head->name = NULL;
    head->kind = -1;
    head->type = -1;
    head->scope = -1;
    head->attribute = NULL;
    head->next = NULL;
    head->back = head;
}

void insert_symbol(char* Name, int Kind, int Type) {
    //printf("insert_symbol:%s, %d, %d\n", Name, Kind, Type);

    parse_table* temp = head;
    while(temp->next != NULL)   temp = temp->next;
    temp->next = (parse_table*)malloc(sizeof(parse_table));
    temp->next->back = temp;
    temp = temp->next;

    temp->index = index_num;
    temp->name = (char*)malloc(sizeof(char)*strlen(Name)+1);
    strncpy(temp->name, Name, strlen(Name));
    temp->kind = Kind;
    temp->type = Type;
    temp->scope = scope_num;

    /*
    if(function_parameter_num > 0){
        temp->attribute = (int*)malloc(sizeof(int)*function_parameter_num);
        for(int i = 0; i<function_parameter_num; ++i)
            temp->attribute[i] = function_parameter_array[i];
    }
    */

    temp->next = NULL;
    index_num++;
}

int lookup_symbol(char* Name) {
    //printf("lookup_symbol\n");
    //printf("Name: %s\n", Name);
    parse_table* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        if(strcmp(temp->name, Name) == 0 && temp->scope == scope_num)   return 0;
        if(strcmp(temp->name, Name) == 0 && temp->scope < scope_num)   return 1;
    }   
    return -1;
}

void dump_symbol(int dump_scope_num) {

    int table_has_element_flag = 0;
    parse_table* element = head;
    while(element->next != NULL){
        element = element->next;
        if(element->scope == dump_scope_num)
            table_has_element_flag = 1;
    }
    if(table_has_element_flag == 0) return;

    //printf("dump_symbol: %d\n", dump_scope_num);
    int index_count = 0;
    printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");
    parse_table* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
        if(temp->scope == dump_scope_num){
            printf("%-10d", index_count);
            printf("%-10s", temp->name);

            if(temp->kind ==1)          printf("%-12s", "variable");
            else if (temp->kind ==2)    printf("%-12s", "function");
            else if (temp->kind ==3)    printf("%-12s", "parameter");

            if(temp->type == 1)         printf("%-10s", "int");
            else if(temp->type == 2)    printf("%-10s", "float");
            else if(temp->type == 3)    printf("%-10s", "bool");
            else if(temp->type == 4)    printf("%-10s", "string");
            else if(temp->type == 5)    printf("%-10s", "void");

            printf("%-10d", dump_scope_num);

            if(temp->attribute != NULL){
                if(temp->attribute[0] == 1)         printf("int");
                else if(temp->attribute[0] == 2)    printf("float");
                else if(temp->attribute[0] == 3)    printf("bool");
                else if(temp->attribute[0] == 4)    printf("string");
                else if(temp->attribute[0] == 5)    printf("void");
                for(int i=1; i< sizeof(temp->attribute)/sizeof(temp->attribute[0]); ++i){
                    if(temp->attribute[i] == 1)         printf(", int");
                    else if(temp->attribute[i] == 2)    printf(", float");
                    else if(temp->attribute[i] == 3)    printf(", bool");
                    else if(temp->attribute[i] == 4)    printf(", string");
                    else if(temp->attribute[i] == 5)    printf(", void");
                }
            }
            printf("\n");
            index_count++;
        }
    }
    printf("\n");
    clear_symbol(dump_scope_num);
}

void set_function_parameter(){
    parse_table *temp = head;
    while(temp -> next != NULL)     temp = temp -> next;
    while(temp->kind != 2)  temp = temp -> back;
    temp->attribute = (int*)malloc(sizeof(int)*function_parameter_num);
    for(int i=0; i<function_parameter_num; ++i){
        temp->attribute[i] = function_parameter_array[i];
    }
    reset_function_array();
}

void set_symbol_type(int Type){
    parse_table *temp = head;
    while(temp -> next != NULL)     temp = temp -> next;
    for(int i=0; i<variable_declare_count; ++i){
        temp->type = Type;
        temp = temp -> back;
    }

    variable_declare_count = 0;
}

void clear_symbol(int scope_num){
    if(scope_num != 0){
        parse_table* temp = head;

        while(temp->next != NULL){
            temp = temp -> next;
            if(temp->scope == scope_num){
                if(temp->next != NULL){
                    temp->back->next = temp->next;
                    temp->next->back = temp->back;
                }
                else temp->back->next = NULL;
                parse_table* deletenode = temp;
                temp = temp -> back;
                free(deletenode);
            }
        }

    }
}

void reset_function_array(){
    for(int i=0; i<512; ++i)
        function_parameter_array[i] = -1;
    function_parameter_num = 0;
}

void print_error(char* msg, char* Name){
    sprintf(error_buf, "%s%s", msg, Name);
    yyerror(error_buf);
}

void can_dump(int dump_scope_num){
    dump_scope_flag = dump_scope_num;
}
