/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0




/* Substitute the variable and function names.  */
#define yyparse Celesteparse
#define yylex   Celestelex
#define yyerror Celesteerror
#define yydebug Celestedebug
#define yylval  Celestelval
#define yychar  Celestechar
#define yynerrs Celestenerrs

/* First part of user prologue.  */
#line 5 "./Celeste_parser.y"

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "Celeste/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/Celeste_lexer.h"
#undef YY_NO_UNISTD_H
#include "Celeste/Ast/Enum/Type.h"
#include "Celeste/Ast/Node/SINGLE_COMMENT.h"
#include "Celeste/Ast/Node/CONSTANT.h"
#include "Celeste/Ast/Node/FUNCTION.h"
#include "Celeste/Ast/Node/CLASS.h"
#include "Celeste/Ast/Node/ENUM.h"
#include "Celeste/Ast/Node/CONDITIONAL.h"
#include "Celeste/Ast/Node/CODE.h"
#include "Celeste/Ast/Node/RUNTIME.h"
#include "Celeste/Ast/Node/STATIC.h"
#include "Celeste/Ast/Node/AUTO.h"
#include "Celeste/Ast/Node/AUTOTYPE.h"
#include "Celeste/Ast/Node/TEMPLATE.h"
#include "Celeste/Ast/Node/NAMESPACE.h"
#include "Celeste/Ast/Node/OVERRIDE.h"
#include "Celeste/Ast/Node/VIRTUAL.h"
#include "Celeste/Ast/Node/PURE.h"
#include "Celeste/Ast/Node/AS.h"
#include "Celeste/Ast/Node/IN.h"
#include "Celeste/Ast/Node/DISPLAY.h"
#include "Celeste/Ast/Node/RETURN.h"
#include "Celeste/Ast/Node/FOR.h"
#include "Celeste/Ast/Node/IF.h"
#include "Celeste/Ast/Node/ELSEIF.h"
#include "Celeste/Ast/Node/ELSE.h"
#include "Celeste/Ast/Node/INLINE.h"
#include "Celeste/Ast/Node/CONSTRUCTOR.h"
#include "Celeste/Ast/Node/FILE_.h"
#include "Celeste/Ast/Node/PROGRAM_.h"
#include "Celeste/Ast/Node/IMPORT.h"
#include "Celeste/Ast/Node/PUBLIC.h"
#include "Celeste/Ast/Node/PROTECTED.h"
#include "Celeste/Ast/Node/PRIVATE.h"
#include "Celeste/Ast/Node/INHERIT.h"
#include "Celeste/Ast/Node/COMPOSITE.h"
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
#include "Celeste/Ast/Node/LTEQ.h"
#include "Celeste/Ast/Node/GTEQ.h"
#include "Celeste/Ast/Node/LT.h"
#include "Celeste/Ast/Node/GT.h"
#include "Celeste/Ast/Node/PLUSEQ.h"
#include "Celeste/Ast/Node/MINUSEQ.h"
#include "Celeste/Ast/Node/MULTIPLYEQ.h"
#include "Celeste/Ast/Node/DIVIDEEQ.h"
#include "Celeste/Ast/Node/EQEQ.h"
#include "Celeste/Ast/Node/EQ.h"
#include "Celeste/Ast/Node/NOTEQ.h"
#include "Celeste/Ast/Node/NOT.h"
#include "Celeste/Ast/Node/PLUSPLUS.h"
#include "Celeste/Ast/Node/PLUS.h"
#include "Celeste/Ast/Node/MINUSMINUS.h"
#include "Celeste/Ast/Node/MINUS.h"
#include "Celeste/Ast/Node/DIVIDE.h"
#include "Celeste/Ast/Node/MULTIPLY.h"
#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/NUMBER.h"
#include "Celeste/Ast/Node/DECIMAL.h"
#include "Celeste/Ast/Node/TEXT.h"
#include "Celeste/Ast/Node/ESCAPE_CHARS.h"


#include "Celeste/Ast/Node/program.h"
#include "Celeste/Ast/Node/root_program.h"
#include "Celeste/Ast/Node/standard_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__stmt__.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/import_statement.h"
#include "Celeste/Ast/Node/file_import.h"
#include "Celeste/Ast/Node/mutation_group.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__symbol_reference__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__symbol_reference__.h"
#include "Celeste/Ast/Node/assignment.h"
#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ast/Node/conditional_if.h"
#include "Celeste/Ast/Node/conditional_else_if.h"
#include "Celeste/Ast/Node/conditional_else.h"
#include "Celeste/Ast/Node/conditional_block.h"
#include "Celeste/Ast/Node/template_conditional_function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__template_parameter__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__template_parameter__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__conditional_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__conditional_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__function_argument__.h"
#include "Celeste/Ast/Node/conditional_function_declaration.h"
#include "Celeste/Ast/Node/template_code_function_declaration.h"
#include "Celeste/Ast/Node/code_function_declaration.h"
#include "Celeste/Ast/Node/return_statement.h"
#include "Celeste/Ast/Node/symbol_increase.h"
#include "Celeste/Ast/Node/symbol_decrease.h"
#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ast/Node/expression_no_value.h"
#include "Celeste/Ast/Node/t_expression.h"
#include "Celeste/Ast/Node/f_expression.h"
#include "Celeste/Ast/Node/display_call.h"
#include "Celeste/Ast/Node/for_loop.h"
#include "Celeste/Ast/Node/for_iteration_loop.h"
#include "Celeste/Ast/Node/for_each_loop.h"
#include "Celeste/Ast/Node/for_variable.h"
#include "Celeste/Ast/Node/iterator.h"
#include "Celeste/Ast/Node/for_block.h"
#include "Celeste/Ast/Node/namespace_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__namespace_name__.h"
#include "Celeste/Ast/Node/deamerreserved_star__DOT__namespace_name__.h"
#include "Celeste/Ast/Node/namespace_block.h"
#include "Celeste/Ast/Node/namespace_name.h"
#include "Celeste/Ast/Node/inline_class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__inline_class_declaration_composite__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__inline_class_declaration_composite__.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__inline_class_declaration_composite_alias__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__inline_class_declaration_composite_alias__.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite_alias.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite_name.h"
#include "Celeste/Ast/Node/created_class_name.h"
#include "Celeste/Ast/Node/code_block.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__code_block_input_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__code_block_input_argument__.h"
#include "Celeste/Ast/Node/code_block_input_argument.h"
#include "Celeste/Ast/Node/code_block_argument.h"
#include "Celeste/Ast/Node/code_block_argument_name.h"
#include "Celeste/Ast/Node/code_block_program.h"
#include "Celeste/Ast/Node/variable_declaration.h"
#include "Celeste/Ast/Node/array_declaration.h"
#include "Celeste/Ast/Node/variable_name.h"
#include "Celeste/Ast/Node/template_function_declaration.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/trailing_return_type.h"
#include "Celeste/Ast/Node/return_type.h"
#include "Celeste/Ast/Node/conditional_function_argument.h"
#include "Celeste/Ast/Node/function_argument.h"
#include "Celeste/Ast/Node/function_argument_type.h"
#include "Celeste/Ast/Node/function_argument_name.h"
#include "Celeste/Ast/Node/condition_modifier_function_call.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__condition_modifier_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__condition_modifier_argument__.h"
#include "Celeste/Ast/Node/condition_modifier_name.h"
#include "Celeste/Ast/Node/condition_modifier_argument.h"
#include "Celeste/Ast/Node/function_body.h"
#include "Celeste/Ast/Node/function_name.h"
#include "Celeste/Ast/Node/template_class_declaration.h"
#include "Celeste/Ast/Node/template_parameter.h"
#include "Celeste/Ast/Node/template_parameter_name.h"
#include "Celeste/Ast/Node/class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__class_inherit_base__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__class_inherit_base__.h"
#include "Celeste/Ast/Node/class_name.h"
#include "Celeste/Ast/Node/execution_keyword_permutation.h"
#include "Celeste/Ast/Node/class_body.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include "Celeste/Ast/Node/class_stmt_member_field_declaration.h"
#include "Celeste/Ast/Node/member_field_name.h"
#include "Celeste/Ast/Node/class_stmt_member_function.h"
#include "Celeste/Ast/Node/class_stmt_member_template_function.h"
#include "Celeste/Ast/Node/template_class_stmt_constructor.h"
#include "Celeste/Ast/Node/class_stmt_constructor.h"
#include "Celeste/Ast/Node/accessibility.h"
#include "Celeste/Ast/Node/class_inherit_base.h"
#include "Celeste/Ast/Node/inherit_base.h"
#include "Celeste/Ast/Node/inherit_base_name.h"
#include "Celeste/Ast/Node/compound_base.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__compound_base_alias__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__compound_base_alias__.h"
#include "Celeste/Ast/Node/compound_base_name.h"
#include "Celeste/Ast/Node/compound_base_alias.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_star__enumeration__.h"
#include "Celeste/Ast/Node/enum_name.h"
#include "Celeste/Ast/Node/enumeration.h"
#include "Celeste/Ast/Node/enumeration_name.h"
#include "Celeste/Ast/Node/enumeration_value.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__symbol__.h"
#include "Celeste/Ast/Node/deamerreserved_star__DOT__symbol_secondary__.h"
#include "Celeste/Ast/Node/symbol_secondary.h"
#include "Celeste/Ast/Node/deamerreserved_star__symbol_access__.h"
#include "Celeste/Ast/Node/symbol.h"
#include "Celeste/Ast/Node/symbol_access.h"
#include "Celeste/Ast/Node/auto_deduce_array.h"
#include "Celeste/Ast/Node/symbol_name_secondary.h"
#include "Celeste/Ast/Node/symbol_name.h"
#include "Celeste/Ast/Node/function_access.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__expression__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__expression__.h"
#include "Celeste/Ast/Node/index_access.h"
#include "Celeste/Ast/Node/anonymous_access.h"
#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ast/Node/deamerreserved_star__type_modifier__.h"
#include "Celeste/Ast/Node/type_modifier.h"
#include "Celeste/Ast/Node/value_list.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__full_value__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__full_value__.h"
#include "Celeste/Ast/Node/full_value.h"
#include "Celeste/Ast/Node/value.h"
#include "Celeste/Ast/Node/tuple.h"


#ifndef YY_parse_NERRS
#define YY_parse_NERRS Celestenerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC Celestelloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE 1

#define YYDEBUG 1

void Celesteerror(const char* s);
int Celestelex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;

extern int Celestelineno;
extern int Celeste_column;

static const std::string* Celeste_input_text = nullptr;

