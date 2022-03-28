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


/* Substitute the variable and function names.  */
#define yyparse         Celesteparse
#define yylex           Celestelex
#define yyerror         Celesteerror
#define yydebug         Celestedebug
#define yynerrs         Celestenerrs
#define yylval          Celestelval
#define yychar          Celestechar

/* First part of user prologue.  */
#line 5 "./Celeste_parser.y"

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
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__base_type__.h"
#include "Celeste/Ast/Node/class_name.h"
#include "Celeste/Ast/Node/base_type.h"
#include "Celeste/Ast/Node/class_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/enum_name.h"
#include "Celeste/Ast/Node/enum_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__deamerreserved_optional__function_argument____.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__function_argument__.h"
#include "Celeste/Ast/Node/function_implementation.h"
#include "Celeste/Ast/Node/function_argument.h"
#include "Celeste/Ast/Node/function_arg_type.h"
#include "Celeste/Ast/Node/function_arg_name.h"
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

#line 177 "Celeste_parser.tab.c"

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
  YYSYMBOL_ESCAPE_CHARS = 31,              /* ESCAPE_CHARS  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_deamerreserved_star__stmt__ = 34, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 35,                      /* stmt  */
  YYSYMBOL_meta_declaration = 36,          /* meta_declaration  */
  YYSYMBOL_deamerreserved_star__expression__ = 37, /* deamerreserved_star__expression__  */
  YYSYMBOL_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__ = 38, /* deamerreserved_arrow__RIGHT_SQUARE_BRACKET__  */
  YYSYMBOL_deamerreserved_star__meta_declaration__ = 39, /* deamerreserved_star__meta_declaration__  */
  YYSYMBOL_expression = 40,                /* expression  */
  YYSYMBOL_class_declaration = 41,         /* class_declaration  */
  YYSYMBOL_deamerreserved_arrow__base_type__ = 42, /* deamerreserved_arrow__base_type__  */
  YYSYMBOL_deamerreserved_star__COMMA__base_type__ = 43, /* deamerreserved_star__COMMA__base_type__  */
  YYSYMBOL_class_name = 44,                /* class_name  */
  YYSYMBOL_base_type = 45,                 /* base_type  */
  YYSYMBOL_class_block = 46,               /* class_block  */
  YYSYMBOL_deamerreserved_star__class_stmt__ = 47, /* deamerreserved_star__class_stmt__  */
  YYSYMBOL_enum_declaration = 48,          /* enum_declaration  */
  YYSYMBOL_enum_name = 49,                 /* enum_name  */
  YYSYMBOL_enum_block = 50,                /* enum_block  */
  YYSYMBOL_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ = 51, /* deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____  */
  YYSYMBOL_function_declaration = 52,      /* function_declaration  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__function_argument____ = 53, /* deamerreserved_arrow__deamerreserved_optional__function_argument____  */
  YYSYMBOL_deamerreserved_star__COMMA__function_argument__ = 54, /* deamerreserved_star__COMMA__function_argument__  */
  YYSYMBOL_function_implementation = 55,   /* function_implementation  */
  YYSYMBOL_function_argument = 56,         /* function_argument  */
  YYSYMBOL_function_arg_type = 57,         /* function_arg_type  */
  YYSYMBOL_function_arg_name = 58,         /* function_arg_name  */
  YYSYMBOL_type = 59,                      /* type  */
  YYSYMBOL_function_name = 60,             /* function_name  */
  YYSYMBOL_return_type = 61,               /* return_type  */
  YYSYMBOL_function_block = 62,            /* function_block  */
  YYSYMBOL_deamerreserved_star__function_stmt__ = 63, /* deamerreserved_star__function_stmt__  */
  YYSYMBOL_class_stmt = 64,                /* class_stmt  */
  YYSYMBOL_enum_stmt = 65,                 /* enum_stmt  */
  YYSYMBOL_function_stmt = 66,             /* function_stmt  */
  YYSYMBOL_logical_stmt = 67,              /* logical_stmt  */
  YYSYMBOL_condtional_declaration = 68,    /* condtional_declaration  */
  YYSYMBOL_conditional_block = 69,         /* conditional_block  */
  YYSYMBOL_deamerreserved_star__condtional_stmt__ = 70, /* deamerreserved_star__condtional_stmt__  */
  YYSYMBOL_condtional_stmt = 71,           /* condtional_stmt  */
  YYSYMBOL_variable_declaration = 72,      /* variable_declaration  */
  YYSYMBOL_variable_initialization = 73    /* variable_initialization  */
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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif /* 1 */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   257,   257,   268,   274,   284,   290,   296,   302,   308,
     318,   324,   330,   336,   346,   352,   362,   372,   378,   388,
     394,   400,   406,   412,   418,   424,   430,   436,   446,   452,
     462,   472,   478,   488,   498,   508,   518,   524,   534,   544,
     554,   564,   570,   576,   586,   592,   602,   608,   618,   624,
     634,   640,   650,   656,   666,   676,   686,   696,   706,   716,
     726,   732,   742,   748,   754,   764,   774,   784,   790,   796,
     806,   812,   818,   828,   838,   844,   854,   864,   874
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
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "ENUM",
  "FUNCTION", "IF", "ELSE", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_PARANTHESIS",
  "RIGHT_PARANTHESIS", "COLON", "SEMICOLON", "COMMA", "DOT", "EQEQ", "EQ",
  "NOTEQ", "NOT", "PLUS", "MINUS", "DIVIDE", "MULTIPLY",
  "USERDEFINED_OPERATOR", "VARNAME", "NUMBER", "DECIMAL", "TEXT",
  "ESCAPE_CHARS", "$accept", "program", "deamerreserved_star__stmt__",
  "stmt", "meta_declaration", "deamerreserved_star__expression__",
  "deamerreserved_arrow__RIGHT_SQUARE_BRACKET__",
  "deamerreserved_star__meta_declaration__", "expression",
  "class_declaration", "deamerreserved_arrow__base_type__",
  "deamerreserved_star__COMMA__base_type__", "class_name", "base_type",
  "class_block", "deamerreserved_star__class_stmt__", "enum_declaration",
  "enum_name", "enum_block",
  "deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____",
  "function_declaration",
  "deamerreserved_arrow__deamerreserved_optional__function_argument____",
  "deamerreserved_star__COMMA__function_argument__",
  "function_implementation", "function_argument", "function_arg_type",
  "function_arg_name", "type", "function_name", "return_type",
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

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      67,    27,    28,    29,    72,    69,   -73,    67,   -73,   -73,
     -73,   -73,   -73,   -73,    10,   -73,    84,   -73,    86,   -73,
     -73,   -73,   -73,    92,    38,   -73,   -73,     1,    77,   -73,
      31,   -73,    78,    70,   -73,    72,    72,    72,    72,    72,
     -73,   -73,    97,   -73,   -73,    80,     1,   -73,   -73,   100,
      93,    31,   -73,   101,    31,   -73,    98,    96,    87,    29,
     103,   -73,   -73,   -73,   -73,    71,    71,    71,    71,    71,
     -73,   102,   -73,   -73,    77,   -73,   -73,   -73,   -73,    -1,
      78,   -73,   -73,    99,   104,   -73,   -73,    93,     2,   -73,
     -73,    73,   -73,    96,    72,    78,   -73,   107,    79,    88,
     111,     2,   -73,   -73,   -73,   -73,   -73,   -73,   -73,    71,
     108,    72,   110,    72,    64,   -73,   -73,    -2,    -3,    72,
      14,    72,   109,   115,    20,   115,    26,     2,   -73,   115,
     -73,   -73,   -73,   116,     2,   -73,   -73,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,    15,     0,     2,     4,     9,     5,
       6,     7,     8,    33,     0,    39,     0,    57,     0,    24,
      25,    26,    27,     0,    15,     1,     3,    37,     0,    29,
      43,    38,    47,    18,    10,     0,     0,     0,     0,     0,
      14,    56,     0,    63,    64,     0,    37,    62,    34,     0,
      32,    43,    65,     0,    43,    54,     0,    49,     0,     0,
      18,    16,    11,    12,    13,    19,    20,    21,    22,    23,
      35,     0,    36,    28,     0,    30,    42,    40,    41,     0,
       0,    46,    55,    53,     0,    17,    77,    32,    61,    45,
      58,     0,    51,    49,     0,    47,    31,     0,     0,     0,
       0,    61,    66,    69,    67,    68,    44,    50,    48,    52,
       0,     0,     0,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    70,     0,
      72,    78,    76,     0,    75,    71,    73,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   119,   -73,   -28,   105,   -73,    68,   -35,    94,
     -73,    43,   -73,    57,    83,    89,   106,   -73,   -73,    36,
     -16,    39,    40,   -15,    56,   -73,   -73,   -12,    81,    21,
      46,    41,   -73,   -73,   -73,   -45,   -73,   -72,     7,   -73,
     -11,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    23,    34,    61,    24,     9,
      49,    75,    14,    50,    29,    42,    10,    16,    31,    53,
      11,    56,    81,    12,    57,    58,    83,    99,    18,    91,
      92,   100,    46,    54,   101,   102,   103,   128,   133,   134,
     104,   105
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      65,    66,    67,    68,    69,    60,     3,    88,    97,    98,
     123,    43,    44,    89,    89,    45,    47,    64,    27,    35,
      36,    37,    38,    39,    28,    90,    90,   125,    41,    41,
      43,    44,    60,   129,    45,    47,    35,    36,    37,    38,
      39,   131,    35,    36,    37,    38,    39,    51,    35,    36,
      37,    38,    39,   130,    13,    15,    17,   135,    52,   109,
      35,    36,    37,    38,    39,    19,    20,    21,    22,    25,
       1,     2,     3,     1,     2,    59,   118,     4,   120,    86,
       4,    88,   132,   121,   124,   112,   126,    76,   106,   132,
      78,   113,    30,    35,    36,    37,    38,    39,    32,    19,
      20,    21,    22,    33,    48,    55,    70,    71,    27,    74,
      77,    79,    80,     4,    82,   114,    95,    86,    94,   111,
     115,   117,   119,   127,   106,   136,    26,    62,    85,    40,
      96,    87,    73,   108,   110,    72,    93,   107,   122,    63,
      84,   137,   116
};

