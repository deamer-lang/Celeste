/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         Celesteparse
#define yylex           Celestelex
#define yyerror         Celesteerror
#define yydebug         Celestedebug
#define yynerrs         Celestenerrs
#define yylval          Celestelval
#define yychar          Celestechar

/* First part of user prologue.  */
#line 1 "./Celeste_parser.y"

#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "Celeste/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/Celeste_lexer.h"
#undef YY_NO_UNISTD_H
#include "Celeste/Ast/Enum/Type.h"
#include "Celeste/Ast/Node/CLASS.h"
#include "Celeste/Ast/Node/ENUM.h"
#include "Celeste/Ast/Node/FUNCTION.h"
#include "Celeste/Ast/Node/IF.h"
#include "Celeste/Ast/Node/ELSE.h"
#include "Celeste/Ast/Node/LEFT_BRACKET.h"
#include "Celeste/Ast/Node/RIGHT_BRACKET.h"
#include "Celeste/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "Celeste/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "Celeste/Ast/Node/LEFT_PARANTHESIS.h"
#include "Celeste/Ast/Node/RIGHT_PARANTHESIS.h"
#include "Celeste/Ast/Node/COLON.h"
#include "Celeste/Ast/Node/SEMICOLON.h"
#include "Celeste/Ast/Node/COMMA.h"
#include "Celeste/Ast/Node/DOT.h"
#include "Celeste/Ast/Node/EQEQ.h"
#include "Celeste/Ast/Node/EQ.h"
#include "Celeste/Ast/Node/NOTEQ.h"
#include "Celeste/Ast/Node/NOT.h"
#include "Celeste/Ast/Node/PLUS.h"
#include "Celeste/Ast/Node/MINUS.h"
#include "Celeste/Ast/Node/DIVIDE.h"
#include "Celeste/Ast/Node/MULTIPLY.h"
#include "Celeste/Ast/Node/USERDEFINED_OPERATOR.h"
#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/NUMBER.h"
#include "Celeste/Ast/Node/DECIMAL.h"
#include "Celeste/Ast/Node/TEXT.h"
#include "Celeste/Ast/Node/ESCAPE_CHARS.h"

#include "Celeste/Ast/Node/program.h"
#include "Celeste/Ast/Node/deamerreserved_star__stmt__.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/meta_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_star__expression__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.h"
#include "Celeste/Ast/Node/deamerreserved_star__meta_declaration__.h"
#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ast/Node/class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__base_type__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__.h"
#include "Celeste/Ast/Node/base_type.h"
#include "Celeste/Ast/Node/class_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/enum_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__enum_stmt__.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__function_argument__.h"
#include "Celeste/Ast/Node/function_implementation.h"
#include "Celeste/Ast/Node/function_argument.h"
#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ast/Node/function_name.h"
#include "Celeste/Ast/Node/return_type.h"
#include "Celeste/Ast/Node/function_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__function_stmt__.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include "Celeste/Ast/Node/enum_stmt.h"
#include "Celeste/Ast/Node/function_stmt.h"
#include "Celeste/Ast/Node/logical_stmt.h"
#include "Celeste/Ast/Node/condtional_declaration.h"
#include "Celeste/Ast/Node/conditional_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__condtional_stmt__.h"
#include "Celeste/Ast/Node/condtional_stmt.h"
#include "Celeste/Ast/Node/variable_declaration.h"
#include "Celeste/Ast/Node/variable_initialization.h"

#ifndef YY_parse_NERRS
#define YY_parse_NERRS Celestenerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC Celestelloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void Celesteerror(const char* s);
int Celestelex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;

#line 170 "Celeste_parser.tab.c"

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

