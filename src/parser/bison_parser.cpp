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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 1 "bison_parser.y" /* yacc.c:339  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 103 "bison_parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y" /* yacc.c:355  */

// %code requires block

#include "../../include/sqlparser/statements.h"
#include "../../include/sqlparser/SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 165 "bison_parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_HISTORY = 279,
    SQL_INTEGER = 280,
    SQL_NATURAL = 281,
    SQL_PREPARE = 282,
    SQL_PRIMARY = 283,
    SQL_SCHEMAS = 284,
    SQL_SPATIAL = 285,
    SQL_VARCHAR = 286,
    SQL_VIRTUAL = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_GLOBAL = 298,
    SQL_HAVING = 299,
    SQL_IMPORT = 300,
    SQL_INSERT = 301,
    SQL_ISNULL = 302,
    SQL_OFFSET = 303,
    SQL_RENAME = 304,
    SQL_SCHEMA = 305,
    SQL_SELECT = 306,
    SQL_SORTED = 307,
    SQL_TABLES = 308,
    SQL_UNIQUE = 309,
    SQL_UNLOAD = 310,
    SQL_UPDATE = 311,
    SQL_VALUES = 312,
    SQL_AFTER = 313,
    SQL_ALTER = 314,
    SQL_CROSS = 315,
    SQL_DELTA = 316,
    SQL_FLOAT = 317,
    SQL_GROUP = 318,
    SQL_INDEX = 319,
    SQL_INNER = 320,
    SQL_LIMIT = 321,
    SQL_LOCAL = 322,
    SQL_MERGE = 323,
    SQL_MINUS = 324,
    SQL_ORDER = 325,
    SQL_OUTER = 326,
    SQL_RIGHT = 327,
    SQL_TABLE = 328,
    SQL_UNION = 329,
    SQL_USING = 330,
    SQL_WHERE = 331,
    SQL_CALL = 332,
    SQL_CASE = 333,
    SQL_CHAR = 334,
    SQL_DATE = 335,
    SQL_DESC = 336,
    SQL_DROP = 337,
    SQL_ELSE = 338,
    SQL_FILE = 339,
    SQL_FROM = 340,
    SQL_FULL = 341,
    SQL_HASH = 342,
    SQL_HINT = 343,
    SQL_INTO = 344,
    SQL_JOIN = 345,
    SQL_LEFT = 346,
    SQL_LIKE = 347,
    SQL_LOAD = 348,
    SQL_LONG = 349,
    SQL_NULL = 350,
    SQL_PLAN = 351,
    SQL_SHOW = 352,
    SQL_TEXT = 353,
    SQL_THEN = 354,
    SQL_TIME = 355,
    SQL_VIEW = 356,
    SQL_WHEN = 357,
    SQL_WITH = 358,
    SQL_LOW_PRIORITY = 359,
    SQL_DELAYED = 360,
    SQL_HIGH_PRIORITY = 361,
    SQL_QUICK = 362,
    SQL_IGNORE = 363,
    SQL_DATABASE = 364,
    SQL_ADD = 365,
    SQL_ALL = 366,
    SQL_AND = 367,
    SQL_ASC = 368,
    SQL_CSV = 369,
    SQL_END = 370,
    SQL_FOR = 371,
    SQL_INT = 372,
    SQL_KEY = 373,
    SQL_NOT = 374,
    SQL_OFF = 375,
    SQL_SET = 376,
    SQL_TBL = 377,
    SQL_TOP = 378,
    SQL_AS = 379,
    SQL_BY = 380,
    SQL_IF = 381,
    SQL_IN = 382,
    SQL_IS = 383,
    SQL_OF = 384,
    SQL_ON = 385,
    SQL_OR = 386,
    SQL_TO = 387,
    SQL_ARRAY = 388,
    SQL_CONCAT = 389,
    SQL_ILIKE = 390,
    SQL_SECOND = 391,
    SQL_MINUTE = 392,
    SQL_HOUR = 393,
    SQL_DAY = 394,
    SQL_MONTH = 395,
    SQL_YEAR = 396,
    SQL_TRUE = 397,
    SQL_FALSE = 398,
    SQL_EQUALS = 399,
    SQL_NOTEQUALS = 400,
    SQL_LESS = 401,
    SQL_GREATER = 402,
    SQL_LESSEQ = 403,
    SQL_GREATEREQ = 404,
    SQL_NOTNULL = 405,
    SQL_UMINUS = 406
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:355  */

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;

	hsql::TableName table_name;
	hsql::DatabaseName db_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 372 "bison_parser.cpp" /* yacc.c:355  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 402 "bison_parser.cpp" /* yacc.c:358  */

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
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
#define YYLAST   594

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  453

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   406

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   158,     2,     2,
     163,   164,   156,   154,   167,   155,   165,   157,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   166,
     147,   144,   148,   168,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   161,     2,   162,   159,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   145,
     146,   149,   150,   151,   152,   153,   160
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   259,   259,   280,   286,   295,   299,   303,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   327,   328,   333,
     334,   338,   342,   354,   361,   364,   368,   380,   389,   393,
     403,   406,   421,   429,   437,   445,   450,   458,   459,   463,
     464,   468,   469,   473,   479,   480,   481,   482,   483,   484,
     485,   486,   490,   491,   492,   502,   508,   514,   522,   523,
     532,   544,   545,   549,   550,   554,   555,   559,   572,   581,
     594,   595,   596,   597,   601,   602,   612,   623,   624,   628,
     640,   641,   642,   659,   660,   664,   665,   669,   679,   696,
     700,   701,   702,   706,   707,   711,   723,   724,   728,   732,
     733,   736,   741,   742,   746,   751,   755,   756,   759,   760,
     764,   765,   769,   773,   774,   775,   781,   782,   786,   787,
     788,   789,   790,   791,   792,   793,   800,   801,   805,   806,
     810,   811,   815,   825,   826,   827,   828,   829,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   846,   847,
     851,   852,   853,   854,   855,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   873,   874,   878,   879,
     880,   881,   887,   888,   889,   890,   894,   895,   899,   900,
     904,   905,   906,   907,   908,   909,   910,   914,   915,   919,
     923,   924,   925,   926,   927,   928,   931,   935,   939,   943,
     944,   945,   946,   950,   951,   952,   953,   954,   958,   962,
     963,   967,   968,   972,   976,   980,   992,   993,  1003,  1004,
    1008,  1009,  1018,  1019,  1024,  1035,  1044,  1045,  1050,  1055,
    1056,  1061,  1062,  1066,  1067,  1072,  1073,  1081,  1089,  1099,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1132,  1141,  1142,  1147,  1148
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "HISTORY", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "BEFORE", "COLUMN", "CREATE",
  "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT",
  "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME",
  "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX",
  "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT",
  "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "DATE",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT",
  "THEN", "TIME", "VIEW", "WHEN", "WITH", "LOW_PRIORITY", "DELAYED",
  "HIGH_PRIORITY", "QUICK", "IGNORE", "DATABASE", "ADD", "ALL", "AND",
  "ASC", "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL",
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "TRUE", "FALSE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_temporary", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "opt_low_priority", "opt_quick", "opt_ignore",
  "truncate_statement", "insert_statement", "opt_priority",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_with_paren",
  "select_paren_or_clause", "select_no_paren", "set_operator", "set_type",
  "opt_all", "select_clause", "opt_distinct", "select_list",
  "opt_from_clause", "from_clause", "opt_where", "opt_group", "opt_having",
  "opt_order", "order_list", "order_desc", "opt_order_type", "opt_top",
  "opt_limit", "expr_list", "opt_literal_list", "literal_list",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "function_expr", "extract_expr",
  "datetime_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "db_name",
  "table_alias", "opt_table_alias", "alias", "opt_alias", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    61,   399,   400,    60,    62,   401,
     402,   403,   404,   405,    43,    45,    42,    47,    37,    94,
     406,    91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -338

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-338)))

