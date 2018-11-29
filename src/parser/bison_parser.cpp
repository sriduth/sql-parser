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
    SQL_DATABASES = 364,
    SQL_DATABASE = 365,
    SQL_CHARACTER = 366,
    SQL_ADD = 367,
    SQL_ALL = 368,
    SQL_AND = 369,
    SQL_ASC = 370,
    SQL_CSV = 371,
    SQL_END = 372,
    SQL_FOR = 373,
    SQL_INT = 374,
    SQL_KEY = 375,
    SQL_NOT = 376,
    SQL_OFF = 377,
    SQL_SET = 378,
    SQL_TBL = 379,
    SQL_TOP = 380,
    SQL_AS = 381,
    SQL_BY = 382,
    SQL_IF = 383,
    SQL_IN = 384,
    SQL_IS = 385,
    SQL_OF = 386,
    SQL_ON = 387,
    SQL_OR = 388,
    SQL_TO = 389,
    SQL_ARRAY = 390,
    SQL_CONCAT = 391,
    SQL_ILIKE = 392,
    SQL_SECOND = 393,
    SQL_MINUTE = 394,
    SQL_HOUR = 395,
    SQL_DAY = 396,
    SQL_MONTH = 397,
    SQL_YEAR = 398,
    SQL_TRUE = 399,
    SQL_FALSE = 400,
    SQL_EQUALS = 401,
    SQL_NOTEQUALS = 402,
    SQL_LESS = 403,
    SQL_GREATER = 404,
    SQL_LESSEQ = 405,
    SQL_GREATEREQ = 406,
    SQL_NOTNULL = 407,
    SQL_UMINUS = 408
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
	hsql::AlterStatement* alter_stmt;
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

#line 375 "bison_parser.cpp" /* yacc.c:355  */
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

#line 405 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   672

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   408

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   160,     2,     2,
     165,   166,   158,   156,   169,   157,   167,   159,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   168,
     149,   146,   150,   170,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   163,     2,   164,   161,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   147,   148,   151,   152,   153,   154,   155,   162
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   261,   261,   282,   288,   297,   301,   305,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   330,   331,
     336,   337,   341,   345,   357,   364,   367,   371,   383,   392,
     396,   407,   410,   413,   428,   436,   444,   452,   457,   465,
     466,   470,   471,   475,   476,   480,   486,   487,   488,   489,
     490,   491,   492,   493,   497,   498,   499,   510,   516,   522,
     527,   535,   536,   545,   557,   558,   562,   563,   567,   568,
     572,   585,   594,   607,   608,   609,   610,   614,   615,   625,
     636,   637,   641,   656,   663,   670,   678,   679,   683,   684,
     694,   695,   696,   713,   714,   718,   719,   723,   733,   750,
     754,   755,   756,   760,   761,   765,   777,   778,   782,   786,
     787,   790,   795,   796,   800,   805,   809,   810,   813,   814,
     818,   819,   823,   827,   828,   829,   835,   836,   840,   841,
     842,   843,   844,   845,   846,   847,   854,   855,   859,   860,
     864,   865,   869,   879,   880,   881,   882,   883,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   896,   900,   901,
     905,   906,   907,   908,   909,   913,   914,   915,   916,   917,
     918,   919,   920,   921,   922,   923,   927,   928,   932,   933,
     934,   935,   941,   942,   943,   944,   948,   949,   953,   954,
     958,   959,   960,   961,   962,   963,   964,   968,   969,   973,
     977,   978,   979,   980,   981,   982,   985,   989,   993,   997,
     998,   999,  1000,  1004,  1005,  1006,  1007,  1008,  1012,  1016,
    1017,  1021,  1022,  1026,  1030,  1034,  1046,  1047,  1057,  1058,
    1062,  1063,  1072,  1073,  1078,  1089,  1098,  1099,  1104,  1109,
    1110,  1115,  1116,  1120,  1121,  1126,  1127,  1135,  1143,  1153,
    1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,
    1186,  1195,  1196,  1201,  1202
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
  "HIGH_PRIORITY", "QUICK", "IGNORE", "DATABASES", "DATABASE", "CHARACTER",
  "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT", "KEY", "NOT",
  "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON",
  "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "'='", "EQUALS", "NOTEQUALS",
  "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_temporary", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "opt_low_priority", "opt_quick", "opt_ignore",
  "truncate_statement", "insert_statement", "opt_priority",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "alter_statement", "opt_default", "opt_equal",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "datetime_field", "array_expr",
  "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "db_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "join_clause", "opt_join_type",
  "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
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
     395,   396,   397,   398,   399,   400,    61,   401,   402,    60,
      62,   403,   404,   405,   406,   407,    43,    45,    42,    47,
      37,    94,   408,    91,    93,    40,    41,    46,    59,    44,
      63
};
# endif