#include "Celeste_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_ENUM = 4,                       /* ENUM  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_LEFT_BRACKET = 8,               /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 9,              /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 10,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 11,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 12,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 13,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_COLON = 14,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 16,                     /* COMMA  */
  YYSYMBOL_DOT = 17,                       /* DOT  */
  YYSYMBOL_EQEQ = 18,                      /* EQEQ  */
  YYSYMBOL_EQ = 19,                        /* EQ  */
  YYSYMBOL_NOTEQ = 20,                     /* NOTEQ  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_DIVIDE = 24,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 25,                  /* MULTIPLY  */
  YYSYMBOL_USERDEFINED_OPERATOR = 26,      /* USERDEFINED_OPERATOR  */
  YYSYMBOL_VARNAME = 27,                   /* VARNAME  */
  YYSYMBOL_NUMBER = 28,                    /* NUMBER  */
  YYSYMBOL_DECIMAL = 29,                   /* DECIMAL  */
  YYSYMBOL_TEXT = 30,                      /* TEXT  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_deamerreserved_star__stmt__ = 33, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 34,                      /* stmt  */
  YYSYMBOL_meta_declaration = 35,          /* meta_declaration  */
  YYSYMBOL_deamerreserved_star__expression__ = 36, /* deamerreserved_star__expression__  */
  YYSYMBOL_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__ = 37, /* deamerreserved_arrow__RIGHT_SQUARE_BRACKET__  */
  YYSYMBOL_deamerreserved_star__meta_declaration__ = 38, /* deamerreserved_star__meta_declaration__  */
  YYSYMBOL_expression = 39,                /* expression  */
  YYSYMBOL_class_declaration = 40,         /* class_declaration  */
  YYSYMBOL_deamerreserved_arrow__base_type__ = 41, /* deamerreserved_arrow__base_type__  */
  YYSYMBOL_deamerreserved_star__COMMA__ = 42, /* deamerreserved_star__COMMA__  */
  YYSYMBOL_base_type = 43,                 /* base_type  */
  YYSYMBOL_class_block = 44,               /* class_block  */
  YYSYMBOL_deamerreserved_star__class_stmt__ = 45, /* deamerreserved_star__class_stmt__  */
  YYSYMBOL_enum_declaration = 46,          /* enum_declaration  */
  YYSYMBOL_enum_block = 47,                /* enum_block  */
  YYSYMBOL_deamerreserved_star__enum_stmt__ = 48, /* deamerreserved_star__enum_stmt__  */
  YYSYMBOL_function_declaration = 49,      /* function_declaration  */
  YYSYMBOL_deamerreserved_arrow__function_argument__ = 50, /* deamerreserved_arrow__function_argument__  */
  YYSYMBOL_function_implementation = 51,   /* function_implementation  */
  YYSYMBOL_function_argument = 52,         /* function_argument  */
  YYSYMBOL_type = 53,                      /* type  */
  YYSYMBOL_function_name = 54,             /* function_name  */
  YYSYMBOL_return_type = 55,               /* return_type  */
  YYSYMBOL_function_block = 56,            /* function_block  */
  YYSYMBOL_deamerreserved_star__function_stmt__ = 57, /* deamerreserved_star__function_stmt__  */
  YYSYMBOL_class_stmt = 58,                /* class_stmt  */
  YYSYMBOL_enum_stmt = 59,                 /* enum_stmt  */
  YYSYMBOL_function_stmt = 60,             /* function_stmt  */
  YYSYMBOL_logical_stmt = 61,              /* logical_stmt  */
  YYSYMBOL_condtional_declaration = 62,    /* condtional_declaration  */
  YYSYMBOL_conditional_block = 63,         /* conditional_block  */
  YYSYMBOL_deamerreserved_star__condtional_stmt__ = 64, /* deamerreserved_star__condtional_stmt__  */
  YYSYMBOL_condtional_stmt = 65,           /* condtional_stmt  */
  YYSYMBOL_variable_declaration = 66,      /* variable_declaration  */
  YYSYMBOL_variable_initialization = 67    /* variable_initialization  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   233,   233,   241,   245,   252,   256,   260,   264,   268,
     275,   279,   283,   287,   294,   298,   305,   312,   316,   323,
     327,   331,   335,   339,   343,   347,   351,   355,   362,   366,
     373,   380,   384,   391,   398,   405,   409,   416,   423,   430,
     434,   441,   448,   455,   462,   466,   473,   480,   487,   494,
     501,   505,   512,   516,   523,   527,   531,   535,   542,   549,
     553,   557,   564,   568,   572,   579,   586,   590,   597,   604,
     611
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
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "ENUM",
  "FUNCTION", "IF", "ELSE", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_PARANTHESIS",
  "RIGHT_PARANTHESIS", "COLON", "SEMICOLON", "COMMA", "DOT", "EQEQ", "EQ",
  "NOTEQ", "NOT", "PLUS", "MINUS", "DIVIDE", "MULTIPLY",
  "USERDEFINED_OPERATOR", "VARNAME", "NUMBER", "DECIMAL", "TEXT",
  "$accept", "program", "deamerreserved_star__stmt__", "stmt",
  "meta_declaration", "deamerreserved_star__expression__",
  "deamerreserved_arrow__RIGHT_SQUARE_BRACKET__",
  "deamerreserved_star__meta_declaration__", "expression",
  "class_declaration", "deamerreserved_arrow__base_type__",
  "deamerreserved_star__COMMA__", "base_type", "class_block",
  "deamerreserved_star__class_stmt__", "enum_declaration", "enum_block",
  "deamerreserved_star__enum_stmt__", "function_declaration",
  "deamerreserved_arrow__function_argument__", "function_implementation",
  "function_argument", "type", "function_name", "return_type",
  "function_block", "deamerreserved_star__function_stmt__", "class_stmt",
  "enum_stmt", "function_stmt", "logical_stmt", "condtional_declaration",
  "conditional_block", "deamerreserved_star__condtional_stmt__",
  "condtional_stmt", "variable_declaration", "variable_initialization", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      29,   -10,    -9,    -7,    70,    38,   -85,    29,   -85,   -85,
     -85,   -85,   -85,    55,    32,   -85,    40,   -85,   -85,   -85,
     -85,    30,    60,   -85,   -85,    72,    74,   -85,    10,   -85,
      75,    61,   -85,    70,    70,    70,    70,    70,   -85,    87,
     -85,   -85,    72,   -85,    74,    88,    76,    89,    97,    10,
     -85,    75,    88,    80,    -7,    98,   -85,   -85,   -85,   -85,
      69,    69,    69,    69,    69,   -85,   -85,   101,    88,   -85,
      94,   -85,   -85,   -85,    99,   -85,    92,   102,   -85,   -85,
     -85,   -85,    86,    70,    75,   -85,    59,    69,    75,     2,
     -85,   -85,   103,   105,    67,    91,   106,     2,   -85,   -85,
     -85,   -85,    86,    70,   107,    70,     0,   -85,   -85,   108,
      -1,    70,    23,   -85,    70,   112,    31,   112,    36,     2,
     -85,   112,   -85,   -85,   -85,   113,     2,   -85,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,    15,     0,     2,     4,     9,     5,
       6,     7,     8,     0,     0,    47,     0,    24,    25,    26,
      27,     0,    15,     1,     3,    36,     0,    29,    40,    37,
       0,    18,    10,     0,     0,     0,     0,     0,    14,     0,
      52,    53,    36,    33,     0,    32,     0,    57,     0,    40,
      46,     0,    32,     0,     0,    18,    16,    11,    12,    13,
      19,    20,    21,    22,    23,    34,    35,     0,    32,    30,
      55,    56,    38,    39,     0,    42,    45,     0,    17,    28,
      31,    54,     0,     0,     0,    48,     0,    44,     0,    51,
      41,    43,     0,     0,     0,     0,     0,    51,    58,    61,
      59,    60,     0,     0,     0,     0,     0,    49,    50,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,    67,
      62,     0,    64,    70,    68,     0,    67,    63,    65,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,   114,   -85,   -24,   104,   -85,    73,   -33,    93,
     -85,   -38,    81,    62,    85,   100,   -85,    83,   -15,    46,
     -14,   -45,   -84,    79,    33,   -85,    37,   -85,   -85,   -85,
     -51,   -85,   -41,    11,   -85,   -85,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    21,    32,    56,    22,     9,
      44,    69,    45,    27,    39,    10,    29,    48,    11,    51,
      12,    52,    53,    16,    86,    91,    96,    42,    49,    97,
      98,    99,   120,   125,   126,   100,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      60,    61,    62,    63,    64,    95,    74,    55,    93,    94,
      40,    41,   115,    95,    75,   113,    59,    13,    14,   114,
      15,    33,    34,    35,    36,    37,    46,    40,    41,    50,
      80,    55,     1,     2,     3,    95,   117,    47,    23,     4,
      28,    31,    95,    92,   121,    33,    34,    35,    36,    37,
      87,   123,    30,    33,    34,    35,    36,    37,    33,    34,
      35,    36,    37,    25,     1,     2,    54,    89,   124,    26,
     110,     4,   112,   104,    90,   124,   122,     3,   116,   105,
     127,   118,    33,    34,    35,    36,    37,    17,    18,    19,
      20,    33,    34,    35,    36,    37,    65,    17,    18,    19,
      20,    43,    50,    70,    68,    71,    72,    76,     4,    25,
      81,    83,    82,    85,    84,   107,   102,   103,   106,   111,
     119,    24,   128,    90,    57,    67,    38,    66,    78,    79,
      88,    58,    73,    77,   108,   109,     0,   129
};

static const yytype_int8 yycheck[] =
{
      33,    34,    35,    36,    37,    89,    51,    31,     6,     7,
      25,    25,    13,    97,    52,    15,    31,    27,    27,    19,
      27,    22,    23,    24,    25,    26,    16,    42,    42,    27,
      68,    55,     3,     4,     5,   119,    13,    27,     0,    10,
       8,    11,   126,    88,    13,    22,    23,    24,    25,    26,
      83,    15,    12,    22,    23,    24,    25,    26,    22,    23,
      24,    25,    26,     8,     3,     4,     5,     8,   119,    14,
     103,    10,   105,     6,    15,   126,   117,     5,   111,    12,
     121,   114,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    22,    23,    24,    25,    26,     9,    27,    28,    29,
      30,    27,    27,    27,    16,    16,     9,    27,    10,     8,
      16,    19,    13,    27,    12,     9,    13,    12,    27,    12,
       8,     7,     9,    15,    31,    44,    22,    42,    55,    67,
      84,    31,    49,    54,    97,   102,    -1,   126
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    10,    32,    33,    34,    35,    40,
      46,    49,    51,    27,    27,    27,    54,    27,    28,    29,
      30,    36,    39,     0,    33,     8,    14,    44,     8,    47,
      12,    11,    37,    22,    23,    24,    25,    26,    36,    45,
      49,    51,    58,    27,    41,    43,    16,    27,    48,    59,
      27,    50,    52,    53,     5,    35,    38,    40,    46,    49,
      39,    39,    39,    39,    39,     9,    45,    43,    16,    42,
      27,    16,     9,    48,    52,    42,    27,    54,    38,    44,
      42,    16,    13,    19,    12,    27,    55,    39,    50,     8,
      15,    56,    52,     6,     7,    53,    57,    60,    61,    62,
      66,    67,    13,    12,     6,    12,    27,     9,    57,    55,
      39,    12,    39,    15,    19,    13,    39,    13,    39,     8,
      63,    13,    63,    15,    61,    64,    65,    63,     9,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    34,    34,
      35,    35,    35,    35,    36,    36,    37,    38,    38,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    40,    40,
      41,    42,    42,    43,    44,    45,    45,    46,    47,    48,
      48,    49,    50,    51,    52,    52,    53,    54,    55,    56,
      57,    57,    58,    58,    59,    59,    59,    59,    60,    61,
      61,    61,    62,    62,    62,    63,    64,    64,    65,    66,
      67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     2,     0,     2,     2,     0,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     6,     3,
       2,     2,     0,     1,     3,     2,     0,     3,     3,     2,
       0,     8,     2,     8,     4,     2,     1,     1,     1,     3,
       2,     0,     1,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     5,     6,     5,     3,     2,     0,     1,     3,
       5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* program: deamerreserved_star__stmt__  */