#define YYTABLE_NINF -250

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-250)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     305,     2,    25,    48,    84,   141,    -7,    93,   266,    17,
      -7,    83,    30,   -32,   162,    37,  -338,   101,   101,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,    16,
    -338,   152,   192,    45,  -338,    65,   138,  -338,   120,   120,
     120,   167,  -338,   126,   133,  -338,  -338,  -338,   147,   270,
     265,   147,   158,   158,    25,  -338,   121,   145,  -338,   305,
    -338,   202,  -338,  -338,  -338,  -338,  -338,   -32,   194,   189,
     -32,    36,  -338,   312,     5,   318,   207,   325,    25,   325,
     120,  -338,   147,  -338,   245,  -338,   242,  -338,  -338,  -338,
     140,    25,   292,    25,    25,  -338,  -338,  -338,  -338,   171,
    -338,   268,  -338,  -338,  -338,   140,   268,   270,    31,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,   172,   175,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,   298,  -338,
    -338,   180,  -338,    25,   261,   343,    25,   160,   186,   195,
      57,   211,   191,   226,  -338,   124,   272,   193,  -338,    29,
     271,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,   241,  -338,  -338,  -338,
    -338,   361,    36,   206,  -338,   -43,    36,  -338,   328,   329,
     330,  -338,     5,  -338,   380,   264,   -62,    25,   296,  -338,
     180,    -6,    12,   340,   161,   140,    77,   -56,   229,   226,
     386,   140,   345,   231,   -88,    11,   317,  -338,   140,  -338,
     140,   393,   140,  -338,  -338,   226,  -338,   226,   -70,   234,
      82,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   270,   397,   238,   -71,
    -338,  -338,   140,  -338,  -338,  -338,  -338,   270,   270,   270,
    -338,  -338,    60,   -32,   285,   405,   317,    25,   106,  -338,
     140,  -338,  -338,   247,  -338,  -338,  -338,  -338,  -338,  -338,
     327,   -60,    81,   140,   140,  -338,   340,   321,   -12,  -338,
    -338,   -32,  -338,   -18,  -338,   243,  -338,     9,  -338,   140,
     371,  -338,  -338,  -338,   324,   339,   418,   226,   274,   124,
    -338,   346,   263,   418,   418,   418,   418,   433,   433,   433,
     433,   345,   345,    75,    75,    75,   -52,   280,   300,   -28,
    -338,     5,  -338,   361,  -338,  -338,  -338,  -338,  -338,   442,
    -338,   362,   286,    97,  -338,  -338,  -338,   284,  -338,    98,
    -338,   140,   140,   140,  -338,   129,    55,   288,  -338,   290,
     358,  -338,  -338,  -338,   384,   385,   388,   367,    11,   457,
    -338,  -338,  -338,   -27,   336,  -338,   226,   418,   124,   299,
     107,  -338,  -338,   140,   397,  -338,   108,  -338,  -338,   343,
    -338,   303,  -338,  -338,   307,  -338,  -338,  -338,   102,  -338,
     405,     5,  -338,   -86,   -27,   139,  -338,   140,  -338,     9,
      11,  -338,  -338,  -338,    11,   349,   308,   140,   386,   311,
     114,  -338,  -338,   -27,  -338,  -338,  -338,   456,   466,  -338,
     381,  -338,  -338,   127,  -338,  -338,   -27,  -338,  -338,   378,
     380,   -31,  -338,  -338,   313,   335,  -338,  -338,   319,   140,
     143,   140,  -338,  -338,  -338,    15,   -27,  -338,  -338,   -27,
     316,   347,  -338
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    38,    62,     0,    73,   117,
      62,     0,     0,     0,     0,   252,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    80,
      81,   109,     0,   226,    67,    25,     0,    37,    40,    40,
      40,     0,    61,    64,     0,    70,    71,    72,    66,     0,
      97,    66,    59,    59,     0,    30,     0,     0,     1,   251,
       2,     0,     6,     5,    91,    92,    90,     0,    94,     0,
       0,   125,    57,     0,   129,     0,     0,     0,     0,     0,
      40,    63,    66,    28,     0,    65,     0,   213,   116,    96,
       0,     0,     0,     0,     0,    31,    84,    83,     4,     0,
      85,   109,    86,    93,    89,     0,   109,     0,     0,    87,
     227,   208,   211,   214,   209,   210,   215,     0,   128,   130,
     203,   204,   205,   212,   206,   207,    24,    23,     0,   228,
      36,    75,    35,     0,     0,     0,     0,   199,     0,     0,
       0,     0,     0,     0,   201,     0,   100,    98,   126,   236,
     133,   140,   141,   142,   135,   137,   143,   136,   155,   144,
     145,   146,   139,   134,   148,   149,     0,   225,    58,    55,
      56,     0,   125,   108,   110,   115,   125,   120,   122,   121,
     118,    26,     0,    39,     0,     0,     0,     0,     0,    29,
      75,    97,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,   150,     0,     0,     0,   103,    99,     0,   234,
       0,     0,     0,   235,   132,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
      19,    82,     0,   114,   113,   112,    88,     0,     0,     0,
     131,   253,     0,     0,     0,     0,   103,     0,     0,   187,
       0,   200,   202,     0,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,     0,   174,     0,     0,     0,   147,
     138,     0,   101,   216,   218,     0,   220,   232,   219,     0,
     105,   127,   166,   233,   167,     0,   162,     0,     0,     0,
     153,     0,   165,   164,   180,   181,   182,   183,   184,   185,
     186,   157,   156,   159,   158,   160,   161,     0,     0,   103,
      77,     0,    17,     0,   111,   124,   123,   119,    74,     0,
      34,     0,     0,     0,    41,    60,    27,     0,    69,     0,
     178,     0,     0,     0,   172,     0,     0,     0,   196,     0,
       0,   248,   240,   246,   244,   247,   242,     0,     0,     0,
     231,   224,   229,   102,     0,    95,     0,   163,     0,     0,
       0,   154,   197,     0,     0,    76,     0,    20,   254,     0,
      45,     0,    48,    47,     0,    46,    51,    44,    54,    33,
       0,     0,   188,     0,   176,     0,   175,     0,   179,   232,
       0,   243,   245,   241,     0,   217,   233,     0,   198,     0,
       0,   170,   168,    79,    78,    22,    32,     0,     0,    52,
       0,    43,    42,     0,   189,   173,   177,   221,   237,   249,
       0,   107,   171,   169,     0,     0,    53,    68,     0,     0,
       0,     0,   104,    49,    50,     0,   250,   238,   230,   106,
     199,     0,   239
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,   429,  -338,   471,  -338,   169,  -338,  -338,
    -338,  -338,  -338,   128,  -338,  -338,  -338,    -5,  -338,   119,
    -338,  -338,  -338,   459,  -338,   503,  -338,    -1,  -338,  -338,
    -338,   332,  -338,  -338,   144,  -223,     7,   445,   -13,   486,
    -338,  -338,   246,   333,  -338,  -338,  -338,  -239,  -338,  -338,
      92,  -338,   277,  -338,  -338,  -132,  -196,  -338,  -305,   315,
    -104,  -110,  -338,  -338,  -338,  -338,  -338,  -338,   331,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,    80,   -72,  -131,
    -338,  -338,   -42,  -338,  -338,  -338,  -337,   135,  -338,  -338,
    -338,     1,   447,  -338,   130,   379,  -338,  -338,  -338,  -338,
    -338,   109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    62,   239,   240,    18,   127,
      19,    20,    84,   188,    21,    22,    41,    77,   333,   334,
     388,   421,    23,    93,    24,    43,    82,    86,    25,    26,
      48,   185,    27,   319,   320,    28,    29,   101,    30,    67,
      68,   104,    31,    90,   146,   206,   207,   290,   365,   442,
      71,   173,   174,   245,    50,   109,   147,   117,   118,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   197,   157,
     158,   159,   160,   270,   161,   162,   163,   164,   165,   120,
     121,   122,   123,   124,   125,   282,   283,   284,   285,   286,
     166,   287,   130,   360,   361,   362,   214,   288,   357,   447,
      60,   252
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   175,   119,    34,   189,   278,    89,    88,   350,   111,
     112,    87,   209,   441,    33,   261,   376,   335,   450,     9,
      56,   405,   297,   254,   210,    64,   210,   273,    33,    32,
     330,   200,   209,   202,    78,    79,   196,    87,   243,   342,
     241,   204,   351,   212,   246,   212,   274,   352,   289,    54,
      91,    35,   210,   353,   354,    95,    65,   298,   349,   275,
     137,   111,   112,    87,   339,   177,   180,   429,   355,   210,
     244,   212,  -249,   356,   100,   133,   280,   100,   424,   131,
     375,   134,   221,    55,   107,   210,   423,    36,   212,   200,
      66,   271,   167,   322,   169,   170,   323,    42,   138,   139,
     113,   255,   108,   370,   212,   295,   292,   296,   294,   236,
     250,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   178,   137,   111,   112,
      87,    13,   203,   359,   186,   140,   208,   190,   175,   374,
      49,   210,   179,   137,   111,   112,    87,   114,   115,  -222,
     348,    37,   113,   211,   397,   208,    52,     9,   259,   195,
     212,    64,    58,   337,   343,   138,   139,   210,   262,   345,
     346,   144,   410,   116,   281,     9,   141,   300,    44,   195,
     263,   138,   139,   274,    53,   363,   212,   367,   256,   210,
     142,    38,    65,   172,   317,    72,   344,   419,   176,   114,
     115,   301,   140,    59,    61,   325,   326,   327,   212,   221,
      73,   431,   143,   144,   137,   111,   112,    87,   140,   113,
     145,   420,    69,    75,   328,   116,    66,   329,    74,   137,
     111,   112,    87,    81,   235,   113,   236,   393,   394,   395,
      80,   210,    39,   141,   396,   338,    76,    83,   189,   119,
      40,   210,   198,   139,   425,    85,   408,   142,   336,   141,
     212,   389,   392,   347,   390,   208,   114,   115,   139,   413,
     212,   412,   415,   142,   208,   182,    87,    89,   433,   143,
     144,   208,   114,   115,    92,    96,   369,   145,   215,   140,
      99,   437,   116,   426,   182,   143,   144,   264,   265,   266,
     267,   268,   269,   145,   140,   103,   113,   448,   116,    97,
     329,   380,     1,   102,   105,   110,   102,   381,   216,   119,
       2,   113,   126,   191,   382,   192,   128,     3,   129,   135,
     199,   136,     4,   168,   171,   446,   181,   449,    69,   183,
       5,     6,   182,   184,   142,   199,   187,   111,   383,   193,
       7,     8,   201,   114,   115,   409,     9,   205,   194,   142,
     208,    10,   237,   217,   238,   384,   143,   144,   114,   115,
      45,    46,    47,   242,   145,   350,   247,   248,   249,   116,
     385,   143,   144,   251,   386,   257,   216,    11,   253,   145,
     218,     9,   276,   289,   116,   279,   293,   299,   219,   220,
     318,   321,    12,   387,   350,   221,   222,   331,   332,   351,
     358,   340,   341,   297,   352,   223,   224,   225,   226,   227,
     353,   354,   228,   229,   236,   230,   231,   232,   233,   234,
     235,   217,   236,   216,   364,   355,   210,   368,   351,  -249,
     356,   371,   372,   352,   373,   378,   379,   391,   400,   353,
     354,   366,   398,   438,   399,   401,   402,   404,   277,   403,
     406,   407,   434,   411,   355,   216,   417,   220,    13,   356,
     418,   430,   435,   221,   222,   432,   436,   443,   217,   221,
     216,   192,   445,   223,   224,   225,   226,   227,    98,    63,
     228,   229,   377,   230,   231,   232,   233,   234,   235,   444,
     236,   232,   233,   234,   235,   277,   236,   416,   439,   422,
    -250,   452,    94,    51,   220,   106,  -223,    70,   414,   324,
     221,   222,   258,   291,   260,   451,   132,   272,   213,   427,
     223,   224,   225,   226,   227,   428,     0,   228,   229,   440,
     230,   231,   232,   233,   234,   235,   220,   236,     0,     0,
       0,     0,   221,  -250,     0,     0,     0,     0,     0,     0,
       0,   220,  -250,  -250,  -250,   226,   227,   221,     0,   228,
     229,     0,   230,   231,   232,   233,   234,   235,     0,   236,
    -250,  -250,     0,     0,  -250,  -250,     0,   230,   231,   232,
     233,   234,   235,     0,   236
};

