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
int function_initial_flag = 0;
int function_has_declare_flag = 0;
int function_parameter_array[512];
char error_buf[128];
int had_print_flag = 0;
int dump_scope_flag = -1;
int syntax_error_flag = 0;
int print_error_flag = 0;

void reset_function_array();
void print_error(char*, char*);
void can_dump(int);



#line 125 "y.tab.c" /* yacc.c:339  */

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
#line 64 "compiler_hw2.y" /* yacc.c:355  */

    int i_val;
    double f_val;
    char* string;
    char char_array[50];

#line 272 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 289 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

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
       0,   113,   113,   114,   118,   119,   123,   124,   128,   129,
     130,   131,   135,   139,   146,   153,   160,   170,   174,   175,
     176,   177,   181,   182,   183,   184,   185,   189,   190,   191,
     192,   193,   194,   200,   201,   202,   203,   204,   208,   209,
     210,   211,   212,   216,   220,   242,   256,   257,   258,   259,
     263,   272,   284,   285,   289,   290,   294,   298,   302,   303,
     304,   308,   312,   316,   317,   318,   322,   323,   327,   328,
     329,   330,   331,   332,   333,   337,   338,   342,   346,   350,
     351,   352,   356,   357,   358,   359,   363,   367,   371,   375,
     379,   383,   387,   388,   392,   399,   400,   401,   405,   406,
     411,   412,   413,   414,   415
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
  "function_declation_part2", "function_parameter", "compound_stat",
  "if_else_stat", "if_stat", "if_stat_part1", "if_stat_part2", "else_stat",
  "else_stat_part1", "else_stat_part2", "logical_stats", "logical_stat",
  "logical_operation", "while_stat", "while_stat_part1",
  "while_stat_part2", "expression_stat", "assignment_stat",
  "function_call", "function_send_parameter", "print_func", "type", YY_NULLPTR
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

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     368,   130,   130,   420,   420,   446,   -24,    -5,    -3,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,   394,  -130,  -130,  -130,
     510,   160,  -130,  -130,  -130,  -130,    42,    84,  -130,  -130,
    -130,   435,  -130,  -130,   -10,    69,  -130,   186,  -130,   -18,
     -11,    39,    45,   130,    79,  -130,  -130,  -130,   420,    89,
      89,    94,    13,    24,    97,   383,   130,   130,  -130,    70,
     446,   446,   446,   446,   446,   446,   446,  -130,  -130,   446,
     446,   456,   456,   456,  -130,  -130,    -4,  -130,    21,    78,
    -130,  -130,   212,   368,  -130,  -130,  -130,    85,   368,  -130,
    -130,  -130,   475,  -130,  -130,  -130,    54,    93,    97,    10,
    -130,  -130,  -130,  -130,   116,   117,   526,    77,  -130,    99,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,   497,   108,
      22,  -130,  -130,   456,  -130,  -130,  -130,   368,  -130,    -2,
     505,  -130,   368,  -130,  -130,  -130,   238,  -130,    50,   264,
     114,   446,  -130,    85,  -130,  -130,  -130,   130,   130,   130,
     130,   130,   130,  -130,  -130,  -130,   130,  -130,  -130,   446,
     120,   290,   368,  -130,   104,   316,  -130,  -130,  -130,   125,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,   342,  -130,  -130,    85,  -130,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     100,   101,   103,   102,    40,    41,     0,    38,    39,    35,
      42,     0,     3,     4,     8,    92,    20,    25,    31,    36,
       5,     0,     9,    52,    54,     0,    53,     0,    10,     0,
      43,     0,     0,     0,    42,    33,    43,    34,     0,    27,
      28,     0,     0,    25,    31,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     0,    29,    30,     0,    44,     0,     0,
      62,    55,     0,     0,    58,    59,    56,     0,     0,    79,
      80,    77,     0,    82,    83,    11,    14,     0,     0,     0,
      21,    26,    32,    37,     0,     0,    74,     0,    67,     0,
      84,    86,    87,    88,    89,    90,    91,    96,    31,    97,
       0,    18,    19,     0,    22,    23,    24,     0,    47,     0,
       0,    50,     0,    65,    63,    61,     0,     7,    14,     0,
      93,     0,    45,     0,    12,    99,    98,     0,     0,     0,
       0,     0,     0,    75,    76,    57,     0,    78,    94,     0,
       0,     0,     0,    46,     0,     0,    60,     6,    81,    13,
      17,    16,    68,    69,    70,    71,    72,    73,    66,    95,
      49,     0,    51,    64,     0,    48,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,   126,   -76,     5,  -130,  -129,  -130,    -1,     3,
       6,     1,   112,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,    14,    15,  -130,  -130,  -130,
    -130,  -130,    67,     0,  -130,  -130,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,   136,   137,    24,    97,   169,    25,    26,
      27,    28,    29,    30,    31,    77,    78,    32,    33,    34,
      35,    86,    81,    82,   135,   107,   108,   156,    36,    37,
      91,    38,    39,    46,   120,    41,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    55,    45,    47,    51,    23,    54,    42,    52,    49,
      50,    53,   139,    92,   171,    59,    69,    70,    74,    75,
      56,    40,    57,   127,    80,   162,    23,    93,    42,    71,
      72,    73,    74,    75,    94,    40,   102,    40,    79,   101,
      85,   128,    90,   163,    98,    69,    70,   129,   158,    54,
     102,   161,   130,   159,    99,   186,   165,   106,   106,   111,
     112,   113,   114,   115,   116,   117,   141,   118,   121,   122,
     141,   109,     1,     2,   124,   125,   126,     3,     4,   142,
     119,   143,    40,    40,    95,   143,   181,   134,    40,    71,
      72,    73,    74,    75,     5,    96,    83,    74,    75,   153,
     154,     6,     7,   155,    66,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    84,   110,    17,    18,    19,    20,
     100,   153,   154,   103,    54,   157,   160,    40,   131,    53,
     153,   154,    40,     1,     2,   138,    40,   164,   144,    40,
     170,   167,   145,   146,   167,    92,   101,    68,   172,   173,
     174,   175,   176,   177,   182,    43,   184,   106,   179,   140,
      67,    40,    40,     1,     2,    40,   167,   105,     3,     4,
     167,   178,    14,    15,     0,     0,     0,    17,    18,    19,
      44,    40,     0,     0,     0,     5,   167,     0,     0,     1,
       2,     0,     6,     7,     3,     4,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,     0,    17,    18,    19,
      20,     5,     0,    88,     0,     1,     2,     0,     6,     7,
       3,     4,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    89,     0,    17,    18,    19,    20,     5,     0,   132,
       0,     1,     2,     0,     6,     7,     3,     4,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   133,     0,    17,
      18,    19,    20,     5,     0,     0,   166,     1,     2,     0,
       6,     7,     3,     4,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,    18,    19,    20,     5,
       0,     0,   168,     1,     2,     0,     6,     7,     3,     4,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
       0,    17,    18,    19,    20,     5,     0,     0,   180,     1,
       2,     0,     6,     7,     3,     4,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,     0,    17,    18,    19,
      20,     5,     0,     0,   183,     1,     2,     0,     6,     7,
       3,     4,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    17,    18,    19,    20,     5,     0,     0,
     185,     1,     2,     0,     6,     7,     3,     4,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,     0,    17,
      18,    19,    20,     5,     0,     0,     0,     1,     2,     0,
       6,     7,     3,     4,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,    18,    19,    20,     5,
       0,     0,     0,     1,     2,    14,    15,     0,     3,     4,
      17,    18,   104,    44,     0,     0,    14,    15,     0,    58,
       0,    17,    18,    19,    44,    48,     0,     0,     0,     1,
       2,     0,     0,     0,     3,     4,     0,     0,     0,     1,
       2,    76,    14,    15,     3,     4,     0,    17,    18,    19,
      44,     5,     9,    10,    11,    12,    13,     0,     1,     2,
       0,   123,     0,     3,     4,     0,     0,     0,    14,    15,
       0,     0,     0,    17,    18,    19,    44,     0,    14,    15,
       5,     0,     0,    17,    18,    19,    44,   147,   148,   149,
     150,   151,   152,     0,     0,     0,     0,    14,    15,   -74,
     -74,     0,    17,    18,    19,    20,    60,    61,    62,    63,
      64,    65,     0,     0,     0,    66,   147,   148,   149,   150,
     151,   152,     9,    10,    11,    12,    13
};