static const yytype_uint8 yycheck[] =
{
      35,    36,    37,    38,    39,    33,     5,     8,     6,     7,
      13,    27,    27,    15,    15,    27,    27,    33,     8,    22,
      23,    24,    25,    26,    14,    27,    27,    13,    27,    27,
      46,    46,    60,    13,    46,    46,    22,    23,    24,    25,
      26,    15,    22,    23,    24,    25,    26,    16,    22,    23,
      24,    25,    26,   125,    27,    27,    27,   129,    27,    94,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       3,     4,     5,     3,     4,     5,   111,    10,   113,    15,
      10,     8,   127,    19,   119,     6,   121,    51,    15,   134,
      54,    12,     8,    22,    23,    24,    25,    26,    12,    27,
      28,    29,    30,    11,    27,    27,     9,    27,     8,    16,
       9,    13,    16,    10,    27,    27,    12,    15,    19,    12,
       9,    13,    12,     8,    15,     9,     7,    33,    60,    24,
      87,    74,    49,    93,    95,    46,    80,    91,   117,    33,
      59,   134,   101
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    10,    33,    34,    35,    36,    41,
      48,    52,    55,    27,    44,    27,    49,    27,    60,    27,
      28,    29,    30,    37,    40,     0,    34,     8,    14,    46,
       8,    50,    12,    11,    38,    22,    23,    24,    25,    26,
      37,    27,    47,    52,    55,    59,    64,    72,    27,    42,
      45,    16,    27,    51,    65,    27,    53,    56,    57,     5,
      36,    39,    41,    48,    52,    40,    40,    40,    40,    40,
       9,    27,    47,    46,    16,    43,    51,     9,    51,    13,
      16,    54,    27,    58,    60,    39,    15,    45,     8,    15,
      27,    61,    62,    56,    19,    12,    43,     6,     7,    59,
      63,    66,    67,    68,    72,    73,    15,    62,    54,    40,
      53,    12,     6,    12,    27,     9,    63,    13,    40,    12,
      40,    19,    61,    13,    40,    13,    40,     8,    69,    13,
      69,    15,    67,    70,    71,    69,     9,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    35,    35,    35,
      36,    36,    36,    36,    37,    37,    38,    39,    39,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    41,    41,
      42,    43,    43,    44,    45,    46,    47,    47,    48,    49,
      50,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    58,    59,    60,    61,    62,
      63,    63,    64,    64,    64,    65,    66,    67,    67,    67,
      68,    68,    68,    69,    70,    70,    71,    72,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     2,     0,     2,     2,     0,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     5,     3,
       2,     3,     0,     1,     1,     3,     2,     0,     3,     1,
       3,     2,     2,     0,     7,     6,     2,     0,     3,     0,
       7,     6,     4,     2,     1,     1,     1,     1,     1,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     6,     5,     3,     2,     0,     1,     3,     5
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
        YY_LAC_DISCARD ("YYBACKUP");                              \
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
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

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
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

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* program: deamerreserved_star__stmt__  */
#line 257 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::program({::Celeste::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_deamerreserved_star__stmt__) });
		(yyval.Celeste_program) = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1857 "Celeste_parser.tab.c"
    break;

  case 3: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 268 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_stmt), (yyvsp[0].Celeste_deamerreserved_star__stmt__) });
		(yyval.Celeste_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1868 "Celeste_parser.tab.c"
    break;

  case 4: /* deamerreserved_star__stmt__: %empty  */
#line 274 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1879 "Celeste_parser.tab.c"
    break;

  case 5: /* stmt: class_declaration  */
#line 284 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_class_declaration) });
		(yyval.Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1890 "Celeste_parser.tab.c"
    break;

  case 6: /* stmt: enum_declaration  */
#line 290 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_enum_declaration) });
		(yyval.Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1901 "Celeste_parser.tab.c"
    break;

  case 7: /* stmt: function_declaration  */
#line 296 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_function_declaration) });
		(yyval.Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1912 "Celeste_parser.tab.c"
    break;

  case 8: /* stmt: function_implementation  */
#line 302 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_function_implementation) });
		(yyval.Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1923 "Celeste_parser.tab.c"
    break;

  case 9: /* stmt: meta_declaration  */
#line 308 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_meta_declaration) });
		(yyval.Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1934 "Celeste_parser.tab.c"
    break;

  case 10: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ deamerreserved_arrow__RIGHT_SQUARE_BRACKET__  */
#line 318 "./Celeste_parser.y"
                                                                                                            {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_deamerreserved_star__expression__), (yyvsp[0].Celeste_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__) });
		(yyval.Celeste_meta_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1945 "Celeste_parser.tab.c"
    break;

  case 11: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET class_declaration  */
#line 324 "./Celeste_parser.y"
                                                                                                        {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_deamerreserved_star__expression__), new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_class_declaration) });
		(yyval.Celeste_meta_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1956 "Celeste_parser.tab.c"
    break;

  case 12: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET enum_declaration  */
#line 330 "./Celeste_parser.y"
                                                                                                       {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_deamerreserved_star__expression__), new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_enum_declaration) });
		(yyval.Celeste_meta_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1967 "Celeste_parser.tab.c"
    break;

  case 13: /* meta_declaration: LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET function_declaration  */
#line 336 "./Celeste_parser.y"
                                                                                                           {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_deamerreserved_star__expression__), new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_function_declaration) });
		(yyval.Celeste_meta_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1978 "Celeste_parser.tab.c"
    break;

  case 14: /* deamerreserved_star__expression__: expression deamerreserved_star__expression__  */
#line 346 "./Celeste_parser.y"
                                                      {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__expression__({::Celeste::ast::Type::deamerreserved_star__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_expression), (yyvsp[0].Celeste_deamerreserved_star__expression__) });
		(yyval.Celeste_deamerreserved_star__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1989 "Celeste_parser.tab.c"
    break;

  case 15: /* deamerreserved_star__expression__: %empty  */
#line 352 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__expression__({::Celeste::ast::Type::deamerreserved_star__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2000 "Celeste_parser.tab.c"
    break;

  case 16: /* deamerreserved_arrow__RIGHT_SQUARE_BRACKET__: RIGHT_SQUARE_BRACKET deamerreserved_star__meta_declaration__  */
#line 362 "./Celeste_parser.y"
                                                                      {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__({::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_deamerreserved_star__meta_declaration__) });
		(yyval.Celeste_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2011 "Celeste_parser.tab.c"
    break;

  case 17: /* deamerreserved_star__meta_declaration__: meta_declaration deamerreserved_star__meta_declaration__  */
#line 372 "./Celeste_parser.y"
                                                                  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__meta_declaration__({::Celeste::ast::Type::deamerreserved_star__meta_declaration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_meta_declaration), (yyvsp[0].Celeste_deamerreserved_star__meta_declaration__) });
		(yyval.Celeste_deamerreserved_star__meta_declaration__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2022 "Celeste_parser.tab.c"
    break;

  case 18: /* deamerreserved_star__meta_declaration__: %empty  */
#line 378 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__meta_declaration__({::Celeste::ast::Type::deamerreserved_star__meta_declaration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__meta_declaration__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2033 "Celeste_parser.tab.c"
    break;

  case 19: /* expression: expression PLUS expression  */
#line 388 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::PLUS({::Celeste::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2044 "Celeste_parser.tab.c"
    break;

  case 20: /* expression: expression MINUS expression  */
#line 394 "./Celeste_parser.y"
                                       {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::MINUS({::Celeste::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2055 "Celeste_parser.tab.c"
    break;

  case 21: /* expression: expression DIVIDE expression  */
#line 400 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::DIVIDE({::Celeste::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2066 "Celeste_parser.tab.c"
    break;

  case 22: /* expression: expression MULTIPLY expression  */
#line 406 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::MULTIPLY({::Celeste::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2077 "Celeste_parser.tab.c"
    break;

  case 23: /* expression: expression USERDEFINED_OPERATOR expression  */
#line 412 "./Celeste_parser.y"
                                                      {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].Celeste_expression), new Celeste::ast::node::USERDEFINED_OPERATOR({::Celeste::ast::Type::USERDEFINED_OPERATOR, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2088 "Celeste_parser.tab.c"
    break;

  case 24: /* expression: VARNAME  */
#line 418 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2099 "Celeste_parser.tab.c"
    break;

  case 25: /* expression: NUMBER  */
#line 424 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NUMBER({::Celeste::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2110 "Celeste_parser.tab.c"
    break;

  case 26: /* expression: DECIMAL  */
#line 430 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DECIMAL({::Celeste::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2121 "Celeste_parser.tab.c"
    break;

  case 27: /* expression: TEXT  */
#line 436 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2132 "Celeste_parser.tab.c"
    break;

  case 28: /* class_declaration: CLASS class_name COLON deamerreserved_arrow__base_type__ class_block  */
#line 446 "./Celeste_parser.y"
                                                                              {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), (yyvsp[-3].Celeste_class_name), new Celeste::ast::node::COLON({::Celeste::ast::Type::COLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_deamerreserved_arrow__base_type__), (yyvsp[0].Celeste_class_block) });
		(yyval.Celeste_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2143 "Celeste_parser.tab.c"
    break;

  case 29: /* class_declaration: CLASS class_name class_block  */
#line 452 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_class_name), (yyvsp[0].Celeste_class_block) });
		(yyval.Celeste_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2154 "Celeste_parser.tab.c"
    break;

  case 30: /* deamerreserved_arrow__base_type__: base_type deamerreserved_star__COMMA__base_type__  */
#line 462 "./Celeste_parser.y"
                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__base_type__({::Celeste::ast::Type::deamerreserved_arrow__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_base_type), (yyvsp[0].Celeste_deamerreserved_star__COMMA__base_type__) });
		(yyval.Celeste_deamerreserved_arrow__base_type__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2165 "Celeste_parser.tab.c"
    break;

  case 31: /* deamerreserved_star__COMMA__base_type__: COMMA base_type deamerreserved_star__COMMA__base_type__  */
#line 472 "./Celeste_parser.y"
                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__base_type__({::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::COMMA({::Celeste::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_base_type), (yyvsp[0].Celeste_deamerreserved_star__COMMA__base_type__) });
		(yyval.Celeste_deamerreserved_star__COMMA__base_type__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2176 "Celeste_parser.tab.c"
    break;

  case 32: /* deamerreserved_star__COMMA__base_type__: %empty  */
#line 478 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__base_type__({::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__COMMA__base_type__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2187 "Celeste_parser.tab.c"
    break;

  case 33: /* class_name: VARNAME  */
#line 488 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::class_name({::Celeste::ast::Type::class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_class_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2198 "Celeste_parser.tab.c"
    break;

  case 34: /* base_type: VARNAME  */
#line 498 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::base_type({::Celeste::ast::Type::base_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_base_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2209 "Celeste_parser.tab.c"
    break;

  case 35: /* class_block: LEFT_BRACKET deamerreserved_star__class_stmt__ RIGHT_BRACKET  */
#line 508 "./Celeste_parser.y"
                                                                      {
		auto* const newNode = new Celeste::ast::node::class_block({::Celeste::ast::Type::class_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_deamerreserved_star__class_stmt__), new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_class_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2220 "Celeste_parser.tab.c"
    break;

  case 36: /* deamerreserved_star__class_stmt__: class_stmt deamerreserved_star__class_stmt__  */
#line 518 "./Celeste_parser.y"
                                                      {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_class_stmt), (yyvsp[0].Celeste_deamerreserved_star__class_stmt__) });
		(yyval.Celeste_deamerreserved_star__class_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2231 "Celeste_parser.tab.c"
    break;

  case 37: /* deamerreserved_star__class_stmt__: %empty  */
#line 524 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__class_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2242 "Celeste_parser.tab.c"
    break;

  case 38: /* enum_declaration: ENUM enum_name enum_block  */
#line 534 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::enum_declaration({::Celeste::ast::Type::enum_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ENUM({::Celeste::ast::Type::ENUM, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_enum_name), (yyvsp[0].Celeste_enum_block) });
		(yyval.Celeste_enum_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2253 "Celeste_parser.tab.c"
    break;

  case 39: /* enum_name: VARNAME  */
#line 544 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::enum_name({::Celeste::ast::Type::enum_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_enum_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2264 "Celeste_parser.tab.c"
    break;

  case 40: /* enum_block: LEFT_BRACKET deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ RIGHT_BRACKET  */
#line 554 "./Celeste_parser.y"
                                                                                                 {
		auto* const newNode = new Celeste::ast::node::enum_block({::Celeste::ast::Type::enum_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____), new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_enum_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2275 "Celeste_parser.tab.c"
    break;

  case 41: /* deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____: enum_stmt deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____  */
#line 564 "./Celeste_parser.y"
                                                                                {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____({::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_enum_stmt), (yyvsp[0].Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____) });
		(yyval.Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2286 "Celeste_parser.tab.c"
    break;

  case 42: /* deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____: COMMA deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____  */
#line 570 "./Celeste_parser.y"
                                                                              {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____({::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::COMMA({::Celeste::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____) });
		(yyval.Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2297 "Celeste_parser.tab.c"
    break;

  case 43: /* deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____: %empty  */
#line 576 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____({::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2308 "Celeste_parser.tab.c"
    break;

  case 44: /* function_declaration: FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS return_type SEMICOLON  */
#line 586 "./Celeste_parser.y"
                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-6].Terminal) }), (yyvsp[-5].Celeste_function_name), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), (yyvsp[-3].Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_return_type), new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2319 "Celeste_parser.tab.c"
    break;

  case 45: /* function_declaration: FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS SEMICOLON  */
#line 592 "./Celeste_parser.y"
                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-5].Terminal) }), (yyvsp[-4].Celeste_function_name), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2330 "Celeste_parser.tab.c"
    break;

  case 46: /* deamerreserved_arrow__deamerreserved_optional__function_argument____: function_argument deamerreserved_star__COMMA__function_argument__  */
#line 602 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____({::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_function_argument), (yyvsp[0].Celeste_deamerreserved_star__COMMA__function_argument__) });
		(yyval.Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2341 "Celeste_parser.tab.c"
    break;

  case 47: /* deamerreserved_arrow__deamerreserved_optional__function_argument____: %empty  */
#line 608 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____({::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2352 "Celeste_parser.tab.c"
    break;

  case 48: /* deamerreserved_star__COMMA__function_argument__: COMMA function_argument deamerreserved_star__COMMA__function_argument__  */
#line 618 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::COMMA({::Celeste::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_function_argument), (yyvsp[0].Celeste_deamerreserved_star__COMMA__function_argument__) });
		(yyval.Celeste_deamerreserved_star__COMMA__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2363 "Celeste_parser.tab.c"
    break;

  case 49: /* deamerreserved_star__COMMA__function_argument__: %empty  */
#line 624 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__COMMA__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2374 "Celeste_parser.tab.c"
    break;

  case 50: /* function_implementation: FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS return_type function_block  */
#line 634 "./Celeste_parser.y"
                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::function_implementation({::Celeste::ast::Type::function_implementation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-6].Terminal) }), (yyvsp[-5].Celeste_function_name), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), (yyvsp[-3].Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_return_type), (yyvsp[0].Celeste_function_block) });
		(yyval.Celeste_function_implementation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2385 "Celeste_parser.tab.c"
    break;

  case 51: /* function_implementation: FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS function_block  */
#line 640 "./Celeste_parser.y"
                                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::function_implementation({::Celeste::ast::Type::function_implementation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-5].Terminal) }), (yyvsp[-4].Celeste_function_name), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_function_block) });
		(yyval.Celeste_function_implementation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2396 "Celeste_parser.tab.c"
    break;

  case 52: /* function_argument: function_arg_type function_arg_name EQ expression  */
#line 650 "./Celeste_parser.y"
                                                           {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-3].Celeste_function_arg_type), (yyvsp[-2].Celeste_function_arg_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_expression) });
		(yyval.Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2407 "Celeste_parser.tab.c"
    break;

  case 53: /* function_argument: function_arg_type function_arg_name  */
#line 656 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-1].Celeste_function_arg_type), (yyvsp[0].Celeste_function_arg_name) });
		(yyval.Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2418 "Celeste_parser.tab.c"
    break;

  case 54: /* function_arg_type: VARNAME  */
#line 666 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::function_arg_type({::Celeste::ast::Type::function_arg_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_function_arg_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2429 "Celeste_parser.tab.c"
    break;

  case 55: /* function_arg_name: VARNAME  */
#line 676 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::function_arg_name({::Celeste::ast::Type::function_arg_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_function_arg_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2440 "Celeste_parser.tab.c"
    break;

  case 56: /* type: VARNAME  */
#line 686 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2451 "Celeste_parser.tab.c"
    break;

  case 57: /* function_name: VARNAME  */
#line 696 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::function_name({::Celeste::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_function_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2462 "Celeste_parser.tab.c"
    break;

  case 58: /* return_type: VARNAME  */
#line 706 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::return_type({::Celeste::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_return_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2473 "Celeste_parser.tab.c"
    break;

  case 59: /* function_block: LEFT_BRACKET deamerreserved_star__function_stmt__ RIGHT_BRACKET  */
#line 716 "./Celeste_parser.y"
                                                                         {
		auto* const newNode = new Celeste::ast::node::function_block({::Celeste::ast::Type::function_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_deamerreserved_star__function_stmt__), new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_function_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2484 "Celeste_parser.tab.c"
    break;

  case 60: /* deamerreserved_star__function_stmt__: function_stmt deamerreserved_star__function_stmt__  */
#line 726 "./Celeste_parser.y"
                                                            {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__function_stmt__({::Celeste::ast::Type::deamerreserved_star__function_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_function_stmt), (yyvsp[0].Celeste_deamerreserved_star__function_stmt__) });
		(yyval.Celeste_deamerreserved_star__function_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2495 "Celeste_parser.tab.c"
    break;

  case 61: /* deamerreserved_star__function_stmt__: %empty  */
#line 732 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__function_stmt__({::Celeste::ast::Type::deamerreserved_star__function_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__function_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2506 "Celeste_parser.tab.c"
    break;

  case 62: /* class_stmt: variable_declaration  */
#line 742 "./Celeste_parser.y"
                              {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_variable_declaration) });
		(yyval.Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2517 "Celeste_parser.tab.c"
    break;

  case 63: /* class_stmt: function_declaration  */
#line 748 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_function_declaration) });
		(yyval.Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2528 "Celeste_parser.tab.c"
    break;

  case 64: /* class_stmt: function_implementation  */
#line 754 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_function_implementation) });
		(yyval.Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2539 "Celeste_parser.tab.c"
    break;

  case 65: /* enum_stmt: VARNAME  */
#line 764 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::enum_stmt({::Celeste::ast::Type::enum_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_enum_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2550 "Celeste_parser.tab.c"
    break;

  case 66: /* function_stmt: logical_stmt  */
#line 774 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::function_stmt({::Celeste::ast::Type::function_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_logical_stmt) });
		(yyval.Celeste_function_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2561 "Celeste_parser.tab.c"
    break;

  case 67: /* logical_stmt: variable_declaration  */
#line 784 "./Celeste_parser.y"
                              {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_variable_declaration) });
		(yyval.Celeste_logical_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2572 "Celeste_parser.tab.c"
    break;

  case 68: /* logical_stmt: variable_initialization  */
#line 790 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_variable_initialization) });
		(yyval.Celeste_logical_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2583 "Celeste_parser.tab.c"
    break;

  case 69: /* logical_stmt: condtional_declaration  */
#line 796 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_condtional_declaration) });
		(yyval.Celeste_logical_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2594 "Celeste_parser.tab.c"
    break;

  case 70: /* condtional_declaration: IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  */
#line 806 "./Celeste_parser.y"
                                                                            {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_expression), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_conditional_block) });
		(yyval.Celeste_condtional_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2605 "Celeste_parser.tab.c"
    break;

  case 71: /* condtional_declaration: ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  */
#line 812 "./Celeste_parser.y"
                                                                                   {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-5].Terminal) }), new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_expression), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_conditional_block) });
		(yyval.Celeste_condtional_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2616 "Celeste_parser.tab.c"
    break;

  case 72: /* condtional_declaration: ELSE LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  */
#line 818 "./Celeste_parser.y"
                                                                                {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), (yyvsp[-2].Celeste_expression), new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].Celeste_conditional_block) });
		(yyval.Celeste_condtional_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2627 "Celeste_parser.tab.c"
    break;

  case 73: /* conditional_block: LEFT_BRACKET deamerreserved_star__condtional_stmt__ RIGHT_BRACKET  */
#line 828 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_block({::Celeste::ast::Type::conditional_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_deamerreserved_star__condtional_stmt__), new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_conditional_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2638 "Celeste_parser.tab.c"
    break;

  case 74: /* deamerreserved_star__condtional_stmt__: condtional_stmt deamerreserved_star__condtional_stmt__  */
#line 838 "./Celeste_parser.y"
                                                                {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__condtional_stmt__({::Celeste::ast::Type::deamerreserved_star__condtional_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].Celeste_condtional_stmt), (yyvsp[0].Celeste_deamerreserved_star__condtional_stmt__) });
		(yyval.Celeste_deamerreserved_star__condtional_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2649 "Celeste_parser.tab.c"
    break;

  case 75: /* deamerreserved_star__condtional_stmt__: %empty  */
#line 844 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__condtional_stmt__({::Celeste::ast::Type::deamerreserved_star__condtional_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.Celeste_deamerreserved_star__condtional_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2660 "Celeste_parser.tab.c"
    break;

  case 76: /* condtional_stmt: logical_stmt  */
#line 854 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::condtional_stmt({::Celeste::ast::Type::condtional_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].Celeste_logical_stmt) });
		(yyval.Celeste_condtional_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2671 "Celeste_parser.tab.c"
    break;

  case 77: /* variable_declaration: type VARNAME SEMICOLON  */
#line 864 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].Celeste_type), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_variable_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2682 "Celeste_parser.tab.c"
    break;

  case 78: /* variable_initialization: type VARNAME EQ expression SEMICOLON  */
#line 874 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::variable_initialization({::Celeste::ast::Type::variable_initialization, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-4].Celeste_type), new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].Celeste_expression), new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.Celeste_variable_initialization) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2693 "Celeste_parser.tab.c"
    break;


#line 2697 "Celeste_parser.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 884 "./Celeste_parser.y"


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