#line 233 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::program({::Celeste::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_deamerreserved_star__stmt__) });
		(yyval.Celeste_program) = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1334 "Celeste_parser.tab.c"
    break;

  case 3: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 241 "./Celeste_parser.y"
                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_stmt), (yyvsp[0].Celeste_deamerreserved_star__stmt__) });
		(yyval.Celeste_deamerreserved_star__stmt__) = newNode;
	}
#line 1343 "Celeste_parser.tab.c"
    break;

  case 4: /* deamerreserved_star__stmt__: %empty  */
#line 245 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__stmt__) = newNode;
	}
#line 1352 "Celeste_parser.tab.c"
    break;

  case 5: /* stmt: class_declaration  */
#line 252 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_class_declaration) });
		(yyval.Celeste_stmt) = newNode;
	}
#line 1361 "Celeste_parser.tab.c"
    break;

  case 6: /* stmt: enum_declaration  */
#line 256 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_enum_declaration) });
		(yyval.Celeste_stmt) = newNode;
	}
#line 1370 "Celeste_parser.tab.c"
    break;

  case 7: /* stmt: function_declaration  */
#line 260 "./Celeste_parser.y"
                               {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_function_declaration) });
		(yyval.Celeste_stmt) = newNode;
	}
#line 1379 "Celeste_parser.tab.c"
    break;

  case 8: /* stmt: function_implementation  */