#define YYPACT_NINF -339

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-339)))

#define YYTABLE_NINF -260

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-260)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     275,    17,    34,    66,    78,   149,   -11,     9,   234,    33,
     -11,   -12,   -30,    -8,   -17,   117,    29,  -339,    69,    69,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,    16,  -339,    14,   195,    37,  -339,    43,   134,  -339,
     145,   145,   145,   201,  -339,   182,   178,  -339,  -339,  -339,
     193,   297,   331,   193,   304,    34,   304,   181,   181,   181,
      34,  -339,  -339,   180,   183,  -339,   275,  -339,   256,  -339,
    -339,  -339,  -339,  -339,   -17,   238,   220,   -17,   109,  -339,
     345,     8,   349,   239,   304,    34,   304,   145,  -339,   193,
    -339,   283,  -339,   280,  -339,  -339,  -339,    26,    34,  -339,
     352,   262,   352,   334,    34,    34,   304,  -339,  -339,  -339,
    -339,   212,  -339,   308,  -339,  -339,  -339,    26,   308,   297,
      10,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,   215,
     213,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
     342,  -339,   219,  -339,    34,   301,   384,    34,    68,   224,
     225,    72,    44,   228,   250,  -339,   235,   311,   229,  -339,
      30,   295,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,   274,  -339,  -339,
     288,   367,   291,  -339,  -339,  -339,  -339,   401,   109,   237,
    -339,   113,   109,  -339,   355,   361,   362,  -339,     8,  -339,
     408,   286,   -68,    34,   324,  -339,   219,     7,     4,   363,
     176,    26,   -51,    83,   252,   250,   414,    26,   164,   253,
     -87,     3,   346,  -339,    26,  -339,    26,   418,    26,  -339,
    -339,   250,  -339,   250,   -71,   263,    48,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   297,   426,   307,   430,   312,   269,    21,  -339,
    -339,    26,  -339,  -339,  -339,  -339,   297,   297,   297,  -339,
    -339,    91,   -17,   303,   430,   346,    34,   211,  -339,    26,
    -339,  -339,   270,  -339,  -339,  -339,  -339,  -339,  -339,   353,
     112,   141,    26,    26,  -339,   363,   347,    -9,  -339,  -339,
     -17,  -339,   397,  -339,   268,  -339,    15,  -339,    26,   383,
    -339,  -339,  -339,   333,   371,   446,   250,   294,   235,  -339,
     369,   310,   446,   446,   446,   446,   205,   205,   205,   205,
     164,   164,  -108,  -108,  -108,    50,   302,   321,   -54,  -339,
     328,   553,  -339,   328,     8,  -339,   401,  -339,  -339,  -339,
    -339,  -339,   467,  -339,   391,   103,  -339,  -339,  -339,   313,
    -339,   122,  -339,    26,    26,    26,  -339,   101,   152,   314,
    -339,   315,   386,  -339,  -339,  -339,   406,   411,   423,   389,
       3,   494,  -339,  -339,  -339,   111,   373,  -339,   250,   446,
     235,   332,   129,  -339,  -339,    26,   426,  -339,  -339,    26,
    -339,   337,  -339,  -339,   338,  -339,  -339,  -339,    59,    26,
     130,  -339,  -339,   384,  -339,   430,     8,  -339,   -50,   111,
     147,  -339,    26,  -339,    15,     3,  -339,  -339,  -339,     3,
     400,   339,    26,   414,   343,   139,  -339,  -339,   111,  -339,
     111,   499,   505,  -339,   417,  -339,   111,  -339,  -339,  -339,
     163,  -339,  -339,   111,  -339,  -339,   424,   408,   -29,  -339,
    -339,   348,   350,  -339,  -339,   357,    26,   167,    26,  -339,
    -339,  -339,     6,   111,  -339,  -339,   111,   356,   360,  -339
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,    40,    65,     0,    76,   127,
      65,     0,     0,     0,     0,     0,   262,     3,    19,    19,
      17,     9,     7,    10,    16,    12,    14,    11,    15,    13,
       8,    90,    91,   119,     0,   236,    70,    26,     0,    39,
      42,    42,    42,     0,    64,    67,     0,    73,    74,    75,
      69,     0,   107,    69,     0,     0,     0,    62,    62,    62,
       0,    31,    32,     0,     0,     1,   261,     2,     0,     6,
       5,   101,   102,   100,     0,   104,     0,     0,   135,    60,
       0,   139,     0,     0,     0,     0,     0,    42,    66,    69,
      29,     0,    68,     0,   223,   126,   106,     0,     0,   238,
      87,     0,    87,     0,     0,     0,     0,    33,    94,    93,
       4,     0,    95,   119,    96,   103,    99,     0,   119,     0,
       0,    97,   237,   218,   221,   224,   219,   220,   225,     0,
     138,   140,   213,   214,   215,   222,   216,   217,    25,    24,
       0,    38,    78,    37,     0,     0,     0,     0,   209,     0,
       0,     0,     0,     0,     0,   211,     0,   110,   108,   136,
     246,   143,   150,   151,   152,   145,   147,   153,   146,   165,
     154,   155,   156,   149,   144,   158,   159,     0,   235,    86,
       0,     0,     0,    61,    57,    58,    59,     0,   135,   118,
     120,   125,   135,   130,   132,   131,   128,    27,     0,    41,
       0,     0,     0,     0,     0,    30,    78,   107,     0,     0,
       0,     0,     0,     0,     0,     0,   161,     0,   160,     0,
       0,     0,   113,   109,     0,   244,     0,     0,     0,   245,
     142,     0,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,    20,
      92,     0,   124,   123,   122,    98,     0,     0,     0,   141,
     263,     0,     0,     0,     0,   113,     0,     0,   197,     0,
     210,   212,     0,   200,   201,   202,   203,   204,   205,     0,
       0,     0,     0,     0,   184,     0,     0,     0,   157,   148,
       0,   111,   226,   228,     0,   230,   242,   229,     0,   115,
     137,   176,   243,   177,     0,   172,     0,     0,     0,   163,
       0,   175,   174,   190,   191,   192,   193,   194,   195,   196,
     167,   166,   169,   168,   170,   171,     0,     0,   113,    80,
      89,     0,    85,    89,     0,    18,     0,   121,   134,   133,
     129,    77,     0,    36,     0,     0,    43,    63,    28,     0,
      72,     0,   188,     0,     0,     0,   182,     0,     0,     0,
     206,     0,     0,   258,   250,   256,   254,   257,   252,     0,
       0,     0,   241,   234,   239,   112,     0,   105,     0,   173,
       0,     0,     0,   164,   207,     0,     0,    79,    88,     0,
      47,     0,    50,    49,     0,    48,    53,    46,    56,     0,
       0,    21,   264,     0,    35,     0,     0,   198,     0,   186,
       0,   185,     0,   189,   242,     0,   253,   255,   251,     0,
     227,   243,     0,   208,     0,     0,   180,   178,    82,    81,
      84,     0,     0,    54,     0,    45,    83,    23,    34,    44,
       0,   199,   183,   187,   231,   247,   259,     0,   117,   181,
     179,     0,     0,    55,    71,     0,     0,     0,     0,   114,
      51,    52,     0,   260,   248,   240,   116,   209,     0,   249
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,   447,  -339,   514,  -339,   190,  -339,  -339,
    -339,  -339,  -339,   124,  -339,  -339,  -339,    24,  -339,  -264,
    -339,  -339,  -339,     1,  -339,   529,  -339,    19,  -339,  -339,
    -339,   335,  -339,  -339,   144,  -339,   440,   200,  -248,    22,
     468,   -14,   513,  -339,  -339,   210,   340,  -339,  -339,  -339,
    -249,  -339,  -339,   118,  -339,   287,  -339,  -339,    79,  -209,
    -339,  -324,   325,  -116,  -113,  -339,  -339,  -339,  -339,  -339,
    -339,   341,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
      80,   -79,  -143,  -339,  -339,   -46,  -339,  -339,  -339,  -338,
     132,  -339,  -339,  -339,     2,   126,  -339,   131,   394,  -339,
    -339,  -339,  -339,  -339,   102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    69,   258,   259,    19,   139,
      20,    21,    91,   204,    22,    23,    43,    84,   355,   342,
     408,   445,    24,   104,    25,    45,    89,    93,    26,    27,
      50,   201,    28,   338,   339,    29,   180,   399,    30,    31,
     113,    32,    74,    75,   116,    33,    97,   157,   222,   223,
     309,   387,   469,    78,   189,   190,   264,    52,   121,   158,
     129,   130,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   213,   168,   169,   170,   171,   289,   172,   173,   174,
     175,   176,   132,   133,   134,   135,   136,   137,   301,   302,
     303,   304,   305,   177,   306,   100,   382,   383,   384,   230,
     307,   379,   474,    67,   271
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   191,   131,   205,    36,    95,    35,   280,   297,   477,
     356,    60,   123,   124,    94,   468,    94,   273,   225,    96,
     410,   316,   308,    71,   353,    71,   357,   226,   237,   148,
     123,   124,    94,   225,     9,   212,    63,    35,    54,   216,
     220,   218,   430,    57,    34,    61,   228,   148,   123,   124,
      94,   211,   371,   251,    72,   252,    72,   101,   317,   105,
     106,    55,   107,   226,   226,    85,    86,   149,   150,    37,
     361,    58,    98,   193,   196,   148,   123,   124,    94,   299,
      59,    38,   228,   228,    76,   214,   150,   142,    73,   397,
      73,   456,   450,    44,    46,   290,   112,   274,    56,   112,
     178,    62,   216,   125,   151,   194,   184,   185,   145,   392,
     311,   144,   313,   149,   150,   396,   451,    65,   314,   269,
     315,   125,   151,   195,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   125,
     224,   381,   219,   319,   226,   191,   202,   152,    14,   206,
     151,   449,   126,   127,   443,   370,   227,   119,    51,    39,
     224,   153,   281,   228,   155,   215,   292,   125,   300,   320,
     126,   127,    68,   278,   211,   120,   367,   368,   128,   153,
     444,   435,   102,   154,   155,   293,   237,   345,   126,   127,
     346,   156,   385,   152,   262,   282,   128,    66,    79,    40,
     294,   154,   155,   389,    80,   275,   336,   153,    81,   156,
     141,   364,   143,   252,   128,   226,   126,   127,   421,    82,
     348,   349,   350,   458,   365,   226,   226,   226,   263,   154,
     155,   188,   186,   207,   228,   208,   192,   156,   148,   123,
     124,    94,   128,   293,   228,   228,   228,   418,   419,   420,
      41,   422,   232,   148,   123,   124,    94,   351,   366,    42,
     352,   226,     9,   360,   452,   131,   226,   260,   359,   414,
     205,   265,   415,    83,    87,   433,   149,   150,   358,   438,
     228,   369,     1,   440,   114,   228,     9,   114,   417,    88,
       2,   224,   150,   446,    90,   437,   447,     3,   224,   198,
     237,    92,     4,    94,   391,   460,   453,    99,   224,   103,
       5,     6,   231,   151,   283,   284,   285,   286,   287,   288,
       7,     8,   248,   249,   250,   251,     9,   252,   151,   464,
     125,    10,   198,   475,    11,   236,   352,   131,    47,    48,
      49,   237,   232,    96,   111,   125,   108,   117,   122,   109,
     473,   115,   476,   138,  -260,  -260,   152,    12,  -260,  -260,
     140,   246,   247,   248,   249,   250,   251,   146,   252,   147,
     153,   215,    13,   179,   181,   183,   434,   187,    76,   126,
     127,   197,   198,   199,   200,   153,   203,   233,   123,   209,
     210,   217,   154,   155,   126,   127,   221,   253,   224,   254,
     156,   255,   256,   266,   257,   128,   261,   154,   155,   267,
     268,   270,   272,   276,     9,   156,   234,   295,   232,   298,
     128,   312,   308,   372,   235,   236,   372,   354,   318,   337,
     340,   237,   238,   341,   344,   343,   362,   380,   363,   316,
      14,   239,   240,   241,   242,   243,   386,   226,   244,   245,
     372,   246,   247,   248,   249,   250,   251,   373,   252,   390,
     373,   232,   374,   233,   393,   374,   394,   395,   375,   376,
     412,   375,   376,   252,   398,   413,   425,   426,   416,   429,
     423,   424,   427,   377,   373,   388,   377,  -259,   378,   374,
    -259,   378,   296,   232,   428,   375,   376,   431,   436,   465,
     432,   236,   441,   442,   457,   461,   233,   237,   238,   459,
     377,   462,   463,   110,   470,   378,   471,   239,   240,   241,
     242,   243,   472,   208,   244,   245,   479,   246,   247,   248,
     249,   250,   251,    70,   252,   296,   411,   448,  -260,    53,
     439,   277,   182,   409,   236,   118,    77,   279,   347,   310,
     237,   238,   478,   291,   229,   454,   466,   455,     0,   467,
     239,   240,   241,   242,   243,     0,  -232,   244,   245,  -233,
     246,   247,   248,   249,   250,   251,   236,   252,   400,     0,
       0,     0,   237,  -260,   401,     0,     0,     0,     0,     0,
       0,   402,  -260,  -260,  -260,   242,   243,     0,     0,   244,
     245,     0,   246,   247,   248,   249,   250,   251,     0,   252,
       0,     0,     0,     0,     0,   403,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   405,     0,     0,
       0,   406,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407
};