static const yytype_int16 yycheck[] =
{
       0,    25,     1,     2,     5,     0,     5,     0,     5,     3,
       4,     5,    88,    31,   143,    16,     3,     4,     8,     9,
      25,    21,    25,    27,    34,    27,    21,    45,    21,     5,
       6,     7,     8,     9,    45,    35,    26,    37,    31,    26,
      35,    45,    37,    45,    43,     3,     4,    26,    26,    48,
      26,   127,    31,    31,    48,   184,   132,    56,    57,    60,
      61,    62,    63,    64,    65,    66,    16,    66,    69,    70,
      16,    57,     3,     4,    71,    72,    73,     8,     9,    25,
      66,    31,    82,    83,    45,    31,   162,    82,    88,     5,
       6,     7,     8,     9,    25,    50,    27,     8,     9,    22,
      23,    32,    33,    26,    25,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    45,    47,    48,    49,    50,
      26,    22,    23,    26,   123,    26,   123,   127,    50,   123,
      22,    23,   132,     3,     4,    50,   136,   130,    45,   139,
     141,   136,    26,    26,   139,    31,    26,    21,   147,   148,
     149,   150,   151,   152,    50,    25,    31,   156,   159,    92,
       0,   161,   162,     3,     4,   165,   161,    55,     8,     9,
     165,   156,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,   181,    -1,    -1,    -1,    25,   181,    -1,    -1,     3,
       4,    -1,    32,    33,     8,     9,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    25,    -1,    27,    -1,     3,     4,    -1,    32,    33,
       8,     9,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    50,    25,    -1,    27,
      -1,     3,     4,    -1,    32,    33,     8,     9,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    49,    50,    25,    -1,    -1,    28,     3,     4,    -1,
      32,    33,     8,     9,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    49,    50,    25,
      -1,    -1,    28,     3,     4,    -1,    32,    33,     8,     9,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    48,    49,    50,    25,    -1,    -1,    28,     3,
       4,    -1,    32,    33,     8,     9,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    25,    -1,    -1,    28,     3,     4,    -1,    32,    33,
       8,     9,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    25,    -1,    -1,
      28,     3,     4,    -1,    32,    33,     8,     9,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      48,    49,    50,    25,    -1,    -1,    -1,     3,     4,    -1,
      32,    33,     8,     9,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    49,    50,    25,
      -1,    -1,    -1,     3,     4,    42,    43,    -1,     8,     9,
      47,    48,    49,    50,    -1,    -1,    42,    43,    -1,    45,
      -1,    47,    48,    49,    50,    25,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,     3,
       4,    26,    42,    43,     8,     9,    -1,    47,    48,    49,
      50,    25,    37,    38,    39,    40,    41,    -1,     3,     4,
      -1,    25,    -1,     8,     9,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    -1,    42,    43,
      25,    -1,    -1,    47,    48,    49,    50,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    42,    43,    22,
      23,    -1,    47,    48,    49,    50,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     8,     9,    25,    32,    33,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    47,    48,    49,
      50,    52,    53,    55,    56,    59,    60,    61,    62,    63,
      64,    65,    68,    69,    70,    71,    79,    80,    82,    83,
      84,    86,    87,    25,    50,    62,    84,    62,    25,    61,
      61,    59,    60,    61,    62,    25,    25,    25,    45,    59,
      16,    17,    18,    19,    20,    21,    25,     0,    53,     3,
       4,     5,     6,     7,     8,     9,    26,    66,    67,    87,
      34,    73,    74,    27,    45,    55,    72,    87,    27,    45,
      55,    81,    31,    45,    45,    45,    50,    57,    62,    61,
      26,    26,    26,    26,    49,    63,    62,    76,    77,    76,
      45,    59,    59,    59,    59,    59,    59,    59,    62,    76,
      85,    59,    59,    25,    60,    60,    60,    27,    45,    26,
      31,    50,    27,    45,    55,    75,    54,    55,    50,    54,
      83,    16,    25,    31,    45,    26,    26,    10,    11,    12,
      13,    14,    15,    22,    23,    26,    78,    26,    26,    31,
      60,    54,    27,    45,    87,    54,    28,    55,    28,    58,
      59,    57,    62,    62,    62,    62,    62,    62,    77,    59,
      28,    54,    50,    28,    31,    28,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    55,    56,    57,    57,    57,    57,    58,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    64,    65,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    71,    72,    72,
      72,    73,    74,    75,    75,    75,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    80,    81,
      81,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    85,    85,    85,    86,    86,
      87,    87,    87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     2,     3,     3,     1,     5,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     2,     2,     2,
       2,     1,     3,     2,     2,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     2,     5,     4,
       2,     4,     1,     1,     1,     2,     2,     4,     1,     1,
       3,     2,     1,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     4,     1,
       1,     3,     2,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     1,     3,     4,     3,     1,     1,     4,     4,
       1,     1,     1,     1,     1
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
#line 135 "compiler_hw2.y" /* yacc.c:1646  */
    {set_symbol_type((yyvsp[-2].i_val));}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 139 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) != 0){
            insert_symbol((yyvsp[-2].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[-2].string));
    }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 146 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[0].string)) != 0){
            insert_symbol((yyvsp[0].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[0].string));
    }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 153 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-4].string)) != 0){
            insert_symbol((yyvsp[-4].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[-4].string));
    }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) != 0){
            insert_symbol((yyvsp[-2].string), 1, -1);
            ++variable_declare_count;
        }
        else    print_error("Redeclared variable ", (yyvsp[-2].string));
    }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 212 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[0].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[0].string));
    }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 220 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(function_initial_flag == 1){
            if(function_parameter_num > 0)
                set_function_parameter();
            can_dump(scope_num);
        }
        else if(function_initial_flag == 0){
            if(function_parameter_num > 0)
                set_function_parameter();
            clear_symbol(scope_num);

            if(function_has_declare_flag == 1){
                print_error("Redeclared function ", (yyvsp[-1].char_array));
            }
            function_has_declare_flag = 0;
        }
        --scope_num;
        function_initial_flag = 0;
    }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 242 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-1].string)) == -1){
            insert_symbol((yyvsp[-1].string), 2, (yyvsp[-2].i_val));
        }
        else {
            function_has_declare_flag = 1;
            
        }
        sprintf((yyval.char_array), "%s", (yyvsp[-1].string));
        ++scope_num;
    }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 256 "compiler_hw2.y" /* yacc.c:1646  */
    {function_initial_flag = 0;}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 257 "compiler_hw2.y" /* yacc.c:1646  */
    {function_initial_flag = 0;}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 258 "compiler_hw2.y" /* yacc.c:1646  */
    {function_initial_flag = 1;}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 259 "compiler_hw2.y" /* yacc.c:1646  */
    {function_initial_flag = 1;}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 263 "compiler_hw2.y" /* yacc.c:1646  */
    {
        function_parameter_array[function_parameter_num] = (yyvsp[-1].i_val);
        ++function_parameter_num;

        if(lookup_symbol((yyvsp[0].string)) != 0){
            insert_symbol((yyvsp[0].string), 3, (yyvsp[-1].i_val));
        }
        else    print_error("Redeclared variable ", (yyvsp[0].string));
    }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 272 "compiler_hw2.y" /* yacc.c:1646  */
    {
        function_parameter_array[function_parameter_num] = (yyvsp[-1].i_val);
        ++function_parameter_num;

        if(lookup_symbol((yyvsp[0].string)) != 0){
            insert_symbol((yyvsp[0].string), 3, (yyvsp[-1].i_val));
        }
        else    print_error("Redeclared variable ", (yyvsp[0].string));
    }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 294 "compiler_hw2.y" /* yacc.c:1646  */
    {can_dump(scope_num); --scope_num;}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 298 "compiler_hw2.y" /* yacc.c:1646  */
    {++scope_num;}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 308 "compiler_hw2.y" /* yacc.c:1646  */
    {can_dump(scope_num); --scope_num;}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 312 "compiler_hw2.y" /* yacc.c:1646  */
    {++scope_num;}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 342 "compiler_hw2.y" /* yacc.c:1646  */
    {can_dump(scope_num); --scope_num;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 346 "compiler_hw2.y" /* yacc.c:1646  */
    {++scope_num;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 363 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[-2].string));
    }
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 367 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[-2].string));
    }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 371 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[-2].string));
    }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 375 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[-2].string));
    }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 379 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[-2].string));
    }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 383 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-2].string)) == -1)
            print_error("Undeclared variable ", (yyvsp[-2].string));
    }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 392 "compiler_hw2.y" /* yacc.c:1646  */
    {
        if(lookup_symbol((yyvsp[-3].string)) == -1)
            print_error("Undeclared function ", (yyvsp[-3].string));
    }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 411 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 1;}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 412 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 2;}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 413 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 3;}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 414 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 4;}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 415 "compiler_hw2.y" /* yacc.c:1646  */
    {(yyval.i_val) = 5;}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1858 "y.tab.c" /* yacc.c:1646  */
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
#line 418 "compiler_hw2.y" /* yacc.c:1906  */