#line 264 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_function_implementation) });
		(yyval.Celeste_stmt) = newNode;
	}
#line 1388 "Celeste_parser.tab.c"
    break;

  case 9: /* stmt: meta_declaration  */
#line 268 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_meta_declaration) });
		(yyval.Celeste_stmt) = newNode;
	}
#line 1397 "Celeste_parser.tab.c"
    break;

  case 10: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ deamerreserved_arrow__RIGHT_SQUARE_BRACKET__  */
#line 275 "./Celeste_parser.y"
                                                                                                           {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_deamerreserved_star__expression__), (yyvsp[0].Celeste_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__) });
		(yyval.Celeste_meta_declaration) = newNode;
	}
#line 1406 "Celeste_parser.tab.c"
    break;

  case 11: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET class_declaration  */
#line 279 "./Celeste_parser.y"
                                                                                                       {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_deamerreserved_star__expression__), (yyvsp[0].Celeste_class_declaration) });
		(yyval.Celeste_meta_declaration) = newNode;
	}
#line 1415 "Celeste_parser.tab.c"
    break;

  case 12: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET enum_declaration  */
#line 283 "./Celeste_parser.y"
                                                                                                      {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_deamerreserved_star__expression__), (yyvsp[0].Celeste_enum_declaration) });
		(yyval.Celeste_meta_declaration) = newNode;
	}