static const yytype_int16 yycheck[] =
{
      14,   117,    81,   146,     2,    51,     3,     3,   217,     3,
     274,    19,     4,     5,     6,    44,     6,    85,     3,    12,
     344,    92,    76,     9,   272,     9,   275,   114,   136,     3,
       4,     5,     6,     3,    51,   151,    14,     3,    50,   152,
     156,   154,   380,    73,    27,    53,   133,     3,     4,     5,
       6,   102,   300,   161,    40,   163,    40,    55,   129,    58,
      59,    73,    60,   114,   114,    41,    42,    41,    42,     3,
     279,   101,    53,   119,   120,     3,     4,     5,     6,   166,
     110,     3,   133,   133,    70,    41,    42,    85,    74,   338,
      74,   429,   416,   104,    85,   211,    74,   165,   110,    77,
      98,   109,   215,    95,    78,    95,   104,   105,    89,   318,
     226,    87,   228,    41,    42,   169,   166,     0,   231,   198,
     233,    95,    78,   113,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,    95,
     169,   126,   156,    95,   114,   261,   144,   121,   165,   147,
      78,   415,   144,   145,    95,   164,   126,    48,   125,    10,
     169,   135,   158,   133,   158,   121,    83,    95,   165,   121,
     144,   145,   103,   166,   102,    66,   292,   293,   170,   135,
     121,   390,    56,   157,   158,   102,   136,   166,   144,   145,
     169,   165,   308,   121,    81,   209,   170,   168,     3,    50,
     117,   157,   158,   316,   167,   203,   252,   135,   165,   165,
      84,    99,    86,   163,   170,   114,   144,   145,   117,    85,
     266,   267,   268,   432,    83,   114,   114,   114,   115,   157,
     158,   113,   106,   165,   133,   167,   118,   165,     3,     4,
       5,     6,   170,   102,   133,   133,   133,   363,   364,   365,
     101,    99,    47,     3,     4,     5,     6,   166,   117,   110,
     169,   114,    51,   277,   117,   344,   114,   188,    57,   166,
     413,   192,   169,   128,    73,   388,    41,    42,   276,   395,
     133,   295,     7,   399,    74,   133,    51,    77,   166,   107,
      15,   169,    42,   409,   116,   166,   166,    22,   169,   169,
     136,   108,    27,     6,   318,   166,   422,     3,   169,   128,
      35,    36,    17,    78,   138,   139,   140,   141,   142,   143,
      45,    46,   158,   159,   160,   161,    51,   163,    78,   166,
      95,    56,   169,   166,    59,   130,   169,   416,   104,   105,
     106,   136,    47,    12,    88,    95,   166,   127,     3,   166,
     466,   113,   468,     4,   149,   150,   121,    82,   153,   154,
     121,   156,   157,   158,   159,   160,   161,    84,   163,    89,
     135,   121,    97,    21,   112,    41,   390,   165,    70,   144,
     145,   166,   169,    41,   165,   135,    85,    92,     4,   165,
     165,   163,   157,   158,   144,   145,    85,   123,   169,   111,
     165,    34,   111,    48,     3,   170,   169,   157,   158,    48,
      48,     3,   126,    89,    51,   165,   121,   165,    47,   166,
     170,     3,    76,    26,   129,   130,    26,   124,   165,     3,
     123,   136,   137,     3,   165,   123,   166,   169,    85,    92,
     165,   146,   147,   148,   149,   150,    63,   114,   153,   154,
      26,   156,   157,   158,   159,   160,   161,    60,   163,   165,
      60,    47,    65,    92,    95,    65,   164,   146,    71,    72,
       3,    71,    72,   163,   146,    84,    90,    71,   165,    90,
     166,   166,    71,    86,    60,   114,    86,    90,    91,    65,
      90,    91,   121,    47,    71,    71,    72,     3,   166,    75,
     127,   130,   165,   165,   165,     6,    92,   136,   137,   166,
      86,     6,    95,    66,   166,    91,   166,   146,   147,   148,
     149,   150,   165,   167,   153,   154,   166,   156,   157,   158,
     159,   160,   161,    19,   163,   121,   346,   413,    92,    10,
     396,   206,   102,   343,   130,    77,    33,   207,   261,   224,
     136,   137,   472,   212,   160,   424,   132,   425,    -1,   457,
     146,   147,   148,   149,   150,    -1,   169,   153,   154,   169,
     156,   157,   158,   159,   160,   161,   130,   163,    25,    -1,
      -1,    -1,   136,   137,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    38,   146,   147,   148,   149,   150,    -1,    -1,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,    -1,   163,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    59,    82,    97,   165,   172,   173,   174,   175,   179,
     181,   182,   185,   186,   193,   195,   199,   200,   203,   206,
     209,   210,   212,   216,    27,     3,   265,     3,     3,    10,
      50,   101,   110,   187,   104,   196,    85,   104,   105,   106,
     201,   125,   228,   196,    50,    73,   110,    73,   101,   110,
      19,    53,   109,   210,   212,     0,   168,   274,   103,   176,
     176,     9,    40,    74,   213,   214,    70,   213,   224,     3,
     167,   165,    85,   128,   188,   188,   188,    73,   107,   197,
     116,   183,   108,   198,     6,   256,    12,   217,   198,     3,
     266,   265,   266,   128,   194,   194,   194,   265,   166,   166,
     174,    88,   210,   211,   216,   113,   215,   127,   211,    48,
      66,   229,     3,     4,     5,    95,   144,   145,   170,   231,
     232,   252,   253,   254,   255,   256,   257,   258,     4,   180,
     121,   266,   265,   266,   188,   198,    84,    89,     3,    41,
      42,    78,   121,   135,   157,   158,   165,   218,   230,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   243,   244,
     245,   246,   248,   249,   250,   251,   252,   264,   265,    21,
     207,   112,   207,    41,   265,   265,   266,   165,   224,   225,
     226,   234,   224,   256,    95,   113,   256,   166,   169,    41,
     165,   202,   265,    85,   184,   253,   265,   165,   167,   165,
     165,   102,   234,   242,    41,   121,   235,   163,   235,   212,
     234,    85,   219,   220,   169,     3,   114,   126,   133,   269,
     270,    17,    47,    92,   121,   129,   130,   136,   137,   146,
     147,   148,   149,   150,   153,   154,   156,   157,   158,   159,
     160,   161,   163,   123,   111,    34,   111,     3,   177,   178,
     229,   169,    81,   115,   227,   229,    48,    48,    48,   252,
       3,   275,   126,    85,   165,   265,    89,   202,   166,   217,
       3,   158,   212,   138,   139,   140,   141,   142,   143,   247,
     234,   242,    83,   102,   117,   165,   121,   230,   166,   166,
     165,   259,   260,   261,   262,   263,   265,   271,    76,   221,
     233,   234,     3,   234,   235,   235,    92,   129,   165,    95,
     121,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   256,     3,   204,   205,
     123,     3,   190,   123,   165,   166,   169,   226,   256,   256,
     256,   166,   169,   209,   124,   189,   190,   221,   265,    57,
     212,   230,   166,    85,    99,    83,   117,   234,   234,   212,
     164,   209,    26,    60,    65,    71,    72,    86,    91,   272,
     169,   126,   267,   268,   269,   234,    63,   222,   114,   235,
     165,   212,   230,    95,   164,   146,   169,   221,   146,   208,
      25,    31,    38,    62,    79,    94,    98,   119,   191,   208,
     232,   178,     3,    84,   166,   169,   165,   166,   234,   234,
     234,   117,    99,   166,   166,    90,    71,    71,    71,    90,
     260,     3,   127,   235,   212,   230,   166,   166,   234,   205,
     234,   165,   165,    95,   121,   192,   234,   166,   184,   190,
     232,   166,   117,   234,   268,   261,   260,   165,   230,   166,
     166,     6,     6,    95,   166,    75,   132,   275,    44,   223,
     166,   166,   165,   234,   273,   166,   234,     3,   251,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   171,   172,   173,   173,   174,   174,   174,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   176,   176,
     177,   177,   178,   178,   179,   180,   181,   181,   182,   183,
     184,   185,   185,   185,   186,   186,   186,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   192,   193,   193,   193,
     193,   194,   194,   195,   196,   196,   197,   197,   198,   198,
     199,   200,   200,   201,   201,   201,   201,   202,   202,   203,
     204,   204,   205,   206,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   210,   210,   211,   211,   212,   212,   213,
     214,   214,   214,   215,   215,   216,   217,   217,   218,   219,
     219,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   227,   227,   227,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   230,   230,   231,   231,
     232,   232,   233,   234,   234,   234,   234,   234,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   236,   236,
     237,   237,   237,   237,   237,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   239,   239,   240,   240,
     240,   240,   241,   241,   241,   241,   242,   242,   243,   243,
     244,   244,   244,   244,   244,   244,   244,   245,   245,   246,
     247,   247,   247,   247,   247,   247,   248,   249,   250,   251,
     251,   251,   251,   252,   252,   252,   252,   252,   253,   254,
     254,   255,   255,   256,   257,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   264,   265,   265,   266,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   271,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     273,   274,   274,   275,   275
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     0,
       1,     3,     1,     4,     4,     1,     2,     5,     7,     1,
       1,     2,     2,     3,     9,     8,     7,     4,     4,     1,
       0,     3,     0,     1,     3,     3,     1,     1,     1,     1,
       1,     4,     4,     1,     1,     2,     0,     4,     4,     4,
       3,     2,     0,     7,     1,     0,     1,     0,     1,     0,
       2,    10,     7,     1,     1,     1,     0,     3,     0,     7,
       1,     3,     3,     8,     8,     6,     1,     0,     1,     0,
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
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1744 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1750 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1756 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1762 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* statement_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1775 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1781 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* preparable_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1787 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* opt_hints  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1800 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* hint_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1813 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* hint  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1819 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* prepare_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1825 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* prepare_target_query  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1831 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* execute_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1837 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* import_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1843 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* import_file_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1849 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* file_path  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1855 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* show_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1861 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* create_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1867 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_temporary  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_not_exists  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* column_def_commalist  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* column_def  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1898 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* column_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1904 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_column_nullable  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1910 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* drop_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1916 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_exists  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1922 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* delete_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1928 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_low_priority  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1934 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_quick  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1940 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_ignore  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1946 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* truncate_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1952 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* insert_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1958 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_priority  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1964 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_column_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1977 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* update_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1983 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* update_clause_commalist  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1996 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* update_clause  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2002 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* alter_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_stmt)); }
#line 2008 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_default  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2014 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_equal  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2020 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* select_statement  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2026 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* select_with_paren  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2032 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* select_paren_or_clause  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2038 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* select_no_paren  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2044 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* select_clause  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2050 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_distinct  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2056 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* select_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2069 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_from_clause  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2075 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* from_clause  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_where  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2087 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_group  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_having  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_order  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* order_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2125 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* order_desc  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2131 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* opt_order_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2137 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* opt_top  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2143 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* opt_limit  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2149 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* expr_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2162 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* opt_literal_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* literal_list  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2188 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* expr_alias  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2194 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2200 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* operand  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2206 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* scalar_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2212 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* unary_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2218 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* binary_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2224 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* logic_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2230 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* in_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2236 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* case_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2242 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* case_list  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2248 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* exists_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2254 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* comp_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2260 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* function_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2266 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* extract_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2272 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* datetime_field  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2278 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* array_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2284 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* array_index  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2290 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* between_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2296 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* column_name  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2302 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* literal  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2308 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* string_literal  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2314 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* bool_literal  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2320 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* num_literal  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2326 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* int_literal  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2332 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* null_literal  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2338 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* param_expr  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2344 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* table_ref  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2350 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* table_ref_atomic  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* nonjoin_table_ref_atomic  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2362 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* table_ref_commalist  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2375 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* table_ref_name  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2381 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* table_ref_name_no_alias  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2387 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* table_name  */
#line 144 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2393 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* db_name  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).db_name).name) ); }
#line 2399 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* table_alias  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2405 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_table_alias  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2411 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* alias  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2417 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* opt_alias  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2423 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* join_clause  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2429 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_join_type  */
#line 143 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2435 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* join_condition  */
#line 155 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* ident_commalist  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2454 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2573 "bison_parser.cpp" /* yacc.c:1429  */
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
#line 261 "bison_parser.y" /* yacc.c:1646  */
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
#line 2778 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 282 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2789 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 288 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 297 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2809 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 301 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2818 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 305 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 312 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 313 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 314 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 315 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 316 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 317 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 2862 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 318 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2868 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 319 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 320 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2880 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 321 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2886 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 330 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2892 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 331 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2898 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 336 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2904 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 337 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2910 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 341 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2919 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 345 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 357 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2939 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 367 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2948 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 371 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2958 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 383 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2969 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 392 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kImportCSV; }
#line 2975 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 396 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2981 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 407 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 410 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowDatabases);
		}