static const yytype_int16 yycheck[] =
{
      13,   105,    74,     2,   135,   201,    12,    49,    26,     4,
       5,     6,     3,    44,     3,     3,   321,   256,     3,    51,
      13,   358,    92,    85,   112,     9,   112,    83,     3,    27,
     253,   141,     3,   143,    39,    40,   140,     6,    81,    99,
     172,   145,    60,   131,   176,   131,   102,    65,    76,    19,
      51,     3,   112,    71,    72,    54,    40,   127,   281,   115,
       3,     4,     5,     6,   260,   107,   108,   404,    86,   112,
     113,   131,    90,    91,    67,    80,   164,    70,   164,    78,
     319,    82,   134,    53,    48,   112,   391,     3,   131,   199,
      74,   195,    91,   164,    93,    94,   167,   104,    41,    42,
      95,   163,    66,   299,   131,   215,   210,   217,   212,   161,
     182,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,    95,     3,     4,     5,
       6,   163,   145,   124,   133,    78,   167,   136,   242,   167,
     123,   112,   111,     3,     4,     5,     6,   142,   143,   167,
     162,    10,    95,   124,    99,   167,    73,    51,   164,   102,
     131,     9,     0,    57,    83,    41,    42,   112,   156,   273,
     274,   156,   368,   168,   163,    51,   119,    95,    85,   102,
     193,    41,    42,   102,   101,   289,   131,   297,   187,   112,
     133,    50,    40,   101,   236,     3,   115,    95,   106,   142,
     143,   119,    78,   166,   103,   247,   248,   249,   131,   134,
     165,   407,   155,   156,     3,     4,     5,     6,    78,    95,
     163,   119,    70,    85,   164,   168,    74,   167,   163,     3,
       4,     5,     6,   107,   159,    95,   161,   341,   342,   343,
      73,   112,   101,   119,   115,   258,   126,   114,   379,   321,
     109,   112,    41,    42,   115,   108,   366,   133,   257,   119,
     131,   164,   164,   276,   167,   167,   142,   143,    42,   373,
     131,   164,   164,   133,   167,   167,     6,    12,   164,   155,
     156,   167,   142,   143,   126,   164,   299,   163,    17,    78,
      88,   164,   168,   397,   167,   155,   156,   136,   137,   138,
     139,   140,   141,   163,    78,   111,    95,   164,   168,   164,
     167,    25,     7,    67,   125,     3,    70,    31,    47,   391,
      15,    95,     4,   163,    38,   165,   119,    22,     3,    84,
     119,    89,    27,    41,   163,   439,   164,   441,    70,    41,
      35,    36,   167,   163,   133,   119,    85,     4,    62,   163,
      45,    46,   161,   142,   143,   368,    51,    85,   163,   133,
     167,    56,   121,    92,     3,    79,   155,   156,   142,   143,
     104,   105,   106,   167,   163,    26,    48,    48,    48,   168,
      94,   155,   156,     3,    98,    89,    47,    82,   124,   163,
     119,    51,   163,    76,   168,   164,     3,   163,   127,   128,
       3,   163,    97,   117,    26,   134,   135,   122,     3,    60,
     167,   164,    85,    92,    65,   144,   145,   146,   147,   148,
      71,    72,   151,   152,   161,   154,   155,   156,   157,   158,
     159,    92,   161,    47,    63,    86,   112,   163,    60,    90,
      91,    95,   162,    65,   144,     3,    84,   163,    90,    71,
      72,   112,   164,    75,   164,    71,    71,    90,   119,    71,
       3,   125,     6,   164,    86,    47,   163,   128,   163,    91,
     163,   163,     6,   134,   135,   164,    95,   164,    92,   134,
      47,   165,   163,   144,   145,   146,   147,   148,    59,    18,
     151,   152,   323,   154,   155,   156,   157,   158,   159,   164,
     161,   156,   157,   158,   159,   119,   161,   379,   130,   390,
      92,   164,    53,    10,   128,    70,   167,    31,   374,   242,
     134,   135,   190,   208,   191,   445,    79,   196,   149,   399,
     144,   145,   146,   147,   148,   400,    -1,   151,   152,   430,
     154,   155,   156,   157,   158,   159,   128,   161,    -1,    -1,
      -1,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,   144,   145,   146,   147,   148,   134,    -1,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,    -1,   161,
     147,   148,    -1,    -1,   151,   152,    -1,   154,   155,   156,
     157,   158,   159,    -1,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    82,    97,   163,   170,   171,   172,   173,   177,   179,
     180,   183,   184,   191,   193,   197,   198,   201,   204,   205,
     207,   211,    27,     3,   260,     3,     3,    10,    50,   101,
     109,   185,   104,   194,    85,   104,   105,   106,   199,   123,
     223,   194,    73,   101,    19,    53,   205,   207,     0,   166,
     269,   103,   174,   174,     9,    40,    74,   208,   209,    70,
     208,   219,     3,   165,   163,    85,   126,   186,   186,   186,
      73,   107,   195,   114,   181,   108,   196,     6,   251,    12,
     212,   196,   126,   192,   192,   260,   164,   164,   172,    88,
     205,   206,   211,   111,   210,   125,   206,    48,    66,   224,
       3,     4,     5,    95,   142,   143,   168,   226,   227,   247,
     248,   249,   250,   251,   252,   253,     4,   178,   119,     3,
     261,   260,   261,   186,   196,    84,    89,     3,    41,    42,
      78,   119,   133,   155,   156,   163,   213,   225,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   238,   239,   240,
     241,   243,   244,   245,   246,   247,   259,   260,    41,   260,
     260,   163,   219,   220,   221,   229,   219,   251,    95,   111,
     251,   164,   167,    41,   163,   200,   260,    85,   182,   248,
     260,   163,   165,   163,   163,   102,   229,   237,    41,   119,
     230,   161,   230,   207,   229,    85,   214,   215,   167,     3,
     112,   124,   131,   264,   265,    17,    47,    92,   119,   127,
     128,   134,   135,   144,   145,   146,   147,   148,   151,   152,
     154,   155,   156,   157,   158,   159,   161,   121,     3,   175,
     176,   224,   167,    81,   113,   222,   224,    48,    48,    48,
     247,     3,   270,   124,    85,   163,   260,    89,   200,   164,
     212,     3,   156,   207,   136,   137,   138,   139,   140,   141,
     242,   229,   237,    83,   102,   115,   163,   119,   225,   164,
     164,   163,   254,   255,   256,   257,   258,   260,   266,    76,
     216,   228,   229,     3,   229,   230,   230,    92,   127,   163,
      95,   119,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   251,     3,   202,
     203,   163,   164,   167,   221,   251,   251,   251,   164,   167,
     204,   122,     3,   187,   188,   216,   260,    57,   207,   225,
     164,    85,    99,    83,   115,   229,   229,   207,   162,   204,
      26,    60,    65,    71,    72,    86,    91,   267,   167,   124,
     262,   263,   264,   229,    63,   217,   112,   230,   163,   207,
     225,    95,   162,   144,   167,   216,   227,   176,     3,    84,
      25,    31,    38,    62,    79,    94,    98,   117,   189,   164,
     167,   163,   164,   229,   229,   229,   115,    99,   164,   164,
      90,    71,    71,    71,    90,   255,     3,   125,   230,   207,
     225,   164,   164,   229,   203,   164,   182,   163,   163,    95,
     119,   190,   188,   227,   164,   115,   229,   263,   256,   255,
     163,   225,   164,   164,     6,     6,    95,   164,    75,   130,
     270,    44,   218,   164,   164,   163,   229,   268,   164,   229,
       3,   246,   164
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   169,   170,   171,   171,   172,   172,   172,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   178,   179,   179,   180,   181,   182,
     183,   183,   184,   184,   184,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   190,   191,   191,   191,   192,   192,
     193,   194,   194,   195,   195,   196,   196,   197,   198,   198,
     199,   199,   199,   199,   200,   200,   201,   202,   202,   203,
     204,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     209,   209,   209,   210,   210,   211,   212,   212,   213,   214,
     214,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   222,   222,   222,   223,   223,   224,   224,
     224,   224,   224,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   228,   229,   229,   229,   229,   229,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   232,   232,   232,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   234,   234,   235,   235,
     235,   235,   236,   236,   236,   236,   237,   237,   238,   238,
     239,   239,   239,   239,   239,   239,   239,   240,   240,   241,
     242,   242,   242,   242,   242,   242,   243,   244,   245,   246,
     246,   246,   246,   247,   247,   247,   247,   247,   248,   249,
     249,   250,   250,   251,   252,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   259,   260,   260,   261,   262,
     262,   263,   263,   264,   264,   265,   265,   266,   266,   266,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     268,   269,   269,   270,   270
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     9,     8,     7,     4,     4,     1,     0,     3,
       0,     1,     3,     3,     1,     1,     1,     1,     1,     4,
       4,     1,     1,     2,     0,     4,     4,     3,     2,     0,
       7,     1,     0,     1,     0,     1,     0,     2,    10,     7,
       1,     1,     1,     0,     3,     0,     7,     1,     3,     3,
       1,     1,     5,     3,     3,     1,     1,     3,     5,     2,
       1,     1,     1,     1,     0,     7,     1,     0,     1,     1,
       0,     2,     2,     0,     4,     0,     2,     0,     3,     0,
       1,     3,     2,     1,     1,     0,     2,     0,     2,     4,
       2,     2,     2,     4,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     6,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     4,     1,     3,     2,     1,     1,     3,     1,     1,
       5,     1,     0,     2,     1,     1,     0,     4,     6,     8,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     0,     1,     3
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
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


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
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1714 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1720 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1726 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1732 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* statement_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1745 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1751 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* preparable_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1757 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* opt_hints  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1770 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* hint_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1783 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* hint  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1789 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* prepare_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1795 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* prepare_target_query  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1801 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* execute_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1807 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* import_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1813 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* import_file_type  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1819 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* file_path  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1825 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* show_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1831 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* create_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1837 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_temporary  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1843 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_not_exists  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1849 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* column_def_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1862 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* column_def  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1868 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* column_type  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1874 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_column_nullable  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1880 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* drop_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1886 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_exists  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* delete_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1898 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_low_priority  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1904 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_quick  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1910 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_ignore  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1916 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* truncate_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1922 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* insert_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1928 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_priority  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1934 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_column_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1947 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* update_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1953 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* update_clause_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1966 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* update_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1972 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* select_statement  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1978 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* select_with_paren  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1984 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* select_paren_or_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1990 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* select_no_paren  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1996 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* select_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2002 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_distinct  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2008 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* select_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2021 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2027 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* from_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2033 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_where  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2039 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_group  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2045 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_having  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2051 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_order  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2064 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* order_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2077 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* order_desc  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2083 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_order_type  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2089 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_top  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2095 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_limit  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2101 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* expr_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2114 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* opt_literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2127 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* literal_list  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2140 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* expr_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2146 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2152 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* operand  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2158 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* scalar_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2164 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* unary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2170 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* binary_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2176 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* logic_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2182 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* in_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2188 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* case_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2194 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_list  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2200 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* exists_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2206 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* comp_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2212 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* function_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2218 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* extract_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2224 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* datetime_field  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2230 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* array_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2236 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* array_index  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2242 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* between_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2248 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* column_name  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2254 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2260 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* string_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2266 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* bool_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2272 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* num_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2278 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* int_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2284 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* null_literal  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2290 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* param_expr  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2296 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* table_ref  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2302 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2308 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* nonjoin_table_ref_atomic  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2314 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* table_ref_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2327 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* table_ref_name  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2333 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* table_ref_name_no_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2339 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* table_name  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2345 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* db_name  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).db_name).name) ); }
#line 2351 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2357 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* opt_table_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2363 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2369 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_alias  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2375 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* join_clause  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2381 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_join_type  */
#line 142 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2387 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* join_condition  */
#line 154 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2393 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* ident_commalist  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2406 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2525 "bison_parser.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 259 "bison_parser.y" /* yacc.c:1646  */
    {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2730 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 280 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2741 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 286 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2752 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 295 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2761 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 299 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2770 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 303 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2778 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 310 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2784 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 311 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2790 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 312 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2796 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 313 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 314 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 315 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 316 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 317 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 318 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 327 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 328 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 333 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 334 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 338 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 342 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2875 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 354 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2885 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 364 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2894 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 368 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2904 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 380 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2915 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 389 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kImportCSV; }