#line 1424 "Celeste_parser.tab.c"
    break;

  case 13: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET function_declaration  */
#line 287 "./Celeste_parser.y"
                                                                                                          {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_deamerreserved_star__expression__), (yyvsp[0].Celeste_function_declaration) });
		(yyval.Celeste_meta_declaration) = newNode;
	}
#line 1433 "Celeste_parser.tab.c"
    break;

  case 14: /* deamerreserved_star__expression__: expression deamerreserved_star__expression__  */
#line 294 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__expression__({::Celeste::ast::Type::deamerreserved_star__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_expression), (yyvsp[0].Celeste_deamerreserved_star__expression__) });
		(yyval.Celeste_deamerreserved_star__expression__) = newNode;
	}
#line 1442 "Celeste_parser.tab.c"
    break;

  case 15: /* deamerreserved_star__expression__: %empty  */
#line 298 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__expression__({::Celeste::ast::Type::deamerreserved_star__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__expression__) = newNode;
	}
#line 1451 "Celeste_parser.tab.c"
    break;

  case 16: /* deamerreserved_arrow__RIGHT_SQUARE_BRACKET__: RIGHT_SQUARE_BRACKET deamerreserved_star__meta_declaration__  */
#line 305 "./Celeste_parser.y"
                                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__({::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_deamerreserved_star__meta_declaration__) });
		(yyval.Celeste_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__) = newNode;
	}
#line 1460 "Celeste_parser.tab.c"
    break;

  case 17: /* deamerreserved_star__meta_declaration__: meta_declaration deamerreserved_star__meta_declaration__  */
#line 312 "./Celeste_parser.y"
                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__meta_declaration__({::Celeste::ast::Type::deamerreserved_star__meta_declaration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_meta_declaration), (yyvsp[0].Celeste_deamerreserved_star__meta_declaration__) });
		(yyval.Celeste_deamerreserved_star__meta_declaration__) = newNode;
	}
#line 1469 "Celeste_parser.tab.c"
    break;

  case 18: /* deamerreserved_star__meta_declaration__: %empty  */
#line 316 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__meta_declaration__({::Celeste::ast::Type::deamerreserved_star__meta_declaration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__meta_declaration__) = newNode;
	}
#line 1478 "Celeste_parser.tab.c"
    break;

  case 19: /* expression: expression PLUS expression  */
#line 323 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::PLUS({::Celeste::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1487 "Celeste_parser.tab.c"
    break;

  case 20: /* expression: expression MINUS expression  */
#line 327 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::MINUS({::Celeste::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1496 "Celeste_parser.tab.c"
    break;

  case 21: /* expression: expression DIVIDE expression  */
#line 331 "./Celeste_parser.y"
                                       {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::DIVIDE({::Celeste::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1505 "Celeste_parser.tab.c"
    break;

  case 22: /* expression: expression MULTIPLY expression  */
#line 335 "./Celeste_parser.y"
                                         {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::MULTIPLY({::Celeste::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1514 "Celeste_parser.tab.c"
    break;

  case 23: /* expression: expression USERDEFINED_OPERATOR expression  */
#line 339 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::USERDEFINED_OPERATOR({::Celeste::ast::Type::USERDEFINED_OPERATOR, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1523 "Celeste_parser.tab.c"
    break;

  case 24: /* expression: VARNAME  */
#line 343 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1532 "Celeste_parser.tab.c"
    break;

  case 25: /* expression: NUMBER  */
#line 347 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::NUMBER({::Celeste::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1541 "Celeste_parser.tab.c"
    break;

  case 26: /* expression: DECIMAL  */
#line 351 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::DECIMAL({::Celeste::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1550 "Celeste_parser.tab.c"
    break;

  case 27: /* expression: TEXT  */
#line 355 "./Celeste_parser.y"
               {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, {8, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_expression) = newNode;
	}
#line 1559 "Celeste_parser.tab.c"
    break;

  case 28: /* class_declaration: CLASS VARNAME COLON deamerreserved_arrow__base_type__ base_type class_block  */
#line 362 "./Celeste_parser.y"
                                                                                    {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-5].Terminal)}), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), (yyvsp[-2].Celeste_deamerreserved_arrow__base_type__), (yyvsp[-1].Celeste_base_type), (yyvsp[0].Celeste_class_block) });
		(yyval.Celeste_class_declaration) = newNode;
	}
#line 1568 "Celeste_parser.tab.c"
    break;

  case 29: /* class_declaration: CLASS VARNAME class_block  */
#line 366 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_class_block) });
		(yyval.Celeste_class_declaration) = newNode;
	}