#line 2997 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 413 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3007 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 428 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->temporary = (yyvsp[-7].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3020 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 436 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->temporary = (yyvsp[-6].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3033 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 444 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3046 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 452 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateDatabase);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->databaseName = (yyvsp[0].db_name).name;
		}
#line 3056 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 457 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateDatabase);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->databaseName = (yyvsp[0].db_name).name;
		}
#line 3066 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 465 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3072 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 466 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3078 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 470 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3084 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 471 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3090 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 475 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 476 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3102 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 480 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3110 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 486 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3116 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 487 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3122 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 488 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3128 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 489 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3134 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 490 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3140 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 491 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3146 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 492 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3152 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 493 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3158 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 497 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3164 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 498 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3170 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 499 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3176 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 510 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3187 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 516 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3198 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 522 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropDatabase);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->name = (yyvsp[0].db_name).name;
		}
#line 3208 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 527 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3218 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 535 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3224 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 536 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3230 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 545 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->low_priority = (yyvsp[-5].bval);
			(yyval.delete_stmt)->quick = (yyvsp[-4].bval);
			(yyval.delete_stmt)->ignore = (yyvsp[-3].bval);
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3244 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 557 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3250 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 558 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3256 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 562 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3262 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 563 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3268 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 567 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3274 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 568 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3280 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 572 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3290 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 585 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->priority = (yyvsp[-8].bval);
			(yyval.insert_stmt)->ignore = (yyvsp[-7].bval);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3304 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 594 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->priority = (yyvsp[-5].bval);
			(yyval.insert_stmt)->ignore = (yyvsp[-4].bval);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3318 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 607 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3324 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 608 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3330 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 609 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3336 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 610 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3342 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 614 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3348 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 615 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3354 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 625 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->low_priority = (yyvsp[-5].bval);
		(yyval.update_stmt)->ignore = (yyvsp[-4].bval);
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3367 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 636 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3373 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 637 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3379 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 641 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3389 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 656 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.alter_stmt) = new AlterStatement(kAlterDatabase);
			(yyval.alter_stmt)->tableName = (yyvsp[-5].db_name).name;
			(yyval.alter_stmt)->dflt = (yyvsp[-4].bval);
			(yyval.alter_stmt)->equal = (yyvsp[-1].bval);
			(yyval.alter_stmt)->charsetName = (yyvsp[0].expr);
		}