#line 2921 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 393 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2927 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 403 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 406 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2945 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 421 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->temporary = (yyvsp[-7].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2958 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 429 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->temporary = (yyvsp[-6].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2971 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 437 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2984 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 445 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateDatabase);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->databaseName = (yyvsp[0].db_name).name;
		}
#line 2994 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateDatabase);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->databaseName = (yyvsp[0].db_name).name;
		}
#line 3004 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 458 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3010 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 459 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3016 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 463 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3022 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 464 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3028 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 468 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 469 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3040 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 473 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3048 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 479 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3054 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 480 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3060 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 481 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3066 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 482 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3072 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 483 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3078 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 484 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3084 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 485 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3090 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 486 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 490 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3102 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 491 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3108 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 492 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3114 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 502 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3125 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 508 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3136 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 514 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3146 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 522 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3152 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 523 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3158 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 532 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->low_priority = (yyvsp[-5].bval);
			(yyval.delete_stmt)->quick = (yyvsp[-4].bval);
			(yyval.delete_stmt)->ignore = (yyvsp[-3].bval);
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3172 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 544 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 545 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3184 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 549 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 550 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3196 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 554 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3202 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 555 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3208 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 559 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3218 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 572 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->priority = (yyvsp[-8].bval);
			(yyval.insert_stmt)->ignore = (yyvsp[-7].bval);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3232 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 581 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->priority = (yyvsp[-5].bval);
			(yyval.insert_stmt)->ignore = (yyvsp[-4].bval);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3246 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 594 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3252 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 595 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3258 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 596 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3264 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 597 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3270 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 601 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3276 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 602 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3282 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 612 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->low_priority = (yyvsp[-5].bval);
		(yyval.update_stmt)->ignore = (yyvsp[-4].bval);
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 623 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 624 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3307 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 628 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3317 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 642 "bison_parser.y" /* yacc.c:1646  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3336 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 659 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3342 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 660 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3348 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 669 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3363 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 679 "bison_parser.y" /* yacc.c:1646  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3382 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 711 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3396 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 723 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3402 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 724 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3408 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 732 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3414 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 733 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 3420 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 736 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3426 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 741 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3432 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 742 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3438 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 746 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3448 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 751 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3454 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 755 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3460 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 756 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3466 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 759 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3472 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 760 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3478 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 764 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3484 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 765 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3490 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 769 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3496 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 773 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3502 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 774 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3508 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 775 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3514 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 781 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3520 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 782 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3526 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 786 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3532 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 787 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3538 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 788 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3544 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 789 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3550 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 790 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr;  }
#line 3556 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 791 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3562 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 792 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 793 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3574 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 800 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3580 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 801 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3586 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 805 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3592 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 806 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3598 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 810 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3604 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 811 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3610 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 815 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3622 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 833 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3628 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 842 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3634 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 851 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 852 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3646 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 853 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3652 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 854 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 855 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3664 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 860 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3670 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 861 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 862 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3682 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 863 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3688 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 864 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3694 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 865 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3700 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 866 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3706 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 867 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3712 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3718 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 869 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3724 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 873 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3730 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 874 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3736 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 878 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3742 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 879 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3748 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 880 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3754 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 881 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3760 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3766 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 888 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3772 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 889 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3778 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 890 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3784 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 894 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3790 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 895 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3796 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 899 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 900 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 904 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 905 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 906 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 907 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 908 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 909 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 910 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 914 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 915 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3862 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 919 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3868 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 923 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 924 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3880 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 925 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3886 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 926 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3892 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 927 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3898 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 928 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3904 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 931 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3910 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 935 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3916 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 939 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3922 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 943 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3928 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 944 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3934 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 945 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3940 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 946 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3946 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 958 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3952 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 962 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3958 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 963 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3964 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 967 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 972 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3976 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 976 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3982 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3992 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 993 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4003 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4014 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1018 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4020 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1019 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4026 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1024 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4038 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1035 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4048 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1044 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4054 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1045 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4060 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1050 "bison_parser.y" /* yacc.c:1646  */
    {(yyval.db_name).name = (yyvsp[0].sval);}
#line 4066 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1056 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4072 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1062 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4078 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1066 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4084 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1067 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4090 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1073 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1082 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4108 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1090 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4121 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1100 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4141 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1118 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4147 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1119 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 4153 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1120 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 4159 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1121 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4165 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1122 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4171 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1123 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4177 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1124 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4183 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1125 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4189 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1126 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 4195 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1127 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4201 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1147 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4207 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1148 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4213 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 4217 "bison_parser.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, &yylloc, result, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
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
#line 1151 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