#line 1577 "Celeste_parser.tab.c"
    break;

  case 30: /* deamerreserved_arrow__base_type__: base_type deamerreserved_star__COMMA__  */
#line 373 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__base_type__({::Celeste::ast::Type::deamerreserved_arrow__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_base_type), (yyvsp[0].Celeste_deamerreserved_star__COMMA__) });
		(yyval.Celeste_deamerreserved_arrow__base_type__) = newNode;
	}
#line 1586 "Celeste_parser.tab.c"
    break;

  case 31: /* deamerreserved_star__COMMA__: COMMA deamerreserved_star__COMMA__  */
#line 380 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__({::Celeste::ast::Type::deamerreserved_star__COMMA__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_deamerreserved_star__COMMA__) });
		(yyval.Celeste_deamerreserved_star__COMMA__) = newNode;
	}
#line 1595 "Celeste_parser.tab.c"
    break;

  case 32: /* deamerreserved_star__COMMA__: %empty  */
#line 384 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__({::Celeste::ast::Type::deamerreserved_star__COMMA__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__COMMA__) = newNode;
	}
#line 1604 "Celeste_parser.tab.c"
    break;

  case 33: /* base_type: VARNAME  */
#line 391 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::base_type({::Celeste::ast::Type::base_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_base_type) = newNode;
	}
#line 1613 "Celeste_parser.tab.c"
    break;

  case 34: /* class_block: LEFT_BRACKET deamerreserved_star__class_stmt__ RIGHT_BRACKET  */
#line 398 "./Celeste_parser.y"
                                                                     {
		auto* const newNode = new Celeste::ast::node::class_block({::Celeste::ast::Type::class_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_deamerreserved_star__class_stmt__) });
		(yyval.Celeste_class_block) = newNode;
	}
#line 1622 "Celeste_parser.tab.c"
    break;

  case 35: /* deamerreserved_star__class_stmt__: class_stmt deamerreserved_star__class_stmt__  */
#line 405 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_class_stmt), (yyvsp[0].Celeste_deamerreserved_star__class_stmt__) });
		(yyval.Celeste_deamerreserved_star__class_stmt__) = newNode;
	}
#line 1631 "Celeste_parser.tab.c"
    break;

  case 36: /* deamerreserved_star__class_stmt__: %empty  */
#line 409 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__class_stmt__) = newNode;
	}
#line 1640 "Celeste_parser.tab.c"
    break;

  case 37: /* enum_declaration: ENUM VARNAME enum_block  */
#line 416 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::enum_declaration({::Celeste::ast::Type::enum_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::ENUM({::Celeste::ast::Type::ENUM, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_enum_block) });
		(yyval.Celeste_enum_declaration) = newNode;
	}
#line 1649 "Celeste_parser.tab.c"
    break;

  case 38: /* enum_block: LEFT_BRACKET deamerreserved_star__enum_stmt__ RIGHT_BRACKET  */
#line 423 "./Celeste_parser.y"
                                                                    {
		auto* const newNode = new Celeste::ast::node::enum_block({::Celeste::ast::Type::enum_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_deamerreserved_star__enum_stmt__) });
		(yyval.Celeste_enum_block) = newNode;
	}
#line 1658 "Celeste_parser.tab.c"
    break;

  case 39: /* deamerreserved_star__enum_stmt__: enum_stmt deamerreserved_star__enum_stmt__  */
#line 430 "./Celeste_parser.y"
                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enum_stmt__({::Celeste::ast::Type::deamerreserved_star__enum_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_enum_stmt), (yyvsp[0].Celeste_deamerreserved_star__enum_stmt__) });
		(yyval.Celeste_deamerreserved_star__enum_stmt__) = newNode;
	}
#line 1667 "Celeste_parser.tab.c"
    break;

  case 40: /* deamerreserved_star__enum_stmt__: %empty  */
#line 434 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enum_stmt__({::Celeste::ast::Type::deamerreserved_star__enum_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__enum_stmt__) = newNode;
	}
#line 1676 "Celeste_parser.tab.c"
    break;

  case 41: /* function_declaration: FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ function_argument RIGHT_PARANTHESIS return_type SEMICOLON  */
#line 441 "./Celeste_parser.y"
                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-7].Terminal)}), (yyvsp[-6].Celeste_function_name), (yyvsp[-4].Celeste_deamerreserved_arrow__function_argument__), (yyvsp[-3].Celeste_function_argument), (yyvsp[-1].Celeste_return_type) });
		(yyval.Celeste_function_declaration) = newNode;
	}
#line 1685 "Celeste_parser.tab.c"
    break;

  case 42: /* deamerreserved_arrow__function_argument__: function_argument deamerreserved_star__COMMA__  */