#line 304 "Celeste_parser.tab.c"

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
  YYSYMBOL_SINGLE_COMMENT = 3,             /* SINGLE_COMMENT  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_CLASS = 6,                      /* CLASS  */
  YYSYMBOL_ENUM = 7,                       /* ENUM  */
  YYSYMBOL_CONDITIONAL = 8,                /* CONDITIONAL  */
  YYSYMBOL_CODE = 9,                       /* CODE  */
  YYSYMBOL_RUNTIME = 10,                   /* RUNTIME  */
  YYSYMBOL_STATIC = 11,                    /* STATIC  */
  YYSYMBOL_AUTO = 12,                      /* AUTO  */
  YYSYMBOL_AUTOTYPE = 13,                  /* AUTOTYPE  */
  YYSYMBOL_TEMPLATE = 14,                  /* TEMPLATE  */
  YYSYMBOL_NAMESPACE = 15,                 /* NAMESPACE  */
  YYSYMBOL_OVERRIDE = 16,                  /* OVERRIDE  */
  YYSYMBOL_VIRTUAL = 17,                   /* VIRTUAL  */
  YYSYMBOL_PURE = 18,                      /* PURE  */
  YYSYMBOL_AS = 19,                        /* AS  */
  YYSYMBOL_IN = 20,                        /* IN  */
  YYSYMBOL_DISPLAY = 21,                   /* DISPLAY  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_ELSEIF = 25,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_INLINE = 27,                    /* INLINE  */
  YYSYMBOL_CONSTRUCTOR = 28,               /* CONSTRUCTOR  */
  YYSYMBOL_FILE_ = 29,                     /* FILE_  */
  YYSYMBOL_PROGRAM_ = 30,                  /* PROGRAM_  */
  YYSYMBOL_IMPORT = 31,                    /* IMPORT  */
  YYSYMBOL_PUBLIC = 32,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 33,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 34,                   /* PRIVATE  */
  YYSYMBOL_INHERIT = 35,                   /* INHERIT  */
  YYSYMBOL_COMPOSITE = 36,                 /* COMPOSITE  */
  YYSYMBOL_LEFT_BRACKET = 37,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 38,             /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 39,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 40,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 41,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 42,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 44,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 45,                     /* COMMA  */
  YYSYMBOL_DOT = 46,                       /* DOT  */
  YYSYMBOL_LTEQ = 47,                      /* LTEQ  */
  YYSYMBOL_GTEQ = 48,                      /* GTEQ  */
  YYSYMBOL_LT = 49,                        /* LT  */
  YYSYMBOL_GT = 50,                        /* GT  */
  YYSYMBOL_PLUSEQ = 51,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 52,                   /* MINUSEQ  */
  YYSYMBOL_MULTIPLYEQ = 53,                /* MULTIPLYEQ  */
  YYSYMBOL_DIVIDEEQ = 54,                  /* DIVIDEEQ  */
  YYSYMBOL_EQEQ = 55,                      /* EQEQ  */
  YYSYMBOL_EQ = 56,                        /* EQ  */
  YYSYMBOL_NOTEQ = 57,                     /* NOTEQ  */
  YYSYMBOL_NOT = 58,                       /* NOT  */
  YYSYMBOL_PLUSPLUS = 59,                  /* PLUSPLUS  */
  YYSYMBOL_PLUS = 60,                      /* PLUS  */
  YYSYMBOL_MINUSMINUS = 61,                /* MINUSMINUS  */
  YYSYMBOL_MINUS = 62,                     /* MINUS  */
  YYSYMBOL_DIVIDE = 63,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 64,                  /* MULTIPLY  */
  YYSYMBOL_VARNAME = 65,                   /* VARNAME  */
  YYSYMBOL_NUMBER = 66,                    /* NUMBER  */
  YYSYMBOL_DECIMAL = 67,                   /* DECIMAL  */
  YYSYMBOL_TEXT = 68,                      /* TEXT  */
  YYSYMBOL_ESCAPE_CHARS = 69,              /* ESCAPE_CHARS  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_root_program = 72,              /* root_program  */
  YYSYMBOL_standard_block = 73,            /* standard_block  */
  YYSYMBOL_deamerreserved_star__stmt__ = 74, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 75,                      /* stmt  */
  YYSYMBOL_import_statement = 76,          /* import_statement  */
  YYSYMBOL_file_import = 77,               /* file_import  */
  YYSYMBOL_mutation_group = 78,            /* mutation_group  */
  YYSYMBOL_deamerreserved_arrow__symbol_reference__ = 79, /* deamerreserved_arrow__symbol_reference__  */
  YYSYMBOL_deamerreserved_star__COMMA__symbol_reference__ = 80, /* deamerreserved_star__COMMA__symbol_reference__  */
  YYSYMBOL_assignment = 81,                /* assignment  */
  YYSYMBOL_assignment_operator = 82,       /* assignment_operator  */
  YYSYMBOL_conditional_if = 83,            /* conditional_if  */
  YYSYMBOL_conditional_else_if = 84,       /* conditional_else_if  */
  YYSYMBOL_conditional_else = 85,          /* conditional_else  */
  YYSYMBOL_conditional_block = 86,         /* conditional_block  */
  YYSYMBOL_template_conditional_function_declaration = 87, /* template_conditional_function_declaration  */
  YYSYMBOL_deamerreserved_arrow__template_parameter__ = 88, /* deamerreserved_arrow__template_parameter__  */
  YYSYMBOL_deamerreserved_star__COMMA__template_parameter__ = 89, /* deamerreserved_star__COMMA__template_parameter__  */
  YYSYMBOL_deamerreserved_arrow__conditional_function_argument__ = 90, /* deamerreserved_arrow__conditional_function_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__conditional_function_argument__ = 91, /* deamerreserved_star__COMMA__conditional_function_argument__  */
  YYSYMBOL_deamerreserved_arrow__function_argument__ = 92, /* deamerreserved_arrow__function_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__function_argument__ = 93, /* deamerreserved_star__COMMA__function_argument__  */
  YYSYMBOL_conditional_function_declaration = 94, /* conditional_function_declaration  */
  YYSYMBOL_template_code_function_declaration = 95, /* template_code_function_declaration  */
  YYSYMBOL_code_function_declaration = 96, /* code_function_declaration  */
  YYSYMBOL_return_statement = 97,          /* return_statement  */
  YYSYMBOL_symbol_increase = 98,           /* symbol_increase  */
  YYSYMBOL_symbol_decrease = 99,           /* symbol_decrease  */
  YYSYMBOL_expression = 100,               /* expression  */
  YYSYMBOL_expression_no_value = 101,      /* expression_no_value  */
  YYSYMBOL_t_expression = 102,             /* t_expression  */
  YYSYMBOL_f_expression = 103,             /* f_expression  */
  YYSYMBOL_display_call = 104,             /* display_call  */
  YYSYMBOL_for_loop = 105,                 /* for_loop  */
  YYSYMBOL_for_iteration_loop = 106,       /* for_iteration_loop  */
  YYSYMBOL_for_each_loop = 107,            /* for_each_loop  */
  YYSYMBOL_for_variable = 108,             /* for_variable  */
  YYSYMBOL_iterator = 109,                 /* iterator  */
  YYSYMBOL_for_block = 110,                /* for_block  */
  YYSYMBOL_namespace_declaration = 111,    /* namespace_declaration  */
  YYSYMBOL_deamerreserved_arrow__namespace_name__ = 112, /* deamerreserved_arrow__namespace_name__  */
  YYSYMBOL_deamerreserved_star__DOT__namespace_name__ = 113, /* deamerreserved_star__DOT__namespace_name__  */
  YYSYMBOL_namespace_block = 114,          /* namespace_block  */
  YYSYMBOL_namespace_name = 115,           /* namespace_name  */
  YYSYMBOL_inline_class_declaration = 116, /* inline_class_declaration  */
  YYSYMBOL_deamerreserved_arrow__inline_class_declaration_composite__ = 117, /* deamerreserved_arrow__inline_class_declaration_composite__  */
  YYSYMBOL_deamerreserved_star__COMMA__inline_class_declaration_composite__ = 118, /* deamerreserved_star__COMMA__inline_class_declaration_composite__  */
  YYSYMBOL_inline_class_declaration_composite = 119, /* inline_class_declaration_composite  */
  YYSYMBOL_deamerreserved_arrow__inline_class_declaration_composite_alias__ = 120, /* deamerreserved_arrow__inline_class_declaration_composite_alias__  */
  YYSYMBOL_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__ = 121, /* deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  */
  YYSYMBOL_inline_class_declaration_composite_alias = 122, /* inline_class_declaration_composite_alias  */
  YYSYMBOL_inline_class_declaration_composite_name = 123, /* inline_class_declaration_composite_name  */
  YYSYMBOL_created_class_name = 124,       /* created_class_name  */
  YYSYMBOL_code_block = 125,               /* code_block  */
  YYSYMBOL_deamerreserved_arrow__code_block_input_argument__ = 126, /* deamerreserved_arrow__code_block_input_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__code_block_input_argument__ = 127, /* deamerreserved_star__COMMA__code_block_input_argument__  */
  YYSYMBOL_code_block_input_argument = 128, /* code_block_input_argument  */
  YYSYMBOL_code_block_argument = 129,      /* code_block_argument  */
  YYSYMBOL_code_block_argument_name = 130, /* code_block_argument_name  */
  YYSYMBOL_code_block_program = 131,       /* code_block_program  */
  YYSYMBOL_variable_declaration = 132,     /* variable_declaration  */
  YYSYMBOL_array_declaration = 133,        /* array_declaration  */
  YYSYMBOL_variable_name = 134,            /* variable_name  */
  YYSYMBOL_template_function_declaration = 135, /* template_function_declaration  */
  YYSYMBOL_function_declaration = 136,     /* function_declaration  */
  YYSYMBOL_trailing_return_type = 137,     /* trailing_return_type  */
  YYSYMBOL_return_type = 138,              /* return_type  */
  YYSYMBOL_conditional_function_argument = 139, /* conditional_function_argument  */
  YYSYMBOL_function_argument = 140,        /* function_argument  */
  YYSYMBOL_function_argument_type = 141,   /* function_argument_type  */
  YYSYMBOL_function_argument_name = 142,   /* function_argument_name  */
  YYSYMBOL_condition_modifier_function_call = 143, /* condition_modifier_function_call  */
  YYSYMBOL_deamerreserved_arrow__condition_modifier_argument__ = 144, /* deamerreserved_arrow__condition_modifier_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__condition_modifier_argument__ = 145, /* deamerreserved_star__COMMA__condition_modifier_argument__  */
  YYSYMBOL_condition_modifier_name = 146,  /* condition_modifier_name  */
  YYSYMBOL_condition_modifier_argument = 147, /* condition_modifier_argument  */
  YYSYMBOL_function_body = 148,            /* function_body  */
  YYSYMBOL_function_name = 149,            /* function_name  */
  YYSYMBOL_template_class_declaration = 150, /* template_class_declaration  */
  YYSYMBOL_template_parameter = 151,       /* template_parameter  */
  YYSYMBOL_template_parameter_name = 152,  /* template_parameter_name  */
  YYSYMBOL_class_declaration = 153,        /* class_declaration  */
  YYSYMBOL_deamerreserved_arrow__class_inherit_base__ = 154, /* deamerreserved_arrow__class_inherit_base__  */
  YYSYMBOL_deamerreserved_star__COMMA__class_inherit_base__ = 155, /* deamerreserved_star__COMMA__class_inherit_base__  */
  YYSYMBOL_class_name = 156,               /* class_name  */
  YYSYMBOL_execution_keyword_permutation = 157, /* execution_keyword_permutation  */
  YYSYMBOL_class_body = 158,               /* class_body  */
  YYSYMBOL_deamerreserved_star__class_stmt__ = 159, /* deamerreserved_star__class_stmt__  */
  YYSYMBOL_class_stmt = 160,               /* class_stmt  */
  YYSYMBOL_class_stmt_member_field_declaration = 161, /* class_stmt_member_field_declaration  */
  YYSYMBOL_member_field_name = 162,        /* member_field_name  */
  YYSYMBOL_class_stmt_member_function = 163, /* class_stmt_member_function  */
  YYSYMBOL_class_stmt_member_template_function = 164, /* class_stmt_member_template_function  */
  YYSYMBOL_template_class_stmt_constructor = 165, /* template_class_stmt_constructor  */
  YYSYMBOL_class_stmt_constructor = 166,   /* class_stmt_constructor  */
  YYSYMBOL_accessibility = 167,            /* accessibility  */
  YYSYMBOL_class_inherit_base = 168,       /* class_inherit_base  */
  YYSYMBOL_inherit_base = 169,             /* inherit_base  */
  YYSYMBOL_inherit_base_name = 170,        /* inherit_base_name  */
  YYSYMBOL_compound_base = 171,            /* compound_base  */
  YYSYMBOL_deamerreserved_arrow__compound_base_alias__ = 172, /* deamerreserved_arrow__compound_base_alias__  */
  YYSYMBOL_deamerreserved_star__COMMA__compound_base_alias__ = 173, /* deamerreserved_star__COMMA__compound_base_alias__  */
  YYSYMBOL_compound_base_name = 174,       /* compound_base_name  */
  YYSYMBOL_compound_base_alias = 175,      /* compound_base_alias  */
  YYSYMBOL_enum_declaration = 176,         /* enum_declaration  */
  YYSYMBOL_deamerreserved_star__enumeration__ = 177, /* deamerreserved_star__enumeration__  */
  YYSYMBOL_enum_name = 178,                /* enum_name  */
  YYSYMBOL_enumeration = 179,              /* enumeration  */
  YYSYMBOL_enumeration_name = 180,         /* enumeration_name  */
  YYSYMBOL_enumeration_value = 181,        /* enumeration_value  */
  YYSYMBOL_symbol_reference = 182,         /* symbol_reference  */
  YYSYMBOL_deamerreserved_arrow__symbol__ = 183, /* deamerreserved_arrow__symbol__  */
  YYSYMBOL_deamerreserved_star__DOT__symbol_secondary__ = 184, /* deamerreserved_star__DOT__symbol_secondary__  */
  YYSYMBOL_symbol_secondary = 185,         /* symbol_secondary  */
  YYSYMBOL_deamerreserved_star__symbol_access__ = 186, /* deamerreserved_star__symbol_access__  */
  YYSYMBOL_symbol = 187,                   /* symbol  */
  YYSYMBOL_symbol_access = 188,            /* symbol_access  */
  YYSYMBOL_auto_deduce_array = 189,        /* auto_deduce_array  */
  YYSYMBOL_symbol_name_secondary = 190,    /* symbol_name_secondary  */
  YYSYMBOL_symbol_name = 191,              /* symbol_name  */
  YYSYMBOL_function_access = 192,          /* function_access  */
  YYSYMBOL_deamerreserved_arrow__expression__ = 193, /* deamerreserved_arrow__expression__  */
  YYSYMBOL_deamerreserved_star__COMMA__expression__ = 194, /* deamerreserved_star__COMMA__expression__  */
  YYSYMBOL_index_access = 195,             /* index_access  */
  YYSYMBOL_anonymous_access = 196,         /* anonymous_access  */
  YYSYMBOL_type = 197,                     /* type  */
  YYSYMBOL_deamerreserved_star__type_modifier__ = 198, /* deamerreserved_star__type_modifier__  */
  YYSYMBOL_type_modifier = 199,            /* type_modifier  */
  YYSYMBOL_value_list = 200,               /* value_list  */
  YYSYMBOL_deamerreserved_arrow__full_value__ = 201, /* deamerreserved_arrow__full_value__  */
  YYSYMBOL_deamerreserved_star__COMMA__full_value__ = 202, /* deamerreserved_star__COMMA__full_value__  */
  YYSYMBOL_full_value = 203,               /* full_value  */
  YYSYMBOL_value = 204,                    /* value  */
  YYSYMBOL_tuple = 205                     /* tuple  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
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

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  412
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1242
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 18
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   661,   661,   672,   682,   692,   698,   708,   714,   720,
     726,   732,   738,   744,   750,   756,   763,   769,   775,   781,
     787,   793,   799,   805,   811,   817,   823,   829,   835,   841,
     847,   853,   864,   874,   884,   897,   909,   922,   934,   948,
     958,   965,   975,   985,   991,   997,  1003,  1009,  1019,  1033,
    1043,  1057,  1069,  1079,  1095,  1110,  1126,  1141,  1156,  1170,
    1185,  1199,  1215,  1230,  1246,  1261,  1276,  1290,  1305,  1319,
    1332,  1344,  1357,  1369,  1385,  1400,  1416,  1431,  1446,  1460,
    1475,  1489,  1505,  1520,  1536,  1551,  1566,  1580,  1595,  1609,
    1622,  1634,  1647,  1663,  1673,  1680,  1690,  1700,  1707,  1717,
    1727,  1734,  1744,  1758,  1771,  1785,  1798,  1811,  1823,  1836,
    1848,  1862,  1875,  1889,  1902,  1915,  1927,  1940,  1952,  1963,
    1973,  1984,  1998,  2011,  2023,  2036,  2048,  2061,  2073,  2086,
    2102,  2113,  2123,  2134,  2148,  2158,  2168,  2178,  2188,  2194,
    2200,  2210,  2216,  2222,  2228,  2234,  2240,  2246,  2252,  2258,
    2264,  2274,  2282,  2292,  2302,  2308,  2318,  2330,  2340,  2355,
    2365,  2375,  2385,  2397,  2407,  2414,  2424,  2434,  2444,  2452,
    2459,  2467,  2478,  2488,  2495,  2505,  2511,  2519,  2528,  2540,
    2551,  2563,  2578,  2588,  2595,  2605,  2615,  2625,  2635,  2646,
    2656,  2667,  2677,  2689,  2699,  2706,  2716,  2726,  2732,  2742,
    2752,  2762,  2768,  2778,  2790,  2800,  2813,  2826,  2838,  2850,
    2863,  2876,  2888,  2900,  2913,  2926,  2938,  2950,  2963,  2976,
    2988,  3004,  3015,  3026,  3036,  3046,  3057,  3068,  3078,  3092,
    3102,  3112,  3122,  3128,  3134,  3140,  3150,  3160,  3170,  3181,
    3191,  3202,  3212,  3224,  3234,  3241,  3251,  3261,  3271,  3281,
    3291,  3301,  3311,  3321,  3335,  3345,  3355,  3363,  3375,  3385,
    3392,  3402,  3412,  3418,  3424,  3430,  3436,  3446,  3456,  3462,
    3472,  3478,  3484,  3490,  3496,  3502,  3512,  3519,  3526,  3533,
    3540,  3546,  3556,  3566,  3572,  3578,  3584,  3590,  3596,  3606,
    3612,  3618,  3624,  3630,  3636,  3646,  3659,  3671,  3684,  3696,
    3709,  3721,  3734,  3746,  3759,  3771,  3784,  3796,  3809,  3821,
    3834,  3846,  3859,  3871,  3884,  3896,  3909,  3921,  3934,  3950,
    3961,  3971,  3982,  3992,  4003,  4013,  4024,  4034,  4045,  4055,
    4066,  4080,  4086,  4092,  4102,  4108,  4118,  4128,  4138,  4144,
    4150,  4159,  4167,  4176,  4188,  4198,  4205,  4215,  4225,  4235,
    4247,  4253,  4263,  4273,  4280,  4286,  4293,  4303,  4313,  4323,
    4333,  4343,  4350,  4360,  4370,  4376,  4386,  4396,  4402,  4408,
    4414,  4424,  4436,  4442,  4448,  4454,  4460,  4466,  4476,  4482,
    4492,  4501,  4509,  4518,  4530,  4540,  4547,  4557,  4569,  4581,
    4587,  4593,  4599,  4605,  4615,  4621,  4631,  4637,  4643,  4653,
    4660,  4670,  4680,  4687,  4697,  4707,  4713,  4719,  4725,  4731,
    4737,  4747,  4756
};
#endif

#define YYPACT_NINF (-522)
#define YYTABLE_NINF (-396)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1085,  -522,     2,    13,     6,    42,  -522,     3,     2,   457,
     623,    34,    55,    46,  -522,    73,    99,     7,  -522,   109,
     183,  -522,  -522,  -522,  1221,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,   176,  -522,  -522,  -522,  -522,
    -522,   150,  -522,  1134,  -522,   177,    84,     2,     8,    58,
    -522,  -522,   210,  -522,   207,   220,  -522,  -522,   241,  -522,
    -522,   258,   255,  -522,  1319,   159,   171,  -522,  -522,  -522,
    -522,    62,  1092,  -522,  -522,  -522,  -522,  -522,   984,   278,
     457,   457,   283,  1381,   262,  1443,   306,   303,   199,   312,
    -522,  -522,    19,    58,     2,   359,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,   457,    22,  -522,   457,   544,   164,
    -522,   279,  -522,  -522,  -522,  -522,   337,  -522,   361,   361,
    -522,  -522,     2,     2,   366,   200,   382,  -522,     2,  -522,
     272,   321,  1513,     3,  -522,  -522,   404,   371,   413,  -522,
     154,   206,   423,  -522,   392,   249,   437,  -522,   457,   457,
     171,   171,   171,   171,   171,   171,   171,   171,   427,  1558,
     467,   484,   457,  -522,   490,  -522,   509,   512,   519,   521,
     523,     2,  -522,    -2,  -522,   530,   541,   570,  -522,     2,
    -522,   125,  -522,   246,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,   177,   348,   557,  -522,   565,  -522,   600,   598,   289,
    -522,   457,   457,  -522,  -522,   613,     2,    72,  -522,   617,
       2,     2,   636,    58,  -522,    -6,  -522,   643,   645,   317,
     655,   665,   674,   326,  -522,   669,   255,  -522,  1639,   700,
    -522,   705,   704,    58,  -522,  -522,  -522,  -522,   708,   457,
    -522,  1092,  1092,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,   332,    14,  -522,   709,   714,   715,   719,  -522,   726,
    1708,   729,   730,   733,   727,   126,  -522,   728,  -522,    21,
    -522,   736,   737,     2,     2,   270,   740,   742,  -522,  -522,
     370,   745,   743,   724,  -522,  -522,  -522,  -522,  -522,   457,
    -522,  -522,   748,  -522,   751,   759,  -522,  -522,  -522,   457,
     354,   765,   766,     2,   755,     2,   457,   756,  1753,   774,
     776,   772,    58,  -522,  1798,   778,   780,   787,  -522,  -522,
     792,  1843,  1888,   779,   775,  -522,   798,   457,   457,  -522,
    1933,  1978,   808,  -522,   809,  2023,  2068,   811,  -522,   810,
     812,   145,   806,     2,   813,   796,   386,  -522,  -522,   844,
    -522,   854,   827,   245,   245,    65,  -522,  -522,  -522,   853,
     857,   836,    51,   842,  -522,  8168,  -522,  -522,  -522,  -522,
    -522,  -522,     2,  8207,   315,  -522,    93,     6,   367,   426,
      58,  -522,  -522,  -522,   838,  -522,  -522,  -522,   841,  -522,
     850,   839,   360,   419,   468,   849,  -522,   365,  -522,  -522,
     457,  -522,   859,  2113,  2158,   855,   865,   860,  2203,  2248,
     862,  -522,   864,   872,  2293,  -522,  -522,   874,  -522,   878,
     883,   885,  2338,   886,   889,   898,  2383,     2,   902,   908,
     913,   796,  -522,   918,  -522,   922,   165,   905,   374,    16,
     301,   947,   953,   954,   956,   536,   914,  -522,  -522,   546,
     925,  -522,  -522,   265,  -522,   935,   742,   603,   936,   937,
      58,     2,   110,     6,   514,   743,  -522,  -522,  2428,   942,
     957,   943,   959,   949,   375,   960,   963,   387,   666,   494,
    -522,  -522,  -522,   968,   974,  2473,  -522,  -522,   975,   978,
    2518,  -522,  -522,   980,   981,   985,  -522,  -522,   983,  -522,
     989,   994,   995,   996,     2,     2,   991,   993,  -522,  -522,
    2563,  1003,  -522,   170,   229,  1011,   225,  -522,  -522,    38,
    1015,  -522,  -522,  -522,  -522,  1019,  1017,   398,   672,  1024,
    1021,   400,   302,  -522,  -522,   457,  -522,  -522,     2,  1025,
     428,   692,   693,     2,   440,   738,  1027,  1028,    58,     2,
    -522,  1034,  2608,  2653,  1029,  2698,  1036,  1041,  1032,  2743,
    1043,  1044,  1042,  1046,  1045,   441,  1057,  1031,   168,  1056,
    -522,  -522,  -522,  1048,  -522,  -522,  1065,  -522,  2788,  2833,
    -522,  -522,  -522,  1067,  -522,  1075,  1081,     2,  -522,  1086,
    2878,  2923,  1088,  2968,  1090,   296,  -522,  1083,   175,  1089,
     112,  1087,    67,  3013,  1094,  1098,  1101,  1107,  1103,   458,
    3058,  1111,  1115,  1104,   245,  1117,   499,  1129,     2,     2,
    1131,  1137,  1133,   462,  1142,  1138,   476,  1141,  8233,  1146,
       2,  1149,   485,   752,   782,     2,   501,  -522,  1156,  1158,
    3103,  1159,  3148,  3193,  1161,  1163,  3238,  3283,  1162,  3328,
    1166,  1167,  1160,  -522,  1164,  1171,  1168,   457,  -522,  -522,
    -522,  1176,  1179,  -522,  -522,  -522,  1169,  -522,  1181,  1184,
    3373,  1185,  3418,  3463,  1187,  -522,  -522,  1197,  1140,  -522,
     794,  1198,   799,   113,  1199,  1200,  3508,  3553,  1204,  3598,
    1213,  1214,  1211,  1216,  3643,  3688,  1218,  1251,   245,  -522,
    -522,   829,  1219,  1220,     2,  3733,  1222,  1226,  1215,  3778,
    1227,  1229,  1225,   851,  1230,  8259,  1228,     2,     2,  1231,
    1233,  1232,   524,  1234,  1235,   548,  1237,  8285,  1238,  -522,
    -522,  1242,  -522,  1243,  1244,  3823,  -522,  1249,  1250,  3868,
    1252,  3913,  3958,  1239,  -522,  -522,  1247,  1246,  -522,  -522,
    -522,  -522,  -522,  1254,  -522,  1255,  1256,  4003,  -522,  1253,
    1258,  1259,   554,   890,  1260,  1261,   575,   915,  1263,   929,
    -522,  1262,  1264,  4048,  1267,  4093,  4138,  1269,  -522,  1270,
    1272,  4183,  1291,  1274,  1265,   576,   939,   948,  1271,  1276,
    4228,  4273,  1280,  1281,  4318,  4363,  1283,   411,  1279,   577,
    -522,  1284,   988,  1277,  1292,     2,  4408,  1287,  1288,  1293,
    4453,  1299,  1302,  1305,  1020,  1310,  8311,  -522,  -522,  -522,
    1311,  -522,  -522,  1313,  -522,  1314,  1316,  4498,  -522,  -522,
    -522,  -522,  -522,  1317,  -522,  4543,  1320,  1321,  1322,  1324,
    1325,   582,  4588,  1329,  1331,  1327,  1333,  1330,   591,  1037,
    1334,  1332,   610,  -522,  -522,  1335,  -522,  1338,  1339,  4633,
    -522,  -522,  1340,  4678,  1342,  1343,  1353,  1344,  1355,   615,
    1361,  1357,   621,  1109,  -522,  1362,  1363,  4723,  -522,  1371,
    1373,  4768,  4813,  1376,   602,   604,  1372,  -522,  1378,  1374,
     629,  1126,  1165,  1379,  1383,  4858,  4903,  1380,  1385,  4948,
    4993,  1387,   694,  1384,   630,  -522,  1389,  -522,  -522,  -522,
    -522,  1390,  -522,  1391,  5038,  5083,  1393,  5128,  1394,  1395,
    1392,  1397,  5173,  5218,  1396,  5263,  1399,  1401,  1398,  1402,
    1400,   640,  5308,  1404,  1406,  1403,  -522,  -522,  -522,  1410,
    -522,  1411,  5353,  5398,  1407,  5443,  1420,  1422,  1418,  5488,
    1424,  1425,  1421,  1438,  1434,   650,  -522,  -522,  1439,  -522,
    -522,  1440,  1441,  5533,  5578,  1444,  5623,  1445,   868,  5668,
    1448,  1449,  1446,  1453,  1450,   681,  1454,  1451,   682,  1173,
    -522,  1456,  1457,  5713,  -522,  1458,  1459,  5758,  5803,  1461,
     904,   907,  1460,  -522,  -522,  -522,  1462,  1463,  5848,  1465,
    5893,  5938,  1467,  -522,  1468,  1469,  5983,  1471,  6028,  6073,
    1473,  6118,  1474,  1475,  1476,  1478,  6163,  6208,  1482,  -522,
    -522,  1489,  1492,  6253,  1493,  6298,  6343,  1495,  1503,  6388,
    6433,  1496,  6478,  1505,  1506,  1504,  -522,  -522,  -522,  1509,
    1511,  6523,  1514,  6568,  6613,  1518,  1520,  6658,  6703,  1519,
    6748,  1523,  1524,  1521,  6793,  1527,  1535,  1532,  1538,  1534,
     683,  -522,  -522,  1539,  -522,  -522,  1548,  1549,  6838,  6883,
    1551,  6928,  1553,  1033,  -522,  -522,  1554,  -522,  1555,  1556,
    6973,  -522,  -522,  1560,  -522,  1562,  1563,  7018,  1565,  7063,
    7108,  1567,  -522,  1568,  1569,  7153,  -522,  -522,  1570,  -522,
    1571,  1573,  7198,  -522,  1575,  1576,  7243,  1577,  7288,  7333,
    1579,  -522,  -522,  1580,  -522,  1581,  1582,  7378,  -522,  1583,
    1584,  7423,  1586,  7468,  7513,  1588,  1589,  7558,  7603,  1593,
    7648,  1594,  1595,  1591,  -522,  -522,  -522,  1596,  1597,  7693,
    1598,  7738,  7783,  1600,  -522,  -522,  -522,  1601,  -522,  -522,
    -522,  1603,  -522,  1604,  1606,  7828,  -522,  -522,  1615,  -522,
    -522,  -522,  1617,  -522,  -522,  1618,  -522,  1619,  1620,  7873,
    -522,  -522,  -522,  1621,  -522,  -522,  1630,  -522,  1631,  1633,
    7918,  -522,  1634,  1635,  7963,  1636,  8008,  8053,  1638,  -522,
    -522,  1640,  -522,  1643,  1644,  8098,  -522,  -522,  -522,  -522,
    1646,  -522,  -522,  -522,  -522,  -522,  1647,  -522,  -522,  -522,
    -522,  1648,  -522,  -522,  1649,  -522,  1650,  1651,  8143,  -522,
    -522,  -522,  1652,  -522,  -522,  -522,  -522,  -522,  -522,  1653,
    -522,  -522
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     266,   397,     0,     0,   262,   263,   396,     0,     0,     0,
     379,     0,     0,     0,   398,     0,     0,     0,    31,   378,
       0,     2,     3,     4,     6,    30,    32,    29,    28,    25,
      26,    27,    23,    24,    21,    22,    20,    18,    19,    17,
      16,   155,   154,    14,    13,     0,    12,     7,     9,     8,
      10,     0,    11,     0,   359,   362,   365,     0,     0,   395,
     379,   378,     0,   352,   395,     0,   249,   264,     0,   265,
     167,     0,   165,   153,   266,   395,     0,   405,   406,   407,
     134,   137,   140,   150,   409,   408,   152,   410,   395,     0,
       0,     0,     0,   266,     0,   266,     0,     0,     0,    41,
       1,     5,   171,   395,     0,     0,    15,    43,    44,    45,
      46,    47,   135,   136,     0,     0,   360,     0,     0,     0,
     366,   365,   370,   369,   367,   368,   202,   204,   393,   391,
     389,   394,   351,     0,     0,     0,    98,   231,     0,   236,
     395,   395,   266,     0,   163,   200,     0,     0,     0,   404,
     137,     0,   195,   196,   198,     0,   403,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,   266,
       0,     0,     0,    52,     0,    33,     0,     0,     0,     0,
       0,     0,    39,     0,   170,   169,   174,   175,   186,     0,
     230,     0,   261,   395,    42,   374,   373,   375,   376,   377,
     372,   362,   365,     0,   371,     0,   383,     0,   386,     0,
     364,     0,     0,   392,   390,     0,   351,   356,   357,     0,
       0,     0,     0,   395,    96,   235,   237,     0,     0,     0,
     101,     0,     0,     0,   166,     0,   165,   192,   266,     0,
     151,     0,     0,   395,   193,   199,   197,   412,     0,     0,
     401,   138,   139,   143,   144,   145,   146,   147,   148,   142,
     141,   159,     0,   161,     0,     0,     0,     0,    51,     0,
     266,     0,     0,     0,    41,     0,   185,     0,   168,     0,
     172,     0,     0,     0,     0,   395,     0,   260,   334,   335,
     266,     0,    95,     0,   361,   363,   388,   387,   382,     0,
     384,   381,     0,   201,   400,     0,   349,   350,   355,     0,
     395,     0,     0,     0,    98,     0,     0,   233,   266,     0,
       0,     0,   395,    99,   266,     0,     0,     0,   162,   164,
       0,   266,   266,     0,   195,   411,   403,     0,     0,   156,
     266,   266,     0,    38,     0,   266,   266,     0,    40,     0,
       0,     0,   184,     0,   174,     0,   395,   336,   337,   338,
     347,   262,     0,   266,   266,     0,   331,   332,   333,   294,
     288,     0,     0,     0,   267,   395,   271,   272,   273,   275,
     274,   270,     0,   395,     0,   258,     0,   262,     0,   266,
     395,    93,   255,   254,   386,   380,   399,   203,   354,   358,
       0,     0,     0,   395,   395,     0,    97,     0,   246,   234,
       0,   248,     0,   266,   266,     0,   101,     0,   266,   266,
       0,   191,     0,     0,   266,   194,   402,     0,   160,     0,
       0,     0,   266,     0,     0,     0,   266,     0,     0,     0,
       0,     0,   182,     0,   173,     0,   395,     0,     0,     0,
     395,   290,   284,   292,   286,   395,     0,   293,   287,   395,
       0,   257,   268,   281,   282,     0,   260,   395,     0,     0,
     395,     0,     0,   262,     0,    95,   385,   353,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
     242,   232,   121,     0,     0,   266,   100,   133,     0,     0,
     266,   190,   189,     0,     0,     0,    48,    49,     0,    37,
       0,     0,     0,     0,     0,     0,     0,   184,   177,   176,
     266,     0,   229,   395,   395,     0,     0,   348,   339,     0,
       0,   289,   283,   291,   285,     0,     0,     0,   395,     0,
       0,     0,   395,   279,   277,     0,   256,   259,     0,     0,
       0,   395,   395,     0,     0,   395,     0,     0,   395,     0,
      94,     0,   266,   266,     0,   266,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     247,   120,   119,     0,   132,   131,     0,   188,   266,   266,
      50,    36,    35,     0,   181,     0,     0,     0,   183,     0,
     266,   266,     0,   266,     0,   395,   343,     0,     0,   346,
       0,     0,     0,   266,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,   266,     0,   280,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
       0,     0,     0,   395,   395,     0,     0,   117,     0,     0,
     266,     0,   266,   266,     0,     0,   266,   266,     0,   266,
       0,     0,     0,   241,     0,     0,     0,     0,   243,   118,
     130,     0,     0,    34,   180,   179,     0,   228,     0,     0,
     266,     0,   266,   266,     0,   342,   341,     0,     0,   344,
     395,     0,   395,     0,     0,     0,   266,   266,     0,   266,
       0,     0,     0,     0,   266,   266,     0,     0,   266,   278,
     276,   395,     0,     0,     0,   266,     0,     0,     0,   266,
       0,     0,     0,   395,     0,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,     0,   116,
     115,     0,   113,     0,     0,   266,   109,     0,     0,   266,
       0,   266,   266,     0,   240,   239,     0,   245,   157,   158,
     178,   227,   226,     0,   224,     0,     0,   266,   340,   346,
       0,     0,     0,   395,     0,     0,     0,   395,     0,   395,
     330,     0,     0,   266,     0,   266,   266,     0,   322,     0,
       0,   266,     0,     0,     0,     0,   395,   395,     0,     0,
     266,   266,     0,     0,   266,   266,     0,   395,     0,     0,
     253,     0,   395,     0,     0,     0,   266,     0,     0,     0,
     266,     0,     0,     0,   395,     0,   395,   114,   112,   111,
       0,   108,   107,     0,   105,     0,     0,   266,   238,   244,
     225,   223,   222,     0,   345,   266,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,   329,   328,     0,   326,     0,     0,   266,
     321,   320,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,    92,     0,     0,   266,   129,     0,
       0,   266,   266,     0,   395,   395,     0,   252,     0,     0,
       0,   395,   395,     0,     0,   266,   266,     0,     0,   266,
     266,     0,   395,     0,     0,   251,     0,   110,   106,   104,
     103,     0,   221,     0,   266,   266,     0,   266,     0,     0,
       0,     0,   266,   266,     0,   266,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,   327,   325,   324,     0,
     319,     0,   266,   266,     0,   266,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,    91,    90,     0,   128,
     127,     0,     0,   266,   266,     0,   266,     0,   395,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
      72,     0,     0,   266,   125,     0,     0,   266,   266,     0,
     395,   395,     0,   250,   102,   318,     0,     0,   266,     0,
     266,   266,     0,   302,     0,     0,   266,     0,   266,   266,
       0,   266,     0,     0,     0,     0,   266,   266,     0,   323,
      88,     0,     0,   266,     0,   266,   266,     0,     0,   266,
     266,     0,   266,     0,     0,     0,    89,   126,   220,     0,
       0,   266,     0,   266,   266,     0,     0,   266,   266,     0,
     266,     0,     0,     0,   266,     0,     0,     0,     0,     0,
       0,    71,    70,     0,   124,   123,     0,     0,   266,   266,
       0,   266,     0,   395,   317,   316,     0,   314,     0,     0,
     266,   301,   300,     0,   310,     0,     0,   266,     0,   266,
     266,     0,   298,     0,     0,   266,    87,    86,     0,    84,
       0,     0,   266,    80,     0,     0,   266,     0,   266,   266,
       0,   219,   218,     0,   216,     0,     0,   266,    68,     0,
       0,   266,     0,   266,   266,     0,     0,   266,   266,     0,
     266,     0,     0,     0,    69,   122,   212,     0,     0,   266,
       0,   266,   266,     0,   315,   313,   312,     0,   299,   309,
     308,     0,   306,     0,     0,   266,   297,   296,     0,    85,
      83,    82,     0,    79,    78,     0,    76,     0,     0,   266,
     217,   215,   214,     0,    67,    66,     0,    64,     0,     0,
     266,    60,     0,     0,   266,     0,   266,   266,     0,   211,
     210,     0,   208,     0,     0,   266,   311,   307,   305,   304,
       0,   295,    81,    77,    75,    74,     0,   213,    65,    63,
      62,     0,    59,    58,     0,    56,     0,     0,   266,   209,
     207,   206,     0,   303,    73,    61,    57,    55,    54,     0,
     205,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -522,  -522,  -522,    15,  1248,  -522,  -522,  -522,  -522,  -522,
    1352,  -522,  -522,  -522,  -522,  -522,  -323,  -522,  -427,   887,
    -458,  1191,   -67,  1097,  -522,  -522,  -522,  -522,  -522,  -522,
      23,   -35,   412,   -17,  -522,  -522,  -522,  -522,  -522,  1354,
      49,  -522,  -522,  1369,  -522,  1356,  -522,  -522,  1323,  1312,
    -522,  1100,  -273,  -326,  -522,  -522,  -522,  1360,  1452,  -522,
    -522,  -231,  -522,  1572,  -522,  -284,  -244,  -511,  -100,  1477,
     -58,  -522,  -522,  -522,  -522,   940,  -522,  1035,  -151,    39,
    -522,  1306,  -522,  -522,  -522,  1240,   -96,  -271,  -361,  1328,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -374,  -522,
    -522,  -522,  -522,   930,  -522,  -521,  -522,  1491,  -522,  -522,
    -522,  -522,  1000,  -522,  1497,  -522,   -95,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  1315,  -522,  -522,   -64,  1654,  -522,
    1177,  -207,  1375,  -211,  -522,  -522
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    20,    21,   411,    23,    24,    25,    26,    27,    98,
     182,    28,   114,    29,    30,    31,   174,    32,   291,   391,
     135,   224,   229,   323,    33,    34,    35,    36,    37,    38,
     149,    81,    82,    83,    39,    40,    41,    42,   262,   427,
     264,    43,    71,   144,   235,    72,    44,   185,   280,   186,
     351,   442,   277,   187,    45,    84,   151,   244,   152,   153,
     246,   146,    46,   213,   126,    47,    48,   521,   522,   136,
     230,   138,   225,   317,   578,   668,   407,   579,   412,    65,
      49,   292,   393,    50,   286,   385,   371,    51,   373,   374,
     375,   376,   463,   377,   378,   379,   380,   381,   287,   288,
     357,   289,   608,   689,   359,   528,    52,   215,    62,   216,
     217,   398,    53,    54,   116,   201,   120,    55,   121,   122,
     202,    56,   123,   209,   300,   124,   125,    57,    58,    59,
     303,   155,   250,   156,    86,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,   369,   352,   189,   304,   609,   137,   330,   191,   550,
     466,   154,   602,   604,   372,    22,    67,   430,   431,   388,
     128,   129,   465,   530,   168,    60,   210,   443,   195,    60,
      60,    60,    80,    89,   337,   315,    60,   275,   336,   190,
     150,   370,    60,    68,    60,   196,   197,   198,   199,    96,
     316,    69,    97,   150,    64,   526,   103,   338,   183,   157,
     183,    60,     1,   276,   184,   460,   610,    61,    70,     6,
      92,    61,    61,    61,   233,    90,   139,   139,    61,   451,
     453,   527,   445,    93,    61,    14,    61,   200,    60,   145,
      60,   369,   372,   372,   684,   693,    91,   642,   399,   369,
     422,   423,    94,    61,   372,   409,   455,   295,   173,   508,
     176,   513,   372,   170,   171,   625,    60,   308,   474,   452,
     454,   117,   158,   118,   159,   119,   428,   428,   309,   293,
      61,   370,    61,    60,   467,    60,    60,   194,    95,   370,
     203,   205,   208,   253,   254,   255,   256,   257,   258,   259,
     260,   555,  -187,   690,   777,   103,   104,   234,    61,   139,
     283,   284,   285,     1,   105,   137,   349,   769,   517,     1,
       6,   350,   219,   417,     1,    61,     6,    61,    61,   154,
     639,     6,    60,   100,   263,   439,    14,    60,   595,   596,
     440,   276,    14,   503,    60,   267,   240,    14,    74,   491,
      75,   147,   520,    74,   148,    75,   206,   601,   665,   207,
      74,     1,    75,   666,   158,   686,   159,    76,     6,   102,
     687,   382,    76,   115,    61,    77,    78,    79,   282,    61,
      77,    78,    79,     1,    14,   305,    61,    77,    78,    79,
       6,   179,   221,   402,   180,   222,   139,   132,   241,   133,
       1,   242,   134,   145,   361,     5,    14,     6,   139,   311,
     312,   140,   493,   494,   416,   606,   603,   498,   499,   456,
     607,   676,   738,    14,     1,  -266,     1,   724,   580,   361,
       5,     6,   141,     6,   362,   344,   290,   363,   364,   448,
     527,   247,   139,    60,   248,   142,   893,    14,   365,    14,
       1,   143,   366,   367,   368,     1,     1,     6,  -269,   543,
     544,   382,     6,     6,   227,   169,   117,   228,   118,   382,
     119,   545,   394,    14,   172,     1,   293,   561,    14,    14,
     175,   301,     6,   683,   302,    61,   484,   487,   304,   139,
     139,   529,   624,   177,   583,   178,   145,   145,    14,   586,
     283,   284,   405,   707,   369,   173,   173,   181,     1,   320,
     434,   435,   321,   231,   811,     6,   232,   372,   326,   599,
     553,   327,   470,   471,  -199,   554,   825,  -199,   386,   387,
       5,    14,   190,   975,   977,   117,   293,   118,   537,   119,
       1,   139,   541,   211,   370,   139,   400,     6,   193,   401,
     212,   999,   480,   139,   489,   481,   190,   490,   220,   137,
     238,   648,   649,    14,   651,     1,   524,   567,   655,   525,
     568,   575,     6,     1,   139,   468,   469,   223,   446,   571,
       6,   447,   572,   611,   472,   473,     5,   792,    14,   145,
     615,   369,   622,   616,   237,   623,    14,   173,   892,   678,
     679,   512,   681,   369,   372,   239,   580,   245,   645,   190,
     190,   482,   695,   646,   483,   916,   372,  1055,   243,   703,
     629,   619,     1,   630,   139,   283,   284,   638,   293,     6,
      60,   370,   249,   661,   633,   636,   662,   139,   139,  1080,
    1082,   139,   261,   370,   190,    14,    74,   137,    75,   741,
     701,   743,   744,   702,   717,   747,   748,   718,   750,   265,
     485,   556,   557,   486,   691,    76,   694,    60,   721,   558,
     559,   722,    61,    77,    78,    79,   266,   728,   268,   763,
     729,   765,   766,    74,   576,    75,   283,   284,   737,   577,
       1,   190,   369,   709,   710,   781,   782,     6,   784,   269,
       1,   270,    76,   789,   790,   372,   271,     6,   272,    61,
      77,    78,    79,    14,   799,   273,   818,    60,   803,   819,
     251,   252,  1153,    14,   382,   278,   732,   735,   535,   139,
     139,   536,   370,    74,   204,    75,   279,   627,   539,   281,
     822,   540,   637,   823,   830,   296,   847,   778,   833,   848,
     835,   836,    76,   263,   263,   297,     1,     1,     1,    61,
      77,    78,    79,     6,     6,     6,   843,   854,   875,   895,
     855,   876,   896,   772,   929,   776,   139,   930,   139,    14,
      14,    14,   865,   937,   867,   868,   938,   671,   672,   974,
     872,   976,   298,   299,   795,   548,    60,   139,   549,   885,
     886,   306,   944,   889,   890,   945,   809,   957,   310,   139,
     958,   382,    74,   961,    88,   904,   962,   712,   713,   908,
       1,   981,  1001,   382,   982,  1002,     1,     6,   313,   726,
     318,    76,  1023,     6,   736,  1024,   921,   319,    61,    77,
      78,    79,  1044,    14,   923,  1045,     1,     1,     1,    14,
     322,   931,   324,     6,     6,     6,   851,   328,   573,   139,
     858,   574,   862,   139,   617,   139,   325,   618,   949,    14,
      14,    14,   951,  1062,  1066,  1142,  1063,  1067,  1143,   879,
     882,   998,   139,   139,   631,   634,   968,   632,   635,   331,
     971,   972,     1,   190,   332,   900,   333,   339,   139,     6,
     335,   340,   341,   798,   991,   992,     1,   914,   995,   996,
     139,   342,   382,     6,   343,    14,   813,   814,   345,   346,
     347,   353,   181,  1006,  1007,   355,  1009,   383,   356,    14,
     640,  1014,  1015,   641,  1017,   389,     1,   384,   390,   392,
     395,  1025,   941,     6,   730,   139,   396,   731,     1,   397,
     223,  1031,  1032,     1,  1034,     6,   403,   404,  1038,    14,
       6,   413,   410,   414,   415,   418,   965,   419,   424,   139,
     243,    14,  1049,  1050,   733,  1052,    14,   734,  1056,   420,
     190,   190,   421,     1,   985,   988,   770,   139,   139,   771,
       6,   774,  1073,   249,   775,   432,  1076,  1077,   190,   433,
     436,   441,   438,   437,   903,     1,    14,  1086,   279,  1088,
    1089,   276,     6,   449,    67,  1093,   450,  1095,  1096,   457,
    1098,   793,     1,   458,   794,  1103,  1104,   459,    14,     6,
     461,   479,  1108,   299,  1110,  1111,   477,   478,  1114,  1115,
     488,  1117,   495,   807,     1,    14,   808,   492,   497,   500,
    1123,     6,  1125,  1126,   501,  1054,  1129,  1130,     1,  1132,
     322,     1,   502,  1136,   190,     6,   504,    14,     6,     1,
     505,   506,  1070,   507,   509,   139,     6,  1147,  1148,   510,
    1150,    14,   849,     1,    14,   850,   190,   190,   511,  1157,
       6,  1079,    14,     1,  1081,   514,  1161,   523,  1163,  1164,
       6,   515,     1,   516,  1168,   538,    14,   856,   518,     6,
     857,  1172,   519,   531,   542,  1175,    14,  1177,  1178,   532,
     533,   860,   534,   546,   861,    14,  1183,   551,   552,   562,
    1186,   877,  1188,  1189,   878,   564,  1192,  1193,     1,  1195,
     880,   566,     1,   881,   563,     6,   565,   569,  1201,     6,
    1203,  1204,    63,    66,    66,   570,   581,    60,    73,    85,
      85,    14,   582,   584,  1210,    14,   585,    99,   588,   190,
     587,   590,   589,    74,     1,    75,   147,   591,  1216,   148,
     898,     6,   592,   899,   597,   593,   594,     1,   441,  1221,
     600,     1,    76,  1224,     6,  1226,  1227,    14,     6,    61,
      77,    78,    79,   605,  1232,   612,   613,   127,   130,   614,
      14,   620,   912,   621,    14,   913,   650,   628,   643,   644,
    1152,   664,   647,   652,   654,    85,    85,  1239,   653,   939,
     656,   657,   940,   659,   658,    -6,   669,   660,    85,     1,
      85,    85,     2,     3,     4,     5,     6,  -395,  -395,   663,
       7,   667,   188,   670,   192,   673,     8,     9,    10,    11,
      12,    13,    14,     1,    85,   674,    15,    85,    85,    85,
       6,   675,    16,   685,   677,   680,    17,   682,   692,    18,
       1,   696,   218,    66,   688,   697,    14,     6,   226,   160,
     161,   162,   163,   698,   699,   700,   706,   164,   704,   165,
      19,   963,   705,    14,   964,   166,   167,   708,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,   983,     1,
     711,   984,    85,   714,   715,   716,     6,     1,   106,   719,
     720,   274,   723,   725,     6,   107,   108,   109,   110,    66,
     111,   727,    14,   112,   739,   113,   740,   742,   745,   749,
      14,   746,   753,   751,   752,   527,   754,   986,   756,   760,
     987,    85,    85,   755,   758,  1068,   218,   759,  1069,   761,
      66,    66,   762,   764,   767,     1,  -266,  -266,     2,     3,
       4,     5,     6,  -395,  -395,  -266,     7,   768,   780,   773,
     779,   783,     8,     9,    10,    11,    12,    13,    14,    85,
     785,   786,    15,   787,   788,   791,   470,   802,    16,   800,
     796,   797,    17,   801,   804,    18,   805,   806,   810,   812,
     816,   820,   101,   815,   817,   826,   837,   821,   824,   188,
     827,   828,   829,   358,   360,   192,    19,   831,   832,   838,
     834,   667,   840,   841,   842,   845,   558,   852,   688,    85,
     863,   846,   864,   853,   859,   866,   869,   874,   870,    85,
     871,   873,   883,    66,   884,   408,    85,   887,   901,   888,
     891,   894,   897,     1,   905,   906,     2,     3,     4,     5,
       6,  -395,  -395,   902,     7,   907,   909,    85,    85,   910,
       8,     9,    10,    11,    12,    13,    14,   911,   915,   917,
      15,   918,   919,   188,   920,   922,    16,   924,   925,    -6,
      17,   927,   560,    18,   926,   192,   932,   928,   933,   934,
     935,   942,   936,   946,   943,   192,   947,   948,   950,   952,
     953,   955,   464,   192,    19,     1,    66,    66,     2,     3,
       4,     5,     6,  -395,  -395,   954,     7,   956,   959,   960,
     966,   967,     8,     9,    10,    11,    12,    13,    14,   969,
      85,   970,    15,   973,   978,   979,   980,   993,    16,    -6,
     989,   990,    17,   994,   997,    18,  1000,  1003,  1004,  1005,
    1008,  1010,  1011,  1016,  1012,  1013,  1018,   188,  1019,  1021,
    1020,  1026,  1022,  1027,  1033,  1028,    19,     1,  1029,  1030,
       2,     3,     4,     5,     6,  -395,  -395,  1035,     7,  1036,
    1037,  1039,  1040,  1041,     8,     9,    10,    11,    12,    13,
      14,   192,    66,    66,    15,  1042,  1043,  1046,  1047,  1048,
      16,  1051,  1053,    -6,    17,  1057,  1058,    18,  1059,    85,
    1060,  1064,  1061,  1065,  1071,  1072,  1074,  1075,  1078,   236,
    1084,  1085,  1083,  1087,  1090,   406,  1091,  1092,    19,  1094,
    1097,  1099,  1100,   496,   188,   188,  1102,     1,  1101,  1105,
       2,     3,     4,     5,     6,  -395,  -395,  1106,     7,   192,
    1107,  1109,  1112,  1116,     8,     9,    10,    11,    12,    13,
      14,  1113,  1118,  1119,    15,    85,  1120,  1121,    66,  1122,
      16,    -6,  1124,    66,    17,  1127,  1131,    18,  1128,   192,
    1133,  1134,     1,  1135,  1137,     2,     3,     4,     5,     6,
    -395,  -395,  1138,     7,  1139,  1140,  1141,  1144,    19,     8,
       9,    10,    11,    12,    13,    14,  1145,  1146,  1149,    15,
    1151,   354,  1154,  1155,  1156,    16,    -6,   188,  1158,    17,
    1159,  1160,    18,  1162,  1165,   329,  1166,  1167,  1169,  1170,
     192,  1171,   192,  1173,  1174,  1176,  1179,   598,  1180,  1181,
    1182,  1184,  1185,    19,  1187,  1190,   348,  1191,    66,    66,
    1194,  1196,  1197,  1198,  1199,  1200,  1202,  1205,   192,  1206,
      66,  1207,  1208,     1,  1209,    66,     2,     3,     4,     5,
       6,  -395,  -395,  1211,     7,  1212,  1213,  1214,  1215,  1217,
       8,     9,    10,    11,    12,    13,    14,    85,  1218,  1219,
      15,  1220,  1222,  1223,  1225,  1228,    16,   444,  1229,    -6,
      17,  1230,  1231,    18,  1233,  1234,  1235,  1236,  1237,  1238,
    1240,  1241,   429,   192,   425,   334,   475,   839,   294,   844,
     314,   214,   757,   462,    19,     0,   547,   307,     0,   476,
       0,   426,     1,   131,    66,     2,     3,     4,     5,     6,
    -395,  -395,   626,     7,     0,   192,     0,    66,    66,     8,
       9,    10,    11,    12,    13,    14,     0,   192,     0,    15,
       0,     0,     0,     0,     0,    16,     0,     0,    -6,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,    66,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,   192,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,     0,     0,    -6,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,     0,     0,    -6,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,     0,     0,    -6,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,     0,     0,    -6,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,     0,     0,    -6,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,     0,     0,    -6,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    -6,     0,     0,    17,     0,     0,    18,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     4,     5,     6,
    -395,  -395,     0,     7,     0,     0,     0,     0,    19,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    -6,     0,     0,    17,
       0,     0,    18,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     6,  -395,  -395,     0,     7,     0,
       0,     0,     0,    19,     8,     9,    10,    11,    12,    13,
      14,     0,     1,  -266,    15,     0,     0,   361,     5,     6,
      16,    -6,   362,     0,    17,   363,   364,    18,     0,     0,
       0,    60,     0,     0,     0,    14,   365,     0,     0,     0,
     366,   367,   368,     0,     0,     0,  -269,     0,    19,     0,
       0,     1,  -266,     0,     0,     0,   361,     5,     6,     0,
       0,   362,     0,     0,   363,   364,     0,     0,     0,     0,
      60,     0,     0,    61,    14,   365,     0,     1,  -266,   366,
     367,   368,   361,     5,     6,  -269,     0,   362,     0,     0,
     363,   364,     0,     0,     0,     0,    60,     0,     0,     0,
      14,   365,     0,     1,  -266,   366,   367,   368,   361,     5,
       6,  -269,    61,   362,     0,     0,   363,   364,     0,     0,
       0,     0,    60,     0,     0,     0,    14,   365,     0,     1,
    -266,   366,   367,   368,   361,     5,     6,  -269,    61,   362,
       0,     0,   363,   364,     0,     0,     0,     0,    60,     0,
       0,     0,    14,   365,     0,     1,  -266,   366,   367,   368,
     361,     5,     6,  -269,    61,   362,     0,     0,   363,   364,
       0,     0,     0,     0,    60,     0,     0,     0,    14,   365,
       0,     0,     0,   366,   367,   368,     0,     0,     0,  -269,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
      64,   285,   275,   103,   211,   526,    64,   238,   104,   467,
     384,    75,   523,   524,   285,     0,    10,   340,   341,   290,
      12,    13,   383,   450,    88,    23,   121,   353,     6,    23,
      23,    23,     9,    10,    20,    41,    23,    39,   249,   103,
      75,   285,    23,     4,    23,    23,    24,    25,    26,    42,
      56,     9,    45,    88,    41,    39,     5,    43,    39,    76,
      39,    23,     4,    65,    45,    14,    28,    65,    65,    11,
      24,    65,    65,    65,   141,    41,   140,   141,    65,   363,
     364,    65,   355,    37,    65,    27,    65,    65,    23,    74,
      23,   375,   363,   364,   605,    28,    41,   555,   309,   383,
     331,   332,    29,    65,   375,   316,    41,   202,    93,   432,
      95,   437,   383,    90,    91,   542,    23,    45,   389,   363,
     364,    37,    60,    39,    62,    41,   337,   338,    56,   193,
      65,   375,    65,    23,    41,    23,    23,   114,    39,   383,
     117,   118,   119,   160,   161,   162,   163,   164,   165,   166,
     167,    41,    43,    41,    41,     5,     6,   142,    65,   223,
      35,    36,    37,     4,    14,   223,    40,   688,   441,     4,
      11,    45,   133,   324,     4,    65,    11,    65,    65,   243,
     554,    11,    23,     0,   169,    40,    27,    23,   514,   515,
      45,    65,    27,   424,    23,   172,    42,    27,    39,   410,
      41,    42,    37,    39,    45,    41,    42,    37,    40,    45,
      39,     4,    41,    45,    60,    40,    62,    58,    11,    43,
      45,   285,    58,    46,    65,    66,    67,    68,   189,    65,
      66,    67,    68,     4,    27,   212,    65,    66,    67,    68,
      11,    42,    42,   310,    45,    45,   310,    37,    42,    42,
       4,    45,    45,   238,     9,    10,    27,    11,   322,   220,
     221,    41,   413,   414,   322,    40,    37,   418,   419,   365,
      45,   597,   646,    27,     4,     5,     4,   638,   489,     9,
      10,    11,    41,    11,    14,   270,    40,    17,    18,   356,
      65,    42,   356,    23,    45,    37,   807,    27,    28,    27,
       4,    46,    32,    33,    34,     4,     4,    11,    38,    44,
      45,   375,    11,    11,    42,    37,    37,    45,    39,   383,
      41,    56,   299,    27,    41,     4,   390,   478,    27,    27,
      68,    42,    11,    37,    45,    65,   403,   404,   545,   403,
     404,    40,    40,    37,   495,    42,   331,   332,    27,   500,
      35,    36,   313,   624,   638,   340,   341,    45,     4,    42,
     345,   346,    45,    42,   725,    11,    45,   638,    42,   520,
     470,    45,     5,     6,    42,   471,   737,    45,     8,     9,
      10,    27,   446,   894,   895,    37,   450,    39,   455,    41,
       4,   455,   459,    56,   638,   459,    42,    11,    39,    45,
      39,   912,    42,   467,    39,    45,   470,    42,    42,   467,
      39,   562,   563,    27,   565,     4,    42,    42,   569,    45,
      45,   488,    11,     4,   488,   386,   387,    45,    42,    42,
      11,    45,    45,   529,     8,     9,    10,   708,    27,   424,
      42,   725,    42,    45,    40,    45,    27,   432,    37,   600,
     601,   436,   603,   737,   725,    42,   667,    65,   558,   523,
     524,    42,   613,   559,    45,   826,   737,   978,    45,   620,
      42,   538,     4,    45,   538,    35,    36,    37,   542,    11,
      23,   725,    45,    42,   551,   552,    45,   551,   552,  1000,
    1001,   555,    65,   737,   558,    27,    39,   555,    41,   650,
      42,   652,   653,    45,    42,   656,   657,    45,   659,    42,
      42,   472,   473,    45,   610,    58,   612,    23,    42,     5,
       6,    45,    65,    66,    67,    68,    42,    42,    38,   680,
      45,   682,   683,    39,    40,    41,    35,    36,    37,    45,
       4,   605,   826,    44,    45,   696,   697,    11,   699,    40,
       4,    39,    58,   704,   705,   826,    37,    11,    37,    65,
      66,    67,    68,    27,   715,    42,    42,    23,   719,    45,
     158,   159,  1083,    27,   638,    45,   643,   644,    42,   643,
     644,    45,   826,    39,    40,    41,    45,   548,    42,    19,
      42,    45,   553,    45,   745,    38,    42,   693,   749,    45,
     751,   752,    58,   588,   589,    40,     4,     4,     4,    65,
      66,    67,    68,    11,    11,    11,   767,    42,    42,    42,
      45,    45,    45,   690,    42,   692,   690,    45,   692,    27,
      27,    27,   783,    42,   785,   786,    45,   588,   589,    37,
     791,    37,    42,    45,   711,    42,    23,   711,    45,   800,
     801,    38,    42,   804,   805,    45,   723,    42,    41,   723,
      45,   725,    39,    42,    41,   816,    45,   628,   629,   820,
       4,    42,    42,   737,    45,    45,     4,    11,    42,   640,
      37,    58,    42,    11,   645,    45,   837,    42,    65,    66,
      67,    68,    42,    27,   845,    45,     4,     4,     4,    27,
      45,   852,    37,    11,    11,    11,   773,    38,    42,   773,
     777,    45,   779,   777,    42,   779,    42,    45,   869,    27,
      27,    27,   873,    42,    42,    42,    45,    45,    45,   796,
     797,    37,   796,   797,    42,    42,   887,    45,    45,    39,
     891,   892,     4,   807,    39,   812,    42,    38,   812,    11,
      42,    37,    37,   714,   905,   906,     4,   824,   909,   910,
     824,    42,   826,    11,    38,    27,   727,   728,    39,    39,
      37,    43,    45,   924,   925,    39,   927,    37,    41,    27,
      42,   932,   933,    45,   935,    40,     4,    45,    45,    65,
      42,   942,   859,    11,    42,   859,    45,    45,     4,    40,
      45,   952,   953,     4,   955,    11,    41,    41,   959,    27,
      11,    37,    56,    37,    42,    37,   883,    37,    39,   883,
      45,    27,   973,   974,    42,   976,    27,    45,   979,    42,
     894,   895,    40,     4,   901,   902,    42,   901,   902,    45,
      11,    42,   993,    45,    45,    37,   997,   998,   912,    40,
      39,    45,    40,    43,   815,     4,    27,  1008,    45,  1010,
    1011,    65,    11,    19,    10,  1016,    39,  1018,  1019,    16,
    1021,    42,     4,    16,    45,  1026,  1027,    41,    27,    11,
      38,    42,  1033,    45,  1035,  1036,    45,    37,  1039,  1040,
      41,  1042,    37,    42,     4,    27,    45,    38,    38,    37,
    1051,    11,  1053,  1054,    40,    37,  1057,  1058,     4,  1060,
      45,     4,    40,  1064,   978,    11,    42,    27,    11,     4,
      42,    38,   989,    38,    38,   989,    11,  1078,  1079,    40,
    1081,    27,    42,     4,    27,    45,  1000,  1001,    40,  1090,
      11,    37,    27,     4,    37,    43,  1097,    42,  1099,  1100,
      11,    43,     4,    40,  1105,    41,    27,    42,    40,    11,
      45,  1112,    40,    16,    39,  1116,    27,  1118,  1119,    16,
      16,    42,    16,    38,    45,    27,  1127,    41,    41,    37,
    1131,    42,  1133,  1134,    45,    42,  1137,  1138,     4,  1140,
      42,    42,     4,    45,    37,    11,    37,    37,  1149,    11,
    1151,  1152,     2,     3,     4,    42,    38,    23,     8,     9,
      10,    27,    38,    38,  1165,    27,    38,    17,    37,  1083,
      40,    38,    37,    39,     4,    41,    42,    38,  1179,    45,
      42,    11,    38,    45,    43,    40,    40,     4,    45,  1190,
      37,     4,    58,  1194,    11,  1196,  1197,    27,    11,    65,
      66,    67,    68,    42,  1205,    40,    37,    57,    58,    42,
      27,    37,    42,    42,    27,    45,    37,    42,    41,    41,
      37,    40,    38,    37,    42,    75,    76,  1228,    37,    42,
      37,    37,    45,    37,    42,     0,    38,    42,    88,     4,
      90,    91,     7,     8,     9,    10,    11,    12,    13,    42,
      15,    45,   102,    38,   104,    38,    21,    22,    23,    24,
      25,    26,    27,     4,   114,    40,    31,   117,   118,   119,
      11,    40,    37,    40,    38,    37,    41,    37,    41,    44,
       4,    37,   132,   133,    45,    37,    27,    11,   138,    47,
      48,    49,    50,    42,    37,    42,    42,    55,    37,    57,
      65,    42,    37,    27,    45,    63,    64,    40,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,    42,     4,
      41,    45,   172,    42,    37,    42,    11,     4,    44,    37,
      42,   181,    41,    37,    11,    51,    52,    53,    54,   189,
      56,    42,    27,    59,    38,    61,    38,    38,    37,    37,
      27,    38,    42,    37,    37,    65,    42,    42,    40,    40,
      45,   211,   212,    42,    38,    42,   216,    38,    45,    38,
     220,   221,    38,    38,    37,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    40,    38,    41,
      41,    37,    21,    22,    23,    24,    25,    26,    27,   249,
      37,    37,    31,    42,    38,    37,     5,    42,    37,    37,
      41,    41,    41,    37,    37,    44,    37,    42,    38,    41,
      37,    37,    24,    42,    42,    37,    37,    42,    41,   279,
      38,    38,    38,   283,   284,   285,    65,    38,    38,    42,
      38,    45,    38,    38,    38,    37,     5,    37,    45,   299,
      38,    42,    38,    42,    41,    38,    37,    42,    38,   309,
      38,    37,    41,   313,    38,   315,   316,    37,    41,    38,
      37,    42,    38,     4,    37,    37,     7,     8,     9,    10,
      11,    12,    13,    41,    15,    42,    37,   337,   338,    37,
      21,    22,    23,    24,    25,    26,    27,    42,    38,    38,
      31,    38,    38,   353,    38,    38,    37,    37,    37,    40,
      41,    37,   475,    44,    42,   365,    37,    42,    37,    42,
      37,    37,    42,    38,    42,   375,    38,    38,    38,    37,
      37,    37,   382,   383,    65,     4,   386,   387,     7,     8,
       9,    10,    11,    12,    13,    42,    15,    42,    37,    42,
      38,    38,    21,    22,    23,    24,    25,    26,    27,    38,
     410,    38,    31,    37,    42,    37,    42,    37,    37,    38,
      41,    38,    41,    38,    37,    44,    42,    38,    38,    38,
      37,    37,    37,    37,    42,    38,    37,   437,    37,    37,
      42,    37,    42,    37,    37,    42,    65,     4,    38,    38,
       7,     8,     9,    10,    11,    12,    13,    37,    15,    37,
      42,    37,    37,    42,    21,    22,    23,    24,    25,    26,
      27,   471,   472,   473,    31,    37,    42,    38,    38,    38,
      37,    37,    37,    40,    41,    37,    37,    44,    42,   489,
      37,    37,    42,    42,    38,    38,    38,    38,    37,   143,
      38,    38,    42,    38,    37,   314,    38,    38,    65,    38,
      37,    37,    37,   416,   514,   515,    38,     4,    42,    37,
       7,     8,     9,    10,    11,    12,    13,    38,    15,   529,
      38,    38,    37,    37,    21,    22,    23,    24,    25,    26,
      27,    38,    37,    37,    31,   545,    42,    38,   548,    38,
      37,    38,    38,   553,    41,    37,    37,    44,    38,   559,
      37,    37,     4,    42,    37,     7,     8,     9,    10,    11,
      12,    13,    37,    15,    42,    37,    42,    38,    65,    21,
      22,    23,    24,    25,    26,    27,    38,    38,    37,    31,
      37,   279,    38,    38,    38,    37,    38,   597,    38,    41,
      38,    38,    44,    38,    37,   236,    38,    38,    38,    38,
     610,    38,   612,    38,    38,    38,    37,   517,    38,    38,
      38,    38,    38,    65,    38,    37,   274,    38,   628,   629,
      37,    37,    37,    42,    38,    38,    38,    37,   638,    38,
     640,    38,    38,     4,    38,   645,     7,     8,     9,    10,
      11,    12,    13,    38,    15,    38,    38,    38,    38,    38,
      21,    22,    23,    24,    25,    26,    27,   667,    38,    38,
      31,    38,    38,    38,    38,    37,    37,   354,    38,    40,
      41,    38,    38,    44,    38,    38,    38,    38,    38,    38,
      38,    38,   338,   693,   334,   243,   390,   757,   201,   769,
     223,   129,   667,   375,    65,    -1,   466,   216,    -1,   394,
      -1,   336,     4,    59,   714,     7,     8,     9,    10,    11,
      12,    13,   545,    15,    -1,   725,    -1,   727,   728,    21,
      22,    23,    24,    25,    26,    27,    -1,   737,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,   815,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,   826,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    65,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    65,    21,    22,    23,    24,    25,    26,
      27,    -1,     4,     5,    31,    -1,    -1,     9,    10,    11,
      37,    38,    14,    -1,    41,    17,    18,    44,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    65,    -1,
      -1,     4,     5,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    65,    27,    28,    -1,     4,     5,    32,
      33,    34,     9,    10,    11,    38,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,     4,     5,    32,    33,    34,     9,    10,
      11,    38,    65,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,     4,
       5,    32,    33,    34,     9,    10,    11,    38,    65,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    -1,     4,     5,    32,    33,    34,
       9,    10,    11,    38,    65,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    38,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,     9,    10,    11,    15,    21,    22,
      23,    24,    25,    26,    27,    31,    37,    41,    44,    65,
      71,    72,    73,    74,    75,    76,    77,    78,    81,    83,
      84,    85,    87,    94,    95,    96,    97,    98,    99,   104,
     105,   106,   107,   111,   116,   124,   132,   135,   136,   150,
     153,   157,   176,   182,   183,   187,   191,   197,   198,   199,
      23,    65,   178,   182,    41,   149,   182,    10,   149,     9,
      65,   112,   115,   182,    39,    41,    58,    66,    67,    68,
     100,   101,   102,   103,   125,   182,   204,   205,    41,   100,
      41,    41,    24,    37,    29,    39,    42,    45,    79,   182,
       0,    74,    43,     5,     6,    14,    44,    51,    52,    53,
      54,    56,    59,    61,    82,    46,   184,    37,    39,    41,
     186,   188,   189,   192,   195,   196,   134,   182,    12,    13,
     182,   198,    37,    42,    45,    90,   139,   140,   141,   197,
      41,    41,    37,    46,   113,    73,   131,    42,    45,   100,
     101,   126,   128,   129,   197,   201,   203,   103,    60,    62,
      47,    48,    49,    50,    55,    57,    63,    64,   197,    37,
     100,   100,    41,    73,    86,    68,    73,    37,    42,    42,
      45,    45,    80,    39,    45,   117,   119,   123,   182,   138,
     197,   156,   182,    39,   100,     6,    23,    24,    25,    26,
      65,   185,   190,   100,    40,   100,    42,    45,   100,   193,
     186,    56,    39,   133,   133,   177,   179,   180,   182,   149,
      42,    42,    45,    45,    91,   142,   182,    42,    45,    92,
     140,    42,    45,    92,    73,   114,   115,    40,    39,    42,
      42,    42,    45,    45,   127,    65,   130,    42,    45,    45,
     202,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,    65,   108,    73,   110,    42,    42,   100,    38,    40,
      39,    37,    37,    42,   182,    39,    65,   122,    45,    45,
     118,    19,   149,    35,    36,    37,   154,   168,   169,   171,
      40,    88,   151,   197,   184,   186,    38,    40,    42,    45,
     194,    42,    45,   200,   201,   100,    38,   177,    45,    56,
      41,   149,   149,    42,   139,    41,    56,   143,    37,    42,
      42,    45,    45,    93,    37,    42,    42,    45,    38,   113,
     131,    39,    39,    42,   128,    42,   203,    20,    43,    38,
      37,    37,    42,    38,    73,    39,    39,    37,    80,    40,
      45,   120,   122,    43,   119,    39,    41,   170,   182,   174,
     182,     9,    14,    17,    18,    28,    32,    33,    34,   135,
     136,   156,   157,   158,   159,   160,   161,   163,   164,   165,
     166,   167,   197,    37,    45,   155,     8,     9,   157,    40,
      45,    89,    65,   152,   100,    42,    45,    40,   181,   203,
      42,    45,    92,    41,    41,   149,    91,   146,   182,   203,
      56,    73,   148,    37,    37,    42,   140,   148,    37,    37,
      42,    40,   131,   131,    39,   127,   202,   109,   203,   109,
      86,    86,    37,    40,    73,    73,    39,    43,    40,    40,
      45,    45,   121,   123,   118,   122,    42,    45,    92,    19,
      39,   135,   136,   135,   136,    41,   156,    16,    16,    41,
      14,    38,   159,   162,   182,   158,   168,    41,   149,   149,
       5,     6,     8,     9,   157,   151,   194,    45,    37,    42,
      42,    45,    42,    45,    92,    42,    45,    92,    41,    39,
      42,   203,    38,   148,   148,    37,    93,    38,   148,   148,
      37,    40,    40,   131,    42,    42,    38,    38,    86,    38,
      40,    40,    73,   123,    43,    43,    40,   122,    40,    40,
      37,   137,   138,    42,    42,    45,    39,    65,   175,    40,
      88,    16,    16,    16,    16,    42,    45,    92,    41,    42,
      45,    92,    39,    44,    45,    56,    38,   155,    42,    45,
      90,    41,    41,   138,   156,    41,   149,   149,     5,     6,
      89,   148,    37,    37,    42,    37,    42,    42,    45,    37,
      42,    42,    45,    42,    45,    92,    40,    45,   144,   147,
     203,    38,    38,   148,    38,    38,   148,    40,    37,    37,
      38,    38,    38,    40,    40,   123,   123,    43,   121,   148,
      37,    37,   137,    37,   137,    42,    40,    45,   172,   175,
      28,   156,    40,    37,    42,    42,    45,    42,    45,    92,
      37,    42,    42,    45,    40,    88,   200,   149,    42,    42,
      45,    42,    45,    92,    42,    45,    92,   149,    37,   168,
      42,    45,    90,    41,    41,   138,   156,    38,   148,   148,
      37,   148,    37,    37,    42,   148,    37,    37,    42,    37,
      42,    42,    45,    42,    40,    40,    45,    45,   145,    38,
      38,   110,   110,    38,    40,    40,   123,    38,   148,   148,
      37,   148,    37,    37,   137,    40,    40,    45,    45,   173,
      41,   156,    41,    28,   156,   148,    37,    37,    42,    37,
      42,    42,    45,   148,    37,    37,    42,   157,    40,    44,
      45,    41,   149,   149,    42,    37,    42,    42,    45,    37,
      42,    42,    45,    41,   158,    37,   149,    42,    42,    45,
      42,    45,    92,    42,    45,    92,   149,    37,   168,    38,
      38,   148,    38,   148,   148,    37,    38,   148,   148,    37,
     148,    37,    37,    42,    42,    42,    40,   147,    38,    38,
      40,    38,    38,   148,    38,   148,   148,    37,    40,   175,
      42,    45,    92,    41,    42,    45,    92,    41,   156,    41,
      38,   148,   148,    37,   148,    37,    37,    42,    38,   148,
     148,    37,   157,    42,    45,    92,    41,    41,   149,   148,
      37,    37,    42,   148,    37,    37,    42,    42,    45,    92,
      38,   158,    41,   149,   149,    42,    37,    42,    42,    45,
      37,    42,    42,    45,    41,   158,    37,    38,    38,    38,
     148,    38,    38,   148,    38,   148,   148,    37,    42,   145,
      38,    38,    38,   148,   173,    37,    42,    42,    45,    42,
      45,    92,    37,    42,    42,    45,    42,    45,    92,    41,
      42,    45,    92,    38,    38,   148,    38,   148,   148,    37,
      38,    38,   148,    37,    42,    42,    45,    42,    45,    92,
      42,    45,    92,    41,    38,   148,   148,    37,    38,   148,
     148,    37,    37,   137,    42,    42,    45,    38,    42,    45,
      92,    41,    41,   149,   148,    37,    37,    42,   148,    37,
      37,    42,    42,    45,    92,    38,   158,    38,    38,    38,
      38,   148,    38,   148,    37,    37,    42,    37,    42,    42,
      45,   148,    37,    37,    42,    37,    42,    42,    45,    42,
      45,    92,    37,    42,    42,    45,    38,    38,    38,   148,
      38,   148,    37,    37,    42,    37,    42,    42,    45,    37,
      42,    42,    45,    42,    45,    92,    38,    38,   148,    38,
      38,   148,   148,    37,    37,   137,    37,   137,    42,    37,
      42,    42,    45,    42,    45,    92,    42,    45,    92,    41,
      38,   148,   148,    37,    38,   148,   148,    37,    37,   137,
      42,    42,    45,    38,    38,    38,   148,   148,    37,   148,
      37,    37,    42,    38,   148,   148,    37,   148,    37,    37,
      42,    37,    42,    42,    45,   148,    37,    37,    42,    38,
      38,   148,   148,    37,   148,    37,    37,    42,   148,    37,
      37,    42,    37,    42,    42,    45,    38,    38,    38,   148,
     148,    37,   148,    37,    37,   137,   148,    37,    37,    42,
      37,    42,    42,    45,    37,    42,    42,    45,    42,    45,
      92,    38,    38,   148,    38,    38,   148,   148,    37,    37,
     137,    37,   137,    42,    38,    38,   148,    38,   148,   148,
      37,    38,    38,   148,    38,   148,   148,    37,   148,    37,
      37,    42,    38,   148,   148,    37,    38,    38,   148,    38,
     148,   148,    37,    38,   148,   148,    37,   148,    37,    37,
      42,    38,    38,   148,    38,   148,   148,    37,    38,   148,
     148,    37,   148,    37,    37,    42,   148,    37,    37,    42,
      37,    42,    42,    45,    38,    38,    38,   148,   148,    37,
     148,    37,    37,   137,    38,    38,    38,   148,    38,    38,
      38,   148,    38,   148,   148,    37,    38,    38,   148,    38,
      38,    38,   148,    38,    38,   148,    38,   148,   148,    37,
      38,    38,    38,   148,    38,    38,   148,    38,   148,   148,
      37,    38,   148,   148,    37,   148,    37,    37,    42,    38,
      38,   148,    38,   148,   148,    37,    38,    38,    38,    38,
     148,    38,    38,    38,    38,    38,   148,    38,    38,    38,
      38,   148,    38,    38,   148,    38,   148,   148,    37,    38,
      38,    38,   148,    38,    38,    38,    38,    38,    38,   148,
      38,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    78,    78,    78,    78,    78,    79,
      80,    80,    81,    82,    82,    82,    82,    82,    83,    84,
      84,    85,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    88,    89,    89,    90,    91,    91,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    97,    98,    99,   100,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   103,   103,   104,   105,   105,   106,   107,   107,   108,
     109,   110,   111,   112,   113,   113,   114,   115,   116,   116,
     116,   116,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   120,   121,   121,   122,   123,   124,   125,   125,
     125,   125,   125,   126,   127,   127,   128,   129,   129,   130,
     131,   132,   132,   133,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     138,   139,   140,   140,   140,   140,   141,   142,   143,   143,
     143,   143,   143,   144,   145,   145,   146,   147,   148,   149,
     150,   150,   150,   150,   151,   152,   153,   153,   154,   155,
     155,   156,   157,   157,   157,   157,   157,   158,   159,   159,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   162,   163,   163,   163,   163,   163,   163,   164,
     164,   164,   164,   164,   164,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   167,   168,   168,   169,   170,   171,   171,
     171,   171,   171,   171,   172,   173,   173,   174,   175,   176,
     177,   177,   178,   179,   179,   179,   179,   180,   181,   182,
     183,   184,   184,   185,   186,   186,   187,   188,   188,   188,
     188,   189,   190,   190,   190,   190,   190,   190,   191,   191,
     192,   192,   192,   192,   193,   194,   194,   195,   196,   197,
     197,   197,   197,   197,   198,   198,   199,   199,   199,   200,
     200,   201,   202,   202,   203,   204,   204,   204,   204,   204,
     204,   205,   205
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     9,     8,     8,     7,     5,     2,
       3,     0,     3,     1,     1,     1,     1,     1,     7,     7,
       8,     4,     1,    18,    17,    17,    16,    17,    16,    16,
      15,    17,    16,    16,    15,    16,    15,    15,    14,    14,
      13,    13,    12,    17,    16,    16,    15,    16,    15,    15,
      14,    16,    15,    15,    14,    15,    14,    14,    13,    13,
      12,    12,    11,     2,     3,     0,     2,     3,     0,     2,
       3,     0,    13,    12,    12,    11,    12,    11,    11,    10,
      12,    11,    11,    10,    11,    10,    10,     9,     9,     8,
       8,     7,    14,    13,    13,    12,    13,    12,    12,    11,
       9,     8,     8,     7,     2,     2,     2,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     3,     1,     2,     1,     1,     5,    10,    10,     1,
       1,     1,     5,     2,     3,     0,     1,     1,     4,     3,
       3,     2,     2,     3,     0,     1,     5,     5,     8,     7,
       7,     6,     2,     3,     0,     1,     1,     1,     7,     6,
       6,     5,     3,     2,     3,     0,     1,     2,     1,     1,
       1,     4,     2,     3,     1,    17,    16,    16,    15,    16,
      15,    15,    14,    16,    15,    15,    14,    15,    14,    14,
      13,    12,    11,    11,    10,    11,    10,    10,     9,     1,
       1,     1,     5,     3,     4,     2,     1,     1,     7,     6,
       6,     5,     3,     2,     3,     0,     1,     1,     1,     1,
      12,    11,    11,    10,     2,     1,     7,     6,     2,     3,
       0,     1,     1,     1,     2,     2,     0,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     5,     3,     5,     3,
       4,     2,     1,     3,     2,     3,     2,     2,     1,     3,
       2,     3,     2,     2,     1,    12,    11,    11,    10,    11,
      10,    10,     9,    13,    12,    12,    11,    12,    11,    11,
      10,    12,    11,    11,    10,    11,    10,    10,     9,     8,
       7,     7,     6,     9,     8,     8,     7,     8,     7,     7,
       6,     1,     1,     1,     1,     1,     2,     1,     2,     4,
       7,     6,     6,     5,     2,     3,     0,     1,     1,     5,
       2,     0,     1,     4,     3,     2,     1,     1,     1,     1,
       2,     3,     0,     2,     2,     0,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     2,     2,     3,     0,     3,     3,     2,
       3,     2,     3,     2,     2,     0,     1,     1,     1,     2,
       1,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     4,     3
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
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
       0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
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
       0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
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
       0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int16 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,    15,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,    47,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,    71,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,     0,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,   353,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,     0,
       0,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
       0,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,     0,
       0,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
       0,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,     0,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,     0,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,     0,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,     0,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,     0,
       0,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   277,     0,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   281,     0,
       0,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   289,     0,
       0,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   293,     0,     0,   295,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   297,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,     0,   303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   305,     0,
       0,   307,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,     0,     0,   311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   313,     0,
       0,   315,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,     0,     0,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,     0,
       0,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   337,     0,     0,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,   343,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   345,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,     0,
       0,   355,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,     0,   359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,     0,
       0,   363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   365,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,   375,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,   379,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   381,     0,     0,   383,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   385,     0,
       0,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   389,     0,     0,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   393,     0,
       0,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,     0,     0,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,     0,
       0,   409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,     0,     0,   413,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   415,     0,
       0,   417,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   419,     0,     0,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   423,     0,
       0,   425,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   427,     0,     0,   429,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   431,     0,
       0,   433,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   435,     0,     0,   437,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   439,     0,
       0,   441,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       0,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   451,     0,     0,   453,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   455,     0,
       0,   457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   459,     0,     0,   461,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,     0,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   471,     0,
       0,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   475,     0,     0,   477,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   479,     0,
       0,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   483,     0,     0,   485,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,     0,
       0,   489,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   491,     0,     0,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   499,     0,     0,   501,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   503,     0,
       0,   505,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,     0,   509,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   511,     0,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   515,     0,     0,   517,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   519,     0,
       0,   521,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   523,     0,     0,   525,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   527,     0,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   531,     0,     0,   533,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   535,     0,
       0,   537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   539,     0,     0,   541,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   543,     0,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   547,     0,     0,   549,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   551,     0,
       0,   553,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   555,     0,     0,   557,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   559,     0,
       0,   561,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   563,     0,     0,   565,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   567,     0,
       0,   569,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   571,     0,     0,   573,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,     0,
       0,   577,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   579,     0,     0,   581,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   583,     0,
       0,   585,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   587,     0,     0,   589,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   591,     0,
       0,   593,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   595,     0,     0,   597,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   599,     0,
       0,   601,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   603,     0,     0,   605,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   607,     0,
       0,   609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   611,     0,     0,   613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   615,     0,
       0,   617,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   619,     0,     0,   621,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   623,     0,
       0,   625,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   627,     0,     0,   629,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   631,     0,
       0,   633,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   635,     0,     0,   637,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   639,     0,
       0,   641,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   643,     0,     0,   645,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   647,     0,
       0,   649,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   651,     0,     0,   653,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   655,     0,
       0,   657,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   659,     0,     0,   661,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   663,     0,
       0,   665,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   667,     0,     0,   669,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   671,     0,
       0,   673,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,     0,     0,   677,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   679,     0,
       0,   681,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   683,     0,     0,   685,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   687,     0,
       0,   689,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   691,     0,     0,   693,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   695,     0,
       0,   697,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   699,     0,     0,   701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   703,     0,
       0,   705,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   707,     0,     0,   709,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   711,     0,
       0,   713,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   715,     0,     0,   717,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   719,     0,
       0,   721,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   723,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,   319,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   253,   325,
       0,     0,     0,     0,     0,     0,     0,     0,   327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   323,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   395,     0,   395,     0,   379,     0,   379,     0,   395,
       0,   395,     0,   365,     0,   365,     0,   365,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,    41,
       0,   171,     0,   171,     0,   365,     0,   365,     0,   365,
       0,    98,     0,   395,     0,   395,     0,   137,     0,   195,
       0,   403,     0,   395,     0,   395,     0,   174,     0,   365,
       0,   365,     0,   365,     0,   386,     0,   101,     0,   395,
       0,   395,     0,   395,     0,   395,     0,    41,     0,   266,
       0,   395,     0,   395,     0,   400,     0,    98,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   195,     0,   403,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   184,     0,   174,     0,   266,
       0,   395,     0,   395,     0,   266,     0,   395,     0,   395,
       0,   386,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   101,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   184,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   245,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   346,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   266,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   266,
       0,   395,     0,   395,     0,   266,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   245,     0,   395,
       0,   395,     0,   346,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   266,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0,   395,
       0,   395,     0,   395,     0,   395,     0,   395,     0
};



YYSTYPE yylval;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SINGLE_COMMENT",
  "CONSTANT", "FUNCTION", "CLASS", "ENUM", "CONDITIONAL", "CODE",
  "RUNTIME", "STATIC", "AUTO", "AUTOTYPE", "TEMPLATE", "NAMESPACE",
  "OVERRIDE", "VIRTUAL", "PURE", "AS", "IN", "DISPLAY", "RETURN", "FOR",
  "IF", "ELSEIF", "ELSE", "INLINE", "CONSTRUCTOR", "FILE_", "PROGRAM_",
  "IMPORT", "PUBLIC", "PROTECTED", "PRIVATE", "INHERIT", "COMPOSITE",
  "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "COLON",
  "SEMICOLON", "COMMA", "DOT", "LTEQ", "GTEQ", "LT", "GT", "PLUSEQ",
  "MINUSEQ", "MULTIPLYEQ", "DIVIDEEQ", "EQEQ", "EQ", "NOTEQ", "NOT",
  "PLUSPLUS", "PLUS", "MINUSMINUS", "MINUS", "DIVIDE", "MULTIPLY",
  "VARNAME", "NUMBER", "DECIMAL", "TEXT", "ESCAPE_CHARS", "$accept",
  "program", "root_program", "standard_block",
  "deamerreserved_star__stmt__", "stmt", "import_statement", "file_import",
  "mutation_group", "deamerreserved_arrow__symbol_reference__",
  "deamerreserved_star__COMMA__symbol_reference__", "assignment",
  "assignment_operator", "conditional_if", "conditional_else_if",
  "conditional_else", "conditional_block",
  "template_conditional_function_declaration",
  "deamerreserved_arrow__template_parameter__",
  "deamerreserved_star__COMMA__template_parameter__",
  "deamerreserved_arrow__conditional_function_argument__",
  "deamerreserved_star__COMMA__conditional_function_argument__",
  "deamerreserved_arrow__function_argument__",
  "deamerreserved_star__COMMA__function_argument__",
  "conditional_function_declaration", "template_code_function_declaration",
  "code_function_declaration", "return_statement", "symbol_increase",
  "symbol_decrease", "expression", "expression_no_value", "t_expression",
  "f_expression", "display_call", "for_loop", "for_iteration_loop",
  "for_each_loop", "for_variable", "iterator", "for_block",
  "namespace_declaration", "deamerreserved_arrow__namespace_name__",
  "deamerreserved_star__DOT__namespace_name__", "namespace_block",
  "namespace_name", "inline_class_declaration",
  "deamerreserved_arrow__inline_class_declaration_composite__",
  "deamerreserved_star__COMMA__inline_class_declaration_composite__",
  "inline_class_declaration_composite",
  "deamerreserved_arrow__inline_class_declaration_composite_alias__",
  "deamerreserved_star__COMMA__inline_class_declaration_composite_alias__",
  "inline_class_declaration_composite_alias",
  "inline_class_declaration_composite_name", "created_class_name",
  "code_block", "deamerreserved_arrow__code_block_input_argument__",
  "deamerreserved_star__COMMA__code_block_input_argument__",
  "code_block_input_argument", "code_block_argument",
  "code_block_argument_name", "code_block_program", "variable_declaration",
  "array_declaration", "variable_name", "template_function_declaration",
  "function_declaration", "trailing_return_type", "return_type",
  "conditional_function_argument", "function_argument",
  "function_argument_type", "function_argument_name",
  "condition_modifier_function_call",
  "deamerreserved_arrow__condition_modifier_argument__",
  "deamerreserved_star__COMMA__condition_modifier_argument__",
  "condition_modifier_name", "condition_modifier_argument",
  "function_body", "function_name", "template_class_declaration",
  "template_parameter", "template_parameter_name", "class_declaration",
  "deamerreserved_arrow__class_inherit_base__",
  "deamerreserved_star__COMMA__class_inherit_base__", "class_name",
  "execution_keyword_permutation", "class_body",
  "deamerreserved_star__class_stmt__", "class_stmt",
  "class_stmt_member_field_declaration", "member_field_name",
  "class_stmt_member_function", "class_stmt_member_template_function",
  "template_class_stmt_constructor", "class_stmt_constructor",
  "accessibility", "class_inherit_base", "inherit_base",
  "inherit_base_name", "compound_base",
  "deamerreserved_arrow__compound_base_alias__",
  "deamerreserved_star__COMMA__compound_base_alias__",
  "compound_base_name", "compound_base_alias", "enum_declaration",
  "deamerreserved_star__enumeration__", "enum_name", "enumeration",
  "enumeration_name", "enumeration_value", "symbol_reference",
  "deamerreserved_arrow__symbol__",
  "deamerreserved_star__DOT__symbol_secondary__", "symbol_secondary",
  "deamerreserved_star__symbol_access__", "symbol", "symbol_access",
  "auto_deduce_array", "symbol_name_secondary", "symbol_name",
  "function_access", "deamerreserved_arrow__expression__",
  "deamerreserved_star__COMMA__expression__", "index_access",
  "anonymous_access", "type", "deamerreserved_star__type_modifier__",
  "type_modifier", "value_list", "deamerreserved_arrow__full_value__",
  "deamerreserved_star__COMMA__full_value__", "full_value", "value",
  "tuple", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
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

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */

#ifndef yystrlen
# define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
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


/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp)
{
  yysymbol_kind_t yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule));
  switch (yyrule)
    {
  case 2: /* program: root_program  */
#line 661 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::program({::Celeste::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_root_program) });
		((*yyvalp).Celeste_program) = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 4768 "Celeste_parser.tab.c"
    break;

  case 3: /* root_program: standard_block  */
#line 672 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::root_program({::Celeste::ast::Type::root_program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_root_program) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4779 "Celeste_parser.tab.c"
    break;

  case 4: /* standard_block: deamerreserved_star__stmt__  */
#line 682 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::standard_block({::Celeste::ast::Type::standard_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__stmt__) });
		((*yyvalp).Celeste_standard_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4790 "Celeste_parser.tab.c"
    break;

  case 5: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 692 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_stmt), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__stmt__) });
		((*yyvalp).Celeste_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4801 "Celeste_parser.tab.c"
    break;

  case 6: /* deamerreserved_star__stmt__: %empty  */
#line 698 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4812 "Celeste_parser.tab.c"
    break;

  case 7: /* stmt: template_function_declaration  */
#line 708 "./Celeste_parser.y"
                                       {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4823 "Celeste_parser.tab.c"
    break;

  case 8: /* stmt: template_class_declaration  */
#line 714 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_class_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4834 "Celeste_parser.tab.c"
    break;

  case 9: /* stmt: function_declaration  */
#line 720 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4845 "Celeste_parser.tab.c"
    break;

  case 10: /* stmt: class_declaration  */
#line 726 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4856 "Celeste_parser.tab.c"
    break;

  case 11: /* stmt: enum_declaration  */
#line 732 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_enum_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4867 "Celeste_parser.tab.c"
    break;

  case 12: /* stmt: variable_declaration  */
#line 738 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_variable_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4878 "Celeste_parser.tab.c"
    break;

  case 13: /* stmt: inline_class_declaration  */
#line 744 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inline_class_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4889 "Celeste_parser.tab.c"
    break;

  case 14: /* stmt: namespace_declaration  */
#line 750 "./Celeste_parser.y"
                                 {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_namespace_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4900 "Celeste_parser.tab.c"
    break;

  case 15: /* stmt: symbol_reference SEMICOLON  */
#line 756 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 4912 "Celeste_parser.tab.c"
    break;

  case 16: /* stmt: for_loop  */
#line 763 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_for_loop) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4923 "Celeste_parser.tab.c"
    break;

  case 17: /* stmt: display_call  */
#line 769 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_display_call) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4934 "Celeste_parser.tab.c"
    break;

  case 18: /* stmt: symbol_increase  */
#line 775 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_increase) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4945 "Celeste_parser.tab.c"
    break;

  case 19: /* stmt: symbol_decrease  */
#line 781 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_decrease) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4956 "Celeste_parser.tab.c"
    break;

  case 20: /* stmt: return_statement  */
#line 787 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_return_statement) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4967 "Celeste_parser.tab.c"
    break;

  case 21: /* stmt: template_code_function_declaration  */
#line 793 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_code_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4978 "Celeste_parser.tab.c"
    break;

  case 22: /* stmt: code_function_declaration  */
#line 799 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4989 "Celeste_parser.tab.c"
    break;

  case 23: /* stmt: template_conditional_function_declaration  */
#line 805 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_conditional_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5000 "Celeste_parser.tab.c"
    break;

  case 24: /* stmt: conditional_function_declaration  */
#line 811 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5011 "Celeste_parser.tab.c"
    break;

  case 25: /* stmt: conditional_if  */
#line 817 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_if) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5022 "Celeste_parser.tab.c"
    break;

  case 26: /* stmt: conditional_else_if  */
#line 823 "./Celeste_parser.y"
                               {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_else_if) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5033 "Celeste_parser.tab.c"
    break;

  case 27: /* stmt: conditional_else  */
#line 829 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_else) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5044 "Celeste_parser.tab.c"
    break;

  case 28: /* stmt: assignment  */
#line 835 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_assignment) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5055 "Celeste_parser.tab.c"
    break;

  case 29: /* stmt: mutation_group  */
#line 841 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_mutation_group) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5066 "Celeste_parser.tab.c"
    break;

  case 30: /* stmt: import_statement  */
#line 847 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_import_statement) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5077 "Celeste_parser.tab.c"
    break;

  case 31: /* stmt: SEMICOLON  */
#line 853 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 24, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5089 "Celeste_parser.tab.c"
    break;

  case 32: /* import_statement: file_import  */
#line 864 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::import_statement({::Celeste::ast::Type::import_statement, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_file_import) });
		((*yyvalp).Celeste_import_statement) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5100 "Celeste_parser.tab.c"
    break;

  case 33: /* file_import: IMPORT FILE_ TEXT  */
#line 874 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::file_import({::Celeste::ast::Type::file_import, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IMPORT({::Celeste::ast::Type::IMPORT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::FILE_({::Celeste::ast::Type::FILE_, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_file_import) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5111 "Celeste_parser.tab.c"
    break;

  case 34: /* mutation_group: LEFT_PARANTHESIS deamerreserved_arrow__symbol_reference__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 884 "./Celeste_parser.y"
                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__symbol_reference__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_mutation_group) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5129 "Celeste_parser.tab.c"
    break;

  case 35: /* mutation_group: LEFT_PARANTHESIS deamerreserved_arrow__symbol_reference__ RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 897 "./Celeste_parser.y"
                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__symbol_reference__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_mutation_group) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5146 "Celeste_parser.tab.c"
    break;

  case 36: /* mutation_group: LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 909 "./Celeste_parser.y"
                                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_mutation_group) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5164 "Celeste_parser.tab.c"
    break;

  case 37: /* mutation_group: LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 922 "./Celeste_parser.y"
                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_mutation_group) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5181 "Celeste_parser.tab.c"
    break;

  case 38: /* mutation_group: LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 934 "./Celeste_parser.y"
                                                                                              {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_mutation_group) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5196 "Celeste_parser.tab.c"
    break;

  case 39: /* deamerreserved_arrow__symbol_reference__: symbol_reference deamerreserved_star__COMMA__symbol_reference__  */
#line 948 "./Celeste_parser.y"
                                                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__symbol_reference__({::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__symbol_reference__) });
		((*yyvalp).Celeste_deamerreserved_arrow__symbol_reference__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5207 "Celeste_parser.tab.c"
    break;

  case 40: /* deamerreserved_star__COMMA__symbol_reference__: COMMA symbol_reference deamerreserved_star__COMMA__symbol_reference__  */
#line 958 "./Celeste_parser.y"
                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__symbol_reference__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__symbol_reference__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 5219 "Celeste_parser.tab.c"
    break;

  case 41: /* deamerreserved_star__COMMA__symbol_reference__: %empty  */
#line 965 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__symbol_reference__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5230 "Celeste_parser.tab.c"
    break;

  case 42: /* assignment: symbol_reference assignment_operator expression  */
#line 975 "./Celeste_parser.y"
                                                         {
		auto* const newNode = new Celeste::ast::node::assignment({::Celeste::ast::Type::assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_symbol_reference), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_assignment_operator), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_assignment) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5241 "Celeste_parser.tab.c"
    break;

  case 43: /* assignment_operator: PLUSEQ  */
#line 985 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PLUSEQ({::Celeste::ast::Type::PLUSEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5252 "Celeste_parser.tab.c"
    break;

  case 44: /* assignment_operator: MINUSEQ  */
#line 991 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::MINUSEQ({::Celeste::ast::Type::MINUSEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5263 "Celeste_parser.tab.c"
    break;

  case 45: /* assignment_operator: MULTIPLYEQ  */
#line 997 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::MULTIPLYEQ({::Celeste::ast::Type::MULTIPLYEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5274 "Celeste_parser.tab.c"
    break;

  case 46: /* assignment_operator: DIVIDEEQ  */
#line 1003 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DIVIDEEQ({::Celeste::ast::Type::DIVIDEEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5285 "Celeste_parser.tab.c"
    break;

  case 47: /* assignment_operator: EQ  */
#line 1009 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5296 "Celeste_parser.tab.c"
    break;

  case 48: /* conditional_if: IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1019 "./Celeste_parser.y"
                                                                                                       {
		auto* const newNode = new Celeste::ast::node::conditional_if({::Celeste::ast::Type::conditional_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_if) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5311 "Celeste_parser.tab.c"
    break;

  case 49: /* conditional_else_if: ELSEIF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1033 "./Celeste_parser.y"
                                                                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_else_if({::Celeste::ast::Type::conditional_else_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSEIF({::Celeste::ast::Type::ELSEIF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_else_if) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5326 "Celeste_parser.tab.c"
    break;

  case 50: /* conditional_else_if: ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1043 "./Celeste_parser.y"
                                                                                                              {
		auto* const newNode = new Celeste::ast::node::conditional_else_if({::Celeste::ast::Type::conditional_else_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_else_if) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5341 "Celeste_parser.tab.c"
    break;

  case 51: /* conditional_else: ELSE LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1057 "./Celeste_parser.y"
                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_else({::Celeste::ast::Type::conditional_else, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_else) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5354 "Celeste_parser.tab.c"
    break;

  case 52: /* conditional_block: standard_block  */
#line 1069 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::conditional_block({::Celeste::ast::Type::conditional_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_conditional_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5365 "Celeste_parser.tab.c"
    break;

  case 53: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1079 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-17)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5386 "Celeste_parser.tab.c"
    break;

  case 54: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1095 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5406 "Celeste_parser.tab.c"
    break;

  case 55: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1110 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5427 "Celeste_parser.tab.c"
    break;

  case 56: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1126 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5447 "Celeste_parser.tab.c"
    break;

  case 57: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1141 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5467 "Celeste_parser.tab.c"
    break;

  case 58: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1156 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5486 "Celeste_parser.tab.c"
    break;

  case 59: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1170 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5506 "Celeste_parser.tab.c"
    break;

  case 60: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1185 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5525 "Celeste_parser.tab.c"
    break;

  case 61: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1199 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5546 "Celeste_parser.tab.c"
    break;

  case 62: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1215 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5566 "Celeste_parser.tab.c"
    break;

  case 63: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1230 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5587 "Celeste_parser.tab.c"
    break;

  case 64: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1246 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5607 "Celeste_parser.tab.c"
    break;

  case 65: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1261 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5627 "Celeste_parser.tab.c"
    break;

  case 66: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1276 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5646 "Celeste_parser.tab.c"
    break;

  case 67: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1290 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5666 "Celeste_parser.tab.c"
    break;

  case 68: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1305 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5685 "Celeste_parser.tab.c"
    break;

  case 69: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1319 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5703 "Celeste_parser.tab.c"
    break;

  case 70: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1332 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5720 "Celeste_parser.tab.c"
    break;

  case 71: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1344 "./Celeste_parser.y"
                                                                                                                                                                                                                                                  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5738 "Celeste_parser.tab.c"
    break;

  case 72: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1357 "./Celeste_parser.y"
                                                                                                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5755 "Celeste_parser.tab.c"
    break;

  case 73: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1369 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5776 "Celeste_parser.tab.c"
    break;

  case 74: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1385 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5796 "Celeste_parser.tab.c"
    break;

  case 75: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1400 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5817 "Celeste_parser.tab.c"
    break;

  case 76: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1416 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5837 "Celeste_parser.tab.c"
    break;

  case 77: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1431 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 24, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5857 "Celeste_parser.tab.c"
    break;

  case 78: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1446 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 25, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5876 "Celeste_parser.tab.c"
    break;

  case 79: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1460 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 26, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5896 "Celeste_parser.tab.c"
    break;

  case 80: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1475 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 27, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5915 "Celeste_parser.tab.c"
    break;

  case 81: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1489 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 28, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5936 "Celeste_parser.tab.c"
    break;

  case 82: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1505 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 29, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5956 "Celeste_parser.tab.c"
    break;

  case 83: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1520 "./Celeste_parser.y"
                                                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 30, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5977 "Celeste_parser.tab.c"
    break;

  case 84: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1536 "./Celeste_parser.y"
                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 31, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5997 "Celeste_parser.tab.c"
    break;

  case 85: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1551 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 32, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6017 "Celeste_parser.tab.c"
    break;

  case 86: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1566 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 33, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6036 "Celeste_parser.tab.c"
    break;

  case 87: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1580 "./Celeste_parser.y"
                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 34, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6056 "Celeste_parser.tab.c"
    break;

  case 88: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1595 "./Celeste_parser.y"
                                                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 35, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6075 "Celeste_parser.tab.c"
    break;

  case 89: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1609 "./Celeste_parser.y"
                                                                                                                                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 36, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6093 "Celeste_parser.tab.c"
    break;

  case 90: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1622 "./Celeste_parser.y"
                                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 37, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6110 "Celeste_parser.tab.c"
    break;

  case 91: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1634 "./Celeste_parser.y"
                                                                                                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 38, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6128 "Celeste_parser.tab.c"
    break;

  case 92: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1647 "./Celeste_parser.y"
                                                                                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 39, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6145 "Celeste_parser.tab.c"
    break;

  case 93: /* deamerreserved_arrow__template_parameter__: template_parameter deamerreserved_star__COMMA__template_parameter__  */
#line 1663 "./Celeste_parser.y"
                                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__template_parameter__({::Celeste::ast::Type::deamerreserved_arrow__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_parameter), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__template_parameter__) });
		((*yyvalp).Celeste_deamerreserved_arrow__template_parameter__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6156 "Celeste_parser.tab.c"
    break;

  case 94: /* deamerreserved_star__COMMA__template_parameter__: COMMA template_parameter deamerreserved_star__COMMA__template_parameter__  */
#line 1673 "./Celeste_parser.y"
                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_parameter), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__template_parameter__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__template_parameter__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 6168 "Celeste_parser.tab.c"
    break;

  case 95: /* deamerreserved_star__COMMA__template_parameter__: %empty  */