#line 3401 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 663 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.alter_stmt) = new AlterStatement(kAlterSchema);
			(yyval.alter_stmt)->tableName = (yyvsp[-5].db_name).name;
			(yyval.alter_stmt)->dflt = (yyvsp[-4].bval);
			(yyval.alter_stmt)->equal = (yyvsp[-1].bval);
			(yyval.alter_stmt)->charsetName = (yyvsp[0].expr);
		}
#line 3413 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 670 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.alter_stmt) = new AlterStatement(kAlterTable);
			(yyval.alter_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.alter_stmt)->columns = (yyvsp[0].column_t);
		}
#line 3423 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 678 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3429 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 679 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3435 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 683 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3441 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 684 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3447 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 696 "bison_parser.y" /* yacc.c:1646  */
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
#line 3466 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 713 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3472 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 714 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3478 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 723 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3493 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 733 "bison_parser.y" /* yacc.c:1646  */
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
#line 3512 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 765 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3526 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 777 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3532 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 778 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3538 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 786 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3544 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 787 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 3550 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 790 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3556 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 795 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3562 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 800 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3578 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 805 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3584 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 809 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3590 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 810 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3596 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 813 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 814 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3608 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3614 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 819 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3620 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 823 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3626 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 827 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3632 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 828 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 829 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3644 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 835 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3650 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 836 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3656 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 840 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3662 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 841 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3668 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 842 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3674 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 843 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3680 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 844 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr;  }
#line 3686 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 845 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3692 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3698 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 847 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3704 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 854 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3710 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 855 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3716 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 859 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3722 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 860 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3728 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 864 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3734 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 865 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3740 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 869 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3752 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3758 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 896 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3764 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 905 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3770 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 906 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3776 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 907 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 908 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 909 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3794 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 914 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 915 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3806 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 916 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3812 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 917 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3818 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 918 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3824 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 919 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 920 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3836 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 921 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3842 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 922 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3848 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 923 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3854 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 927 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3860 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 928 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3866 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 932 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3872 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 933 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3878 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 934 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3884 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 935 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3890 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 941 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3896 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 942 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3902 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 943 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3908 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 944 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3914 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 948 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3920 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 949 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3926 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 953 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3932 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 954 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3938 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 958 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3944 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3950 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 960 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3956 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 961 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3962 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 962 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3968 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 963 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3974 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 964 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3980 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 968 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3986 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 969 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3992 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 973 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3998 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 977 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4004 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 978 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4010 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4016 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4022 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 981 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4028 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 982 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 985 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4040 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 989 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4046 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 993 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 997 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4058 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 998 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4064 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 999 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 4070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1000 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4076 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1012 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4082 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1016 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4088 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1017 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 4094 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1021 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4100 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1026 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4106 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1030 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4112 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1034 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4122 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1047 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4133 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1063 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4144 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1072 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4150 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1073 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4156 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1078 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4168 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1089 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4178 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1098 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4184 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1099 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1104 "bison_parser.y" /* yacc.c:1646  */
    {(yyval.db_name).name = (yyvsp[0].sval);}
#line 4196 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1110 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4202 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1116 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4208 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1120 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4214 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1121 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4220 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1127 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4226 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1136 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4238 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1144 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4251 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1154 "bison_parser.y" /* yacc.c:1646  */
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
#line 4271 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1172 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4277 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1173 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 4283 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1174 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 4289 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1175 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1176 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 4301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1177 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4307 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1178 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4313 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1179 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinFull; }
#line 4319 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1180 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 4325 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1181 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 4331 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1201 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4337 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1202 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4343 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 4347 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 1205 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