#line 448 "./Celeste_parser.y"
                                                       {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__function_argument__({::Celeste::ast::Type::deamerreserved_arrow__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_function_argument), (yyvsp[0].Celeste_deamerreserved_star__COMMA__) });
		(yyval.Celeste_deamerreserved_arrow__function_argument__) = newNode;
	}
#line 1694 "Celeste_parser.tab.c"
    break;

  case 43: /* function_implementation: FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ function_argument RIGHT_PARANTHESIS return_type function_block  */
#line 455 "./Celeste_parser.y"
                                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::function_implementation({::Celeste::ast::Type::function_implementation, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-7].Terminal)}), (yyvsp[-6].Celeste_function_name), (yyvsp[-4].Celeste_deamerreserved_arrow__function_argument__), (yyvsp[-3].Celeste_function_argument), (yyvsp[-1].Celeste_return_type), (yyvsp[0].Celeste_function_block) });
		(yyval.Celeste_function_implementation) = newNode;
	}
#line 1703 "Celeste_parser.tab.c"
    break;

  case 44: /* function_argument: type VARNAME EQ expression  */
#line 462 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-3].Celeste_type), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_function_argument) = newNode;
	}
#line 1712 "Celeste_parser.tab.c"
    break;

  case 45: /* function_argument: type VARNAME  */
#line 466 "./Celeste_parser.y"
                       {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_type), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_function_argument) = newNode;
	}
#line 1721 "Celeste_parser.tab.c"
    break;

  case 46: /* type: VARNAME  */
#line 473 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_type) = newNode;
	}
#line 1730 "Celeste_parser.tab.c"
    break;

  case 47: /* function_name: VARNAME  */
#line 480 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::function_name({::Celeste::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_function_name) = newNode;
	}
#line 1739 "Celeste_parser.tab.c"
    break;

  case 48: /* return_type: VARNAME  */
#line 487 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::return_type({::Celeste::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_return_type) = newNode;
	}
#line 1748 "Celeste_parser.tab.c"
    break;

  case 49: /* function_block: LEFT_BRACKET deamerreserved_star__function_stmt__ RIGHT_BRACKET  */
#line 494 "./Celeste_parser.y"
                                                                        {
		auto* const newNode = new Celeste::ast::node::function_block({::Celeste::ast::Type::function_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_deamerreserved_star__function_stmt__) });
		(yyval.Celeste_function_block) = newNode;
	}
#line 1757 "Celeste_parser.tab.c"
    break;

  case 50: /* deamerreserved_star__function_stmt__: function_stmt deamerreserved_star__function_stmt__  */
#line 501 "./Celeste_parser.y"
                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__function_stmt__({::Celeste::ast::Type::deamerreserved_star__function_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_function_stmt), (yyvsp[0].Celeste_deamerreserved_star__function_stmt__) });
		(yyval.Celeste_deamerreserved_star__function_stmt__) = newNode;
	}
#line 1766 "Celeste_parser.tab.c"
    break;

  case 51: /* deamerreserved_star__function_stmt__: %empty  */
#line 505 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__function_stmt__({::Celeste::ast::Type::deamerreserved_star__function_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__function_stmt__) = newNode;
	}
#line 1775 "Celeste_parser.tab.c"
    break;

  case 52: /* class_stmt: function_declaration  */
#line 512 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_function_declaration) });
		(yyval.Celeste_class_stmt) = newNode;
	}
#line 1784 "Celeste_parser.tab.c"
    break;

  case 53: /* class_stmt: function_implementation  */
#line 516 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_function_implementation) });
		(yyval.Celeste_class_stmt) = newNode;
	}
#line 1793 "Celeste_parser.tab.c"
    break;

  case 54: /* enum_stmt: COMMA VARNAME COMMA  */
#line 523 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::enum_stmt({::Celeste::ast::Type::enum_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}) });
		(yyval.Celeste_enum_stmt) = newNode;
	}
#line 1802 "Celeste_parser.tab.c"
    break;

  case 55: /* enum_stmt: COMMA VARNAME  */
#line 527 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::enum_stmt({::Celeste::ast::Type::enum_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_enum_stmt) = newNode;
	}
#line 1811 "Celeste_parser.tab.c"
    break;

  case 56: /* enum_stmt: VARNAME COMMA  */
#line 531 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::enum_stmt({::Celeste::ast::Type::enum_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}) });
		(yyval.Celeste_enum_stmt) = newNode;
	}
#line 1820 "Celeste_parser.tab.c"
    break;

  case 57: /* enum_stmt: VARNAME  */
#line 535 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::enum_stmt({::Celeste::ast::Type::enum_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.Celeste_enum_stmt) = newNode;
	}
#line 1829 "Celeste_parser.tab.c"
    break;

  case 58: /* function_stmt: logical_stmt  */