#line 1680 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__template_parameter__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6179 "Celeste_parser.tab.c"
    break;

  case 96: /* deamerreserved_arrow__conditional_function_argument__: conditional_function_argument deamerreserved_star__COMMA__conditional_function_argument__  */
#line 1690 "./Celeste_parser.y"
                                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__conditional_function_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__conditional_function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6190 "Celeste_parser.tab.c"
    break;

  case 97: /* deamerreserved_star__COMMA__conditional_function_argument__: COMMA conditional_function_argument deamerreserved_star__COMMA__conditional_function_argument__  */
#line 1700 "./Celeste_parser.y"
                                                                                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__conditional_function_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__conditional_function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 6202 "Celeste_parser.tab.c"
    break;

  case 98: /* deamerreserved_star__COMMA__conditional_function_argument__: %empty  */
#line 1707 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__conditional_function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6213 "Celeste_parser.tab.c"
    break;

  case 99: /* deamerreserved_arrow__function_argument__: function_argument deamerreserved_star__COMMA__function_argument__  */
#line 1717 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__function_argument__({::Celeste::ast::Type::deamerreserved_arrow__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__function_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6224 "Celeste_parser.tab.c"
    break;

  case 100: /* deamerreserved_star__COMMA__function_argument__: COMMA function_argument deamerreserved_star__COMMA__function_argument__  */