/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;
    create_symbol();
    reset_function_array();

    yyparse();
    if(syntax_error_flag == 0){
        if(buf[0] != '\0'){
            printf("%d: %s\n", yylineno+1, buf);
            ++yylineno;
        }
            
        dump_symbol(scope_num);
        printf("\nTotal lines: %d \n",yylineno);
    }

    return 0;
}

void yyerror(char *s)
{
    
    if(strstr(s, "syntax") != NULL) syntax_error_flag = 1;

    if(print_error_flag != 0){
        if(had_print_flag == 0){
            if(buf[0] == '\n')
                printf("%d:%s", yylineno, buf);
            else
                printf("%d: %s\n", yylineno+1, buf);
            had_print_flag = 1;
        }
        print_error_flag = 0;
        printf("\n|-----------------------------------------------|\n");
        if(syntax_error_flag == 1)
            printf("| Error found in line %d: %s\n", yylineno+1, buf);
        else
            printf("| Error found in line %d: %s", yylineno, buf);
        printf("| %s", error_buf);
        printf("\n|-----------------------------------------------|\n\n");
    }

    
    if(had_print_flag == 0 && syntax_error_flag == 1){
        if(buf[0] == '\n')
            printf("%d:%s", yylineno, buf);
        else
            printf("%d: %s\n", yylineno+1, buf);
        had_print_flag = 1;
    }
    
    printf("\n|-----------------------------------------------|\n");
    if(syntax_error_flag == 1)
        printf("| Error found in line %d: %s\n", yylineno+1, buf);
    else 
        printf("| Error found in line %d: %s", yylineno, buf);
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
    print_error_flag = 1;
}

void print_error_after_line(){
    if(print_error_flag != 0){
        print_error_flag = 0;
        yyerror(error_buf);
    }
    print_error_flag = 0;
}

void can_dump(int dump_scope_num){
    dump_scope_flag = dump_scope_num;
}