#line 542 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::function_stmt({::Celeste::ast::Type::function_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_logical_stmt) });
		(yyval.Celeste_function_stmt) = newNode;
	}
#line 1838 "Celeste_parser.tab.c"
    break;

  case 59: /* logical_stmt: variable_declaration  */
#line 549 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_variable_declaration) });
		(yyval.Celeste_logical_stmt) = newNode;
	}
#line 1847 "Celeste_parser.tab.c"
    break;

  case 60: /* logical_stmt: variable_initialization  */
#line 553 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_variable_initialization) });
		(yyval.Celeste_logical_stmt) = newNode;
	}
#line 1856 "Celeste_parser.tab.c"
    break;

  case 61: /* logical_stmt: condtional_declaration  */
#line 557 "./Celeste_parser.y"
                                 {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_condtional_declaration) });
		(yyval.Celeste_logical_stmt) = newNode;
	}
#line 1865 "Celeste_parser.tab.c"
    break;

  case 62: /* condtional_declaration: IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  */
#line 564 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), (yyvsp[-2].Celeste_expression), (yyvsp[0].Celeste_conditional_block) });
		(yyval.Celeste_condtional_declaration) = newNode;
	}
#line 1874 "Celeste_parser.tab.c"
    break;

  case 63: /* condtional_declaration: ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  */
#line 568 "./Celeste_parser.y"
                                                                                  {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-5].Terminal)}), new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), (yyvsp[-2].Celeste_expression), (yyvsp[0].Celeste_conditional_block) });
		(yyval.Celeste_condtional_declaration) = newNode;
	}
#line 1883 "Celeste_parser.tab.c"
    break;

  case 64: /* condtional_declaration: ELSE LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  */
#line 572 "./Celeste_parser.y"
                                                                               {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), (yyvsp[-2].Celeste_expression), (yyvsp[0].Celeste_conditional_block) });
		(yyval.Celeste_condtional_declaration) = newNode;
	}
#line 1892 "Celeste_parser.tab.c"
    break;

  case 65: /* conditional_block: LEFT_BRACKET deamerreserved_star__condtional_stmt__ RIGHT_BRACKET  */
#line 579 "./Celeste_parser.y"
                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_block({::Celeste::ast::Type::conditional_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_deamerreserved_star__condtional_stmt__) });
		(yyval.Celeste_conditional_block) = newNode;
	}
#line 1901 "Celeste_parser.tab.c"
    break;

  case 66: /* deamerreserved_star__condtional_stmt__: condtional_stmt deamerreserved_star__condtional_stmt__  */
#line 586 "./Celeste_parser.y"
                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__condtional_stmt__({::Celeste::ast::Type::deamerreserved_star__condtional_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].Celeste_condtional_stmt), (yyvsp[0].Celeste_deamerreserved_star__condtional_stmt__) });
		(yyval.Celeste_deamerreserved_star__condtional_stmt__) = newNode;
	}
#line 1910 "Celeste_parser.tab.c"
    break;

  case 67: /* deamerreserved_star__condtional_stmt__: %empty  */
#line 590 "./Celeste_parser.y"
          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__condtional_stmt__({::Celeste::ast::Type::deamerreserved_star__condtional_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.Celeste_deamerreserved_star__condtional_stmt__) = newNode;
	}
#line 1919 "Celeste_parser.tab.c"
    break;

  case 68: /* condtional_stmt: logical_stmt  */
#line 597 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::condtional_stmt({::Celeste::ast::Type::condtional_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].Celeste_logical_stmt) });
		(yyval.Celeste_condtional_stmt) = newNode;
	}
#line 1928 "Celeste_parser.tab.c"
    break;

  case 69: /* variable_declaration: type VARNAME SEMICOLON  */
#line 604 "./Celeste_parser.y"
                               {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].Celeste_type), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}) });
		(yyval.Celeste_variable_declaration) = newNode;
	}
#line 1937 "Celeste_parser.tab.c"
    break;

  case 70: /* variable_initialization: type VARNAME EQ expression SEMICOLON  */
#line 611 "./Celeste_parser.y"
                                             {
		auto* const newNode = new Celeste::ast::node::variable_initialization({::Celeste::ast::Type::variable_initialization, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-4].Celeste_type), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].Celeste_expression) });
		(yyval.Celeste_variable_initialization) = newNode;
	}
#line 1946 "Celeste_parser.tab.c"
    break;


#line 1950 "Celeste_parser.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 617 "./Celeste_parser.y"


void Celesteerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* Celeste::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = Celeste_scan_string(text.c_str());
	Celesteparse();
	Celeste_delete_buffer(buf);
	Celestelex_destroy();

	return outputTree;
}