#line 1727 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__function_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 6236 "Celeste_parser.tab.c"
    break;

  case 101: /* deamerreserved_star__COMMA__function_argument__: %empty  */
#line 1734 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6247 "Celeste_parser.tab.c"
    break;

  case 102: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1744 "./Celeste_parser.y"
                                                                                                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6266 "Celeste_parser.tab.c"
    break;

  case 103: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1758 "./Celeste_parser.y"
                                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6284 "Celeste_parser.tab.c"
    break;

  case 104: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1771 "./Celeste_parser.y"
                                                                                                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6303 "Celeste_parser.tab.c"
    break;

  case 105: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1785 "./Celeste_parser.y"
                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6321 "Celeste_parser.tab.c"
    break;

  case 106: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1798 "./Celeste_parser.y"
                                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6339 "Celeste_parser.tab.c"
    break;

  case 107: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1811 "./Celeste_parser.y"
                                                                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6356 "Celeste_parser.tab.c"
    break;

  case 108: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1823 "./Celeste_parser.y"
                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6374 "Celeste_parser.tab.c"
    break;

  case 109: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1836 "./Celeste_parser.y"
                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__conditional_function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6391 "Celeste_parser.tab.c"
    break;

  case 110: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1848 "./Celeste_parser.y"
                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6410 "Celeste_parser.tab.c"
    break;

  case 111: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1862 "./Celeste_parser.y"
                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6428 "Celeste_parser.tab.c"
    break;

  case 112: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1875 "./Celeste_parser.y"
                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6447 "Celeste_parser.tab.c"
    break;

  case 113: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1889 "./Celeste_parser.y"
                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6465 "Celeste_parser.tab.c"
    break;

  case 114: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1902 "./Celeste_parser.y"
                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6483 "Celeste_parser.tab.c"
    break;

  case 115: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1915 "./Celeste_parser.y"
                                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6500 "Celeste_parser.tab.c"
    break;

  case 116: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1927 "./Celeste_parser.y"
                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6518 "Celeste_parser.tab.c"
    break;

  case 117: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1940 "./Celeste_parser.y"
                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6535 "Celeste_parser.tab.c"
    break;

  case 118: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1952 "./Celeste_parser.y"
                                                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6551 "Celeste_parser.tab.c"
    break;

  case 119: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1963 "./Celeste_parser.y"
                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6566 "Celeste_parser.tab.c"
    break;

  case 120: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1973 "./Celeste_parser.y"
                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6582 "Celeste_parser.tab.c"
    break;

  case 121: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1984 "./Celeste_parser.y"
                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6597 "Celeste_parser.tab.c"
    break;

  case 122: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1998 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6615 "Celeste_parser.tab.c"
    break;

  case 123: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2011 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6632 "Celeste_parser.tab.c"
    break;

  case 124: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2023 "./Celeste_parser.y"
                                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6650 "Celeste_parser.tab.c"
    break;

  case 125: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2036 "./Celeste_parser.y"
                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6667 "Celeste_parser.tab.c"
    break;

  case 126: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2048 "./Celeste_parser.y"
                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6685 "Celeste_parser.tab.c"
    break;

  case 127: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2061 "./Celeste_parser.y"
                                                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6702 "Celeste_parser.tab.c"
    break;

  case 128: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2073 "./Celeste_parser.y"
                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6720 "Celeste_parser.tab.c"
    break;

  case 129: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2086 "./Celeste_parser.y"
                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6737 "Celeste_parser.tab.c"
    break;

  case 130: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2102 "./Celeste_parser.y"
                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6753 "Celeste_parser.tab.c"
    break;

  case 131: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2113 "./Celeste_parser.y"
                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6768 "Celeste_parser.tab.c"
    break;

  case 132: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2123 "./Celeste_parser.y"
                                                                                                                {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6784 "Celeste_parser.tab.c"
    break;

  case 133: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2134 "./Celeste_parser.y"
                                                                                                          {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6799 "Celeste_parser.tab.c"
    break;

  case 134: /* return_statement: RETURN expression  */
#line 2148 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::return_statement({::Celeste::ast::Type::return_statement, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RETURN({::Celeste::ast::Type::RETURN, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_return_statement) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6810 "Celeste_parser.tab.c"
    break;

  case 135: /* symbol_increase: symbol_reference PLUSPLUS  */
#line 2158 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::symbol_increase({::Celeste::ast::Type::symbol_increase, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), new Celeste::ast::node::PLUSPLUS({::Celeste::ast::Type::PLUSPLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_increase) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6821 "Celeste_parser.tab.c"
    break;

  case 136: /* symbol_decrease: symbol_reference MINUSMINUS  */
#line 2168 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::symbol_decrease({::Celeste::ast::Type::symbol_decrease, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), new Celeste::ast::node::MINUSMINUS({::Celeste::ast::Type::MINUSMINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_decrease) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6832 "Celeste_parser.tab.c"
    break;

  case 137: /* expression: expression_no_value  */
#line 2178 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression_no_value) });
		((*yyvalp).Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6843 "Celeste_parser.tab.c"
    break;

  case 138: /* expression_no_value: expression_no_value PLUS t_expression  */
#line 2188 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_expression_no_value), new Celeste::ast::node::PLUS({::Celeste::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_t_expression) });
		((*yyvalp).Celeste_expression_no_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6854 "Celeste_parser.tab.c"
    break;

  case 139: /* expression_no_value: expression_no_value MINUS t_expression  */
#line 2194 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_expression_no_value), new Celeste::ast::node::MINUS({::Celeste::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_t_expression) });
		((*yyvalp).Celeste_expression_no_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6865 "Celeste_parser.tab.c"
    break;

  case 140: /* expression_no_value: t_expression  */
#line 2200 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_t_expression) });
		((*yyvalp).Celeste_expression_no_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6876 "Celeste_parser.tab.c"
    break;

  case 141: /* t_expression: t_expression MULTIPLY f_expression  */
#line 2210 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::MULTIPLY({::Celeste::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6887 "Celeste_parser.tab.c"
    break;

  case 142: /* t_expression: t_expression DIVIDE f_expression  */
#line 2216 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::DIVIDE({::Celeste::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6898 "Celeste_parser.tab.c"
    break;

  case 143: /* t_expression: t_expression LTEQ f_expression  */
#line 2222 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::LTEQ({::Celeste::ast::Type::LTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6909 "Celeste_parser.tab.c"
    break;

  case 144: /* t_expression: t_expression GTEQ f_expression  */
#line 2228 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::GTEQ({::Celeste::ast::Type::GTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6920 "Celeste_parser.tab.c"
    break;

  case 145: /* t_expression: t_expression LT f_expression  */
#line 2234 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::LT({::Celeste::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6931 "Celeste_parser.tab.c"
    break;

  case 146: /* t_expression: t_expression GT f_expression  */
#line 2240 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::GT({::Celeste::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6942 "Celeste_parser.tab.c"
    break;

  case 147: /* t_expression: t_expression EQEQ f_expression  */
#line 2246 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::EQEQ({::Celeste::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6953 "Celeste_parser.tab.c"
    break;

  case 148: /* t_expression: t_expression NOTEQ f_expression  */
#line 2252 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::NOTEQ({::Celeste::ast::Type::NOTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6964 "Celeste_parser.tab.c"
    break;

  case 149: /* t_expression: NOT f_expression  */
#line 2258 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NOT({::Celeste::ast::Type::NOT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6975 "Celeste_parser.tab.c"
    break;

  case 150: /* t_expression: f_expression  */
#line 2264 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6986 "Celeste_parser.tab.c"
    break;

  case 151: /* f_expression: LEFT_PARANTHESIS expression_no_value RIGHT_PARANTHESIS  */
#line 2274 "./Celeste_parser.y"
                                                                {
		auto* const newNode = new Celeste::ast::node::f_expression({::Celeste::ast::Type::f_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression_no_value) });
		((*yyvalp).Celeste_f_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6999 "Celeste_parser.tab.c"
    break;

  case 152: /* f_expression: value  */
#line 2282 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::f_expression({::Celeste::ast::Type::f_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_value) });
		((*yyvalp).Celeste_f_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7010 "Celeste_parser.tab.c"
    break;

  case 153: /* display_call: DISPLAY symbol_reference  */
#line 2292 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::display_call({::Celeste::ast::Type::display_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DISPLAY({::Celeste::ast::Type::DISPLAY, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_display_call) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7021 "Celeste_parser.tab.c"
    break;

  case 154: /* for_loop: for_each_loop  */
#line 2302 "./Celeste_parser.y"
                       {
		auto* const newNode = new Celeste::ast::node::for_loop({::Celeste::ast::Type::for_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_for_each_loop) });
		((*yyvalp).Celeste_for_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7032 "Celeste_parser.tab.c"
    break;

  case 155: /* for_loop: for_iteration_loop  */
#line 2308 "./Celeste_parser.y"
                              {
		auto* const newNode = new Celeste::ast::node::for_loop({::Celeste::ast::Type::for_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_for_iteration_loop) });
		((*yyvalp).Celeste_for_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7043 "Celeste_parser.tab.c"
    break;

  case 156: /* for_iteration_loop: FOR expression LEFT_BRACKET for_block RIGHT_BRACKET  */
#line 2318 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::for_iteration_loop({::Celeste::ast::Type::for_iteration_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_for_block) });
		((*yyvalp).Celeste_for_iteration_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7056 "Celeste_parser.tab.c"
    break;

  case 157: /* for_each_loop: FOR LEFT_PARANTHESIS type for_variable IN iterator RIGHT_PARANTHESIS LEFT_BRACKET for_block RIGHT_BRACKET  */
#line 2330 "./Celeste_parser.y"
                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::for_each_loop({::Celeste::ast::Type::for_each_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_for_variable), new Celeste::ast::node::IN({::Celeste::ast::Type::IN, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_iterator), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_for_block) });
		((*yyvalp).Celeste_for_each_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7071 "Celeste_parser.tab.c"
    break;

  case 158: /* for_each_loop: FOR LEFT_PARANTHESIS type for_variable COLON iterator RIGHT_PARANTHESIS LEFT_BRACKET for_block RIGHT_BRACKET  */
#line 2340 "./Celeste_parser.y"
                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::for_each_loop({::Celeste::ast::Type::for_each_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_for_variable), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_iterator), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_for_block) });
		((*yyvalp).Celeste_for_each_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7087 "Celeste_parser.tab.c"
    break;

  case 159: /* for_variable: VARNAME  */
#line 2355 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::for_variable({::Celeste::ast::Type::for_variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_for_variable) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7098 "Celeste_parser.tab.c"
    break;

  case 160: /* iterator: full_value  */
#line 2365 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::iterator({::Celeste::ast::Type::iterator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_iterator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7109 "Celeste_parser.tab.c"
    break;

  case 161: /* for_block: standard_block  */
#line 2375 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::for_block({::Celeste::ast::Type::for_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_for_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7120 "Celeste_parser.tab.c"
    break;

  case 162: /* namespace_declaration: NAMESPACE deamerreserved_arrow__namespace_name__ LEFT_BRACKET namespace_block RIGHT_BRACKET  */
#line 2385 "./Celeste_parser.y"
                                                                                                     {
		auto* const newNode = new Celeste::ast::node::namespace_declaration({::Celeste::ast::Type::namespace_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NAMESPACE({::Celeste::ast::Type::NAMESPACE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__namespace_name__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_namespace_block) });
		((*yyvalp).Celeste_namespace_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7133 "Celeste_parser.tab.c"
    break;

  case 163: /* deamerreserved_arrow__namespace_name__: namespace_name deamerreserved_star__DOT__namespace_name__  */
#line 2397 "./Celeste_parser.y"
                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__namespace_name__({::Celeste::ast::Type::deamerreserved_arrow__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_namespace_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__namespace_name__) });
		((*yyvalp).Celeste_deamerreserved_arrow__namespace_name__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7144 "Celeste_parser.tab.c"
    break;

  case 164: /* deamerreserved_star__DOT__namespace_name__: DOT namespace_name deamerreserved_star__DOT__namespace_name__  */
#line 2407 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_namespace_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__namespace_name__) });
		((*yyvalp).Celeste_deamerreserved_star__DOT__namespace_name__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7156 "Celeste_parser.tab.c"
    break;

  case 165: /* deamerreserved_star__DOT__namespace_name__: %empty  */
#line 2414 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__DOT__namespace_name__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7167 "Celeste_parser.tab.c"
    break;

  case 166: /* namespace_block: standard_block  */
#line 2424 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::namespace_block({::Celeste::ast::Type::namespace_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_namespace_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7178 "Celeste_parser.tab.c"
    break;

  case 167: /* namespace_name: VARNAME  */
#line 2434 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::namespace_name({::Celeste::ast::Type::namespace_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_namespace_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7189 "Celeste_parser.tab.c"
    break;

  case 168: /* inline_class_declaration: created_class_name COLON deamerreserved_arrow__inline_class_declaration_composite__ COMMA  */
#line 2444 "./Celeste_parser.y"
                                                                                                   {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_created_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7202 "Celeste_parser.tab.c"
    break;

  case 169: /* inline_class_declaration: created_class_name COLON deamerreserved_arrow__inline_class_declaration_composite__  */
#line 2452 "./Celeste_parser.y"
                                                                                               {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_created_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
	}
#line 7214 "Celeste_parser.tab.c"
    break;

  case 170: /* inline_class_declaration: created_class_name COLON COMMA  */
#line 2459 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_created_class_name) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7227 "Celeste_parser.tab.c"
    break;

  case 171: /* inline_class_declaration: created_class_name COLON  */
#line 2467 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_created_class_name) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7239 "Celeste_parser.tab.c"
    break;

  case 172: /* deamerreserved_arrow__inline_class_declaration_composite__: inline_class_declaration_composite deamerreserved_star__COMMA__inline_class_declaration_composite__  */
#line 2478 "./Celeste_parser.y"
                                                                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_deamerreserved_arrow__inline_class_declaration_composite__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7250 "Celeste_parser.tab.c"
    break;

  case 173: /* deamerreserved_star__COMMA__inline_class_declaration_composite__: COMMA inline_class_declaration_composite deamerreserved_star__COMMA__inline_class_declaration_composite__  */
#line 2488 "./Celeste_parser.y"
                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7262 "Celeste_parser.tab.c"
    break;

  case 174: /* deamerreserved_star__COMMA__inline_class_declaration_composite__: %empty  */
#line 2495 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7273 "Celeste_parser.tab.c"
    break;

  case 175: /* inline_class_declaration_composite: inline_class_declaration_composite_name  */
#line 2505 "./Celeste_parser.y"
                                                 {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7284 "Celeste_parser.tab.c"
    break;

  case 176: /* inline_class_declaration_composite: inline_class_declaration_composite_name AS LEFT_SQUARE_BRACKET inline_class_declaration_composite_alias RIGHT_SQUARE_BRACKET  */
#line 2511 "./Celeste_parser.y"
                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7297 "Celeste_parser.tab.c"
    break;

  case 177: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET inline_class_declaration_composite_alias COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2519 "./Celeste_parser.y"
                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7311 "Celeste_parser.tab.c"
    break;

  case 178: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET deamerreserved_arrow__inline_class_declaration_composite_alias__ COMMA RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2528 "./Celeste_parser.y"
                                                                                                                                                                                                                  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7328 "Celeste_parser.tab.c"
    break;

  case 179: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET deamerreserved_arrow__inline_class_declaration_composite_alias__ RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2540 "./Celeste_parser.y"
                                                                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7344 "Celeste_parser.tab.c"
    break;

  case 180: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2551 "./Celeste_parser.y"
                                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7361 "Celeste_parser.tab.c"
    break;

  case 181: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2563 "./Celeste_parser.y"
                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7377 "Celeste_parser.tab.c"
    break;

  case 182: /* deamerreserved_arrow__inline_class_declaration_composite_alias__: inline_class_declaration_composite_alias deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  */
#line 2578 "./Celeste_parser.y"
                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) });
		((*yyvalp).Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7388 "Celeste_parser.tab.c"
    break;

  case 183: /* deamerreserved_star__COMMA__inline_class_declaration_composite_alias__: COMMA inline_class_declaration_composite_alias deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  */
#line 2588 "./Celeste_parser.y"
                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7400 "Celeste_parser.tab.c"
    break;

  case 184: /* deamerreserved_star__COMMA__inline_class_declaration_composite_alias__: %empty  */
#line 2595 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7411 "Celeste_parser.tab.c"
    break;

  case 185: /* inline_class_declaration_composite_alias: VARNAME  */
#line 2605 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite_alias({::Celeste::ast::Type::inline_class_declaration_composite_alias, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_inline_class_declaration_composite_alias) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7422 "Celeste_parser.tab.c"
    break;

  case 186: /* inline_class_declaration_composite_name: symbol_reference  */
#line 2615 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite_name({::Celeste::ast::Type::inline_class_declaration_composite_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_inline_class_declaration_composite_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7433 "Celeste_parser.tab.c"
    break;

  case 187: /* created_class_name: VARNAME  */
#line 2625 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::created_class_name({::Celeste::ast::Type::created_class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_created_class_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7444 "Celeste_parser.tab.c"
    break;

  case 188: /* code_block: LEFT_PARANTHESIS deamerreserved_arrow__code_block_input_argument__ COMMA RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2635 "./Celeste_parser.y"
                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__code_block_input_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7460 "Celeste_parser.tab.c"
    break;

  case 189: /* code_block: LEFT_PARANTHESIS deamerreserved_arrow__code_block_input_argument__ RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2646 "./Celeste_parser.y"
                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__code_block_input_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7475 "Celeste_parser.tab.c"
    break;

  case 190: /* code_block: LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2656 "./Celeste_parser.y"
                                                                                                                {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7491 "Celeste_parser.tab.c"
    break;

  case 191: /* code_block: LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2667 "./Celeste_parser.y"
                                                                                                          {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7506 "Celeste_parser.tab.c"
    break;

  case 192: /* code_block: LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2677 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7519 "Celeste_parser.tab.c"
    break;

  case 193: /* deamerreserved_arrow__code_block_input_argument__: code_block_input_argument deamerreserved_star__COMMA__code_block_input_argument__  */
#line 2689 "./Celeste_parser.y"
                                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_input_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__code_block_input_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__code_block_input_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7530 "Celeste_parser.tab.c"
    break;

  case 194: /* deamerreserved_star__COMMA__code_block_input_argument__: COMMA code_block_input_argument deamerreserved_star__COMMA__code_block_input_argument__  */
#line 2699 "./Celeste_parser.y"
                                                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_input_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__code_block_input_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__code_block_input_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7542 "Celeste_parser.tab.c"
    break;

  case 195: /* deamerreserved_star__COMMA__code_block_input_argument__: %empty  */
#line 2706 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__code_block_input_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7553 "Celeste_parser.tab.c"
    break;

  case 196: /* code_block_input_argument: code_block_argument  */
#line 2716 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::code_block_input_argument({::Celeste::ast::Type::code_block_input_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_block_argument) });
		((*yyvalp).Celeste_code_block_input_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7564 "Celeste_parser.tab.c"
    break;

  case 197: /* code_block_argument: type code_block_argument_name  */
#line 2726 "./Celeste_parser.y"
                                       {
		auto* const newNode = new Celeste::ast::node::code_block_argument({::Celeste::ast::Type::code_block_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_block_argument_name) });
		((*yyvalp).Celeste_code_block_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7575 "Celeste_parser.tab.c"
    break;

  case 198: /* code_block_argument: type  */
#line 2732 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::code_block_argument({::Celeste::ast::Type::code_block_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_type) });
		((*yyvalp).Celeste_code_block_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7586 "Celeste_parser.tab.c"
    break;

  case 199: /* code_block_argument_name: VARNAME  */
#line 2742 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::code_block_argument_name({::Celeste::ast::Type::code_block_argument_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_code_block_argument_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7597 "Celeste_parser.tab.c"
    break;

  case 200: /* code_block_program: standard_block  */
#line 2752 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::code_block_program({::Celeste::ast::Type::code_block_program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_code_block_program) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7608 "Celeste_parser.tab.c"
    break;

  case 201: /* variable_declaration: type variable_name EQ value_list  */
#line 2762 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_variable_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_variable_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7619 "Celeste_parser.tab.c"
    break;

  case 202: /* variable_declaration: type variable_name  */
#line 2768 "./Celeste_parser.y"
                              {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_variable_name) });
		((*yyvalp).Celeste_variable_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7630 "Celeste_parser.tab.c"
    break;

  case 203: /* array_declaration: LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 2778 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::array_declaration({::Celeste::ast::Type::array_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_array_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7643 "Celeste_parser.tab.c"
    break;

  case 204: /* variable_name: symbol_reference  */
#line 2790 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::variable_name({::Celeste::ast::Type::variable_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_variable_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7654 "Celeste_parser.tab.c"
    break;

  case 205: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2800 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-16)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7672 "Celeste_parser.tab.c"
    break;

  case 206: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2813 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7690 "Celeste_parser.tab.c"
    break;

  case 207: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2826 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                                                  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7707 "Celeste_parser.tab.c"
    break;

  case 208: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2838 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7724 "Celeste_parser.tab.c"
    break;

  case 209: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2850 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7742 "Celeste_parser.tab.c"
    break;

  case 210: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2863 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7760 "Celeste_parser.tab.c"
    break;

  case 211: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2876 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7777 "Celeste_parser.tab.c"
    break;

  case 212: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2888 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7794 "Celeste_parser.tab.c"
    break;

  case 213: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2900 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-15)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7812 "Celeste_parser.tab.c"
    break;

  case 214: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2913 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7830 "Celeste_parser.tab.c"
    break;

  case 215: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2926 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7847 "Celeste_parser.tab.c"
    break;

  case 216: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2938 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                                  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7864 "Celeste_parser.tab.c"
    break;

  case 217: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2950 "./Celeste_parser.y"
                                                                                                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-14)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7882 "Celeste_parser.tab.c"
    break;

  case 218: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2963 "./Celeste_parser.y"
                                                                                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7900 "Celeste_parser.tab.c"
    break;

  case 219: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2976 "./Celeste_parser.y"
                                                                                                                                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-13)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7917 "Celeste_parser.tab.c"
    break;

  case 220: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2988 "./Celeste_parser.y"
                                                                                                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7934 "Celeste_parser.tab.c"
    break;

  case 221: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3004 "./Celeste_parser.y"
                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7950 "Celeste_parser.tab.c"
    break;

  case 222: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3015 "./Celeste_parser.y"
                                                                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7966 "Celeste_parser.tab.c"
    break;

  case 223: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3026 "./Celeste_parser.y"
                                                                                                                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7981 "Celeste_parser.tab.c"
    break;

  case 224: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3036 "./Celeste_parser.y"
                                                                                                                                                                                                  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7996 "Celeste_parser.tab.c"
    break;

  case 225: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3046 "./Celeste_parser.y"
                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8012 "Celeste_parser.tab.c"
    break;

  case 226: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3057 "./Celeste_parser.y"
                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8028 "Celeste_parser.tab.c"
    break;

  case 227: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3068 "./Celeste_parser.y"
                                                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8043 "Celeste_parser.tab.c"
    break;

  case 228: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3078 "./Celeste_parser.y"
                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8058 "Celeste_parser.tab.c"
    break;

  case 229: /* trailing_return_type: return_type  */
#line 3092 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::trailing_return_type({::Celeste::ast::Type::trailing_return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_return_type) });
		((*yyvalp).Celeste_trailing_return_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8069 "Celeste_parser.tab.c"
    break;

  case 230: /* return_type: type  */
#line 3102 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::return_type({::Celeste::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_type) });
		((*yyvalp).Celeste_return_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8080 "Celeste_parser.tab.c"
    break;

  case 231: /* conditional_function_argument: function_argument  */
#line 3112 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::conditional_function_argument({::Celeste::ast::Type::conditional_function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_argument) });
		((*yyvalp).Celeste_conditional_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8091 "Celeste_parser.tab.c"
    break;

  case 232: /* function_argument: function_argument_type function_argument_name condition_modifier_function_call EQ full_value  */
#line 3122 "./Celeste_parser.y"
                                                                                                      {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_function_argument_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_condition_modifier_function_call), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8102 "Celeste_parser.tab.c"
    break;

  case 233: /* function_argument: function_argument_type function_argument_name condition_modifier_function_call  */
#line 3128 "./Celeste_parser.y"
                                                                                          {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_condition_modifier_function_call) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8113 "Celeste_parser.tab.c"
    break;

  case 234: /* function_argument: function_argument_type function_argument_name EQ full_value  */
#line 3134 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_function_argument_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8124 "Celeste_parser.tab.c"
    break;

  case 235: /* function_argument: function_argument_type function_argument_name  */
#line 3140 "./Celeste_parser.y"
                                                         {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_argument_name) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8135 "Celeste_parser.tab.c"
    break;

  case 236: /* function_argument_type: type  */
#line 3150 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::function_argument_type({::Celeste::ast::Type::function_argument_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_type) });
		((*yyvalp).Celeste_function_argument_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8146 "Celeste_parser.tab.c"
    break;

  case 237: /* function_argument_name: symbol_reference  */
#line 3160 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::function_argument_name({::Celeste::ast::Type::function_argument_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_function_argument_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8157 "Celeste_parser.tab.c"
    break;

  case 238: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET deamerreserved_arrow__condition_modifier_argument__ COMMA RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3170 "./Celeste_parser.y"
                                                                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_condition_modifier_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__condition_modifier_argument__) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8173 "Celeste_parser.tab.c"
    break;

  case 239: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET deamerreserved_arrow__condition_modifier_argument__ RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3181 "./Celeste_parser.y"
                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_condition_modifier_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__condition_modifier_argument__) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8188 "Celeste_parser.tab.c"
    break;

  case 240: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3191 "./Celeste_parser.y"
                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_condition_modifier_name) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8204 "Celeste_parser.tab.c"
    break;

  case 241: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3202 "./Celeste_parser.y"
                                                                                                               {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_condition_modifier_name) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8219 "Celeste_parser.tab.c"
    break;

  case 242: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name RIGHT_PARANTHESIS  */
#line 3212 "./Celeste_parser.y"
                                                                      {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_condition_modifier_name) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8232 "Celeste_parser.tab.c"
    break;

  case 243: /* deamerreserved_arrow__condition_modifier_argument__: condition_modifier_argument deamerreserved_star__COMMA__condition_modifier_argument__  */
#line 3224 "./Celeste_parser.y"
                                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_condition_modifier_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__condition_modifier_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8243 "Celeste_parser.tab.c"
    break;

  case 244: /* deamerreserved_star__COMMA__condition_modifier_argument__: COMMA condition_modifier_argument deamerreserved_star__COMMA__condition_modifier_argument__  */
#line 3234 "./Celeste_parser.y"
                                                                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_condition_modifier_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 8255 "Celeste_parser.tab.c"
    break;

  case 245: /* deamerreserved_star__COMMA__condition_modifier_argument__: %empty  */
#line 3241 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8266 "Celeste_parser.tab.c"
    break;

  case 246: /* condition_modifier_name: symbol_reference  */
#line 3251 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::condition_modifier_name({::Celeste::ast::Type::condition_modifier_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_condition_modifier_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8277 "Celeste_parser.tab.c"
    break;

  case 247: /* condition_modifier_argument: full_value  */
#line 3261 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::condition_modifier_argument({::Celeste::ast::Type::condition_modifier_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_condition_modifier_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8288 "Celeste_parser.tab.c"
    break;

  case 248: /* function_body: standard_block  */
#line 3271 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::function_body({::Celeste::ast::Type::function_body, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_function_body) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8299 "Celeste_parser.tab.c"
    break;

  case 249: /* function_name: symbol_reference  */
#line 3281 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::function_name({::Celeste::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_function_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8310 "Celeste_parser.tab.c"
    break;

  case 250: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name class_inherit_base LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3291 "./Celeste_parser.y"
                                                                                                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8325 "Celeste_parser.tab.c"
    break;

  case 251: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3301 "./Celeste_parser.y"
                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8340 "Celeste_parser.tab.c"
    break;

  case 252: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name class_inherit_base LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3311 "./Celeste_parser.y"
                                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8355 "Celeste_parser.tab.c"
    break;

  case 253: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3321 "./Celeste_parser.y"
                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8370 "Celeste_parser.tab.c"
    break;

  case 254: /* template_parameter: type template_parameter_name  */
#line 3335 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::template_parameter({::Celeste::ast::Type::template_parameter, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_parameter_name) });
		((*yyvalp).Celeste_template_parameter) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8381 "Celeste_parser.tab.c"
    break;

  case 255: /* template_parameter_name: VARNAME  */
#line 3345 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::template_parameter_name({::Celeste::ast::Type::template_parameter_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_template_parameter_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8392 "Celeste_parser.tab.c"
    break;

  case 256: /* class_declaration: execution_keyword_permutation CLASS class_name deamerreserved_arrow__class_inherit_base__ LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3355 "./Celeste_parser.y"
                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__class_inherit_base__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8405 "Celeste_parser.tab.c"
    break;

  case 257: /* class_declaration: execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3363 "./Celeste_parser.y"
                                                                                                {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8418 "Celeste_parser.tab.c"
    break;

  case 258: /* deamerreserved_arrow__class_inherit_base__: class_inherit_base deamerreserved_star__COMMA__class_inherit_base__  */
#line 3375 "./Celeste_parser.y"
                                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__class_inherit_base__({::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__class_inherit_base__) });
		((*yyvalp).Celeste_deamerreserved_arrow__class_inherit_base__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8429 "Celeste_parser.tab.c"
    break;

  case 259: /* deamerreserved_star__COMMA__class_inherit_base__: COMMA class_inherit_base deamerreserved_star__COMMA__class_inherit_base__  */
#line 3385 "./Celeste_parser.y"
                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__class_inherit_base__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__class_inherit_base__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 8441 "Celeste_parser.tab.c"
    break;

  case 260: /* deamerreserved_star__COMMA__class_inherit_base__: %empty  */
#line 3392 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__class_inherit_base__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8452 "Celeste_parser.tab.c"
    break;

  case 261: /* class_name: symbol_reference  */
#line 3402 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::class_name({::Celeste::ast::Type::class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_class_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8463 "Celeste_parser.tab.c"
    break;

  case 262: /* execution_keyword_permutation: CODE  */
#line 3412 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8474 "Celeste_parser.tab.c"
    break;

  case 263: /* execution_keyword_permutation: RUNTIME  */
#line 3418 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8485 "Celeste_parser.tab.c"
    break;

  case 264: /* execution_keyword_permutation: CODE RUNTIME  */
#line 3424 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8496 "Celeste_parser.tab.c"
    break;

  case 265: /* execution_keyword_permutation: RUNTIME CODE  */
#line 3430 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8507 "Celeste_parser.tab.c"
    break;

  case 266: /* execution_keyword_permutation: %empty  */
#line 3436 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8518 "Celeste_parser.tab.c"
    break;

  case 267: /* class_body: deamerreserved_star__class_stmt__  */
#line 3446 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::class_body({::Celeste::ast::Type::class_body, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__class_stmt__) });
		((*yyvalp).Celeste_class_body) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8529 "Celeste_parser.tab.c"
    break;

  case 268: /* deamerreserved_star__class_stmt__: class_stmt deamerreserved_star__class_stmt__  */
#line 3456 "./Celeste_parser.y"
                                                      {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_stmt), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__class_stmt__) });
		((*yyvalp).Celeste_deamerreserved_star__class_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8540 "Celeste_parser.tab.c"
    break;

  case 269: /* deamerreserved_star__class_stmt__: %empty  */
#line 3462 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__class_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8551 "Celeste_parser.tab.c"
    break;

  case 270: /* class_stmt: accessibility  */
#line 3472 "./Celeste_parser.y"
                       {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_accessibility) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8562 "Celeste_parser.tab.c"
    break;

  case 271: /* class_stmt: class_stmt_member_field_declaration  */
#line 3478 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_member_field_declaration) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8573 "Celeste_parser.tab.c"
    break;

  case 272: /* class_stmt: class_stmt_member_function  */
#line 3484 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_member_function) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8584 "Celeste_parser.tab.c"
    break;

  case 273: /* class_stmt: class_stmt_member_template_function  */
#line 3490 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_member_template_function) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8595 "Celeste_parser.tab.c"
    break;

  case 274: /* class_stmt: class_stmt_constructor  */
#line 3496 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_constructor) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8606 "Celeste_parser.tab.c"
    break;

  case 275: /* class_stmt: template_class_stmt_constructor  */
#line 3502 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_class_stmt_constructor) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8617 "Celeste_parser.tab.c"
    break;

  case 276: /* class_stmt_member_field_declaration: type member_field_name EQ value_list COMMA  */
#line 3512 "./Celeste_parser.y"
                                                    {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_member_field_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8629 "Celeste_parser.tab.c"
    break;

  case 277: /* class_stmt_member_field_declaration: type member_field_name COMMA  */
#line 3519 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_member_field_name) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8641 "Celeste_parser.tab.c"
    break;

  case 278: /* class_stmt_member_field_declaration: type member_field_name EQ value_list SEMICOLON  */
#line 3526 "./Celeste_parser.y"
                                                          {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_member_field_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8653 "Celeste_parser.tab.c"
    break;

  case 279: /* class_stmt_member_field_declaration: type member_field_name SEMICOLON  */
#line 3533 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_member_field_name) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8665 "Celeste_parser.tab.c"
    break;

  case 280: /* class_stmt_member_field_declaration: type member_field_name EQ value_list  */
#line 3540 "./Celeste_parser.y"
                                                {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_member_field_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8676 "Celeste_parser.tab.c"
    break;

  case 281: /* class_stmt_member_field_declaration: type member_field_name  */
#line 3546 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_member_field_name) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8687 "Celeste_parser.tab.c"
    break;

  case 282: /* member_field_name: symbol_reference  */
#line 3556 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::member_field_name({::Celeste::ast::Type::member_field_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_member_field_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8698 "Celeste_parser.tab.c"
    break;

  case 283: /* class_stmt_member_function: VIRTUAL function_declaration OVERRIDE  */
#line 3566 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8709 "Celeste_parser.tab.c"
    break;

  case 284: /* class_stmt_member_function: VIRTUAL function_declaration  */
#line 3572 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8720 "Celeste_parser.tab.c"
    break;

  case 285: /* class_stmt_member_function: PURE function_declaration OVERRIDE  */
#line 3578 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8731 "Celeste_parser.tab.c"
    break;

  case 286: /* class_stmt_member_function: PURE function_declaration  */
#line 3584 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8742 "Celeste_parser.tab.c"
    break;

  case 287: /* class_stmt_member_function: function_declaration OVERRIDE  */
#line 3590 "./Celeste_parser.y"
                                         {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8753 "Celeste_parser.tab.c"
    break;

  case 288: /* class_stmt_member_function: function_declaration  */
#line 3596 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8764 "Celeste_parser.tab.c"
    break;

  case 289: /* class_stmt_member_template_function: VIRTUAL template_function_declaration OVERRIDE  */
#line 3606 "./Celeste_parser.y"
                                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8775 "Celeste_parser.tab.c"
    break;

  case 290: /* class_stmt_member_template_function: VIRTUAL template_function_declaration  */
#line 3612 "./Celeste_parser.y"
                                                 {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8786 "Celeste_parser.tab.c"
    break;

  case 291: /* class_stmt_member_template_function: PURE template_function_declaration OVERRIDE  */
#line 3618 "./Celeste_parser.y"
                                                       {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8797 "Celeste_parser.tab.c"
    break;

  case 292: /* class_stmt_member_template_function: PURE template_function_declaration  */
#line 3624 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8808 "Celeste_parser.tab.c"
    break;

  case 293: /* class_stmt_member_template_function: template_function_declaration OVERRIDE  */
#line 3630 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8819 "Celeste_parser.tab.c"
    break;

  case 294: /* class_stmt_member_template_function: template_function_declaration  */
#line 3636 "./Celeste_parser.y"
                                         {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8830 "Celeste_parser.tab.c"
    break;

  case 295: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3646 "./Celeste_parser.y"
                                                                                                                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8848 "Celeste_parser.tab.c"
    break;

  case 296: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3659 "./Celeste_parser.y"
                                                                                                                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8865 "Celeste_parser.tab.c"
    break;

  case 297: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3671 "./Celeste_parser.y"
                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8883 "Celeste_parser.tab.c"
    break;

  case 298: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3684 "./Celeste_parser.y"
                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8900 "Celeste_parser.tab.c"
    break;

  case 299: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3696 "./Celeste_parser.y"
                                                                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8918 "Celeste_parser.tab.c"
    break;

  case 300: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3709 "./Celeste_parser.y"
                                                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8935 "Celeste_parser.tab.c"
    break;

  case 301: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3721 "./Celeste_parser.y"
                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8953 "Celeste_parser.tab.c"
    break;

  case 302: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3734 "./Celeste_parser.y"
                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8970 "Celeste_parser.tab.c"
    break;

  case 303: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3746 "./Celeste_parser.y"
                                                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8988 "Celeste_parser.tab.c"
    break;

  case 304: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3759 "./Celeste_parser.y"
                                                                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9005 "Celeste_parser.tab.c"
    break;

  case 305: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3771 "./Celeste_parser.y"
                                                                                                                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9023 "Celeste_parser.tab.c"
    break;

  case 306: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3784 "./Celeste_parser.y"
                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9040 "Celeste_parser.tab.c"
    break;

  case 307: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3796 "./Celeste_parser.y"
                                                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9058 "Celeste_parser.tab.c"
    break;

  case 308: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3809 "./Celeste_parser.y"
                                                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9075 "Celeste_parser.tab.c"
    break;

  case 309: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3821 "./Celeste_parser.y"
                                                                                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9093 "Celeste_parser.tab.c"
    break;

  case 310: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3834 "./Celeste_parser.y"
                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9110 "Celeste_parser.tab.c"
    break;

  case 311: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3846 "./Celeste_parser.y"
                                                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9128 "Celeste_parser.tab.c"
    break;

  case 312: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3859 "./Celeste_parser.y"
                                                                                                                                                                                                          {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9145 "Celeste_parser.tab.c"
    break;

  case 313: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3871 "./Celeste_parser.y"
                                                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9163 "Celeste_parser.tab.c"
    break;

  case 314: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3884 "./Celeste_parser.y"
                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9180 "Celeste_parser.tab.c"
    break;

  case 315: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3896 "./Celeste_parser.y"
                                                                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9198 "Celeste_parser.tab.c"
    break;

  case 316: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3909 "./Celeste_parser.y"
                                                                                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9215 "Celeste_parser.tab.c"
    break;

  case 317: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3921 "./Celeste_parser.y"
                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9233 "Celeste_parser.tab.c"
    break;

  case 318: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3934 "./Celeste_parser.y"
                                                                                                                                                     {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_template_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9250 "Celeste_parser.tab.c"
    break;

  case 319: /* class_stmt_constructor: class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3950 "./Celeste_parser.y"
                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9266 "Celeste_parser.tab.c"
    break;

  case 320: /* class_stmt_constructor: class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3961 "./Celeste_parser.y"
                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9281 "Celeste_parser.tab.c"
    break;

  case 321: /* class_stmt_constructor: class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3971 "./Celeste_parser.y"
                                                                                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9297 "Celeste_parser.tab.c"
    break;

  case 322: /* class_stmt_constructor: class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3982 "./Celeste_parser.y"
                                                                                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9312 "Celeste_parser.tab.c"
    break;

  case 323: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3992 "./Celeste_parser.y"
                                                                                                                                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9328 "Celeste_parser.tab.c"
    break;

  case 324: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4003 "./Celeste_parser.y"
                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9343 "Celeste_parser.tab.c"
    break;

  case 325: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4013 "./Celeste_parser.y"
                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9359 "Celeste_parser.tab.c"
    break;

  case 326: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4024 "./Celeste_parser.y"
                                                                                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9374 "Celeste_parser.tab.c"
    break;

  case 327: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4034 "./Celeste_parser.y"
                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9390 "Celeste_parser.tab.c"
    break;

  case 328: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4045 "./Celeste_parser.y"
                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9405 "Celeste_parser.tab.c"
    break;

  case 329: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4055 "./Celeste_parser.y"
                                                                                                         {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9421 "Celeste_parser.tab.c"
    break;

  case 330: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4066 "./Celeste_parser.y"
                                                                                                   {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9436 "Celeste_parser.tab.c"
    break;

  case 331: /* accessibility: PUBLIC  */
#line 4080 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PUBLIC({::Celeste::ast::Type::PUBLIC, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_accessibility) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9447 "Celeste_parser.tab.c"
    break;

  case 332: /* accessibility: PROTECTED  */
#line 4086 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PROTECTED({::Celeste::ast::Type::PROTECTED, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_accessibility) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9458 "Celeste_parser.tab.c"
    break;

  case 333: /* accessibility: PRIVATE  */
#line 4092 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PRIVATE({::Celeste::ast::Type::PRIVATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_accessibility) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9469 "Celeste_parser.tab.c"
    break;

  case 334: /* class_inherit_base: inherit_base  */
#line 4102 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::class_inherit_base({::Celeste::ast::Type::class_inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inherit_base) });
		((*yyvalp).Celeste_class_inherit_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9480 "Celeste_parser.tab.c"
    break;

  case 335: /* class_inherit_base: compound_base  */
#line 4108 "./Celeste_parser.y"
                         {
		auto* const newNode = new Celeste::ast::node::class_inherit_base({::Celeste::ast::Type::class_inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_compound_base) });
		((*yyvalp).Celeste_class_inherit_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9491 "Celeste_parser.tab.c"
    break;

  case 336: /* inherit_base: INHERIT inherit_base_name  */
#line 4118 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::inherit_base({::Celeste::ast::Type::inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::INHERIT({::Celeste::ast::Type::INHERIT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inherit_base_name) });
		((*yyvalp).Celeste_inherit_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9502 "Celeste_parser.tab.c"
    break;

  case 337: /* inherit_base_name: symbol_reference  */
#line 4128 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::inherit_base_name({::Celeste::ast::Type::inherit_base_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_inherit_base_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9513 "Celeste_parser.tab.c"
    break;

  case 338: /* compound_base: COMPOSITE compound_base_name  */
#line 4138 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_compound_base_name) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9524 "Celeste_parser.tab.c"
    break;

  case 339: /* compound_base: COMPOSITE compound_base_name AS compound_base_alias  */
#line 4144 "./Celeste_parser.y"
                                                               {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_compound_base_alias) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9535 "Celeste_parser.tab.c"
    break;

  case 340: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET deamerreserved_arrow__compound_base_alias__ COMMA RIGHT_SQUARE_BRACKET  */
#line 4150 "./Celeste_parser.y"
                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__compound_base_alias__) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9549 "Celeste_parser.tab.c"
    break;

  case 341: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET deamerreserved_arrow__compound_base_alias__ RIGHT_SQUARE_BRACKET  */
#line 4159 "./Celeste_parser.y"
                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__compound_base_alias__) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9562 "Celeste_parser.tab.c"
    break;

  case 342: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET  */
#line 4167 "./Celeste_parser.y"
                                                                                          {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9576 "Celeste_parser.tab.c"
    break;

  case 343: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 4176 "./Celeste_parser.y"
                                                                                    {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9589 "Celeste_parser.tab.c"
    break;

  case 344: /* deamerreserved_arrow__compound_base_alias__: compound_base_alias deamerreserved_star__COMMA__compound_base_alias__  */
#line 4188 "./Celeste_parser.y"
                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__compound_base_alias__({::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_compound_base_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__compound_base_alias__) });
		((*yyvalp).Celeste_deamerreserved_arrow__compound_base_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9600 "Celeste_parser.tab.c"
    break;

  case 345: /* deamerreserved_star__COMMA__compound_base_alias__: COMMA compound_base_alias deamerreserved_star__COMMA__compound_base_alias__  */
#line 4198 "./Celeste_parser.y"
                                                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_compound_base_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__compound_base_alias__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__compound_base_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 9612 "Celeste_parser.tab.c"
    break;

  case 346: /* deamerreserved_star__COMMA__compound_base_alias__: %empty  */
#line 4205 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__compound_base_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9623 "Celeste_parser.tab.c"
    break;

  case 347: /* compound_base_name: symbol_reference  */
#line 4215 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::compound_base_name({::Celeste::ast::Type::compound_base_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_compound_base_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9634 "Celeste_parser.tab.c"
    break;

  case 348: /* compound_base_alias: VARNAME  */
#line 4225 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::compound_base_alias({::Celeste::ast::Type::compound_base_alias, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_compound_base_alias) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9645 "Celeste_parser.tab.c"
    break;

  case 349: /* enum_declaration: ENUM enum_name LEFT_BRACKET deamerreserved_star__enumeration__ RIGHT_BRACKET  */
#line 4235 "./Celeste_parser.y"
                                                                                      {
		auto* const newNode = new Celeste::ast::node::enum_declaration({::Celeste::ast::Type::enum_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ENUM({::Celeste::ast::Type::ENUM, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_enum_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__enumeration__) });
		((*yyvalp).Celeste_enum_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9658 "Celeste_parser.tab.c"
    break;

  case 350: /* deamerreserved_star__enumeration__: enumeration deamerreserved_star__enumeration__  */
#line 4247 "./Celeste_parser.y"
                                                        {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enumeration__({::Celeste::ast::Type::deamerreserved_star__enumeration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_enumeration), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__enumeration__) });
		((*yyvalp).Celeste_deamerreserved_star__enumeration__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9669 "Celeste_parser.tab.c"
    break;

  case 351: /* deamerreserved_star__enumeration__: %empty  */
#line 4253 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enumeration__({::Celeste::ast::Type::deamerreserved_star__enumeration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__enumeration__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9680 "Celeste_parser.tab.c"
    break;

  case 352: /* enum_name: symbol_reference  */
#line 4263 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::enum_name({::Celeste::ast::Type::enum_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_enum_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9691 "Celeste_parser.tab.c"
    break;

  case 353: /* enumeration: enumeration_name EQ enumeration_value COMMA  */
#line 4273 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_enumeration_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_enumeration_value) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9703 "Celeste_parser.tab.c"
    break;

  case 354: /* enumeration: enumeration_name EQ enumeration_value  */
#line 4280 "./Celeste_parser.y"
                                                 {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_enumeration_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_enumeration_value) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9714 "Celeste_parser.tab.c"
    break;

  case 355: /* enumeration: enumeration_name COMMA  */
#line 4286 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_enumeration_name) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9726 "Celeste_parser.tab.c"
    break;

  case 356: /* enumeration: enumeration_name  */
#line 4293 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_enumeration_name) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9737 "Celeste_parser.tab.c"
    break;

  case 357: /* enumeration_name: symbol_reference  */
#line 4303 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::enumeration_name({::Celeste::ast::Type::enumeration_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_enumeration_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9748 "Celeste_parser.tab.c"
    break;

  case 358: /* enumeration_value: full_value  */
#line 4313 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::enumeration_value({::Celeste::ast::Type::enumeration_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_enumeration_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9759 "Celeste_parser.tab.c"
    break;

  case 359: /* symbol_reference: deamerreserved_arrow__symbol__  */
#line 4323 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::symbol_reference({::Celeste::ast::Type::symbol_reference, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__symbol__) });
		((*yyvalp).Celeste_symbol_reference) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9770 "Celeste_parser.tab.c"
    break;

  case 360: /* deamerreserved_arrow__symbol__: symbol deamerreserved_star__DOT__symbol_secondary__  */
#line 4333 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__symbol__({::Celeste::ast::Type::deamerreserved_arrow__symbol__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__symbol_secondary__) });
		((*yyvalp).Celeste_deamerreserved_arrow__symbol__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9781 "Celeste_parser.tab.c"
    break;

  case 361: /* deamerreserved_star__DOT__symbol_secondary__: DOT symbol_secondary deamerreserved_star__DOT__symbol_secondary__  */
#line 4343 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_secondary), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__symbol_secondary__) });
		((*yyvalp).Celeste_deamerreserved_star__DOT__symbol_secondary__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 9793 "Celeste_parser.tab.c"
    break;

  case 362: /* deamerreserved_star__DOT__symbol_secondary__: %empty  */
#line 4350 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__DOT__symbol_secondary__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9804 "Celeste_parser.tab.c"
    break;

  case 363: /* symbol_secondary: symbol_name_secondary deamerreserved_star__symbol_access__  */
#line 4360 "./Celeste_parser.y"
                                                                    {
		auto* const newNode = new Celeste::ast::node::symbol_secondary({::Celeste::ast::Type::symbol_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_name_secondary), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__symbol_access__) });
		((*yyvalp).Celeste_symbol_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9815 "Celeste_parser.tab.c"
    break;

  case 364: /* deamerreserved_star__symbol_access__: symbol_access deamerreserved_star__symbol_access__  */
#line 4370 "./Celeste_parser.y"
                                                            {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__symbol_access__({::Celeste::ast::Type::deamerreserved_star__symbol_access__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_access), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__symbol_access__) });
		((*yyvalp).Celeste_deamerreserved_star__symbol_access__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9826 "Celeste_parser.tab.c"
    break;

  case 365: /* deamerreserved_star__symbol_access__: %empty  */
#line 4376 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__symbol_access__({::Celeste::ast::Type::deamerreserved_star__symbol_access__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__symbol_access__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9837 "Celeste_parser.tab.c"
    break;

  case 366: /* symbol: symbol_name deamerreserved_star__symbol_access__  */
#line 4386 "./Celeste_parser.y"
                                                          {
		auto* const newNode = new Celeste::ast::node::symbol({::Celeste::ast::Type::symbol, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__symbol_access__) });
		((*yyvalp).Celeste_symbol) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9848 "Celeste_parser.tab.c"
    break;

  case 367: /* symbol_access: index_access  */
#line 4396 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_index_access) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9859 "Celeste_parser.tab.c"
    break;

  case 368: /* symbol_access: anonymous_access  */
#line 4402 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_anonymous_access) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9870 "Celeste_parser.tab.c"
    break;

  case 369: /* symbol_access: function_access  */
#line 4408 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_access) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9881 "Celeste_parser.tab.c"
    break;

  case 370: /* symbol_access: auto_deduce_array  */
#line 4414 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_auto_deduce_array) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9892 "Celeste_parser.tab.c"
    break;

  case 371: /* auto_deduce_array: LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 4424 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::auto_deduce_array({::Celeste::ast::Type::auto_deduce_array, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_auto_deduce_array) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9905 "Celeste_parser.tab.c"
    break;

  case 372: /* symbol_name_secondary: VARNAME  */
#line 4436 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9916 "Celeste_parser.tab.c"
    break;

  case 373: /* symbol_name_secondary: FOR  */
#line 4442 "./Celeste_parser.y"
               {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9927 "Celeste_parser.tab.c"
    break;

  case 374: /* symbol_name_secondary: CLASS  */
#line 4448 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9938 "Celeste_parser.tab.c"
    break;

  case 375: /* symbol_name_secondary: IF  */
#line 4454 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9949 "Celeste_parser.tab.c"
    break;

  case 376: /* symbol_name_secondary: ELSEIF  */
#line 4460 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSEIF({::Celeste::ast::Type::ELSEIF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9960 "Celeste_parser.tab.c"
    break;

  case 377: /* symbol_name_secondary: ELSE  */
#line 4466 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9971 "Celeste_parser.tab.c"
    break;

  case 378: /* symbol_name: VARNAME  */
#line 4476 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9982 "Celeste_parser.tab.c"
    break;

  case 379: /* symbol_name: FOR  */
#line 4482 "./Celeste_parser.y"
               {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9993 "Celeste_parser.tab.c"
    break;

  case 380: /* function_access: LEFT_PARANTHESIS deamerreserved_arrow__expression__ COMMA RIGHT_PARANTHESIS  */
#line 4492 "./Celeste_parser.y"
                                                                                     {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__expression__) });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10007 "Celeste_parser.tab.c"
    break;

  case 381: /* function_access: LEFT_PARANTHESIS deamerreserved_arrow__expression__ RIGHT_PARANTHESIS  */
#line 4501 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__expression__) });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10020 "Celeste_parser.tab.c"
    break;

  case 382: /* function_access: LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS  */
#line 4509 "./Celeste_parser.y"
                                                    {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10034 "Celeste_parser.tab.c"
    break;

  case 383: /* function_access: LEFT_PARANTHESIS RIGHT_PARANTHESIS  */
#line 4518 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10047 "Celeste_parser.tab.c"
    break;

  case 384: /* deamerreserved_arrow__expression__: expression deamerreserved_star__COMMA__expression__  */
#line 4530 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__expression__({::Celeste::ast::Type::deamerreserved_arrow__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__expression__) });
		((*yyvalp).Celeste_deamerreserved_arrow__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10058 "Celeste_parser.tab.c"
    break;

  case 385: /* deamerreserved_star__COMMA__expression__: COMMA expression deamerreserved_star__COMMA__expression__  */
#line 4540 "./Celeste_parser.y"
                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__expression__({::Celeste::ast::Type::deamerreserved_star__COMMA__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__expression__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 10070 "Celeste_parser.tab.c"
    break;

  case 386: /* deamerreserved_star__COMMA__expression__: %empty  */
#line 4547 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__expression__({::Celeste::ast::Type::deamerreserved_star__COMMA__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10081 "Celeste_parser.tab.c"
    break;

  case 387: /* index_access: LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 4557 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::index_access({::Celeste::ast::Type::index_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_index_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10094 "Celeste_parser.tab.c"
    break;

  case 388: /* anonymous_access: LEFT_BRACKET expression RIGHT_BRACKET  */
#line 4569 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::anonymous_access({::Celeste::ast::Type::anonymous_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_anonymous_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10107 "Celeste_parser.tab.c"
    break;

  case 389: /* type: deamerreserved_star__type_modifier__ symbol_reference  */
#line 4581 "./Celeste_parser.y"
                                                               {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10118 "Celeste_parser.tab.c"
    break;

  case 390: /* type: deamerreserved_star__type_modifier__ AUTOTYPE array_declaration  */
#line 4587 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTOTYPE({::Celeste::ast::Type::AUTOTYPE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_array_declaration) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10129 "Celeste_parser.tab.c"
    break;

  case 391: /* type: deamerreserved_star__type_modifier__ AUTOTYPE  */
#line 4593 "./Celeste_parser.y"
                                                         {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTOTYPE({::Celeste::ast::Type::AUTOTYPE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10140 "Celeste_parser.tab.c"
    break;

  case 392: /* type: deamerreserved_star__type_modifier__ AUTO array_declaration  */
#line 4599 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTO({::Celeste::ast::Type::AUTO, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_array_declaration) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10151 "Celeste_parser.tab.c"
    break;

  case 393: /* type: deamerreserved_star__type_modifier__ AUTO  */
#line 4605 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTO({::Celeste::ast::Type::AUTO, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10162 "Celeste_parser.tab.c"
    break;

  case 394: /* deamerreserved_star__type_modifier__: type_modifier deamerreserved_star__type_modifier__  */
#line 4615 "./Celeste_parser.y"
                                                            {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__type_modifier__({::Celeste::ast::Type::deamerreserved_star__type_modifier__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type_modifier), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__) });
		((*yyvalp).Celeste_deamerreserved_star__type_modifier__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10173 "Celeste_parser.tab.c"
    break;

  case 395: /* deamerreserved_star__type_modifier__: %empty  */
#line 4621 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__type_modifier__({::Celeste::ast::Type::deamerreserved_star__type_modifier__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__type_modifier__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10184 "Celeste_parser.tab.c"
    break;

  case 396: /* type_modifier: STATIC  */
#line 4631 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::STATIC({::Celeste::ast::Type::STATIC, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type_modifier) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10195 "Celeste_parser.tab.c"
    break;

  case 397: /* type_modifier: CONSTANT  */
#line 4637 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTANT({::Celeste::ast::Type::CONSTANT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type_modifier) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10206 "Celeste_parser.tab.c"
    break;

  case 398: /* type_modifier: INLINE  */
#line 4643 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::INLINE({::Celeste::ast::Type::INLINE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type_modifier) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10217 "Celeste_parser.tab.c"
    break;

  case 399: /* value_list: deamerreserved_arrow__full_value__ COMMA  */
#line 4653 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::value_list({::Celeste::ast::Type::value_list, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_value_list) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10229 "Celeste_parser.tab.c"
    break;

  case 400: /* value_list: deamerreserved_arrow__full_value__  */
#line 4660 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::value_list({::Celeste::ast::Type::value_list, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_value_list) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10240 "Celeste_parser.tab.c"
    break;

  case 401: /* deamerreserved_arrow__full_value__: full_value deamerreserved_star__COMMA__full_value__  */
#line 4670 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__full_value__({::Celeste::ast::Type::deamerreserved_arrow__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_full_value), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__full_value__) });
		((*yyvalp).Celeste_deamerreserved_arrow__full_value__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10251 "Celeste_parser.tab.c"
    break;

  case 402: /* deamerreserved_star__COMMA__full_value__: COMMA full_value deamerreserved_star__COMMA__full_value__  */
#line 4680 "./Celeste_parser.y"
                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__full_value__({::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_full_value), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__full_value__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__full_value__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 10263 "Celeste_parser.tab.c"
    break;

  case 403: /* deamerreserved_star__COMMA__full_value__: %empty  */
#line 4687 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__full_value__({::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__full_value__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10274 "Celeste_parser.tab.c"
    break;

  case 404: /* full_value: expression  */
#line 4697 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::full_value({::Celeste::ast::Type::full_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_full_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10285 "Celeste_parser.tab.c"
    break;

  case 405: /* value: NUMBER  */
#line 4707 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NUMBER({::Celeste::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10296 "Celeste_parser.tab.c"
    break;

  case 406: /* value: DECIMAL  */
#line 4713 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DECIMAL({::Celeste::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10307 "Celeste_parser.tab.c"
    break;

  case 407: /* value: TEXT  */
#line 4719 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10318 "Celeste_parser.tab.c"
    break;

  case 408: /* value: symbol_reference  */
#line 4725 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10329 "Celeste_parser.tab.c"
    break;

  case 409: /* value: code_block  */
#line 4731 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_block) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10340 "Celeste_parser.tab.c"
    break;

  case 410: /* value: tuple  */
#line 4737 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_tuple) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10351 "Celeste_parser.tab.c"
    break;

  case 411: /* tuple: LEFT_PARANTHESIS deamerreserved_arrow__full_value__ COMMA RIGHT_PARANTHESIS  */
#line 4747 "./Celeste_parser.y"
                                                                                     {
		auto* const newNode = new Celeste::ast::node::tuple({::Celeste::ast::Type::tuple, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_tuple) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10365 "Celeste_parser.tab.c"
    break;

  case 412: /* tuple: LEFT_PARANTHESIS deamerreserved_arrow__full_value__ RIGHT_PARANTHESIS  */
#line 4756 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::tuple({::Celeste::ast::Type::tuple, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_tuple) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10378 "Celeste_parser.tab.c"
    break;


#line 10382 "Celeste_parser.tab.c"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

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

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYSTACKP, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  */
static int
yypcontext_expected_tokens (const yyGLRStack* yystackp,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
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

static int
yy_syntax_error_arguments (const yyGLRStack* yystackp,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  yysymbol_kind_t yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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
  if (yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yystackp,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}



static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
  {
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount
    = yy_syntax_error_arguments (yystackp, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    yyMemoryExhausted (yystackp);

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
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
        YYPTRDIFF_T yysz
          = yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (YYSIZE_MAXIMUM - yysize < yysz)
          yysize_overflow = yytrue;
        else
          yysize += yysz;
      }
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (YYSIZE_T, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
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
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs

/* Substitute the variable and function names.  */
#define yyparse Celesteparse
#define yylex   Celestelex
#define yyerror Celesteerror
#define yylval  Celestelval
#define yychar  Celestechar
#define yydebug Celestedebug
#define yynerrs Celestenerrs


#line 4768 "./Celeste_parser.y"


void Celesteerror(const char* s)
{
	std::cout << "Error: " << s << "\n";
	std::cout << "In line: " << Celestelineno << ", Column: " << Celeste_column << '\n';

	std::size_t currentLineCount = 1;
	auto index = 0;
	static constexpr auto offsetShow = 2;

	while (index < Celeste_input_text->size())
	{
		if ((*Celeste_input_text)[index] == '\n')
		{
			currentLineCount += 1;
		}
		index++;

		if (currentLineCount + offsetShow >= Celestelineno)
		{
			break;
		}

	}

	bool donePreShow = false;
	while (!donePreShow && offsetShow > 0)
	{
		if ((*Celeste_input_text)[index] == '\t')
		{
			std::cout << ' ';
		}
		else if ((*Celeste_input_text)[index] == '\r')
		{
			// skip
		}
		else
		{
			std::cout << (*Celeste_input_text)[index];
		}

		if ((*Celeste_input_text)[index] == '\n')
		{
			if (currentLineCount + 1 == Celestelineno)
			{
				donePreShow = true;
			}
			currentLineCount += 1;
		}

		index++;
	}
	
	bool endLine = false;
	while (!endLine && index < Celeste_input_text->size())
	{
		if ((*Celeste_input_text)[index] == '\t')
		{
			std::cout << ' ';
		}
		else if ((*Celeste_input_text)[index] == '\r')
		{
			// skip
		}
		else
		{
			std::cout << (*Celeste_input_text)[index];
		}
		
		if ((*Celeste_input_text)[index] == '\n')
		{
			endLine = true;
		}
		
		index++;
	}

    for(int i = 0; i < Celeste_column - 1; i++)
	{
		std::cout << "_";
	}
	std::cout << "^\n";
}

deamer::external::cpp::ast::Tree* Celeste::bison::parser::Parser::Parse(const std::string& text) const
{
	Celeste_input_text = &text;
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = Celeste_scan_string(text.c_str());
	Celesteparse();
	Celeste_delete_buffer(buf);
	Celestelex_destroy();

	return outputTree;
}
