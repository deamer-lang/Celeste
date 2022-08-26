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
#include "Celeste/Ast/Node/OPERATORNAME.h"
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

#line 305 "Celeste_parser.tab.c"

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
  YYSYMBOL_OPERATORNAME = 16,              /* OPERATORNAME  */
  YYSYMBOL_OVERRIDE = 17,                  /* OVERRIDE  */
  YYSYMBOL_VIRTUAL = 18,                   /* VIRTUAL  */
  YYSYMBOL_PURE = 19,                      /* PURE  */
  YYSYMBOL_AS = 20,                        /* AS  */
  YYSYMBOL_IN = 21,                        /* IN  */
  YYSYMBOL_DISPLAY = 22,                   /* DISPLAY  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSEIF = 26,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_INLINE = 28,                    /* INLINE  */
  YYSYMBOL_CONSTRUCTOR = 29,               /* CONSTRUCTOR  */
  YYSYMBOL_FILE_ = 30,                     /* FILE_  */
  YYSYMBOL_PROGRAM_ = 31,                  /* PROGRAM_  */
  YYSYMBOL_IMPORT = 32,                    /* IMPORT  */
  YYSYMBOL_PUBLIC = 33,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 34,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 35,                   /* PRIVATE  */
  YYSYMBOL_INHERIT = 36,                   /* INHERIT  */
  YYSYMBOL_COMPOSITE = 37,                 /* COMPOSITE  */
  YYSYMBOL_LEFT_BRACKET = 38,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 39,             /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 40,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 41,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 42,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 43,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 45,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_DOT = 47,                       /* DOT  */
  YYSYMBOL_LTEQ = 48,                      /* LTEQ  */
  YYSYMBOL_GTEQ = 49,                      /* GTEQ  */
  YYSYMBOL_LT = 50,                        /* LT  */
  YYSYMBOL_GT = 51,                        /* GT  */
  YYSYMBOL_PLUSEQ = 52,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 53,                   /* MINUSEQ  */
  YYSYMBOL_MULTIPLYEQ = 54,                /* MULTIPLYEQ  */
  YYSYMBOL_DIVIDEEQ = 55,                  /* DIVIDEEQ  */
  YYSYMBOL_EQEQ = 56,                      /* EQEQ  */
  YYSYMBOL_EQ = 57,                        /* EQ  */
  YYSYMBOL_NOTEQ = 58,                     /* NOTEQ  */
  YYSYMBOL_NOT = 59,                       /* NOT  */
  YYSYMBOL_PLUSPLUS = 60,                  /* PLUSPLUS  */
  YYSYMBOL_PLUS = 61,                      /* PLUS  */
  YYSYMBOL_MINUSMINUS = 62,                /* MINUSMINUS  */
  YYSYMBOL_MINUS = 63,                     /* MINUS  */
  YYSYMBOL_DIVIDE = 64,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 65,                  /* MULTIPLY  */
  YYSYMBOL_VARNAME = 66,                   /* VARNAME  */
  YYSYMBOL_NUMBER = 67,                    /* NUMBER  */
  YYSYMBOL_DECIMAL = 68,                   /* DECIMAL  */
  YYSYMBOL_TEXT = 69,                      /* TEXT  */
  YYSYMBOL_ESCAPE_CHARS = 70,              /* ESCAPE_CHARS  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_root_program = 73,              /* root_program  */
  YYSYMBOL_standard_block = 74,            /* standard_block  */
  YYSYMBOL_deamerreserved_star__stmt__ = 75, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 76,                      /* stmt  */
  YYSYMBOL_import_statement = 77,          /* import_statement  */
  YYSYMBOL_file_import = 78,               /* file_import  */
  YYSYMBOL_mutation_group = 79,            /* mutation_group  */
  YYSYMBOL_deamerreserved_arrow__symbol_reference__ = 80, /* deamerreserved_arrow__symbol_reference__  */
  YYSYMBOL_deamerreserved_star__COMMA__symbol_reference__ = 81, /* deamerreserved_star__COMMA__symbol_reference__  */
  YYSYMBOL_assignment = 82,                /* assignment  */
  YYSYMBOL_assignment_operator = 83,       /* assignment_operator  */
  YYSYMBOL_conditional_if = 84,            /* conditional_if  */
  YYSYMBOL_conditional_else_if = 85,       /* conditional_else_if  */
  YYSYMBOL_conditional_else = 86,          /* conditional_else  */
  YYSYMBOL_conditional_block = 87,         /* conditional_block  */
  YYSYMBOL_template_conditional_function_declaration = 88, /* template_conditional_function_declaration  */
  YYSYMBOL_deamerreserved_arrow__template_parameter__ = 89, /* deamerreserved_arrow__template_parameter__  */
  YYSYMBOL_deamerreserved_star__COMMA__template_parameter__ = 90, /* deamerreserved_star__COMMA__template_parameter__  */
  YYSYMBOL_deamerreserved_arrow__conditional_function_argument__ = 91, /* deamerreserved_arrow__conditional_function_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__conditional_function_argument__ = 92, /* deamerreserved_star__COMMA__conditional_function_argument__  */
  YYSYMBOL_deamerreserved_arrow__function_argument__ = 93, /* deamerreserved_arrow__function_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__function_argument__ = 94, /* deamerreserved_star__COMMA__function_argument__  */
  YYSYMBOL_conditional_function_declaration = 95, /* conditional_function_declaration  */
  YYSYMBOL_template_code_function_declaration = 96, /* template_code_function_declaration  */
  YYSYMBOL_code_function_declaration = 97, /* code_function_declaration  */
  YYSYMBOL_return_statement = 98,          /* return_statement  */
  YYSYMBOL_symbol_increase = 99,           /* symbol_increase  */
  YYSYMBOL_symbol_decrease = 100,          /* symbol_decrease  */
  YYSYMBOL_expression = 101,               /* expression  */
  YYSYMBOL_expression_no_value = 102,      /* expression_no_value  */
  YYSYMBOL_t_expression = 103,             /* t_expression  */
  YYSYMBOL_f_expression = 104,             /* f_expression  */
  YYSYMBOL_display_call = 105,             /* display_call  */
  YYSYMBOL_for_loop = 106,                 /* for_loop  */
  YYSYMBOL_for_iteration_loop = 107,       /* for_iteration_loop  */
  YYSYMBOL_for_each_loop = 108,            /* for_each_loop  */
  YYSYMBOL_for_variable = 109,             /* for_variable  */
  YYSYMBOL_iterator = 110,                 /* iterator  */
  YYSYMBOL_for_block = 111,                /* for_block  */
  YYSYMBOL_namespace_declaration = 112,    /* namespace_declaration  */
  YYSYMBOL_deamerreserved_arrow__namespace_name__ = 113, /* deamerreserved_arrow__namespace_name__  */
  YYSYMBOL_deamerreserved_star__DOT__namespace_name__ = 114, /* deamerreserved_star__DOT__namespace_name__  */
  YYSYMBOL_namespace_block = 115,          /* namespace_block  */
  YYSYMBOL_namespace_name = 116,           /* namespace_name  */
  YYSYMBOL_inline_class_declaration = 117, /* inline_class_declaration  */
  YYSYMBOL_deamerreserved_arrow__inline_class_declaration_composite__ = 118, /* deamerreserved_arrow__inline_class_declaration_composite__  */
  YYSYMBOL_deamerreserved_star__COMMA__inline_class_declaration_composite__ = 119, /* deamerreserved_star__COMMA__inline_class_declaration_composite__  */
  YYSYMBOL_inline_class_declaration_composite = 120, /* inline_class_declaration_composite  */
  YYSYMBOL_deamerreserved_arrow__inline_class_declaration_composite_alias__ = 121, /* deamerreserved_arrow__inline_class_declaration_composite_alias__  */
  YYSYMBOL_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__ = 122, /* deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  */
  YYSYMBOL_inline_class_declaration_composite_alias = 123, /* inline_class_declaration_composite_alias  */
  YYSYMBOL_inline_class_declaration_composite_name = 124, /* inline_class_declaration_composite_name  */
  YYSYMBOL_created_class_name = 125,       /* created_class_name  */
  YYSYMBOL_code_block = 126,               /* code_block  */
  YYSYMBOL_deamerreserved_arrow__code_block_input_argument__ = 127, /* deamerreserved_arrow__code_block_input_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__code_block_input_argument__ = 128, /* deamerreserved_star__COMMA__code_block_input_argument__  */
  YYSYMBOL_code_block_input_argument = 129, /* code_block_input_argument  */
  YYSYMBOL_code_block_argument = 130,      /* code_block_argument  */
  YYSYMBOL_code_block_argument_name = 131, /* code_block_argument_name  */
  YYSYMBOL_code_block_program = 132,       /* code_block_program  */
  YYSYMBOL_variable_declaration = 133,     /* variable_declaration  */
  YYSYMBOL_array_declaration = 134,        /* array_declaration  */
  YYSYMBOL_variable_name = 135,            /* variable_name  */
  YYSYMBOL_template_function_declaration = 136, /* template_function_declaration  */
  YYSYMBOL_function_declaration = 137,     /* function_declaration  */
  YYSYMBOL_trailing_return_type = 138,     /* trailing_return_type  */
  YYSYMBOL_return_type = 139,              /* return_type  */
  YYSYMBOL_conditional_function_argument = 140, /* conditional_function_argument  */
  YYSYMBOL_function_argument = 141,        /* function_argument  */
  YYSYMBOL_function_argument_type = 142,   /* function_argument_type  */
  YYSYMBOL_function_argument_name = 143,   /* function_argument_name  */
  YYSYMBOL_condition_modifier_function_call = 144, /* condition_modifier_function_call  */
  YYSYMBOL_deamerreserved_arrow__condition_modifier_argument__ = 145, /* deamerreserved_arrow__condition_modifier_argument__  */
  YYSYMBOL_deamerreserved_star__COMMA__condition_modifier_argument__ = 146, /* deamerreserved_star__COMMA__condition_modifier_argument__  */
  YYSYMBOL_condition_modifier_name = 147,  /* condition_modifier_name  */
  YYSYMBOL_condition_modifier_argument = 148, /* condition_modifier_argument  */
  YYSYMBOL_function_body = 149,            /* function_body  */
  YYSYMBOL_function_name = 150,            /* function_name  */
  YYSYMBOL_template_class_declaration = 151, /* template_class_declaration  */
  YYSYMBOL_template_parameter = 152,       /* template_parameter  */
  YYSYMBOL_template_parameter_name = 153,  /* template_parameter_name  */
  YYSYMBOL_class_declaration = 154,        /* class_declaration  */
  YYSYMBOL_deamerreserved_arrow__class_inherit_base__ = 155, /* deamerreserved_arrow__class_inherit_base__  */
  YYSYMBOL_deamerreserved_star__COMMA__class_inherit_base__ = 156, /* deamerreserved_star__COMMA__class_inherit_base__  */
  YYSYMBOL_class_name = 157,               /* class_name  */
  YYSYMBOL_execution_keyword_permutation = 158, /* execution_keyword_permutation  */
  YYSYMBOL_class_body = 159,               /* class_body  */
  YYSYMBOL_deamerreserved_star__class_stmt__ = 160, /* deamerreserved_star__class_stmt__  */
  YYSYMBOL_class_stmt = 161,               /* class_stmt  */
  YYSYMBOL_class_stmt_member_field_declaration = 162, /* class_stmt_member_field_declaration  */
  YYSYMBOL_member_field_name = 163,        /* member_field_name  */
  YYSYMBOL_class_stmt_member_function = 164, /* class_stmt_member_function  */
  YYSYMBOL_class_stmt_member_template_function = 165, /* class_stmt_member_template_function  */
  YYSYMBOL_template_class_stmt_constructor = 166, /* template_class_stmt_constructor  */
  YYSYMBOL_class_stmt_constructor = 167,   /* class_stmt_constructor  */
  YYSYMBOL_accessibility = 168,            /* accessibility  */
  YYSYMBOL_class_inherit_base = 169,       /* class_inherit_base  */
  YYSYMBOL_inherit_base = 170,             /* inherit_base  */
  YYSYMBOL_inherit_base_name = 171,        /* inherit_base_name  */
  YYSYMBOL_compound_base = 172,            /* compound_base  */
  YYSYMBOL_deamerreserved_arrow__compound_base_alias__ = 173, /* deamerreserved_arrow__compound_base_alias__  */
  YYSYMBOL_deamerreserved_star__COMMA__compound_base_alias__ = 174, /* deamerreserved_star__COMMA__compound_base_alias__  */
  YYSYMBOL_compound_base_name = 175,       /* compound_base_name  */
  YYSYMBOL_compound_base_alias = 176,      /* compound_base_alias  */
  YYSYMBOL_enum_declaration = 177,         /* enum_declaration  */
  YYSYMBOL_deamerreserved_star__enumeration__ = 178, /* deamerreserved_star__enumeration__  */
  YYSYMBOL_enum_name = 179,                /* enum_name  */
  YYSYMBOL_enumeration = 180,              /* enumeration  */
  YYSYMBOL_enumeration_name = 181,         /* enumeration_name  */
  YYSYMBOL_enumeration_value = 182,        /* enumeration_value  */
  YYSYMBOL_symbol_reference = 183,         /* symbol_reference  */
  YYSYMBOL_deamerreserved_arrow__symbol__ = 184, /* deamerreserved_arrow__symbol__  */
  YYSYMBOL_deamerreserved_star__DOT__symbol_secondary__ = 185, /* deamerreserved_star__DOT__symbol_secondary__  */
  YYSYMBOL_symbol_secondary = 186,         /* symbol_secondary  */
  YYSYMBOL_deamerreserved_star__symbol_access__ = 187, /* deamerreserved_star__symbol_access__  */
  YYSYMBOL_symbol = 188,                   /* symbol  */
  YYSYMBOL_symbol_access = 189,            /* symbol_access  */
  YYSYMBOL_auto_deduce_array = 190,        /* auto_deduce_array  */
  YYSYMBOL_symbol_name_secondary = 191,    /* symbol_name_secondary  */
  YYSYMBOL_symbol_name = 192,              /* symbol_name  */
  YYSYMBOL_function_access = 193,          /* function_access  */
  YYSYMBOL_deamerreserved_arrow__expression__ = 194, /* deamerreserved_arrow__expression__  */
  YYSYMBOL_deamerreserved_star__COMMA__expression__ = 195, /* deamerreserved_star__COMMA__expression__  */
  YYSYMBOL_index_access = 196,             /* index_access  */
  YYSYMBOL_anonymous_access = 197,         /* anonymous_access  */
  YYSYMBOL_type = 198,                     /* type  */
  YYSYMBOL_deamerreserved_star__type_modifier__ = 199, /* deamerreserved_star__type_modifier__  */
  YYSYMBOL_type_modifier = 200,            /* type_modifier  */
  YYSYMBOL_value_list = 201,               /* value_list  */
  YYSYMBOL_deamerreserved_arrow__full_value__ = 202, /* deamerreserved_arrow__full_value__  */
  YYSYMBOL_deamerreserved_star__COMMA__full_value__ = 203, /* deamerreserved_star__COMMA__full_value__  */
  YYSYMBOL_full_value = 204,               /* full_value  */
  YYSYMBOL_value = 205,                    /* value  */
  YYSYMBOL_tuple = 206                     /* tuple  */
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
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  416
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1247
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 18
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325

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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   664,   664,   675,   685,   695,   701,   711,   717,   723,
     729,   735,   741,   747,   753,   759,   766,   772,   778,   784,
     790,   796,   802,   808,   814,   820,   826,   832,   838,   844,
     850,   856,   867,   877,   887,   900,   912,   925,   937,   951,
     961,   968,   978,   988,   994,  1000,  1006,  1012,  1022,  1036,
    1046,  1060,  1072,  1082,  1098,  1113,  1129,  1144,  1159,  1173,
    1188,  1202,  1218,  1233,  1249,  1264,  1279,  1293,  1308,  1322,
    1335,  1347,  1360,  1372,  1388,  1403,  1419,  1434,  1449,  1463,
    1478,  1492,  1508,  1523,  1539,  1554,  1569,  1583,  1598,  1612,
    1625,  1637,  1650,  1666,  1676,  1683,  1693,  1703,  1710,  1720,
    1730,  1737,  1747,  1761,  1774,  1788,  1801,  1814,  1826,  1839,
    1851,  1865,  1878,  1892,  1905,  1918,  1930,  1943,  1955,  1966,
    1976,  1987,  2001,  2014,  2026,  2039,  2051,  2064,  2076,  2089,
    2105,  2116,  2126,  2137,  2151,  2161,  2171,  2181,  2191,  2197,
    2203,  2213,  2219,  2225,  2231,  2237,  2243,  2249,  2255,  2261,
    2267,  2277,  2285,  2295,  2305,  2311,  2321,  2333,  2343,  2358,
    2368,  2378,  2388,  2400,  2410,  2417,  2427,  2437,  2447,  2455,
    2462,  2470,  2481,  2491,  2498,  2508,  2514,  2522,  2531,  2543,
    2554,  2566,  2581,  2591,  2598,  2608,  2618,  2628,  2638,  2649,
    2659,  2670,  2680,  2692,  2702,  2709,  2719,  2729,  2735,  2745,
    2755,  2765,  2771,  2781,  2793,  2803,  2816,  2829,  2841,  2853,
    2866,  2879,  2891,  2903,  2916,  2929,  2941,  2953,  2966,  2979,
    2991,  3007,  3018,  3029,  3039,  3049,  3060,  3071,  3081,  3095,
    3105,  3115,  3125,  3131,  3137,  3143,  3153,  3163,  3173,  3184,
    3194,  3205,  3215,  3227,  3237,  3244,  3254,  3264,  3274,  3284,
    3294,  3304,  3314,  3324,  3338,  3348,  3358,  3366,  3378,  3388,
    3395,  3405,  3415,  3421,  3427,  3433,  3439,  3449,  3459,  3465,
    3475,  3481,  3487,  3493,  3499,  3505,  3515,  3522,  3529,  3536,
    3543,  3549,  3559,  3569,  3575,  3581,  3587,  3593,  3599,  3609,
    3615,  3621,  3627,  3633,  3639,  3649,  3662,  3674,  3687,  3699,
    3712,  3724,  3737,  3749,  3762,  3774,  3787,  3799,  3812,  3824,
    3837,  3849,  3862,  3874,  3887,  3899,  3912,  3924,  3937,  3953,
    3964,  3974,  3985,  3995,  4006,  4016,  4027,  4037,  4048,  4058,
    4069,  4083,  4089,  4095,  4105,  4111,  4121,  4131,  4141,  4147,
    4153,  4162,  4170,  4179,  4191,  4201,  4208,  4218,  4228,  4238,
    4250,  4256,  4266,  4276,  4283,  4289,  4296,  4306,  4316,  4326,
    4336,  4346,  4353,  4363,  4373,  4379,  4389,  4399,  4405,  4411,
    4417,  4427,  4439,  4445,  4451,  4457,  4463,  4469,  4475,  4481,
    4491,  4497,  4503,  4509,  4519,  4528,  4536,  4545,  4557,  4567,
    4574,  4584,  4596,  4608,  4614,  4620,  4626,  4632,  4642,  4648,
    4658,  4664,  4670,  4680,  4687,  4697,  4707,  4714,  4724,  4734,
    4740,  4746,  4752,  4758,  4764,  4774,  4783
};
#endif

#define YYPACT_NINF (-522)
#define YYTABLE_NINF (-400)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     193,  -522,   323,    69,   310,    50,  -522,   -38,  -522,   323,
     293,   855,    31,    54,    61,  -522,    88,    49,   183,  -522,
      84,   154,  -522,  -522,  -522,  1196,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,   118,  -522,  -522,  -522,
    -522,  -522,   116,  -522,  1282,  -522,   126,   395,   323,   221,
      59,  -522,  -522,  -522,   186,  -522,   246,   190,  -522,  -522,
     200,  -522,  -522,   206,   181,  -522,  1284,  1049,  1126,  -522,
    -522,  -522,  -522,   -41,   751,  -522,  -522,  -522,  -522,  -522,
    1130,   216,   293,   293,   214,  1347,   198,  1419,   241,   261,
     110,   262,  -522,  -522,   383,    59,   323,   274,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,   293,   161,  -522,   293,
     606,   519,  -522,   445,  -522,  -522,  -522,  -522,   255,  -522,
     278,   278,  -522,  -522,   323,   323,   279,   152,   285,  -522,
     323,  -522,   430,   617,  1479,   -38,  -522,  -522,   302,   316,
     327,  -522,    -8,   232,   320,  -522,   306,   252,   359,  -522,
     293,   293,  1126,  1126,  1126,  1126,  1126,  1126,  1126,  1126,
     351,  1524,   378,   382,   293,  -522,   403,  -522,   428,   404,
     418,   437,   436,   323,  -522,   -22,  -522,   443,   450,   489,
    -522,   323,  -522,   602,  -522,    34,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,   126,   446,   493,  -522,   482,
    -522,   502,   490,   307,  -522,   293,   293,  -522,  -522,   501,
     323,    23,  -522,   511,   323,   323,   515,    59,  -522,    15,
    -522,   522,   521,   337,   526,   538,   551,   452,  -522,   571,
     181,  -522,  1576,   609,  -522,   613,   576,    59,  -522,  -522,
    -522,  -522,   625,   293,  -522,   751,   751,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,   459,    47,  -522,   631,   647,
     657,   662,  -522,   670,  1641,   675,   677,   683,   681,   -12,
    -522,   689,  -522,   384,  -522,   699,   707,   323,   323,    32,
     703,   718,  -522,  -522,   669,   730,   726,   711,  -522,  -522,
    -522,  -522,  -522,   293,  -522,  -522,   748,  -522,   766,   778,
    -522,  -522,  -522,   293,   676,   779,   786,   323,   783,   323,
     293,   774,  1701,   794,   798,   795,    59,  -522,  1746,   801,
     804,   800,  -522,  -522,   806,  1791,  1836,   814,   817,  -522,
     819,   293,   293,  -522,  1881,  1926,   822,  -522,   825,  1971,
    2016,   836,  -522,   839,   847,    38,   843,   323,   852,   833,
     680,  -522,  -522,   865,  -522,   170,   860,   204,   204,   394,
    -522,  -522,  -522,   884,   889,   868,   238,   873,  -522,   272,
    -522,  -522,  -522,  -522,  -522,  -522,   323,  1386,   248,  -522,
     406,   231,   343,   848,    59,  -522,  -522,  -522,   861,  -522,
    -522,  -522,   870,  -522,   880,   888,   472,   702,   762,   885,
    -522,   476,  -522,  -522,   293,  -522,   894,  2061,  2106,   896,
     890,   898,  2151,  2196,   904,  -522,   903,   905,  2241,  -522,
    -522,   902,  -522,   906,   908,   913,  2286,   916,   918,   921,
    2331,   323,   910,   924,   933,   833,  -522,   935,  -522,   942,
      36,   914,   474,   -17,   123,   977,   973,   979,   980,   987,
     807,   963,  -522,  -522,   809,   966,  -522,  -522,   165,  -522,
     968,   718,   892,   967,   969,    59,   323,   458,   231,   391,
     726,  -522,  -522,  2376,   970,   974,   972,   975,   976,   484,
     985,   981,   495,   915,   728,  -522,  -522,  -522,   978,   988,
    2421,  -522,  -522,   992,   993,  2466,  -522,  -522,   994,   991,
     996,  -522,  -522,   998,  -522,   999,  1003,  1002,  1005,   323,
     323,  1000,  1004,  -522,  -522,  2511,  1011,  -522,   122,   127,
    1008,    91,  -522,  -522,   366,  1016,  -522,  -522,  -522,  -522,
    1021,  1019,   506,   949,  1025,  1024,   508,   148,  -522,  -522,
     293,  -522,  -522,   323,  1026,   525,   982,   990,   323,   837,
    1109,  1022,  1028,    59,   323,  -522,  1032,  2556,  2601,  1034,
    2646,  1036,  1037,  1033,  2691,  1042,  1046,  1043,  1050,  1044,
     546,  1047,  1052,   150,  1048,  -522,  -522,  -522,  1059,  -522,
    -522,  1060,  -522,  2736,  2781,  -522,  -522,  -522,  1061,  -522,
    1064,  1065,   323,  -522,  1062,  2826,  2871,  1069,  2916,  1071,
     242,  -522,  1070,   284,  1066,   497,  1068,   513,  2961,  1076,
    1081,  1078,  1094,  1090,   547,  3006,  1100,  1102,  1101,   204,
    1106,   579,  1107,   323,   323,  1105,  1113,  1114,   568,  1118,
    1116,   580,  1119,  8130,  1122,   323,  1120,   589,  1225,  1226,
     323,   844,  -522,  1104,  1123,  3051,  1125,  3096,  3141,  1127,
    1128,  3186,  3231,  1131,  3276,  1133,  1136,  1132,  -522,  1137,
    1138,  1142,   293,  -522,  -522,  -522,  1140,  1145,  -522,  -522,
    -522,  1144,  -522,  1149,  1151,  3321,  1174,  3366,  3411,  1176,
    -522,  -522,  1175,  1159,  -522,  1231,  1184,  1259,   575,  1185,
    1178,  3456,  3501,  1193,  3546,  1194,  1195,  1197,  1200,  3591,
    3636,  1205,  1239,   204,  -522,  -522,  1390,  1204,  1206,   323,
    3681,  1209,  1214,  1212,  3726,  1218,  1219,  1215,  1612,  1221,
    8166,  1222,   323,   323,  1223,  1229,  1230,   623,  1238,  1235,
     640,  1241,  8202,  1242,  -522,  -522,  1245,  -522,  1246,  1247,
    3771,  -522,  1250,  1251,  3816,  1262,  3861,  3906,  1260,  -522,
    -522,  1270,  1268,  -522,  -522,  -522,  -522,  -522,  1276,  -522,
    1278,  1279,  3951,  -522,  1274,  1283,  1280,   646,  1616,  1286,
    1285,   651,  1692,  1288,  1737,  -522,  1293,  1294,  3996,  1299,
    4041,  4086,  1302,  -522,  1304,  1306,  4131,  1256,  1308,  1318,
     656,  1826,  1827,  1305,  1325,  4176,  4221,  1327,  1328,  4266,
    4311,  1330,   299,  1323,   664,  -522,  1338,  1871,  1336,  1339,
     323,  4356,  1342,  1344,  1340,  4401,  1346,  1349,  1345,  1872,
    1354,  8238,  -522,  -522,  -522,  1359,  -522,  -522,  1360,  -522,
    1367,  1368,  4446,  -522,  -522,  -522,  -522,  -522,  1369,  -522,
    4491,  1371,  1373,  1374,  1378,  1379,   668,  4536,  1399,  1410,
    1381,  1411,  1407,   682,  1917,  1415,  1412,   686,  -522,  -522,
    1420,  -522,  1423,  1424,  4581,  -522,  -522,  1426,  4626,  1416,
    1428,  1425,  1429,  1427,   688,  1431,  1430,   704,  1962,  -522,
    1432,  1433,  4671,  -522,  1435,  1436,  4716,  4761,  1438,   363,
     374,  1434,  -522,  1440,  1437,   712,  2006,  2007,  1370,  1445,
    4806,  4851,  1441,  1454,  4896,  4941,  1459,   415,  1455,   716,
    -522,  1460,  -522,  -522,  -522,  -522,  1461,  -522,  1469,  4986,
    5031,  1471,  5076,  1472,  1475,  1473,  1480,  5121,  5166,  1476,
    5211,  1484,  1485,  1482,  1489,  1486,   736,  5256,  1492,  1500,
    1498,  -522,  -522,  -522,  1503,  -522,  1504,  5301,  5346,  1506,
    5391,  1515,  1516,  1512,  5436,  1519,  1520,  1517,  1521,  1518,
     742,  -522,  -522,  1526,  -522,  -522,  1528,  1529,  5481,  5526,
    1532,  5571,  1533,   569,  5616,  1534,  1535,  1531,  1537,  1538,
     746,  1540,  1539,   771,  2051,  -522,  1554,  1555,  5661,  -522,
    1558,  1567,  5706,  5751,  1571,   570,   605,  1568,  -522,  -522,
    -522,  1574,  1580,  5796,  1583,  5841,  5886,  1572,  -522,  1585,
    1586,  5931,  1587,  5976,  6021,  1577,  6066,  1590,  1591,  1588,
    1593,  6111,  6156,  1592,  -522,  -522,  1594,  1596,  6201,  1597,
    6246,  6291,  1599,  1600,  6336,  6381,  1603,  6426,  1605,  1608,
    1595,  -522,  -522,  -522,  1622,  1631,  6471,  1632,  6516,  6561,
    1609,  1633,  6606,  6651,  1636,  6696,  1637,  1638,  1634,  6741,
    1640,  1642,  1644,  1646,  1645,   780,  -522,  -522,  1650,  -522,
    -522,  1651,  1652,  6786,  6831,  1647,  6876,  1655,   616,  -522,
    -522,  1658,  -522,  1659,  1660,  6921,  -522,  -522,  1661,  -522,
    1662,  1663,  6966,  1667,  7011,  7056,  1677,  -522,  1679,  1680,
    7101,  -522,  -522,  1682,  -522,  1683,  1691,  7146,  -522,  1693,
    1695,  7191,  1697,  7236,  7281,  1699,  -522,  -522,  1703,  -522,
    1705,  1706,  7326,  -522,  1708,  1710,  7371,  1712,  7416,  7461,
    1714,  1721,  7506,  7551,  1725,  7596,  1726,  1728,  1688,  -522,
    -522,  -522,  1736,  1738,  7641,  1740,  7686,  7731,  1743,  -522,
    -522,  -522,  1747,  -522,  -522,  -522,  1748,  -522,  1750,  1751,
    7776,  -522,  -522,  1753,  -522,  -522,  -522,  1755,  -522,  -522,
    1757,  -522,  1758,  1766,  7821,  -522,  -522,  -522,  1769,  -522,
    -522,  1770,  -522,  1771,  1772,  7866,  -522,  1781,  1782,  7911,
    1783,  7956,  8001,  1786,  -522,  -522,  1787,  -522,  1788,  1789,
    8046,  -522,  -522,  -522,  -522,  1795,  -522,  -522,  -522,  -522,
    -522,  1796,  -522,  -522,  -522,  -522,  1800,  -522,  -522,  1802,
    -522,  1803,  1811,  8091,  -522,  -522,  -522,  1814,  -522,  -522,
    -522,  -522,  -522,  -522,  1817,  -522,  -522
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     266,   401,     0,     0,   383,   263,   400,     0,   382,     0,
       0,   381,     0,     0,     0,   402,     0,     0,     0,    31,
     380,     0,     2,     3,     4,     6,    30,    32,    29,    28,
      25,    26,    27,    23,    24,    21,    22,    20,    18,    19,
      17,    16,   155,   154,    14,    13,     0,    12,     7,     9,
       8,    10,     0,    11,     0,   359,   362,   365,     0,     0,
     399,   383,   381,   380,     0,   352,   399,     0,   249,   264,
       0,   265,   167,     0,   165,   153,   266,   399,     0,   409,
     410,   411,   134,   137,   140,   150,   413,   412,   152,   414,
     399,     0,     0,     0,     0,   266,     0,   266,     0,     0,
       0,    41,     1,     5,   171,   399,     0,     0,    15,    43,
      44,    45,    46,    47,   135,   136,     0,     0,   360,     0,
       0,     0,   366,   365,   370,   369,   367,   368,   202,   204,
     397,   395,   393,   398,   351,     0,     0,     0,    98,   231,
       0,   236,   399,   399,   266,     0,   163,   200,     0,     0,
       0,   408,   137,     0,   195,   196,   198,     0,   407,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     198,   266,     0,     0,     0,    52,     0,    33,     0,     0,
       0,     0,     0,     0,    39,     0,   170,   169,   174,   175,
     186,     0,   230,     0,   261,   399,    42,   374,   379,   378,
     373,   375,   376,   377,   372,   362,   365,     0,   371,     0,
     387,     0,   390,     0,   364,     0,     0,   396,   394,     0,
     351,   356,   357,     0,     0,     0,     0,   399,    96,   235,
     237,     0,     0,     0,   101,     0,     0,     0,   166,     0,
     165,   192,   266,     0,   151,     0,     0,   399,   193,   199,
     197,   416,     0,     0,   405,   138,   139,   143,   144,   145,
     146,   147,   148,   142,   141,   159,     0,   161,     0,     0,
       0,     0,    51,     0,   266,     0,     0,     0,    41,     0,
     185,     0,   168,     0,   172,     0,     0,     0,     0,   399,
       0,   260,   334,   335,   266,     0,    95,     0,   361,   363,
     392,   391,   386,     0,   388,   385,     0,   201,   404,     0,
     349,   350,   355,     0,   399,     0,     0,     0,    98,     0,
       0,   233,   266,     0,     0,     0,   399,    99,   266,     0,
       0,     0,   162,   164,     0,   266,   266,     0,   195,   415,
     407,     0,     0,   156,   266,   266,     0,    38,     0,   266,
     266,     0,    40,     0,     0,     0,   184,     0,   174,     0,
     399,   336,   337,   338,   347,   383,     0,   266,   266,     0,
     331,   332,   333,   294,   288,     0,     0,     0,   267,   399,
     271,   272,   273,   275,   274,   270,     0,   399,     0,   258,
       0,   262,     0,   266,   399,    93,   255,   254,   390,   384,
     403,   203,   354,   358,     0,     0,     0,   399,   399,     0,
      97,     0,   246,   234,     0,   248,     0,   266,   266,     0,
     101,     0,   266,   266,     0,   191,     0,     0,   266,   194,
     406,     0,   160,     0,     0,     0,   266,     0,     0,     0,
     266,     0,     0,     0,     0,     0,   182,     0,   173,     0,
     399,     0,     0,     0,   399,   262,   290,   284,   292,   286,
     399,     0,   293,   287,   399,     0,   257,   268,   281,   282,
       0,   260,   399,     0,     0,   399,     0,     0,   262,     0,
      95,   389,   353,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,     0,   242,   232,   121,     0,     0,
     266,   100,   133,     0,     0,   266,   190,   189,     0,     0,
       0,    48,    49,     0,    37,     0,     0,     0,     0,     0,
       0,     0,   184,   177,   176,   266,     0,   229,   399,   399,
       0,     0,   348,   339,     0,     0,   289,   283,   291,   285,
       0,     0,     0,   399,     0,     0,     0,   399,   279,   277,
       0,   256,   259,     0,     0,     0,   399,   399,     0,     0,
     399,     0,     0,   399,     0,    94,     0,   266,   266,     0,
     266,     0,     0,     0,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,   247,   120,   119,     0,   132,
     131,     0,   188,   266,   266,    50,    36,    35,     0,   181,
       0,     0,     0,   183,     0,   266,   266,     0,   266,     0,
     399,   343,     0,     0,   346,     0,     0,     0,   266,     0,
       0,     0,     0,     0,     0,   266,     0,     0,     0,   266,
       0,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,     0,     0,     0,     0,   399,   399,
       0,     0,   117,     0,     0,   266,     0,   266,   266,     0,
       0,   266,   266,     0,   266,     0,     0,     0,   241,     0,
       0,     0,     0,   243,   118,   130,     0,     0,    34,   180,
     179,     0,   228,     0,     0,   266,     0,   266,   266,     0,
     342,   341,     0,     0,   344,   399,     0,   399,     0,     0,
       0,   266,   266,     0,   266,     0,     0,     0,     0,   266,
     266,     0,     0,   266,   278,   276,   399,     0,     0,     0,
     266,     0,     0,     0,   266,     0,     0,     0,   399,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,     0,   116,   115,     0,   113,     0,     0,
     266,   109,     0,     0,   266,     0,   266,   266,     0,   240,
     239,     0,   245,   157,   158,   178,   227,   226,     0,   224,
       0,     0,   266,   340,   346,     0,     0,     0,   399,     0,
       0,     0,   399,     0,   399,   330,     0,     0,   266,     0,
     266,   266,     0,   322,     0,     0,   266,     0,     0,     0,
       0,   399,   399,     0,     0,   266,   266,     0,     0,   266,
     266,     0,   399,     0,     0,   253,     0,   399,     0,     0,
       0,   266,     0,     0,     0,   266,     0,     0,     0,   399,
       0,   399,   114,   112,   111,     0,   108,   107,     0,   105,
       0,     0,   266,   238,   244,   225,   223,   222,     0,   345,
     266,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,   399,     0,     0,     0,   329,   328,
       0,   326,     0,     0,   266,   321,   320,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,    92,
       0,     0,   266,   129,     0,     0,   266,   266,     0,   399,
     399,     0,   252,     0,     0,     0,   399,   399,     0,     0,
     266,   266,     0,     0,   266,   266,     0,   399,     0,     0,
     251,     0,   110,   106,   104,   103,     0,   221,     0,   266,
     266,     0,   266,     0,     0,     0,     0,   266,   266,     0,
     266,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,   327,   325,   324,     0,   319,     0,   266,   266,     0,
     266,     0,     0,     0,   266,     0,     0,     0,     0,     0,
       0,    91,    90,     0,   128,   127,     0,     0,   266,   266,
       0,   266,     0,   399,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,    72,     0,     0,   266,   125,
       0,     0,   266,   266,     0,   399,   399,     0,   250,   102,
     318,     0,     0,   266,     0,   266,   266,     0,   302,     0,
       0,   266,     0,   266,   266,     0,   266,     0,     0,     0,
       0,   266,   266,     0,   323,    88,     0,     0,   266,     0,
     266,   266,     0,     0,   266,   266,     0,   266,     0,     0,
       0,    89,   126,   220,     0,     0,   266,     0,   266,   266,
       0,     0,   266,   266,     0,   266,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,    71,    70,     0,   124,
     123,     0,     0,   266,   266,     0,   266,     0,   399,   317,
     316,     0,   314,     0,     0,   266,   301,   300,     0,   310,
       0,     0,   266,     0,   266,   266,     0,   298,     0,     0,
     266,    87,    86,     0,    84,     0,     0,   266,    80,     0,
       0,   266,     0,   266,   266,     0,   219,   218,     0,   216,
       0,     0,   266,    68,     0,     0,   266,     0,   266,   266,
       0,     0,   266,   266,     0,   266,     0,     0,     0,    69,
     122,   212,     0,     0,   266,     0,   266,   266,     0,   315,
     313,   312,     0,   299,   309,   308,     0,   306,     0,     0,
     266,   297,   296,     0,    85,    83,    82,     0,    79,    78,
       0,    76,     0,     0,   266,   217,   215,   214,     0,    67,
      66,     0,    64,     0,     0,   266,    60,     0,     0,   266,
       0,   266,   266,     0,   211,   210,     0,   208,     0,     0,
     266,   311,   307,   305,   304,     0,   295,    81,    77,    75,
      74,     0,   213,    65,    63,    62,     0,    59,    58,     0,
      56,     0,     0,   266,   209,   207,   206,     0,   303,    73,
      61,    57,    55,    54,     0,   205,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -522,  -522,  -522,    19,  1551,  -522,  -522,  -522,  -522,  -522,
    1180,  -522,  -522,  -522,  -522,  -522,  -312,  -522,  -440,  1296,
    -459,  1507,   197,  1446,  -522,  -522,  -522,  -522,  -522,  -522,
      20,    81,   498,   -20,  -522,  -522,  -522,  -522,  -522,  1523,
     107,  -522,  -522,  1627,  -522,  1734,  -522,  -522,  1513,  1601,
    -522,  1358,  -267,  -351,  -522,  -522,  -522,  1548,  1648,  -522,
    -522,  -216,  -522,  1756,  -522,  -264,  -262,  -513,   -98,  1671,
     -61,  -522,  -522,  -522,  -522,  1139,  -522,  1240,  -154,    48,
    -522,  1522,  -522,  -522,  -522,  1439,  -103,  -285,  -385,  1543,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -380,  -522,
    -522,  -522,  -522,  1150,  -522,  -521,  -522,  1707,  -522,  -522,
    -522,  -522,   962,  -522,  1720,  -522,  -106,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  1542,  -522,  -522,   -66,  1851,  -522,
    1382,  -214,  1589,  -232,  -522,  -522
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,   415,    24,    25,    26,    27,    28,   100,
     184,    29,   116,    30,    31,    32,   176,    33,   295,   395,
     137,   228,   233,   327,    34,    35,    36,    37,    38,    39,
     151,    83,    84,    85,    40,    41,    42,    43,   266,   431,
     268,    44,    73,   146,   239,    74,    45,   187,   284,   188,
     355,   446,   281,   189,    46,    86,   153,   248,   154,   155,
     250,   148,    47,   217,   128,    48,    49,   526,   527,   138,
     234,   140,   229,   321,   583,   673,   411,   584,   416,    67,
      50,   296,   397,    51,   290,   389,   375,    52,   377,   378,
     379,   380,   468,   381,   382,   383,   384,   385,   291,   292,
     361,   293,   613,   694,   363,   533,    53,   219,    64,   220,
     221,   402,    54,    55,   118,   205,   122,    56,   123,   124,
     206,    57,   125,   213,   304,   126,   127,    58,    59,    60,
     307,   157,   254,   158,    88,    89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     141,   308,   470,   193,   376,   139,   447,   191,   471,   392,
     614,   156,   356,   555,   535,   607,   609,   214,   279,    23,
     160,   340,   161,   531,   170,   373,   334,   374,    72,   353,
      82,    91,   434,   435,   354,   244,     1,  -266,     1,   192,
       1,   365,     5,     6,   280,     6,   366,     6,     8,   532,
     367,   368,    70,   160,   280,   161,    62,   319,   159,    71,
      15,   369,    15,     1,    15,   370,   371,   372,   341,   312,
       6,  -269,   320,    92,   525,   294,   141,   141,    61,   443,
     313,   403,   376,   376,   444,     8,    94,    15,   413,    97,
     518,   342,   449,    62,   376,   147,    93,   689,    63,    95,
     299,   647,   376,   456,   458,   457,   459,   630,   479,   432,
     432,    66,   172,   173,   175,   373,   178,   374,    96,   426,
     427,   105,   106,   373,   513,   374,     1,     1,  -187,   297,
     107,     1,   611,     6,     6,    63,   196,   612,     6,   207,
     209,   212,   257,   258,   259,   260,   261,   262,   263,   264,
      15,    15,     1,   181,   102,    15,   182,   532,   152,     6,
     606,   141,   104,   238,   534,   608,   139,   197,   600,   601,
     198,   152,   774,   117,   421,  -262,    15,   199,   522,   644,
      69,   156,   496,   223,  -262,   200,   201,   202,   203,   629,
     267,   670,    61,    -6,   271,   225,   671,     1,   226,     8,
       2,     3,     4,     5,     6,  -399,  -399,    62,     7,     8,
     548,   549,   508,   455,     5,     9,    10,    11,    12,    13,
      14,    15,   550,   386,   134,    16,    98,   204,   145,    99,
      61,    17,   142,   130,   131,    18,   309,     8,    19,   286,
      61,    69,   143,   105,   144,    62,     1,     8,   141,    63,
       1,   681,   465,     6,   171,    62,   174,     6,   729,    20,
     141,   147,   585,   498,   499,   420,   461,   177,   503,   504,
      15,   743,   315,   316,    15,   245,     1,  -266,   246,   179,
     688,   365,     5,     6,   287,   288,   366,    63,     8,   135,
     367,   368,   136,   348,   141,   251,    62,    63,   252,   898,
      15,   369,    61,     1,   180,   370,   371,   372,   183,     8,
       6,  -269,   215,   386,   195,  -262,  -262,    62,   216,    61,
      69,   386,   224,   398,  -262,   691,     8,    15,   297,   566,
     692,   227,    61,    76,    62,    77,   308,   897,    63,     8,
     237,   141,   141,   241,   712,   816,   588,    62,   475,   476,
     305,   591,    78,   306,   147,   147,   242,   830,   376,    63,
      79,    80,    81,   175,   175,   409,   247,     1,   438,   439,
     243,   604,   249,   559,     6,    61,    63,   558,     1,   373,
     324,   374,     8,   325,   192,     6,   980,   982,   297,    63,
      62,    15,    61,    61,   141,   615,   563,   564,   141,     8,
       8,   979,    15,    61,  1004,   253,   141,    62,    62,   192,
       8,   139,   981,   653,   654,    61,   656,   265,    62,     1,
     660,   269,     8,   185,   185,   270,     6,   141,   797,   186,
      62,   616,    63,   119,     1,   120,   460,   121,   473,   474,
     585,     6,   272,    15,   274,   376,   921,   147,   472,    63,
      63,   683,   684,  1003,   686,   175,   275,   376,    15,   517,
      63,   651,   192,   192,   700,   650,   373,    61,   374,   273,
    1060,   708,    63,   231,     8,   276,   232,   141,   373,   277,
     374,   297,    62,   119,   119,   120,   120,   121,   121,   282,
     141,   141,  1085,  1087,   141,   330,   283,   192,   331,   139,
     560,   746,  -199,   748,   749,  -199,    61,   752,   753,   285,
     755,   406,   696,     8,   699,   485,   494,   529,   486,   495,
     530,    62,    61,   301,    63,   561,   562,   572,    61,     8,
     573,   768,   300,   770,   771,     8,   303,    62,   576,   695,
     310,   577,   698,    62,   192,   302,   376,   786,   787,   620,
     789,   627,   621,   314,   628,   794,   795,   452,   317,    76,
     322,    77,   210,    63,   323,   211,   804,   373,   634,   374,
     808,   635,   326,     1,     1,  1158,   328,   386,    78,    63,
       6,     6,   141,   141,    61,    63,    79,    80,    81,   666,
     706,     8,   667,   707,   329,   783,   835,    15,    15,    62,
     838,   632,   840,   841,   489,   492,   642,  1059,  1084,     1,
     332,   722,   267,   267,   723,    61,     6,   782,   848,   337,
       1,     1,     8,   726,   714,   715,   727,     6,     6,   141,
      62,   141,   733,    15,   870,   734,   872,   873,   287,   288,
     289,    63,   877,  1086,    15,    15,    76,   208,    77,   335,
     141,   890,   891,   336,  1157,   894,   895,   542,   255,   256,
     235,   546,   141,   236,   386,    78,   823,   909,   339,   824,
     343,   913,    63,    79,    80,    81,   386,   390,   391,     5,
       1,   717,   718,   827,     1,   344,   828,     6,   926,   852,
     580,     6,   853,   731,   859,   345,   928,   860,   741,   880,
     676,   677,   881,   936,    15,   346,     1,   900,    15,   347,
     901,   934,   141,     6,   935,   349,   141,   350,   141,   404,
     954,   351,   405,   450,   956,   942,   451,   183,   943,   949,
      15,   962,   950,   357,   963,   141,   141,    61,   973,   359,
     624,   387,   976,   977,     8,   487,   192,   966,   488,   360,
     967,   141,    62,   638,   641,   986,   996,   997,   987,  1006,
    1000,  1001,  1007,   141,   388,   386,     1,   803,    76,   581,
      77,   393,   394,     6,   582,  1011,  1012,   396,  1014,  1028,
     818,   819,  1029,  1019,  1020,  1049,  1022,    78,  1050,  1067,
      15,   399,  1068,  1030,    63,    79,    80,    81,   141,   162,
     163,   164,   165,  1036,  1037,   490,  1039,   166,   491,   167,
    1043,     1,   400,     1,  1071,   168,   169,  1072,     6,   401,
       6,   407,   141,  1147,  1054,  1055,  1148,  1057,   408,   227,
    1061,   414,   417,   192,   192,    15,   418,    15,   419,   422,
     141,   141,   423,   424,  1078,   737,   740,   425,  1081,  1082,
     540,   192,   544,   541,   428,   545,   477,   478,     5,  1091,
     436,  1093,  1094,   247,    61,   253,   437,  1098,   908,  1100,
    1101,     8,  1103,   287,   288,   643,   440,  1108,  1109,    62,
     287,   288,   742,   441,  1113,   453,  1115,  1116,   442,   445,
    1119,  1120,   777,  1122,   781,    76,     1,    90,   283,   280,
     454,   462,  1128,     6,  1130,  1131,   463,   303,  1134,  1135,
     464,  1137,   466,   800,    78,  1141,   482,   192,   483,     1,
      15,    63,    79,    80,    81,   814,     6,   493,   141,  1152,
    1153,   484,  1155,   497,   500,   553,   326,   502,   554,   192,
     192,  1162,   505,    15,   506,   509,   507,   511,  1166,   510,
    1168,  1169,   512,     1,   519,   514,  1173,   528,   578,   515,
       6,   579,   516,  1177,    65,    68,    68,  1180,   520,  1182,
    1183,    75,    87,    87,   521,   856,   523,    15,  1188,   863,
     101,   867,  1191,   524,  1193,  1194,     1,    69,  1197,  1198,
     536,  1200,   622,     6,     1,   623,   537,   538,   884,   887,
    1206,     6,  1208,  1209,   539,   543,   547,   551,   567,   556,
      15,   557,   568,   570,   905,   569,  1215,   586,    15,   571,
     129,   132,   192,   574,   575,   636,   919,   587,   637,   593,
    1221,   589,   590,   639,   594,   592,   640,   595,   596,    87,
      87,  1226,   597,   598,   602,  1229,   599,  1231,  1232,   605,
     445,   610,    87,     1,    87,    87,  1237,   617,    61,   618,
       6,   946,   619,   625,   648,     8,   190,   626,   194,   633,
     649,   652,   655,    62,   657,   658,   659,    15,    87,  1244,
     661,    87,    87,    87,   662,   970,   663,   665,   664,    76,
     668,    77,   149,   669,   672,   150,   222,    68,   674,   675,
     678,   682,   230,   990,   993,   679,   680,   685,    78,   687,
     697,   690,   693,     1,   701,    63,    79,    80,    81,   702,
       6,   703,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,   704,   705,     1,    61,    87,    15,   709,    61,
     710,     6,     8,   744,   711,   278,     8,   713,   719,   716,
      62,   720,   645,    68,    62,   646,   724,   721,    15,   725,
     730,   728,   745,   732,   747,   750,    76,   751,    77,   754,
      76,   756,    77,   149,   757,   758,   150,    87,    87,   763,
     759,   760,   222,   761,   764,   765,    68,    68,   766,    78,
     767,  1075,    63,    79,    80,    81,    63,    79,    80,    81,
       1,  -266,  -266,     2,     3,     4,     5,     6,  -399,  -399,
    -266,     7,     8,   769,   772,    87,   773,   785,     9,    10,
      11,    12,    13,    14,    15,   532,   778,   784,    16,     1,
       1,   788,   790,   791,    17,     1,     6,     6,    18,   793,
     792,    19,     6,   796,   475,   190,   801,   805,   802,   362,
     364,   194,   806,    15,    15,   807,   809,   810,   811,    15,
     815,   563,    20,     1,   817,    87,   820,   821,   735,   738,
       6,   736,   739,   822,   775,    87,   825,   776,   826,    68,
     831,   412,    87,   829,   832,   833,   834,    15,     1,   836,
     837,     2,     3,     4,     5,     6,  -399,  -399,   842,     7,
       8,   839,   779,    87,    87,   780,     9,    10,    11,    12,
      13,    14,    15,   843,   672,   845,    16,   846,   847,   190,
     693,   850,    17,   851,   857,    -6,    18,   108,   858,    19,
     864,   194,   868,   869,   109,   110,   111,   112,   871,   113,
     874,   194,   114,   875,   115,   876,   878,   888,   469,   194,
      20,     1,    68,    68,     2,     3,     4,     5,     6,  -399,
    -399,   879,     7,     8,   889,   892,   899,   893,   896,     9,
      10,    11,    12,    13,    14,    15,    87,   902,   906,    16,
     910,   907,   911,   912,   914,    17,    -6,   915,   916,    18,
       1,  -266,    19,   920,     1,   365,     5,     6,   922,   923,
     366,     6,     8,   190,   367,   368,   924,   925,   927,   929,
      62,   930,   994,    20,    15,   369,   932,   931,    15,   370,
     371,   372,   933,     1,   939,  -269,     2,     3,     4,     5,
       6,  -399,  -399,   798,     7,     8,   799,   937,   194,    68,
      68,     9,    10,    11,    12,    13,    14,    15,   938,   940,
     941,    16,    63,   947,   957,   948,    87,    17,   352,   951,
      -6,    18,   952,   953,    19,   955,   958,   960,   959,   964,
     961,   971,   972,   965,   974,   975,   978,   983,   984,   998,
     985,   190,   190,     1,   995,    20,     2,     3,     4,     5,
       6,  -399,  -399,   999,     7,     8,   194,  1002,  1005,  1008,
    1009,     9,    10,    11,    12,    13,    14,    15,  1010,  1013,
    1015,    16,    87,  1016,  1021,    68,  1017,    17,    -6,  1018,
      68,    18,  1023,  1024,    19,  1025,   194,  1026,     1,  1027,
    1031,     2,     3,     4,     5,     6,  -399,  -399,  1032,     7,
       8,  1033,  1034,  1035,  1038,    20,     9,    10,    11,    12,
      13,    14,    15,  1040,  1041,  1042,    16,  1044,  1045,  1047,
    1046,  1048,    17,    -6,   190,  1051,    18,  1052,  1053,    19,
    1056,  1058,  1062,  1063,  1064,  1065,   103,   194,  1069,   194,
       1,  1066,  1070,     2,     3,     4,     5,     6,  -399,  -399,
      20,     7,     8,  1076,  1077,    68,    68,  1079,     9,    10,
      11,    12,    13,    14,    15,   194,  1080,    68,    16,  1083,
    1095,  1088,    68,  1089,    17,  1102,     1,    -6,    18,  1090,
       1,    19,  1092,     6,  1096,  1097,  1099,     6,  1104,  1105,
    1110,  1106,  1107,  1111,    87,  1112,  1114,  1117,  1125,  1118,
      15,  1121,    20,  1123,    15,     1,  1124,  1132,     2,     3,
       4,     5,     6,  -399,  -399,   812,     7,     8,   813,   854,
     194,  1126,   855,     9,    10,    11,    12,    13,    14,    15,
    1127,  1129,  1133,    16,  1136,  1138,  1139,  1140,  1142,    17,
    1143,    68,    -6,    18,  1145,  1154,    19,  1144,  1146,  1149,
    1150,  1151,   194,  1156,    68,    68,     1,  1159,  1160,  1161,
    1163,  1164,  1165,     6,   194,     1,  1167,    20,     2,     3,
       4,     5,     6,  -399,  -399,  1170,     7,     8,  1171,  1172,
      15,  1174,  1175,     9,    10,    11,    12,    13,    14,    15,
    1176,  1203,  1178,    16,  1179,   861,  1181,  1184,   862,    17,
      -6,     1,  1185,    18,  1186,  1187,    19,  1189,     6,  1190,
       1,  1192,  1195,     2,     3,     4,     5,     6,  -399,  -399,
    1196,     7,     8,  1199,  1201,    15,  1202,    20,     9,    10,
      11,    12,    13,    14,    15,  1204,   565,  1205,    16,  1207,
     865,  1210,    68,   866,    17,    -6,  1211,  1212,    18,  1213,
    1214,    19,  1216,   194,  1217,     1,  1218,  1219,     2,     3,
       4,     5,     6,  -399,  -399,  1220,     7,     8,  1222,  1223,
    1224,  1225,    20,     9,    10,    11,    12,    13,    14,    15,
    1227,  1228,  1230,    16,  1233,   410,  1234,  1235,  1236,    17,
       1,     1,    -6,    18,  1238,  1239,    19,     6,     6,  1240,
       1,  1241,  1242,     2,     3,     4,     5,     6,  -399,  -399,
    1243,     7,     8,  1245,    15,    15,  1246,    20,     9,    10,
      11,    12,    13,    14,    15,   433,   501,   333,    16,   882,
     885,   448,   883,   886,    17,     1,     1,    -6,    18,   240,
     603,    19,     6,     6,   358,     1,   429,   218,     2,     3,
       4,     5,     6,  -399,  -399,   338,     7,     8,   318,    15,
      15,   844,    20,     9,    10,    11,    12,    13,    14,    15,
     552,   133,   762,    16,   903,   917,   480,   904,   918,    17,
      -6,     1,   467,    18,   849,   298,    19,   311,     6,   430,
       1,     0,   631,     2,     3,     4,     5,     6,  -399,  -399,
     481,     7,     8,     0,     0,    15,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
     944,     0,     0,   945,    17,    -6,     1,     0,    18,     0,
       0,    19,     0,     6,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
      15,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,   968,     0,     0,   969,    17,
       1,     1,    -6,    18,     0,     0,    19,     6,     6,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,    15,    15,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,   988,
     991,     0,   989,   992,    17,     1,     0,    -6,    18,     0,
       0,    19,     6,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,    15,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,  1073,     0,     0,  1074,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
       0,     0,    -6,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
       0,     0,    -6,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     5,     6,  -399,  -399,
       0,     7,     8,     0,     0,     0,     0,    20,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    17,    -6,     0,     0,    18,     0,
       0,    19,     0,     0,     0,     1,     0,     0,     2,     3,
       4,     5,     6,  -399,  -399,     0,     7,     8,     0,     0,
       0,     0,    20,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
      -6,     0,     0,    18,     1,  -266,    19,     0,     0,   365,
       5,     6,     0,     0,   366,     0,     8,     0,   367,   368,
       0,     0,     0,     0,    62,     0,     0,    20,    15,   369,
       0,     0,     0,   370,   371,   372,     0,     0,     0,  -269,
       1,  -266,     0,     0,     0,   365,     5,     6,     0,     0,
     366,     0,     8,     0,   367,   368,     0,     0,     0,     0,
      62,     0,     0,     0,    15,   369,    63,     0,     0,   370,
     371,   372,     0,     0,     0,  -269,     1,  -266,     0,     0,
       0,   365,     5,     6,     0,     0,   366,     0,     8,     0,
     367,   368,     0,     0,     0,     0,    62,     0,     0,     0,
      15,   369,    63,     0,     0,   370,   371,   372,     0,     0,
       0,  -269,     1,  -266,     0,     0,     0,   365,     5,     6,
       0,     0,   366,     0,     8,     0,   367,   368,     0,     0,
       0,     0,    62,     0,     0,     0,    15,   369,    63,     0,
       0,   370,   371,   372,     0,     0,     0,  -269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
      66,   215,   387,   106,   289,    66,   357,   105,   388,   294,
     531,    77,   279,   472,   454,   528,   529,   123,    40,     0,
      61,   253,    63,    40,    90,   289,   242,   289,    66,    41,
      10,    11,   344,   345,    46,    43,     4,     5,     4,   105,
       4,     9,    10,    11,    66,    11,    14,    11,    16,    66,
      18,    19,     4,    61,    66,    63,    24,    42,    78,     9,
      28,    29,    28,     4,    28,    33,    34,    35,    21,    46,
      11,    39,    57,    42,    38,    41,   142,   143,     9,    41,
      57,   313,   367,   368,    46,    16,    25,    28,   320,    40,
     441,    44,   359,    24,   379,    76,    42,   610,    66,    38,
     206,   560,   387,   367,   368,   367,   368,   547,   393,   341,
     342,    42,    92,    93,    95,   379,    97,   379,    30,   335,
     336,     5,     6,   387,   436,   387,     4,     4,    44,   195,
      14,     4,    41,    11,    11,    66,   116,    46,    11,   119,
     120,   121,   162,   163,   164,   165,   166,   167,   168,   169,
      28,    28,     4,    43,     0,    28,    46,    66,    77,    11,
      38,   227,    44,   144,    41,    38,   227,     6,   519,   520,
       9,    90,   693,    47,   328,     5,    28,    16,   445,   559,
      10,   247,   414,   135,    14,    24,    25,    26,    27,    41,
     171,    41,     9,     0,   174,    43,    46,     4,    46,    16,
       7,     8,     9,    10,    11,    12,    13,    24,    15,    16,
      45,    46,   428,     9,    10,    22,    23,    24,    25,    26,
      27,    28,    57,   289,    38,    32,    43,    66,    47,    46,
       9,    38,    42,    12,    13,    42,   216,    16,    45,   191,
       9,    10,    42,     5,    38,    24,     4,    16,   314,    66,
       4,   602,    14,    11,    38,    24,    42,    11,   643,    66,
     326,   242,   494,   417,   418,   326,   369,    69,   422,   423,
      28,   651,   224,   225,    28,    43,     4,     5,    46,    38,
      38,     9,    10,    11,    36,    37,    14,    66,    16,    43,
      18,    19,    46,   274,   360,    43,    24,    66,    46,   812,
      28,    29,     9,     4,    43,    33,    34,    35,    46,    16,
      11,    39,    57,   379,    40,     5,     6,    24,    40,     9,
      10,   387,    43,   303,    14,    41,    16,    28,   394,   483,
      46,    46,     9,    40,    24,    42,   550,    38,    66,    16,
     143,   407,   408,    41,   629,   730,   500,    24,     5,     6,
      43,   505,    59,    46,   335,   336,    40,   742,   643,    66,
      67,    68,    69,   344,   345,   317,    46,     4,   349,   350,
      43,   525,    66,   476,    11,     9,    66,   475,     4,   643,
      43,   643,    16,    46,   450,    11,   899,   900,   454,    66,
      24,    28,     9,     9,   460,    29,     5,     6,   464,    16,
      16,    38,    28,     9,   917,    46,   472,    24,    24,   475,
      16,   472,    38,   567,   568,     9,   570,    66,    24,     4,
     574,    43,    16,    40,    40,    43,    11,   493,   713,    46,
      24,   534,    66,    38,     4,    40,    42,    42,   390,   391,
     672,    11,    39,    28,    40,   730,   831,   428,    42,    66,
      66,   605,   606,    38,   608,   436,    38,   742,    28,   440,
      66,   564,   528,   529,   618,   563,   730,     9,   730,    41,
     983,   625,    66,    43,    16,    38,    46,   543,   742,    43,
     742,   547,    24,    38,    38,    40,    40,    42,    42,    46,
     556,   557,  1005,  1006,   560,    43,    46,   563,    46,   560,
      42,   655,    43,   657,   658,    46,     9,   661,   662,    20,
     664,   314,   615,    16,   617,    43,    40,    43,    46,    43,
      46,    24,     9,    41,    66,   477,   478,    43,     9,    16,
      46,   685,    39,   687,   688,    16,    46,    24,    43,    42,
      39,    46,    29,    24,   610,    43,   831,   701,   702,    43,
     704,    43,    46,    42,    46,   709,   710,   360,    43,    40,
      38,    42,    43,    66,    43,    46,   720,   831,    43,   831,
     724,    46,    46,     4,     4,  1088,    38,   643,    59,    66,
      11,    11,   648,   649,     9,    66,    67,    68,    69,    43,
      43,    16,    46,    46,    43,   698,   750,    28,    28,    24,
     754,   553,   756,   757,   407,   408,   558,    38,    38,     4,
      39,    43,   593,   594,    46,     9,    11,    42,   772,    43,
       4,     4,    16,    43,    45,    46,    46,    11,    11,   695,
      24,   697,    43,    28,   788,    46,   790,   791,    36,    37,
      38,    66,   796,    38,    28,    28,    40,    41,    42,    40,
     716,   805,   806,    40,    38,   809,   810,   460,   160,   161,
      43,   464,   728,    46,   730,    59,    43,   821,    43,    46,
      39,   825,    66,    67,    68,    69,   742,     8,     9,    10,
       4,   633,   634,    43,     4,    38,    46,    11,   842,    43,
     493,    11,    46,   645,    43,    38,   850,    46,   650,    43,
     593,   594,    46,   857,    28,    43,     4,    43,    28,    39,
      46,    43,   778,    11,    46,    40,   782,    40,   784,    43,
     874,    38,    46,    43,   878,    43,    46,    46,    46,    43,
      28,    43,    46,    44,    46,   801,   802,     9,   892,    40,
     543,    38,   896,   897,    16,    43,   812,    43,    46,    42,
      46,   817,    24,   556,   557,    43,   910,   911,    46,    43,
     914,   915,    46,   829,    46,   831,     4,   719,    40,    41,
      42,    41,    46,    11,    46,   929,   930,    66,   932,    43,
     732,   733,    46,   937,   938,    43,   940,    59,    46,    43,
      28,    43,    46,   947,    66,    67,    68,    69,   864,    48,
      49,    50,    51,   957,   958,    43,   960,    56,    46,    58,
     964,     4,    46,     4,    43,    64,    65,    46,    11,    41,
      11,    42,   888,    43,   978,   979,    46,   981,    42,    46,
     984,    57,    38,   899,   900,    28,    38,    28,    43,    38,
     906,   907,    38,    43,   998,   648,   649,    41,  1002,  1003,
      43,   917,    43,    46,    40,    46,     8,     9,    10,  1013,
      38,  1015,  1016,    46,     9,    46,    41,  1021,   820,  1023,
    1024,    16,  1026,    36,    37,    38,    40,  1031,  1032,    24,
      36,    37,    38,    44,  1038,    20,  1040,  1041,    41,    46,
    1044,  1045,   695,  1047,   697,    40,     4,    42,    46,    66,
      40,    17,  1056,    11,  1058,  1059,    17,    46,  1062,  1063,
      42,  1065,    39,   716,    59,  1069,    46,   983,    38,     4,
      28,    66,    67,    68,    69,   728,    11,    42,   994,  1083,
    1084,    43,  1086,    39,    38,    43,    46,    39,    46,  1005,
    1006,  1095,    38,    28,    41,    43,    41,    39,  1102,    43,
    1104,  1105,    39,     4,    44,    39,  1110,    43,    43,    41,
      11,    46,    41,  1117,     2,     3,     4,  1121,    44,  1123,
    1124,     9,    10,    11,    41,   778,    41,    28,  1132,   782,
      18,   784,  1136,    41,  1138,  1139,     4,    10,  1142,  1143,
      17,  1145,    43,    11,     4,    46,    17,    17,   801,   802,
    1154,    11,  1156,  1157,    17,    42,    40,    39,    38,    42,
      28,    42,    38,    38,   817,    43,  1170,    39,    28,    43,
      58,    59,  1088,    38,    43,    43,   829,    39,    46,    38,
    1184,    39,    39,    43,    38,    41,    46,    39,    39,    77,
      78,  1195,    39,    41,    44,  1199,    41,  1201,  1202,    38,
      46,    43,    90,     4,    92,    93,  1210,    41,     9,    38,
      11,   864,    43,    38,    42,    16,   104,    43,   106,    43,
      42,    39,    38,    24,    38,    38,    43,    28,   116,  1233,
      38,   119,   120,   121,    38,   888,    43,    43,    38,    40,
      43,    42,    43,    41,    46,    46,   134,   135,    39,    39,
      39,    39,   140,   906,   907,    41,    41,    38,    59,    38,
      42,    41,    46,     4,    38,    66,    67,    68,    69,    38,
      11,    43,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    38,    43,     4,     9,   174,    28,    38,     9,
      38,    11,    16,    39,    43,   183,    16,    41,    43,    42,
      24,    38,    43,   191,    24,    46,    38,    43,    28,    43,
      38,    42,    39,    43,    39,    38,    40,    39,    42,    38,
      40,    38,    42,    43,    38,    43,    46,   215,   216,    39,
      43,    43,   220,    41,    39,    41,   224,   225,    39,    59,
      39,   994,    66,    67,    68,    69,    66,    67,    68,    69,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    39,    38,   253,    41,    39,    22,    23,
      24,    25,    26,    27,    28,    66,    42,    42,    32,     4,
       4,    38,    38,    38,    38,     4,    11,    11,    42,    39,
      43,    45,    11,    38,     5,   283,    42,    38,    42,   287,
     288,   289,    38,    28,    28,    43,    38,    38,    43,    28,
      39,     5,    66,     4,    42,   303,    43,    38,    43,    43,
      11,    46,    46,    43,    43,   313,    38,    46,    43,   317,
      38,   319,   320,    42,    39,    39,    39,    28,     4,    39,
      39,     7,     8,     9,    10,    11,    12,    13,    38,    15,
      16,    39,    43,   341,   342,    46,    22,    23,    24,    25,
      26,    27,    28,    43,    46,    39,    32,    39,    39,   357,
      46,    38,    38,    43,    38,    41,    42,    45,    43,    45,
      42,   369,    39,    39,    52,    53,    54,    55,    39,    57,
      38,   379,    60,    39,    62,    39,    38,    42,   386,   387,
      66,     4,   390,   391,     7,     8,     9,    10,    11,    12,
      13,    43,    15,    16,    39,    38,    43,    39,    38,    22,
      23,    24,    25,    26,    27,    28,   414,    39,    42,    32,
      38,    42,    38,    43,    38,    38,    39,    38,    43,    42,
       4,     5,    45,    39,     4,     9,    10,    11,    39,    39,
      14,    11,    16,   441,    18,    19,    39,    39,    39,    38,
      24,    38,    42,    66,    28,    29,    38,    43,    28,    33,
      34,    35,    43,     4,    43,    39,     7,     8,     9,    10,
      11,    12,    13,    43,    15,    16,    46,    38,   476,   477,
     478,    22,    23,    24,    25,    26,    27,    28,    38,    38,
      43,    32,    66,    38,    38,    43,   494,    38,   278,    39,
      41,    42,    39,    39,    45,    39,    38,    38,    43,    38,
      43,    39,    39,    43,    39,    39,    38,    43,    38,    38,
      43,   519,   520,     4,    39,    66,     7,     8,     9,    10,
      11,    12,    13,    39,    15,    16,   534,    38,    43,    39,
      39,    22,    23,    24,    25,    26,    27,    28,    39,    38,
      38,    32,   550,    38,    38,   553,    43,    38,    39,    39,
     558,    42,    38,    38,    45,    43,   564,    38,     4,    43,
      38,     7,     8,     9,    10,    11,    12,    13,    38,    15,
      16,    43,    39,    39,    38,    66,    22,    23,    24,    25,
      26,    27,    28,    38,    38,    43,    32,    38,    38,    38,
      43,    43,    38,    39,   602,    39,    42,    39,    39,    45,
      38,    38,    38,    38,    43,    38,    25,   615,    38,   617,
       4,    43,    43,     7,     8,     9,    10,    11,    12,    13,
      66,    15,    16,    39,    39,   633,   634,    39,    22,    23,
      24,    25,    26,    27,    28,   643,    39,   645,    32,    38,
      38,    43,   650,    39,    38,    38,     4,    41,    42,    39,
       4,    45,    39,    11,    39,    39,    39,    11,    38,    38,
      38,    43,    39,    39,   672,    39,    39,    38,    43,    39,
      28,    38,    66,    38,    28,     4,    38,    38,     7,     8,
       9,    10,    11,    12,    13,    43,    15,    16,    46,    43,
     698,    39,    46,    22,    23,    24,    25,    26,    27,    28,
      39,    39,    39,    32,    38,    38,    38,    43,    38,    38,
      38,   719,    41,    42,    38,    38,    45,    43,    43,    39,
      39,    39,   730,    38,   732,   733,     4,    39,    39,    39,
      39,    39,    39,    11,   742,     4,    39,    66,     7,     8,
       9,    10,    11,    12,    13,    38,    15,    16,    39,    39,
      28,    39,    39,    22,    23,    24,    25,    26,    27,    28,
      39,    43,    39,    32,    39,    43,    39,    38,    46,    38,
      39,     4,    39,    42,    39,    39,    45,    39,    11,    39,
       4,    39,    38,     7,     8,     9,    10,    11,    12,    13,
      39,    15,    16,    38,    38,    28,    38,    66,    22,    23,
      24,    25,    26,    27,    28,    39,   480,    39,    32,    39,
      43,    38,   820,    46,    38,    39,    39,    39,    42,    39,
      39,    45,    39,   831,    39,     4,    39,    39,     7,     8,
       9,    10,    11,    12,    13,    39,    15,    16,    39,    39,
      39,    39,    66,    22,    23,    24,    25,    26,    27,    28,
      39,    39,    39,    32,    38,   318,    39,    39,    39,    38,
       4,     4,    41,    42,    39,    39,    45,    11,    11,    39,
       4,    39,    39,     7,     8,     9,    10,    11,    12,    13,
      39,    15,    16,    39,    28,    28,    39,    66,    22,    23,
      24,    25,    26,    27,    28,   342,   420,   240,    32,    43,
      43,   358,    46,    46,    38,     4,     4,    41,    42,   145,
     522,    45,    11,    11,   283,     4,   338,   131,     7,     8,
       9,    10,    11,    12,    13,   247,    15,    16,   227,    28,
      28,   762,    66,    22,    23,    24,    25,    26,    27,    28,
     471,    60,   672,    32,    43,    43,   394,    46,    46,    38,
      39,     4,   379,    42,   774,   205,    45,   220,    11,   340,
       4,    -1,   550,     7,     8,     9,    10,    11,    12,    13,
     398,    15,    16,    -1,    -1,    28,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      43,    -1,    -1,    46,    38,    39,     4,    -1,    42,    -1,
      -1,    45,    -1,    11,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      28,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    43,    -1,    -1,    46,    38,
       4,     4,    41,    42,    -1,    -1,    45,    11,    11,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    28,    28,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    43,
      43,    -1,    46,    46,    38,     4,    -1,    41,    42,    -1,
      -1,    45,    11,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    28,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    43,    -1,    -1,    46,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    66,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    66,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,     4,     5,    45,    -1,    -1,     9,
      10,    11,    -1,    -1,    14,    -1,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    66,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
       4,     5,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      14,    -1,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    66,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,     4,     5,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    14,    -1,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    66,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,     4,     5,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    14,    -1,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    66,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,     9,    10,    11,    15,    16,    22,
      23,    24,    25,    26,    27,    28,    32,    38,    42,    45,
      66,    72,    73,    74,    75,    76,    77,    78,    79,    82,
      84,    85,    86,    88,    95,    96,    97,    98,    99,   100,
     105,   106,   107,   108,   112,   117,   125,   133,   136,   137,
     151,   154,   158,   177,   183,   184,   188,   192,   198,   199,
     200,     9,    24,    66,   179,   183,    42,   150,   183,    10,
     150,     9,    66,   113,   116,   183,    40,    42,    59,    67,
      68,    69,   101,   102,   103,   104,   126,   183,   205,   206,
      42,   101,    42,    42,    25,    38,    30,    40,    43,    46,
      80,   183,     0,    75,    44,     5,     6,    14,    45,    52,
      53,    54,    55,    57,    60,    62,    83,    47,   185,    38,
      40,    42,   187,   189,   190,   193,   196,   197,   135,   183,
      12,    13,   183,   199,    38,    43,    46,    91,   140,   141,
     142,   198,    42,    42,    38,    47,   114,    74,   132,    43,
      46,   101,   102,   127,   129,   130,   198,   202,   204,   104,
      61,    63,    48,    49,    50,    51,    56,    58,    64,    65,
     198,    38,   101,   101,    42,    74,    87,    69,    74,    38,
      43,    43,    46,    46,    81,    40,    46,   118,   120,   124,
     183,   139,   198,   157,   183,    40,   101,     6,     9,    16,
      24,    25,    26,    27,    66,   186,   191,   101,    41,   101,
      43,    46,   101,   194,   187,    57,    40,   134,   134,   178,
     180,   181,   183,   150,    43,    43,    46,    46,    92,   143,
     183,    43,    46,    93,   141,    43,    46,    93,    74,   115,
     116,    41,    40,    43,    43,    43,    46,    46,   128,    66,
     131,    43,    46,    46,   203,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,    66,   109,    74,   111,    43,
      43,   101,    39,    41,    40,    38,    38,    43,   183,    40,
      66,   123,    46,    46,   119,    20,   150,    36,    37,    38,
     155,   169,   170,   172,    41,    89,   152,   198,   185,   187,
      39,    41,    43,    46,   195,    43,    46,   201,   202,   101,
      39,   178,    46,    57,    42,   150,   150,    43,   140,    42,
      57,   144,    38,    43,    43,    46,    46,    94,    38,    43,
      43,    46,    39,   114,   132,    40,    40,    43,   129,    43,
     204,    21,    44,    39,    38,    38,    43,    39,    74,    40,
      40,    38,    81,    41,    46,   121,   123,    44,   120,    40,
      42,   171,   183,   175,   183,     9,    14,    18,    19,    29,
      33,    34,    35,   136,   137,   157,   158,   159,   160,   161,
     162,   164,   165,   166,   167,   168,   198,    38,    46,   156,
       8,     9,   158,    41,    46,    90,    66,   153,   101,    43,
      46,    41,   182,   204,    43,    46,    93,    42,    42,   150,
      92,   147,   183,   204,    57,    74,   149,    38,    38,    43,
     141,   149,    38,    38,    43,    41,   132,   132,    40,   128,
     203,   110,   204,   110,    87,    87,    38,    41,    74,    74,
      40,    44,    41,    41,    46,    46,   122,   124,   119,   123,
      43,    46,    93,    20,    40,     9,   136,   137,   136,   137,
      42,   157,    17,    17,    42,    14,    39,   160,   163,   183,
     159,   169,    42,   150,   150,     5,     6,     8,     9,   158,
     152,   195,    46,    38,    43,    43,    46,    43,    46,    93,
      43,    46,    93,    42,    40,    43,   204,    39,   149,   149,
      38,    94,    39,   149,   149,    38,    41,    41,   132,    43,
      43,    39,    39,    87,    39,    41,    41,    74,   124,    44,
      44,    41,   123,    41,    41,    38,   138,   139,    43,    43,
      46,    40,    66,   176,    41,    89,    17,    17,    17,    17,
      43,    46,    93,    42,    43,    46,    93,    40,    45,    46,
      57,    39,   156,    43,    46,    91,    42,    42,   139,   157,
      42,   150,   150,     5,     6,    90,   149,    38,    38,    43,
      38,    43,    43,    46,    38,    43,    43,    46,    43,    46,
      93,    41,    46,   145,   148,   204,    39,    39,   149,    39,
      39,   149,    41,    38,    38,    39,    39,    39,    41,    41,
     124,   124,    44,   122,   149,    38,    38,   138,    38,   138,
      43,    41,    46,   173,   176,    29,   157,    41,    38,    43,
      43,    46,    43,    46,    93,    38,    43,    43,    46,    41,
      89,   201,   150,    43,    43,    46,    43,    46,    93,    43,
      46,    93,   150,    38,   169,    43,    46,    91,    42,    42,
     139,   157,    39,   149,   149,    38,   149,    38,    38,    43,
     149,    38,    38,    43,    38,    43,    43,    46,    43,    41,
      41,    46,    46,   146,    39,    39,   111,   111,    39,    41,
      41,   124,    39,   149,   149,    38,   149,    38,    38,   138,
      41,    41,    46,    46,   174,    42,   157,    42,    29,   157,
     149,    38,    38,    43,    38,    43,    43,    46,   149,    38,
      38,    43,   158,    41,    45,    46,    42,   150,   150,    43,
      38,    43,    43,    46,    38,    43,    43,    46,    42,   159,
      38,   150,    43,    43,    46,    43,    46,    93,    43,    46,
      93,   150,    38,   169,    39,    39,   149,    39,   149,   149,
      38,    39,   149,   149,    38,   149,    38,    38,    43,    43,
      43,    41,   148,    39,    39,    41,    39,    39,   149,    39,
     149,   149,    38,    41,   176,    43,    46,    93,    42,    43,
      46,    93,    42,   157,    42,    39,   149,   149,    38,   149,
      38,    38,    43,    39,   149,   149,    38,   158,    43,    46,
      93,    42,    42,   150,   149,    38,    38,    43,   149,    38,
      38,    43,    43,    46,    93,    39,   159,    42,   150,   150,
      43,    38,    43,    43,    46,    38,    43,    43,    46,    42,
     159,    38,    39,    39,    39,   149,    39,    39,   149,    39,
     149,   149,    38,    43,   146,    39,    39,    39,   149,   174,
      38,    43,    43,    46,    43,    46,    93,    38,    43,    43,
      46,    43,    46,    93,    42,    43,    46,    93,    39,    39,
     149,    39,   149,   149,    38,    39,    39,   149,    38,    43,
      43,    46,    43,    46,    93,    43,    46,    93,    42,    39,
     149,   149,    38,    39,   149,   149,    38,    38,   138,    43,
      43,    46,    39,    43,    46,    93,    42,    42,   150,   149,
      38,    38,    43,   149,    38,    38,    43,    43,    46,    93,
      39,   159,    39,    39,    39,    39,   149,    39,   149,    38,
      38,    43,    38,    43,    43,    46,   149,    38,    38,    43,
      38,    43,    43,    46,    43,    46,    93,    38,    43,    43,
      46,    39,    39,    39,   149,    39,   149,    38,    38,    43,
      38,    43,    43,    46,    38,    43,    43,    46,    43,    46,
      93,    39,    39,   149,    39,    39,   149,   149,    38,    38,
     138,    38,   138,    43,    38,    43,    43,    46,    43,    46,
      93,    43,    46,    93,    42,    39,   149,   149,    38,    39,
     149,   149,    38,    38,   138,    43,    43,    46,    39,    39,
      39,   149,   149,    38,   149,    38,    38,    43,    39,   149,
     149,    38,   149,    38,    38,    43,    38,    43,    43,    46,
     149,    38,    38,    43,    39,    39,   149,   149,    38,   149,
      38,    38,    43,   149,    38,    38,    43,    38,    43,    43,
      46,    39,    39,    39,   149,   149,    38,   149,    38,    38,
     138,   149,    38,    38,    43,    38,    43,    43,    46,    38,
      43,    43,    46,    43,    46,    93,    39,    39,   149,    39,
      39,   149,   149,    38,    38,   138,    38,   138,    43,    39,
      39,   149,    39,   149,   149,    38,    39,    39,   149,    39,
     149,   149,    38,   149,    38,    38,    43,    39,   149,   149,
      38,    39,    39,   149,    39,   149,   149,    38,    39,   149,
     149,    38,   149,    38,    38,    43,    39,    39,   149,    39,
     149,   149,    38,    39,   149,   149,    38,   149,    38,    38,
      43,   149,    38,    38,    43,    38,    43,    43,    46,    39,
      39,    39,   149,   149,    38,   149,    38,    38,   138,    39,
      39,    39,   149,    39,    39,    39,   149,    39,   149,   149,
      38,    39,    39,   149,    39,    39,    39,   149,    39,    39,
     149,    39,   149,   149,    38,    39,    39,    39,   149,    39,
      39,   149,    39,   149,   149,    38,    39,   149,   149,    38,
     149,    38,    38,    43,    39,    39,   149,    39,   149,   149,
      38,    39,    39,    39,    39,   149,    39,    39,    39,    39,
      39,   149,    39,    39,    39,    39,   149,    39,    39,   149,
      39,   149,   149,    38,    39,    39,    39,   149,    39,    39,
      39,    39,    39,    39,   149,    39,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    78,    79,    79,    79,    79,    79,    80,
      81,    81,    82,    83,    83,    83,    83,    83,    84,    85,
      85,    86,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    90,    90,    91,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    98,    99,   100,   101,   102,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   106,   106,   107,   108,   108,   109,
     110,   111,   112,   113,   114,   114,   115,   116,   117,   117,
     117,   117,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   121,   122,   122,   123,   124,   125,   126,   126,
     126,   126,   126,   127,   128,   128,   129,   130,   130,   131,
     132,   133,   133,   134,   135,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   138,
     139,   140,   141,   141,   141,   141,   142,   143,   144,   144,
     144,   144,   144,   145,   146,   146,   147,   148,   149,   150,
     151,   151,   151,   151,   152,   153,   154,   154,   155,   156,
     156,   157,   158,   158,   158,   158,   158,   159,   160,   160,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   163,   164,   164,   164,   164,   164,   164,   165,
     165,   165,   165,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   169,   169,   170,   171,   172,   172,
     172,   172,   172,   172,   173,   174,   174,   175,   176,   177,
     178,   178,   179,   180,   180,   180,   180,   181,   182,   183,
     184,   185,   185,   186,   187,   187,   188,   189,   189,   189,
     189,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     192,   192,   192,   192,   193,   193,   193,   193,   194,   195,
     195,   196,   197,   198,   198,   198,   198,   198,   199,   199,
     200,   200,   200,   201,   201,   202,   203,   203,   204,   205,
     205,   205,   205,   205,   205,   206,   206
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
       1,     1,     1,     1,     4,     3,     3,     2,     2,     3,
       0,     3,     3,     2,     3,     2,     3,     2,     2,     0,
       1,     1,     1,     2,     1,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     4,     3
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,   137,     0,     0,     0,     0,   139,     0,   141,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
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
       0,     0,     1,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   225,     0,   227,     0,
       0,     0,     0,     0,     0,     0,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,     0,    97,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    23,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,   109,    79,   111,    81,   113,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,     0,     0,     9,     0,    11,   221,     0,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   261,     0,     0,     0,
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
     327,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   411,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,   619,     0,     0,     0,     0,     0,
     629,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
     235,     0,   237,     0,     0,     0,     0,     0,     0,     0,
     239,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,    61,     0,     0,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,    85,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,    91,     0,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
     105,     0,   121,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     151,     0,     0,     0,     0,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,   157,     0,     0,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     167,     0,     0,     0,     0,     0,     0,   169,     0,     0,
       0,     0,   165,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   173,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     187,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,   181,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,   197,     0,     0,     0,     0,   193,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,     0,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,   201,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,     0,
       0,     0,   213,     0,     0,     0,     0,   209,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,     0,     0,     0,     0,     0,   247,     0,     0,
       0,     0,   217,     0,     0,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   253,     0,     0,     0,     0,
       0,     0,   255,     0,     0,     0,     0,   251,     0,     0,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     263,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,     0,   259,     0,     0,   267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,     0,   269,     0,     0,
     275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,     0,     0,     0,     0,     0,     0,   281,     0,     0,
       0,     0,   277,     0,     0,   283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   287,     0,     0,     0,     0,
       0,     0,   289,     0,     0,     0,     0,   285,     0,     0,
     291,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,     0,     0,     0,     0,     0,     0,   297,     0,     0,
       0,     0,   293,     0,     0,   299,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   303,     0,     0,     0,     0,
       0,     0,   305,     0,     0,     0,     0,   301,     0,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     311,     0,     0,     0,     0,     0,     0,   313,     0,     0,
       0,     0,   309,     0,     0,   315,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,   317,     0,     0,
     323,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,   325,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   337,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,   335,     0,     0,
     341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,   343,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   353,     0,     0,     0,     0,
       0,     0,   355,     0,     0,     0,     0,   351,     0,     0,
     357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,   363,     0,     0,
       0,     0,   359,     0,     0,   365,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   371,     0,     0,     0,     0,
       0,     0,   373,     0,     0,     0,     0,   367,     0,     0,
     375,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     379,     0,     0,     0,     0,     0,     0,   381,     0,     0,
       0,     0,   377,     0,     0,   383,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   387,     0,     0,     0,     0,
       0,     0,   389,     0,     0,     0,     0,   385,     0,     0,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,   397,     0,     0,
       0,     0,   393,     0,     0,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,     0,     0,     0,     0,
       0,     0,   405,     0,     0,     0,     0,   401,     0,     0,
     407,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     413,     0,     0,     0,     0,     0,     0,   415,     0,     0,
       0,     0,   409,     0,     0,   417,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   421,     0,     0,     0,     0,
       0,     0,   423,     0,     0,     0,     0,   419,     0,     0,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     439,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,   427,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,     0,
       0,     0,   449,     0,     0,     0,     0,   445,     0,     0,
     451,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     455,     0,     0,     0,     0,     0,     0,   457,     0,     0,
       0,     0,   453,     0,     0,   459,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   463,     0,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,   461,     0,     0,
     467,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     471,     0,     0,     0,     0,     0,     0,   473,     0,     0,
       0,     0,   469,     0,     0,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   479,     0,     0,     0,     0,
       0,     0,   481,     0,     0,     0,     0,   477,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     487,     0,     0,     0,     0,     0,     0,   489,     0,     0,
       0,     0,   485,     0,     0,   491,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,     0,     0,     0,
       0,     0,   497,     0,     0,     0,     0,   493,     0,     0,
     499,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     503,     0,     0,     0,     0,     0,     0,   505,     0,     0,
       0,     0,   501,     0,     0,   507,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   511,     0,     0,     0,     0,
       0,     0,   513,     0,     0,     0,     0,   509,     0,     0,
     515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     519,     0,     0,     0,     0,     0,     0,   521,     0,     0,
       0,     0,   517,     0,     0,   523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   527,     0,     0,     0,     0,
       0,     0,   529,     0,     0,     0,     0,   525,     0,     0,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     535,     0,     0,     0,     0,     0,     0,   537,     0,     0,
       0,     0,   533,     0,     0,   539,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   543,     0,     0,     0,     0,
       0,     0,   545,     0,     0,     0,     0,   541,     0,     0,
     547,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     551,     0,     0,     0,     0,     0,     0,   553,     0,     0,
       0,     0,   549,     0,     0,   555,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   559,     0,     0,     0,     0,
       0,     0,   561,     0,     0,     0,     0,   557,     0,     0,
     563,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     587,     0,     0,     0,     0,     0,     0,   589,     0,     0,
       0,     0,   565,     0,     0,   591,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   595,     0,     0,     0,     0,
       0,     0,   597,     0,     0,     0,     0,   593,     0,     0,
     599,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     603,     0,     0,     0,     0,     0,     0,   605,     0,     0,
       0,     0,   601,     0,     0,   607,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   611,     0,     0,     0,     0,
       0,     0,   613,     0,     0,     0,     0,   609,     0,     0,
     615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     621,     0,     0,     0,     0,     0,     0,   623,     0,     0,
       0,     0,   617,     0,     0,   625,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   631,     0,     0,     0,     0,
       0,     0,   633,     0,     0,     0,     0,   627,     0,     0,
     635,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     639,     0,     0,     0,     0,     0,     0,   641,     0,     0,
       0,     0,   637,     0,     0,   643,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   647,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,   645,     0,     0,
     651,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     655,     0,     0,     0,     0,     0,     0,   657,     0,     0,
       0,     0,   653,     0,     0,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   663,     0,     0,     0,     0,
       0,     0,   665,     0,     0,     0,     0,   661,     0,     0,
     667,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     671,     0,     0,     0,     0,     0,     0,   673,     0,     0,
       0,     0,   669,     0,     0,   675,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   679,     0,     0,     0,     0,
       0,     0,   681,     0,     0,     0,     0,   677,     0,     0,
     683,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     687,     0,     0,     0,     0,     0,     0,   689,     0,     0,
       0,     0,   685,     0,     0,   691,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   695,     0,     0,     0,     0,
       0,     0,   697,     0,     0,     0,     0,   693,     0,     0,
     699,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     703,     0,     0,     0,     0,     0,     0,   705,     0,     0,
       0,     0,   701,     0,     0,   707,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   721,     0,     0,     0,     0,
       0,     0,   723,     0,     0,     0,     0,   709,     0,     0,
     725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     729,     0,     0,     0,     0,     0,     0,   731,     0,     0,
       0,     0,   727,     0,     0,   733,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   737,     0,     0,     0,     0,
       0,     0,   739,     0,     0,     0,     0,   735,     0,     0,
     741,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     745,     0,     0,     0,     0,     0,     0,   747,     0,     0,
       0,     0,   743,     0,     0,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   753,     0,     0,     0,     0,
       0,     0,   755,     0,     0,     0,     0,   751,     0,     0,
     757,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     761,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,   759,     0,     0,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,   771,     0,     0,     0,     0,   767,     0,     0,
     773,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     777,     0,     0,     0,     0,     0,     0,   779,     0,     0,
       0,     0,   775,     0,     0,   781,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   785,     0,     0,     0,     0,
       0,     0,   787,     0,     0,     0,     0,   783,     0,     0,
     789,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     793,     0,     0,     0,     0,     0,     0,   795,     0,     0,
       0,     0,   791,     0,     0,   797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   801,     0,     0,     0,     0,
       0,     0,   803,     0,     0,     0,     0,   799,     0,     0,
     805,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     809,     0,     0,     0,     0,     0,     0,   811,     0,     0,
       0,     0,   807,     0,     0,   813,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   817,     0,     0,     0,     0,
       0,     0,   819,     0,     0,     0,     0,   815,     0,     0,
     821,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     825,     0,     0,     0,     0,     0,     0,   827,     0,     0,
       0,     0,   823,     0,     0,   829,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   833,     0,     0,     0,     0,
       0,     0,   835,     0,     0,     0,     0,   831,     0,     0,
     837,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     841,     0,     0,     0,     0,     0,     0,   843,     0,     0,
       0,     0,   839,     0,     0,   845,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   849,     0,     0,     0,     0,
       0,     0,   851,     0,     0,     0,     0,   847,     0,     0,
     853,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     857,     0,     0,     0,     0,     0,     0,   859,     0,     0,
       0,     0,   855,     0,     0,   861,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   865,     0,     0,     0,     0,
       0,     0,   867,     0,     0,     0,     0,   863,     0,     0,
     869,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     873,     0,     0,     0,     0,     0,     0,   875,     0,     0,
       0,     0,   871,     0,     0,   877,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   881,     0,     0,     0,     0,
       0,     0,   883,     0,     0,     0,     0,   879,     0,     0,
     885,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     889,     0,     0,     0,     0,     0,     0,   891,     0,     0,
       0,     0,   887,     0,     0,   893,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   897,     0,     0,     0,     0,
       0,     0,   899,     0,     0,     0,     0,   895,     0,     0,
     901,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,     0,     0,   907,     0,     0,
       0,     0,   903,     0,     0,   909,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   913,     0,     0,     0,     0,
       0,     0,   915,     0,     0,     0,     0,   911,     0,     0,
     917,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     921,     0,     0,     0,     0,     0,     0,   923,     0,     0,
       0,     0,   919,     0,     0,   925,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   929,     0,     0,     0,     0,
       0,     0,   931,     0,     0,     0,     0,   927,     0,     0,
     933,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     937,     0,     0,     0,     0,     0,     0,   939,     0,     0,
       0,     0,   935,     0,     0,   941,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   945,     0,     0,     0,     0,
       0,     0,   947,     0,     0,     0,     0,   943,     0,     0,
     949,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     953,     0,     0,     0,     0,     0,     0,   955,     0,     0,
       0,     0,   951,     0,     0,   957,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   961,     0,     0,     0,     0,
       0,     0,   963,     0,     0,     0,     0,   959,     0,     0,
     965,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     969,     0,     0,     0,     0,     0,     0,   971,     0,     0,
       0,     0,   967,     0,     0,   973,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   977,     0,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,   975,     0,     0,
     981,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     985,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,   983,     0,     0,   989,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   993,     0,     0,     0,     0,
       0,     0,   995,     0,     0,     0,     0,   991,     0,     0,
     997,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1001,     0,     0,     0,     0,     0,     0,  1003,     0,     0,
       0,     0,   999,     0,     0,  1005,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1009,     0,     0,     0,     0,
       0,     0,  1011,     0,     0,     0,     0,  1007,     0,     0,
    1013,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1017,     0,     0,     0,     0,     0,     0,  1019,     0,     0,
       0,     0,  1015,     0,     0,  1021,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1025,     0,     0,     0,     0,
       0,     0,  1027,     0,     0,     0,     0,  1023,     0,     0,
    1029,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1033,     0,     0,     0,     0,     0,     0,  1035,     0,     0,
       0,     0,  1031,     0,     0,  1037,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1041,     0,     0,     0,     0,
       0,     0,  1043,     0,     0,     0,     0,  1039,     0,     0,
    1045,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1049,     0,     0,     0,     0,     0,     0,  1051,     0,     0,
       0,     0,  1047,     0,     0,  1053,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1057,     0,     0,     0,     0,
       0,     0,  1059,     0,     0,     0,     0,  1055,     0,     0,
    1061,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1065,     0,     0,     0,     0,     0,     0,  1067,     0,     0,
       0,     0,  1063,     0,     0,  1069,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1073,     0,     0,     0,     0,
       0,     0,  1075,     0,     0,     0,     0,  1071,     0,     0,
    1077,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1081,     0,     0,     0,     0,     0,     0,  1083,     0,     0,
       0,     0,  1079,     0,     0,  1085,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1089,     0,     0,     0,     0,
       0,     0,  1091,     0,     0,     0,     0,  1087,     0,     0,
    1093,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1097,     0,     0,     0,     0,     0,     0,  1099,     0,     0,
       0,     0,  1095,     0,     0,  1101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1105,     0,     0,     0,     0,
       0,     0,  1107,     0,     0,     0,     0,  1103,     0,     0,
    1109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1113,     0,     0,     0,     0,     0,     0,  1115,     0,     0,
       0,     0,  1111,     0,     0,  1117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1121,     0,     0,     0,     0,
       0,     0,  1123,     0,     0,     0,     0,  1119,     0,     0,
    1125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1129,     0,     0,     0,     0,     0,     0,  1131,     0,     0,
       0,     0,  1127,     0,     0,  1133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1137,     0,     0,     0,     0,
       0,     0,  1139,     0,     0,     0,     0,  1135,     0,     0,
    1141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1145,     0,     0,     0,     0,     0,     0,  1147,     0,     0,
       0,     0,  1143,     0,     0,  1149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1153,     0,     0,     0,     0,
       0,     0,  1155,     0,     0,     0,     0,  1151,     0,     0,
    1157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1161,     0,     0,     0,     0,     0,     0,  1163,     0,     0,
       0,     0,  1159,     0,     0,  1165,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1169,     0,     0,     0,     0,
       0,     0,  1171,     0,     0,     0,     0,  1167,     0,     0,
    1173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1177,     0,     0,     0,     0,     0,     0,  1179,     0,     0,
       0,     0,  1175,     0,     0,  1181,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1185,     0,     0,     0,     0,
       0,     0,  1187,     0,     0,     0,     0,  1183,     0,     0,
    1189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1193,     0,     0,     0,     0,     0,     0,  1195,     0,     0,
       0,     0,  1191,     0,     0,  1197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1201,     0,     0,     0,     0,
       0,     0,  1203,     0,     0,     0,     0,  1199,     0,     0,
    1205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1209,     0,     0,     0,     0,     0,     0,  1211,     0,     0,
       0,     0,  1207,     0,     0,  1213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1217,     0,     0,     0,     0,
       0,     0,  1219,     0,     0,     0,     0,  1215,     0,     0,
    1221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1225,     0,     0,     0,     0,     0,     0,  1227,     0,     0,
       0,     0,  1223,     0,     0,  1229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1233,     0,     0,     0,     0,
       0,     0,  1235,     0,     0,     0,     0,  1231,     0,     0,
    1237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1241,     0,     0,     0,     0,     0,     0,  1243,     0,     0,
       0,     0,  1239,     0,     0,  1245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1249,     0,     0,     0,     0,
       0,     0,  1251,     0,     0,     0,     0,  1247,     0,     0,
    1253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1257,     0,     0,     0,     0,     0,     0,  1259,     0,     0,
       0,     0,  1255,     0,     0,  1261,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1265,     0,     0,     0,     0,
       0,     0,  1267,     0,     0,     0,     0,  1263,     0,     0,
    1269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1273,     0,     0,     0,     0,     0,     0,  1275,     0,     0,
       0,     0,  1271,     0,     0,  1277,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1281,     0,     0,     0,     0,
       0,     0,  1283,     0,     0,     0,     0,  1279,     0,     0,
    1285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1289,     0,     0,     0,     0,     0,     0,  1291,     0,     0,
       0,     0,  1287,     0,     0,  1293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1297,     0,     0,     0,     0,
       0,     0,  1299,     0,     0,     0,     0,  1295,     0,     0,
    1301,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1305,     0,     0,     0,     0,     0,     0,  1307,     0,     0,
       0,     0,  1303,     0,     0,  1309,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1313,     0,     0,     0,     0,
       0,     0,  1315,     0,     0,     0,     0,  1311,     0,     0,
    1317,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1321,     0,     0,     0,     0,     0,     0,  1323,     0,     0,
       0,     0,  1319,     0,     0,  1325,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1329,     0,     0,     0,     0,
       0,     0,  1331,     0,     0,     0,     0,  1327,     0,     0,
    1333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1337,     0,     0,     0,     0,     0,     0,  1339,     0,     0,
       0,     0,  1335,     0,     0,  1341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1345,     0,     0,     0,     0,
       0,     0,  1347,     0,     0,     0,     0,  1343,     0,     0,
    1349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1353,     0,     0,     0,     0,     0,     0,  1355,     0,     0,
       0,     0,  1351,     0,     0,  1357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1361,     0,     0,     0,     0,
       0,     0,  1363,     0,     0,     0,     0,  1359,     0,     0,
    1365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1369,     0,     0,     0,     0,     0,     0,  1371,     0,     0,
       0,     0,  1367,     0,     0,  1373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   429,
       0,     0,     0,     0,   431,     0,   433,     0,     0,     0,
       0,     0,     0,     0,   435,     0,     0,  1375,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   567,     0,     0,     0,     0,
     569,     0,   571,     0,     0,     0,     0,     0,     0,     0,
     573,     0,     0,     0,     0,     0,   437,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   577,     0,     0,     0,     0,   579,     0,   581,     0,
       0,     0,     0,     0,     0,     0,   583,     0,     0,     0,
       0,     0,   575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   711,     0,     0,
       0,     0,   713,     0,   715,     0,     0,     0,     0,     0,
       0,     0,   717,     0,     0,     0,     0,     0,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   719
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   399,     0,   399,     0,   399,     0,   399,     0,   381,
       0,   381,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   365,     0,   365,     0,   365,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,    41,     0,   171,
       0,   171,     0,   171,     0,   171,     0,   365,     0,   365,
       0,   365,     0,    98,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   137,     0,   195,     0,   407,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   174,     0,   365,
       0,   365,     0,   365,     0,   390,     0,   101,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,    41,     0,   399,     0,   266,
       0,   399,     0,   399,     0,   399,     0,   404,     0,    98,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   195,     0,   407,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   184,
       0,   174,     0,   399,     0,   266,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   266,     0,   399,     0,   399,
       0,   399,     0,   390,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   101,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   184,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   245,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   346,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   266,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   266,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   266,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   245,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   346,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   266,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0,   399,     0,   399,
       0,   399,     0,   399,     0,   399,     0
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
  "OPERATORNAME", "OVERRIDE", "VIRTUAL", "PURE", "AS", "IN", "DISPLAY",
  "RETURN", "FOR", "IF", "ELSEIF", "ELSE", "INLINE", "CONSTRUCTOR",
  "FILE_", "PROGRAM_", "IMPORT", "PUBLIC", "PROTECTED", "PRIVATE",
  "INHERIT", "COMPOSITE", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_PARANTHESIS",
  "RIGHT_PARANTHESIS", "COLON", "SEMICOLON", "COMMA", "DOT", "LTEQ",
  "GTEQ", "LT", "GT", "PLUSEQ", "MINUSEQ", "MULTIPLYEQ", "DIVIDEEQ",
  "EQEQ", "EQ", "NOTEQ", "NOT", "PLUSPLUS", "PLUS", "MINUSMINUS", "MINUS",
  "DIVIDE", "MULTIPLY", "VARNAME", "NUMBER", "DECIMAL", "TEXT",
  "ESCAPE_CHARS", "$accept", "program", "root_program", "standard_block",
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
#line 664 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::program({::Celeste::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_root_program) });
		((*yyvalp).Celeste_program) = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 4814 "Celeste_parser.tab.c"
    break;

  case 3: /* root_program: standard_block  */
#line 675 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::root_program({::Celeste::ast::Type::root_program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_root_program) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4825 "Celeste_parser.tab.c"
    break;

  case 4: /* standard_block: deamerreserved_star__stmt__  */
#line 685 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::standard_block({::Celeste::ast::Type::standard_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__stmt__) });
		((*yyvalp).Celeste_standard_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4836 "Celeste_parser.tab.c"
    break;

  case 5: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 695 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_stmt), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__stmt__) });
		((*yyvalp).Celeste_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4847 "Celeste_parser.tab.c"
    break;

  case 6: /* deamerreserved_star__stmt__: %empty  */
#line 701 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4858 "Celeste_parser.tab.c"
    break;

  case 7: /* stmt: template_function_declaration  */
#line 711 "./Celeste_parser.y"
                                       {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4869 "Celeste_parser.tab.c"
    break;

  case 8: /* stmt: template_class_declaration  */
#line 717 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_class_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4880 "Celeste_parser.tab.c"
    break;

  case 9: /* stmt: function_declaration  */
#line 723 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4891 "Celeste_parser.tab.c"
    break;

  case 10: /* stmt: class_declaration  */
#line 729 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4902 "Celeste_parser.tab.c"
    break;

  case 11: /* stmt: enum_declaration  */
#line 735 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_enum_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4913 "Celeste_parser.tab.c"
    break;

  case 12: /* stmt: variable_declaration  */
#line 741 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_variable_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4924 "Celeste_parser.tab.c"
    break;

  case 13: /* stmt: inline_class_declaration  */
#line 747 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inline_class_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4935 "Celeste_parser.tab.c"
    break;

  case 14: /* stmt: namespace_declaration  */
#line 753 "./Celeste_parser.y"
                                 {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_namespace_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4946 "Celeste_parser.tab.c"
    break;

  case 15: /* stmt: symbol_reference SEMICOLON  */
#line 759 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 4958 "Celeste_parser.tab.c"
    break;

  case 16: /* stmt: for_loop  */
#line 766 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_for_loop) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4969 "Celeste_parser.tab.c"
    break;

  case 17: /* stmt: display_call  */
#line 772 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_display_call) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4980 "Celeste_parser.tab.c"
    break;

  case 18: /* stmt: symbol_increase  */
#line 778 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_increase) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 4991 "Celeste_parser.tab.c"
    break;

  case 19: /* stmt: symbol_decrease  */
#line 784 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_decrease) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5002 "Celeste_parser.tab.c"
    break;

  case 20: /* stmt: return_statement  */
#line 790 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_return_statement) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5013 "Celeste_parser.tab.c"
    break;

  case 21: /* stmt: template_code_function_declaration  */
#line 796 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_code_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5024 "Celeste_parser.tab.c"
    break;

  case 22: /* stmt: code_function_declaration  */
#line 802 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5035 "Celeste_parser.tab.c"
    break;

  case 23: /* stmt: template_conditional_function_declaration  */
#line 808 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_conditional_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5046 "Celeste_parser.tab.c"
    break;

  case 24: /* stmt: conditional_function_declaration  */
#line 814 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_function_declaration) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5057 "Celeste_parser.tab.c"
    break;

  case 25: /* stmt: conditional_if  */
#line 820 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_if) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5068 "Celeste_parser.tab.c"
    break;

  case 26: /* stmt: conditional_else_if  */
#line 826 "./Celeste_parser.y"
                               {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_else_if) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5079 "Celeste_parser.tab.c"
    break;

  case 27: /* stmt: conditional_else  */
#line 832 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_conditional_else) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5090 "Celeste_parser.tab.c"
    break;

  case 28: /* stmt: assignment  */
#line 838 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_assignment) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5101 "Celeste_parser.tab.c"
    break;

  case 29: /* stmt: mutation_group  */
#line 844 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_mutation_group) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5112 "Celeste_parser.tab.c"
    break;

  case 30: /* stmt: import_statement  */
#line 850 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_import_statement) });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5123 "Celeste_parser.tab.c"
    break;

  case 31: /* stmt: SEMICOLON  */
#line 856 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 24, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5135 "Celeste_parser.tab.c"
    break;

  case 32: /* import_statement: file_import  */
#line 867 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::import_statement({::Celeste::ast::Type::import_statement, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_file_import) });
		((*yyvalp).Celeste_import_statement) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5146 "Celeste_parser.tab.c"
    break;

  case 33: /* file_import: IMPORT FILE_ TEXT  */
#line 877 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::file_import({::Celeste::ast::Type::file_import, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IMPORT({::Celeste::ast::Type::IMPORT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::FILE_({::Celeste::ast::Type::FILE_, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_file_import) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5157 "Celeste_parser.tab.c"
    break;

  case 34: /* mutation_group: LEFT_PARANTHESIS deamerreserved_arrow__symbol_reference__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 887 "./Celeste_parser.y"
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
#line 5175 "Celeste_parser.tab.c"
    break;

  case 35: /* mutation_group: LEFT_PARANTHESIS deamerreserved_arrow__symbol_reference__ RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 900 "./Celeste_parser.y"
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
#line 5192 "Celeste_parser.tab.c"
    break;

  case 36: /* mutation_group: LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 912 "./Celeste_parser.y"
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
#line 5210 "Celeste_parser.tab.c"
    break;

  case 37: /* mutation_group: LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 925 "./Celeste_parser.y"
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
#line 5227 "Celeste_parser.tab.c"
    break;

  case 38: /* mutation_group: LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  */
#line 937 "./Celeste_parser.y"
                                                                                              {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_mutation_group) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5242 "Celeste_parser.tab.c"
    break;

  case 39: /* deamerreserved_arrow__symbol_reference__: symbol_reference deamerreserved_star__COMMA__symbol_reference__  */
#line 951 "./Celeste_parser.y"
                                                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__symbol_reference__({::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__symbol_reference__) });
		((*yyvalp).Celeste_deamerreserved_arrow__symbol_reference__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5253 "Celeste_parser.tab.c"
    break;

  case 40: /* deamerreserved_star__COMMA__symbol_reference__: COMMA symbol_reference deamerreserved_star__COMMA__symbol_reference__  */
#line 961 "./Celeste_parser.y"
                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__symbol_reference__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__symbol_reference__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 5265 "Celeste_parser.tab.c"
    break;

  case 41: /* deamerreserved_star__COMMA__symbol_reference__: %empty  */
#line 968 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__symbol_reference__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5276 "Celeste_parser.tab.c"
    break;

  case 42: /* assignment: symbol_reference assignment_operator expression  */
#line 978 "./Celeste_parser.y"
                                                         {
		auto* const newNode = new Celeste::ast::node::assignment({::Celeste::ast::Type::assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_symbol_reference), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_assignment_operator), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_assignment) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5287 "Celeste_parser.tab.c"
    break;

  case 43: /* assignment_operator: PLUSEQ  */
#line 988 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PLUSEQ({::Celeste::ast::Type::PLUSEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5298 "Celeste_parser.tab.c"
    break;

  case 44: /* assignment_operator: MINUSEQ  */
#line 994 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::MINUSEQ({::Celeste::ast::Type::MINUSEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5309 "Celeste_parser.tab.c"
    break;

  case 45: /* assignment_operator: MULTIPLYEQ  */
#line 1000 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::MULTIPLYEQ({::Celeste::ast::Type::MULTIPLYEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5320 "Celeste_parser.tab.c"
    break;

  case 46: /* assignment_operator: DIVIDEEQ  */
#line 1006 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DIVIDEEQ({::Celeste::ast::Type::DIVIDEEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5331 "Celeste_parser.tab.c"
    break;

  case 47: /* assignment_operator: EQ  */
#line 1012 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_assignment_operator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5342 "Celeste_parser.tab.c"
    break;

  case 48: /* conditional_if: IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1022 "./Celeste_parser.y"
                                                                                                       {
		auto* const newNode = new Celeste::ast::node::conditional_if({::Celeste::ast::Type::conditional_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_if) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5357 "Celeste_parser.tab.c"
    break;

  case 49: /* conditional_else_if: ELSEIF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1036 "./Celeste_parser.y"
                                                                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_else_if({::Celeste::ast::Type::conditional_else_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSEIF({::Celeste::ast::Type::ELSEIF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_else_if) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5372 "Celeste_parser.tab.c"
    break;

  case 50: /* conditional_else_if: ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1046 "./Celeste_parser.y"
                                                                                                              {
		auto* const newNode = new Celeste::ast::node::conditional_else_if({::Celeste::ast::Type::conditional_else_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_else_if) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5387 "Celeste_parser.tab.c"
    break;

  case 51: /* conditional_else: ELSE LEFT_BRACKET conditional_block RIGHT_BRACKET  */
#line 1060 "./Celeste_parser.y"
                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_else({::Celeste::ast::Type::conditional_else, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_block) });
		((*yyvalp).Celeste_conditional_else) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 5400 "Celeste_parser.tab.c"
    break;

  case 52: /* conditional_block: standard_block  */
#line 1072 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::conditional_block({::Celeste::ast::Type::conditional_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_conditional_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 5411 "Celeste_parser.tab.c"
    break;

  case 53: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1082 "./Celeste_parser.y"
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
#line 5432 "Celeste_parser.tab.c"
    break;

  case 54: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1098 "./Celeste_parser.y"
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
#line 5452 "Celeste_parser.tab.c"
    break;

  case 55: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1113 "./Celeste_parser.y"
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
#line 5473 "Celeste_parser.tab.c"
    break;

  case 56: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1129 "./Celeste_parser.y"
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
#line 5493 "Celeste_parser.tab.c"
    break;

  case 57: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1144 "./Celeste_parser.y"
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
#line 5513 "Celeste_parser.tab.c"
    break;

  case 58: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1159 "./Celeste_parser.y"
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
#line 5532 "Celeste_parser.tab.c"
    break;

  case 59: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1173 "./Celeste_parser.y"
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
#line 5552 "Celeste_parser.tab.c"
    break;

  case 60: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1188 "./Celeste_parser.y"
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
#line 5571 "Celeste_parser.tab.c"
    break;

  case 61: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1202 "./Celeste_parser.y"
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
#line 5592 "Celeste_parser.tab.c"
    break;

  case 62: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1218 "./Celeste_parser.y"
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
#line 5612 "Celeste_parser.tab.c"
    break;

  case 63: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1233 "./Celeste_parser.y"
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
#line 5633 "Celeste_parser.tab.c"
    break;

  case 64: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1249 "./Celeste_parser.y"
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
#line 5653 "Celeste_parser.tab.c"
    break;

  case 65: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1264 "./Celeste_parser.y"
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
#line 5673 "Celeste_parser.tab.c"
    break;

  case 66: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1279 "./Celeste_parser.y"
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
#line 5692 "Celeste_parser.tab.c"
    break;

  case 67: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1293 "./Celeste_parser.y"
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
#line 5712 "Celeste_parser.tab.c"
    break;

  case 68: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1308 "./Celeste_parser.y"
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
#line 5731 "Celeste_parser.tab.c"
    break;

  case 69: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1322 "./Celeste_parser.y"
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
#line 5749 "Celeste_parser.tab.c"
    break;

  case 70: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1335 "./Celeste_parser.y"
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
#line 5766 "Celeste_parser.tab.c"
    break;

  case 71: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1347 "./Celeste_parser.y"
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
#line 5784 "Celeste_parser.tab.c"
    break;

  case 72: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1360 "./Celeste_parser.y"
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
#line 5801 "Celeste_parser.tab.c"
    break;

  case 73: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1372 "./Celeste_parser.y"
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
#line 5822 "Celeste_parser.tab.c"
    break;

  case 74: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1388 "./Celeste_parser.y"
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
#line 5842 "Celeste_parser.tab.c"
    break;

  case 75: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1403 "./Celeste_parser.y"
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
#line 5863 "Celeste_parser.tab.c"
    break;

  case 76: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1419 "./Celeste_parser.y"
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
#line 5883 "Celeste_parser.tab.c"
    break;

  case 77: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1434 "./Celeste_parser.y"
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
#line 5903 "Celeste_parser.tab.c"
    break;

  case 78: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1449 "./Celeste_parser.y"
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
#line 5922 "Celeste_parser.tab.c"
    break;

  case 79: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1463 "./Celeste_parser.y"
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
#line 5942 "Celeste_parser.tab.c"
    break;

  case 80: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1478 "./Celeste_parser.y"
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
#line 5961 "Celeste_parser.tab.c"
    break;

  case 81: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1492 "./Celeste_parser.y"
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
#line 5982 "Celeste_parser.tab.c"
    break;

  case 82: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1508 "./Celeste_parser.y"
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
#line 6002 "Celeste_parser.tab.c"
    break;

  case 83: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1523 "./Celeste_parser.y"
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
#line 6023 "Celeste_parser.tab.c"
    break;

  case 84: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1539 "./Celeste_parser.y"
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
#line 6043 "Celeste_parser.tab.c"
    break;

  case 85: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1554 "./Celeste_parser.y"
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
#line 6063 "Celeste_parser.tab.c"
    break;

  case 86: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1569 "./Celeste_parser.y"
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
#line 6082 "Celeste_parser.tab.c"
    break;

  case 87: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1583 "./Celeste_parser.y"
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
#line 6102 "Celeste_parser.tab.c"
    break;

  case 88: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1598 "./Celeste_parser.y"
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
#line 6121 "Celeste_parser.tab.c"
    break;

  case 89: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1612 "./Celeste_parser.y"
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
#line 6139 "Celeste_parser.tab.c"
    break;

  case 90: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1625 "./Celeste_parser.y"
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
#line 6156 "Celeste_parser.tab.c"
    break;

  case 91: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1637 "./Celeste_parser.y"
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
#line 6174 "Celeste_parser.tab.c"
    break;

  case 92: /* template_conditional_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1650 "./Celeste_parser.y"
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
#line 6191 "Celeste_parser.tab.c"
    break;

  case 93: /* deamerreserved_arrow__template_parameter__: template_parameter deamerreserved_star__COMMA__template_parameter__  */
#line 1666 "./Celeste_parser.y"
                                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__template_parameter__({::Celeste::ast::Type::deamerreserved_arrow__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_parameter), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__template_parameter__) });
		((*yyvalp).Celeste_deamerreserved_arrow__template_parameter__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6202 "Celeste_parser.tab.c"
    break;

  case 94: /* deamerreserved_star__COMMA__template_parameter__: COMMA template_parameter deamerreserved_star__COMMA__template_parameter__  */
#line 1676 "./Celeste_parser.y"
                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_parameter), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__template_parameter__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__template_parameter__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 6214 "Celeste_parser.tab.c"
    break;

  case 95: /* deamerreserved_star__COMMA__template_parameter__: %empty  */
#line 1683 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__template_parameter__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6225 "Celeste_parser.tab.c"
    break;

  case 96: /* deamerreserved_arrow__conditional_function_argument__: conditional_function_argument deamerreserved_star__COMMA__conditional_function_argument__  */
#line 1693 "./Celeste_parser.y"
                                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__conditional_function_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__conditional_function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6236 "Celeste_parser.tab.c"
    break;

  case 97: /* deamerreserved_star__COMMA__conditional_function_argument__: COMMA conditional_function_argument deamerreserved_star__COMMA__conditional_function_argument__  */
#line 1703 "./Celeste_parser.y"
                                                                                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_conditional_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__conditional_function_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__conditional_function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 6248 "Celeste_parser.tab.c"
    break;

  case 98: /* deamerreserved_star__COMMA__conditional_function_argument__: %empty  */
#line 1710 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__conditional_function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6259 "Celeste_parser.tab.c"
    break;

  case 99: /* deamerreserved_arrow__function_argument__: function_argument deamerreserved_star__COMMA__function_argument__  */
#line 1720 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__function_argument__({::Celeste::ast::Type::deamerreserved_arrow__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__function_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6270 "Celeste_parser.tab.c"
    break;

  case 100: /* deamerreserved_star__COMMA__function_argument__: COMMA function_argument deamerreserved_star__COMMA__function_argument__  */
#line 1730 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__function_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 6282 "Celeste_parser.tab.c"
    break;

  case 101: /* deamerreserved_star__COMMA__function_argument__: %empty  */
#line 1737 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__function_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6293 "Celeste_parser.tab.c"
    break;

  case 102: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1747 "./Celeste_parser.y"
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
#line 6312 "Celeste_parser.tab.c"
    break;

  case 103: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1761 "./Celeste_parser.y"
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
#line 6330 "Celeste_parser.tab.c"
    break;

  case 104: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1774 "./Celeste_parser.y"
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
#line 6349 "Celeste_parser.tab.c"
    break;

  case 105: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1788 "./Celeste_parser.y"
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
#line 6367 "Celeste_parser.tab.c"
    break;

  case 106: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1801 "./Celeste_parser.y"
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
#line 6385 "Celeste_parser.tab.c"
    break;

  case 107: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1814 "./Celeste_parser.y"
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
#line 6402 "Celeste_parser.tab.c"
    break;

  case 108: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1826 "./Celeste_parser.y"
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
#line 6420 "Celeste_parser.tab.c"
    break;

  case 109: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1839 "./Celeste_parser.y"
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
#line 6437 "Celeste_parser.tab.c"
    break;

  case 110: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1851 "./Celeste_parser.y"
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
#line 6456 "Celeste_parser.tab.c"
    break;

  case 111: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1865 "./Celeste_parser.y"
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
#line 6474 "Celeste_parser.tab.c"
    break;

  case 112: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1878 "./Celeste_parser.y"
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
#line 6493 "Celeste_parser.tab.c"
    break;

  case 113: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1892 "./Celeste_parser.y"
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
#line 6511 "Celeste_parser.tab.c"
    break;

  case 114: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1905 "./Celeste_parser.y"
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
#line 6529 "Celeste_parser.tab.c"
    break;

  case 115: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1918 "./Celeste_parser.y"
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
#line 6546 "Celeste_parser.tab.c"
    break;

  case 116: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1930 "./Celeste_parser.y"
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
#line 6564 "Celeste_parser.tab.c"
    break;

  case 117: /* conditional_function_declaration: CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1943 "./Celeste_parser.y"
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
#line 6581 "Celeste_parser.tab.c"
    break;

  case 118: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1955 "./Celeste_parser.y"
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
#line 6597 "Celeste_parser.tab.c"
    break;

  case 119: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1966 "./Celeste_parser.y"
                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6612 "Celeste_parser.tab.c"
    break;

  case 120: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1976 "./Celeste_parser.y"
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
#line 6628 "Celeste_parser.tab.c"
    break;

  case 121: /* conditional_function_declaration: CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 1987 "./Celeste_parser.y"
                                                                                                                 {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_conditional_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6643 "Celeste_parser.tab.c"
    break;

  case 122: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2001 "./Celeste_parser.y"
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
#line 6661 "Celeste_parser.tab.c"
    break;

  case 123: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2014 "./Celeste_parser.y"
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
#line 6678 "Celeste_parser.tab.c"
    break;

  case 124: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2026 "./Celeste_parser.y"
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
#line 6696 "Celeste_parser.tab.c"
    break;

  case 125: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2039 "./Celeste_parser.y"
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
#line 6713 "Celeste_parser.tab.c"
    break;

  case 126: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2051 "./Celeste_parser.y"
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
#line 6731 "Celeste_parser.tab.c"
    break;

  case 127: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2064 "./Celeste_parser.y"
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
#line 6748 "Celeste_parser.tab.c"
    break;

  case 128: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2076 "./Celeste_parser.y"
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
#line 6766 "Celeste_parser.tab.c"
    break;

  case 129: /* template_code_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2089 "./Celeste_parser.y"
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
#line 6783 "Celeste_parser.tab.c"
    break;

  case 130: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2105 "./Celeste_parser.y"
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
#line 6799 "Celeste_parser.tab.c"
    break;

  case 131: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2116 "./Celeste_parser.y"
                                                                                                                                                    {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6814 "Celeste_parser.tab.c"
    break;

  case 132: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2126 "./Celeste_parser.y"
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
#line 6830 "Celeste_parser.tab.c"
    break;

  case 133: /* code_function_declaration: CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2137 "./Celeste_parser.y"
                                                                                                          {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_code_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 6845 "Celeste_parser.tab.c"
    break;

  case 134: /* return_statement: RETURN expression  */
#line 2151 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::return_statement({::Celeste::ast::Type::return_statement, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RETURN({::Celeste::ast::Type::RETURN, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_return_statement) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6856 "Celeste_parser.tab.c"
    break;

  case 135: /* symbol_increase: symbol_reference PLUSPLUS  */
#line 2161 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::symbol_increase({::Celeste::ast::Type::symbol_increase, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), new Celeste::ast::node::PLUSPLUS({::Celeste::ast::Type::PLUSPLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_increase) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6867 "Celeste_parser.tab.c"
    break;

  case 136: /* symbol_decrease: symbol_reference MINUSMINUS  */
#line 2171 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::symbol_decrease({::Celeste::ast::Type::symbol_decrease, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_reference), new Celeste::ast::node::MINUSMINUS({::Celeste::ast::Type::MINUSMINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_decrease) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6878 "Celeste_parser.tab.c"
    break;

  case 137: /* expression: expression_no_value  */
#line 2181 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression_no_value) });
		((*yyvalp).Celeste_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6889 "Celeste_parser.tab.c"
    break;

  case 138: /* expression_no_value: expression_no_value PLUS t_expression  */
#line 2191 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_expression_no_value), new Celeste::ast::node::PLUS({::Celeste::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_t_expression) });
		((*yyvalp).Celeste_expression_no_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6900 "Celeste_parser.tab.c"
    break;

  case 139: /* expression_no_value: expression_no_value MINUS t_expression  */
#line 2197 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_expression_no_value), new Celeste::ast::node::MINUS({::Celeste::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_t_expression) });
		((*yyvalp).Celeste_expression_no_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6911 "Celeste_parser.tab.c"
    break;

  case 140: /* expression_no_value: t_expression  */
#line 2203 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_t_expression) });
		((*yyvalp).Celeste_expression_no_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6922 "Celeste_parser.tab.c"
    break;

  case 141: /* t_expression: t_expression MULTIPLY f_expression  */
#line 2213 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::MULTIPLY({::Celeste::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6933 "Celeste_parser.tab.c"
    break;

  case 142: /* t_expression: t_expression DIVIDE f_expression  */
#line 2219 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::DIVIDE({::Celeste::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6944 "Celeste_parser.tab.c"
    break;

  case 143: /* t_expression: t_expression LTEQ f_expression  */
#line 2225 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::LTEQ({::Celeste::ast::Type::LTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6955 "Celeste_parser.tab.c"
    break;

  case 144: /* t_expression: t_expression GTEQ f_expression  */
#line 2231 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::GTEQ({::Celeste::ast::Type::GTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6966 "Celeste_parser.tab.c"
    break;

  case 145: /* t_expression: t_expression LT f_expression  */
#line 2237 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::LT({::Celeste::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6977 "Celeste_parser.tab.c"
    break;

  case 146: /* t_expression: t_expression GT f_expression  */
#line 2243 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::GT({::Celeste::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6988 "Celeste_parser.tab.c"
    break;

  case 147: /* t_expression: t_expression EQEQ f_expression  */
#line 2249 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::EQEQ({::Celeste::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 6999 "Celeste_parser.tab.c"
    break;

  case 148: /* t_expression: t_expression NOTEQ f_expression  */
#line 2255 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_t_expression), new Celeste::ast::node::NOTEQ({::Celeste::ast::Type::NOTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7010 "Celeste_parser.tab.c"
    break;

  case 149: /* t_expression: NOT f_expression  */
#line 2261 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NOT({::Celeste::ast::Type::NOT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7021 "Celeste_parser.tab.c"
    break;

  case 150: /* t_expression: f_expression  */
#line 2267 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_f_expression) });
		((*yyvalp).Celeste_t_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7032 "Celeste_parser.tab.c"
    break;

  case 151: /* f_expression: LEFT_PARANTHESIS expression_no_value RIGHT_PARANTHESIS  */
#line 2277 "./Celeste_parser.y"
                                                                {
		auto* const newNode = new Celeste::ast::node::f_expression({::Celeste::ast::Type::f_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression_no_value) });
		((*yyvalp).Celeste_f_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7045 "Celeste_parser.tab.c"
    break;

  case 152: /* f_expression: value  */
#line 2285 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::f_expression({::Celeste::ast::Type::f_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_value) });
		((*yyvalp).Celeste_f_expression) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7056 "Celeste_parser.tab.c"
    break;

  case 153: /* display_call: DISPLAY symbol_reference  */
#line 2295 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::display_call({::Celeste::ast::Type::display_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DISPLAY({::Celeste::ast::Type::DISPLAY, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_display_call) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7067 "Celeste_parser.tab.c"
    break;

  case 154: /* for_loop: for_each_loop  */
#line 2305 "./Celeste_parser.y"
                       {
		auto* const newNode = new Celeste::ast::node::for_loop({::Celeste::ast::Type::for_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_for_each_loop) });
		((*yyvalp).Celeste_for_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7078 "Celeste_parser.tab.c"
    break;

  case 155: /* for_loop: for_iteration_loop  */
#line 2311 "./Celeste_parser.y"
                              {
		auto* const newNode = new Celeste::ast::node::for_loop({::Celeste::ast::Type::for_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_for_iteration_loop) });
		((*yyvalp).Celeste_for_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7089 "Celeste_parser.tab.c"
    break;

  case 156: /* for_iteration_loop: FOR expression LEFT_BRACKET for_block RIGHT_BRACKET  */
#line 2321 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::for_iteration_loop({::Celeste::ast::Type::for_iteration_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_for_block) });
		((*yyvalp).Celeste_for_iteration_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7102 "Celeste_parser.tab.c"
    break;

  case 157: /* for_each_loop: FOR LEFT_PARANTHESIS type for_variable IN iterator RIGHT_PARANTHESIS LEFT_BRACKET for_block RIGHT_BRACKET  */
#line 2333 "./Celeste_parser.y"
                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::for_each_loop({::Celeste::ast::Type::for_each_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_for_variable), new Celeste::ast::node::IN({::Celeste::ast::Type::IN, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_iterator), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_for_block) });
		((*yyvalp).Celeste_for_each_loop) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7117 "Celeste_parser.tab.c"
    break;

  case 158: /* for_each_loop: FOR LEFT_PARANTHESIS type for_variable COLON iterator RIGHT_PARANTHESIS LEFT_BRACKET for_block RIGHT_BRACKET  */
#line 2343 "./Celeste_parser.y"
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
#line 7133 "Celeste_parser.tab.c"
    break;

  case 159: /* for_variable: VARNAME  */
#line 2358 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::for_variable({::Celeste::ast::Type::for_variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_for_variable) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7144 "Celeste_parser.tab.c"
    break;

  case 160: /* iterator: full_value  */
#line 2368 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::iterator({::Celeste::ast::Type::iterator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_iterator) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7155 "Celeste_parser.tab.c"
    break;

  case 161: /* for_block: standard_block  */
#line 2378 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::for_block({::Celeste::ast::Type::for_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_for_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7166 "Celeste_parser.tab.c"
    break;

  case 162: /* namespace_declaration: NAMESPACE deamerreserved_arrow__namespace_name__ LEFT_BRACKET namespace_block RIGHT_BRACKET  */
#line 2388 "./Celeste_parser.y"
                                                                                                     {
		auto* const newNode = new Celeste::ast::node::namespace_declaration({::Celeste::ast::Type::namespace_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NAMESPACE({::Celeste::ast::Type::NAMESPACE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__namespace_name__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_namespace_block) });
		((*yyvalp).Celeste_namespace_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7179 "Celeste_parser.tab.c"
    break;

  case 163: /* deamerreserved_arrow__namespace_name__: namespace_name deamerreserved_star__DOT__namespace_name__  */
#line 2400 "./Celeste_parser.y"
                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__namespace_name__({::Celeste::ast::Type::deamerreserved_arrow__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_namespace_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__namespace_name__) });
		((*yyvalp).Celeste_deamerreserved_arrow__namespace_name__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7190 "Celeste_parser.tab.c"
    break;

  case 164: /* deamerreserved_star__DOT__namespace_name__: DOT namespace_name deamerreserved_star__DOT__namespace_name__  */
#line 2410 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_namespace_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__namespace_name__) });
		((*yyvalp).Celeste_deamerreserved_star__DOT__namespace_name__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7202 "Celeste_parser.tab.c"
    break;

  case 165: /* deamerreserved_star__DOT__namespace_name__: %empty  */
#line 2417 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__DOT__namespace_name__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7213 "Celeste_parser.tab.c"
    break;

  case 166: /* namespace_block: standard_block  */
#line 2427 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::namespace_block({::Celeste::ast::Type::namespace_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_namespace_block) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7224 "Celeste_parser.tab.c"
    break;

  case 167: /* namespace_name: VARNAME  */
#line 2437 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::namespace_name({::Celeste::ast::Type::namespace_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_namespace_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7235 "Celeste_parser.tab.c"
    break;

  case 168: /* inline_class_declaration: created_class_name COLON deamerreserved_arrow__inline_class_declaration_composite__ COMMA  */
#line 2447 "./Celeste_parser.y"
                                                                                                   {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_created_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7248 "Celeste_parser.tab.c"
    break;

  case 169: /* inline_class_declaration: created_class_name COLON deamerreserved_arrow__inline_class_declaration_composite__  */
#line 2455 "./Celeste_parser.y"
                                                                                               {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_created_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
	}
#line 7260 "Celeste_parser.tab.c"
    break;

  case 170: /* inline_class_declaration: created_class_name COLON COMMA  */
#line 2462 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_created_class_name) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7273 "Celeste_parser.tab.c"
    break;

  case 171: /* inline_class_declaration: created_class_name COLON  */
#line 2470 "./Celeste_parser.y"
                                    {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_created_class_name) });
		((*yyvalp).Celeste_inline_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7285 "Celeste_parser.tab.c"
    break;

  case 172: /* deamerreserved_arrow__inline_class_declaration_composite__: inline_class_declaration_composite deamerreserved_star__COMMA__inline_class_declaration_composite__  */
#line 2481 "./Celeste_parser.y"
                                                                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_deamerreserved_arrow__inline_class_declaration_composite__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7296 "Celeste_parser.tab.c"
    break;

  case 173: /* deamerreserved_star__COMMA__inline_class_declaration_composite__: COMMA inline_class_declaration_composite deamerreserved_star__COMMA__inline_class_declaration_composite__  */
#line 2491 "./Celeste_parser.y"
                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7308 "Celeste_parser.tab.c"
    break;

  case 174: /* deamerreserved_star__COMMA__inline_class_declaration_composite__: %empty  */
#line 2498 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7319 "Celeste_parser.tab.c"
    break;

  case 175: /* inline_class_declaration_composite: inline_class_declaration_composite_name  */
#line 2508 "./Celeste_parser.y"
                                                 {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7330 "Celeste_parser.tab.c"
    break;

  case 176: /* inline_class_declaration_composite: inline_class_declaration_composite_name AS LEFT_SQUARE_BRACKET inline_class_declaration_composite_alias RIGHT_SQUARE_BRACKET  */
#line 2514 "./Celeste_parser.y"
                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7343 "Celeste_parser.tab.c"
    break;

  case 177: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET inline_class_declaration_composite_alias COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2522 "./Celeste_parser.y"
                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_name) });
		((*yyvalp).Celeste_inline_class_declaration_composite) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7357 "Celeste_parser.tab.c"
    break;

  case 178: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET deamerreserved_arrow__inline_class_declaration_composite_alias__ COMMA RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2531 "./Celeste_parser.y"
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
#line 7374 "Celeste_parser.tab.c"
    break;

  case 179: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET deamerreserved_arrow__inline_class_declaration_composite_alias__ RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2543 "./Celeste_parser.y"
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
#line 7390 "Celeste_parser.tab.c"
    break;

  case 180: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2554 "./Celeste_parser.y"
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
#line 7407 "Celeste_parser.tab.c"
    break;

  case 181: /* inline_class_declaration_composite: LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  */
#line 2566 "./Celeste_parser.y"
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
#line 7423 "Celeste_parser.tab.c"
    break;

  case 182: /* deamerreserved_arrow__inline_class_declaration_composite_alias__: inline_class_declaration_composite_alias deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  */
#line 2581 "./Celeste_parser.y"
                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) });
		((*yyvalp).Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7434 "Celeste_parser.tab.c"
    break;

  case 183: /* deamerreserved_star__COMMA__inline_class_declaration_composite_alias__: COMMA inline_class_declaration_composite_alias deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  */
#line 2591 "./Celeste_parser.y"
                                                                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_inline_class_declaration_composite_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7446 "Celeste_parser.tab.c"
    break;

  case 184: /* deamerreserved_star__COMMA__inline_class_declaration_composite_alias__: %empty  */
#line 2598 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7457 "Celeste_parser.tab.c"
    break;

  case 185: /* inline_class_declaration_composite_alias: VARNAME  */
#line 2608 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite_alias({::Celeste::ast::Type::inline_class_declaration_composite_alias, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_inline_class_declaration_composite_alias) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7468 "Celeste_parser.tab.c"
    break;

  case 186: /* inline_class_declaration_composite_name: symbol_reference  */
#line 2618 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite_name({::Celeste::ast::Type::inline_class_declaration_composite_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_inline_class_declaration_composite_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7479 "Celeste_parser.tab.c"
    break;

  case 187: /* created_class_name: VARNAME  */
#line 2628 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::created_class_name({::Celeste::ast::Type::created_class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_created_class_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7490 "Celeste_parser.tab.c"
    break;

  case 188: /* code_block: LEFT_PARANTHESIS deamerreserved_arrow__code_block_input_argument__ COMMA RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2638 "./Celeste_parser.y"
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
#line 7506 "Celeste_parser.tab.c"
    break;

  case 189: /* code_block: LEFT_PARANTHESIS deamerreserved_arrow__code_block_input_argument__ RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2649 "./Celeste_parser.y"
                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__code_block_input_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7521 "Celeste_parser.tab.c"
    break;

  case 190: /* code_block: LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2659 "./Celeste_parser.y"
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
#line 7537 "Celeste_parser.tab.c"
    break;

  case 191: /* code_block: LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2670 "./Celeste_parser.y"
                                                                                                          {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7552 "Celeste_parser.tab.c"
    break;

  case 192: /* code_block: LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  */
#line 2680 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_program) });
		((*yyvalp).Celeste_code_block) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7565 "Celeste_parser.tab.c"
    break;

  case 193: /* deamerreserved_arrow__code_block_input_argument__: code_block_input_argument deamerreserved_star__COMMA__code_block_input_argument__  */
#line 2692 "./Celeste_parser.y"
                                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_input_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__code_block_input_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__code_block_input_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7576 "Celeste_parser.tab.c"
    break;

  case 194: /* deamerreserved_star__COMMA__code_block_input_argument__: COMMA code_block_input_argument deamerreserved_star__COMMA__code_block_input_argument__  */
#line 2702 "./Celeste_parser.y"
                                                                                                 {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_code_block_input_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__code_block_input_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__code_block_input_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 7588 "Celeste_parser.tab.c"
    break;

  case 195: /* deamerreserved_star__COMMA__code_block_input_argument__: %empty  */
#line 2709 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__code_block_input_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7599 "Celeste_parser.tab.c"
    break;

  case 196: /* code_block_input_argument: code_block_argument  */
#line 2719 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::code_block_input_argument({::Celeste::ast::Type::code_block_input_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_block_argument) });
		((*yyvalp).Celeste_code_block_input_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7610 "Celeste_parser.tab.c"
    break;

  case 197: /* code_block_argument: type code_block_argument_name  */
#line 2729 "./Celeste_parser.y"
                                       {
		auto* const newNode = new Celeste::ast::node::code_block_argument({::Celeste::ast::Type::code_block_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_block_argument_name) });
		((*yyvalp).Celeste_code_block_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7621 "Celeste_parser.tab.c"
    break;

  case 198: /* code_block_argument: type  */
#line 2735 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::code_block_argument({::Celeste::ast::Type::code_block_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_type) });
		((*yyvalp).Celeste_code_block_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7632 "Celeste_parser.tab.c"
    break;

  case 199: /* code_block_argument_name: VARNAME  */
#line 2745 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::code_block_argument_name({::Celeste::ast::Type::code_block_argument_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_code_block_argument_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7643 "Celeste_parser.tab.c"
    break;

  case 200: /* code_block_program: standard_block  */
#line 2755 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::code_block_program({::Celeste::ast::Type::code_block_program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_code_block_program) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7654 "Celeste_parser.tab.c"
    break;

  case 201: /* variable_declaration: type variable_name EQ value_list  */
#line 2765 "./Celeste_parser.y"
                                          {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_variable_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_variable_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7665 "Celeste_parser.tab.c"
    break;

  case 202: /* variable_declaration: type variable_name  */
#line 2771 "./Celeste_parser.y"
                              {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_variable_name) });
		((*yyvalp).Celeste_variable_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7676 "Celeste_parser.tab.c"
    break;

  case 203: /* array_declaration: LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 2781 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::array_declaration({::Celeste::ast::Type::array_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_array_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 7689 "Celeste_parser.tab.c"
    break;

  case 204: /* variable_name: symbol_reference  */
#line 2793 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::variable_name({::Celeste::ast::Type::variable_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_variable_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 7700 "Celeste_parser.tab.c"
    break;

  case 205: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2803 "./Celeste_parser.y"
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
#line 7718 "Celeste_parser.tab.c"
    break;

  case 206: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2816 "./Celeste_parser.y"
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
#line 7736 "Celeste_parser.tab.c"
    break;

  case 207: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2829 "./Celeste_parser.y"
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
#line 7753 "Celeste_parser.tab.c"
    break;

  case 208: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2841 "./Celeste_parser.y"
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
#line 7770 "Celeste_parser.tab.c"
    break;

  case 209: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2853 "./Celeste_parser.y"
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
#line 7788 "Celeste_parser.tab.c"
    break;

  case 210: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2866 "./Celeste_parser.y"
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
#line 7806 "Celeste_parser.tab.c"
    break;

  case 211: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2879 "./Celeste_parser.y"
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
#line 7823 "Celeste_parser.tab.c"
    break;

  case 212: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2891 "./Celeste_parser.y"
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
#line 7840 "Celeste_parser.tab.c"
    break;

  case 213: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2903 "./Celeste_parser.y"
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
#line 7858 "Celeste_parser.tab.c"
    break;

  case 214: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2916 "./Celeste_parser.y"
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
#line 7876 "Celeste_parser.tab.c"
    break;

  case 215: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2929 "./Celeste_parser.y"
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
#line 7893 "Celeste_parser.tab.c"
    break;

  case 216: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2941 "./Celeste_parser.y"
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
#line 7910 "Celeste_parser.tab.c"
    break;

  case 217: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2953 "./Celeste_parser.y"
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
#line 7928 "Celeste_parser.tab.c"
    break;

  case 218: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2966 "./Celeste_parser.y"
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
#line 7946 "Celeste_parser.tab.c"
    break;

  case 219: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2979 "./Celeste_parser.y"
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
#line 7963 "Celeste_parser.tab.c"
    break;

  case 220: /* template_function_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 2991 "./Celeste_parser.y"
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
#line 7980 "Celeste_parser.tab.c"
    break;

  case 221: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3007 "./Celeste_parser.y"
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
#line 7996 "Celeste_parser.tab.c"
    break;

  case 222: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3018 "./Celeste_parser.y"
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
#line 8012 "Celeste_parser.tab.c"
    break;

  case 223: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3029 "./Celeste_parser.y"
                                                                                                                                                                                                                       {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8027 "Celeste_parser.tab.c"
    break;

  case 224: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3039 "./Celeste_parser.y"
                                                                                                                                                                                                  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8042 "Celeste_parser.tab.c"
    break;

  case 225: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3049 "./Celeste_parser.y"
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
#line 8058 "Celeste_parser.tab.c"
    break;

  case 226: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3060 "./Celeste_parser.y"
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
#line 8074 "Celeste_parser.tab.c"
    break;

  case 227: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3071 "./Celeste_parser.y"
                                                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_trailing_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8089 "Celeste_parser.tab.c"
    break;

  case 228: /* function_declaration: execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3081 "./Celeste_parser.y"
                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_return_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_function_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_function_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8104 "Celeste_parser.tab.c"
    break;

  case 229: /* trailing_return_type: return_type  */
#line 3095 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::trailing_return_type({::Celeste::ast::Type::trailing_return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_return_type) });
		((*yyvalp).Celeste_trailing_return_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8115 "Celeste_parser.tab.c"
    break;

  case 230: /* return_type: type  */
#line 3105 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::return_type({::Celeste::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_type) });
		((*yyvalp).Celeste_return_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8126 "Celeste_parser.tab.c"
    break;

  case 231: /* conditional_function_argument: function_argument  */
#line 3115 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::conditional_function_argument({::Celeste::ast::Type::conditional_function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_argument) });
		((*yyvalp).Celeste_conditional_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8137 "Celeste_parser.tab.c"
    break;

  case 232: /* function_argument: function_argument_type function_argument_name condition_modifier_function_call EQ full_value  */
#line 3125 "./Celeste_parser.y"
                                                                                                      {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_function_argument_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_condition_modifier_function_call), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8148 "Celeste_parser.tab.c"
    break;

  case 233: /* function_argument: function_argument_type function_argument_name condition_modifier_function_call  */
#line 3131 "./Celeste_parser.y"
                                                                                          {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_condition_modifier_function_call) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8159 "Celeste_parser.tab.c"
    break;

  case 234: /* function_argument: function_argument_type function_argument_name EQ full_value  */
#line 3137 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_function_argument_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8170 "Celeste_parser.tab.c"
    break;

  case 235: /* function_argument: function_argument_type function_argument_name  */
#line 3143 "./Celeste_parser.y"
                                                         {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_argument_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_argument_name) });
		((*yyvalp).Celeste_function_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8181 "Celeste_parser.tab.c"
    break;

  case 236: /* function_argument_type: type  */
#line 3153 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::function_argument_type({::Celeste::ast::Type::function_argument_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_type) });
		((*yyvalp).Celeste_function_argument_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8192 "Celeste_parser.tab.c"
    break;

  case 237: /* function_argument_name: symbol_reference  */
#line 3163 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::function_argument_name({::Celeste::ast::Type::function_argument_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_function_argument_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8203 "Celeste_parser.tab.c"
    break;

  case 238: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET deamerreserved_arrow__condition_modifier_argument__ COMMA RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3173 "./Celeste_parser.y"
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
#line 8219 "Celeste_parser.tab.c"
    break;

  case 239: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET deamerreserved_arrow__condition_modifier_argument__ RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3184 "./Celeste_parser.y"
                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_condition_modifier_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__condition_modifier_argument__) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8234 "Celeste_parser.tab.c"
    break;

  case 240: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3194 "./Celeste_parser.y"
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
#line 8250 "Celeste_parser.tab.c"
    break;

  case 241: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  */
#line 3205 "./Celeste_parser.y"
                                                                                                               {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_condition_modifier_name) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8265 "Celeste_parser.tab.c"
    break;

  case 242: /* condition_modifier_function_call: LEFT_PARANTHESIS condition_modifier_name RIGHT_PARANTHESIS  */
#line 3215 "./Celeste_parser.y"
                                                                      {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_condition_modifier_name) });
		((*yyvalp).Celeste_condition_modifier_function_call) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8278 "Celeste_parser.tab.c"
    break;

  case 243: /* deamerreserved_arrow__condition_modifier_argument__: condition_modifier_argument deamerreserved_star__COMMA__condition_modifier_argument__  */
#line 3227 "./Celeste_parser.y"
                                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_condition_modifier_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) });
		((*yyvalp).Celeste_deamerreserved_arrow__condition_modifier_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8289 "Celeste_parser.tab.c"
    break;

  case 244: /* deamerreserved_star__COMMA__condition_modifier_argument__: COMMA condition_modifier_argument deamerreserved_star__COMMA__condition_modifier_argument__  */
#line 3237 "./Celeste_parser.y"
                                                                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_condition_modifier_argument), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 8301 "Celeste_parser.tab.c"
    break;

  case 245: /* deamerreserved_star__COMMA__condition_modifier_argument__: %empty  */
#line 3244 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__condition_modifier_argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8312 "Celeste_parser.tab.c"
    break;

  case 246: /* condition_modifier_name: symbol_reference  */
#line 3254 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::condition_modifier_name({::Celeste::ast::Type::condition_modifier_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_condition_modifier_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8323 "Celeste_parser.tab.c"
    break;

  case 247: /* condition_modifier_argument: full_value  */
#line 3264 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::condition_modifier_argument({::Celeste::ast::Type::condition_modifier_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_condition_modifier_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8334 "Celeste_parser.tab.c"
    break;

  case 248: /* function_body: standard_block  */
#line 3274 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::function_body({::Celeste::ast::Type::function_body, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_standard_block) });
		((*yyvalp).Celeste_function_body) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8345 "Celeste_parser.tab.c"
    break;

  case 249: /* function_name: symbol_reference  */
#line 3284 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::function_name({::Celeste::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_function_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8356 "Celeste_parser.tab.c"
    break;

  case 250: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name class_inherit_base LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3294 "./Celeste_parser.y"
                                                                                                                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8371 "Celeste_parser.tab.c"
    break;

  case 251: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3304 "./Celeste_parser.y"
                                                                                                                                                                                                                           {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__template_parameter__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8386 "Celeste_parser.tab.c"
    break;

  case 252: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name class_inherit_base LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3314 "./Celeste_parser.y"
                                                                                                                                                                                                   {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8401 "Celeste_parser.tab.c"
    break;

  case 253: /* template_class_declaration: execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3324 "./Celeste_parser.y"
                                                                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_template_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8416 "Celeste_parser.tab.c"
    break;

  case 254: /* template_parameter: type template_parameter_name  */
#line 3338 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::template_parameter({::Celeste::ast::Type::template_parameter, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_parameter_name) });
		((*yyvalp).Celeste_template_parameter) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8427 "Celeste_parser.tab.c"
    break;

  case 255: /* template_parameter_name: VARNAME  */
#line 3348 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::template_parameter_name({::Celeste::ast::Type::template_parameter_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_template_parameter_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8438 "Celeste_parser.tab.c"
    break;

  case 256: /* class_declaration: execution_keyword_permutation CLASS class_name deamerreserved_arrow__class_inherit_base__ LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3358 "./Celeste_parser.y"
                                                                                                                                         {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__class_inherit_base__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8451 "Celeste_parser.tab.c"
    break;

  case 257: /* class_declaration: execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  */
#line 3366 "./Celeste_parser.y"
                                                                                                {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_execution_keyword_permutation), new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_body) });
		((*yyvalp).Celeste_class_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8464 "Celeste_parser.tab.c"
    break;

  case 258: /* deamerreserved_arrow__class_inherit_base__: class_inherit_base deamerreserved_star__COMMA__class_inherit_base__  */
#line 3378 "./Celeste_parser.y"
                                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__class_inherit_base__({::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__class_inherit_base__) });
		((*yyvalp).Celeste_deamerreserved_arrow__class_inherit_base__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8475 "Celeste_parser.tab.c"
    break;

  case 259: /* deamerreserved_star__COMMA__class_inherit_base__: COMMA class_inherit_base deamerreserved_star__COMMA__class_inherit_base__  */
#line 3388 "./Celeste_parser.y"
                                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_inherit_base), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__class_inherit_base__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__class_inherit_base__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 8487 "Celeste_parser.tab.c"
    break;

  case 260: /* deamerreserved_star__COMMA__class_inherit_base__: %empty  */
#line 3395 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__class_inherit_base__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8498 "Celeste_parser.tab.c"
    break;

  case 261: /* class_name: symbol_reference  */
#line 3405 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::class_name({::Celeste::ast::Type::class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_class_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8509 "Celeste_parser.tab.c"
    break;

  case 262: /* execution_keyword_permutation: CODE  */
#line 3415 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8520 "Celeste_parser.tab.c"
    break;

  case 263: /* execution_keyword_permutation: RUNTIME  */
#line 3421 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8531 "Celeste_parser.tab.c"
    break;

  case 264: /* execution_keyword_permutation: CODE RUNTIME  */
#line 3427 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8542 "Celeste_parser.tab.c"
    break;

  case 265: /* execution_keyword_permutation: RUNTIME CODE  */
#line 3433 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8553 "Celeste_parser.tab.c"
    break;

  case 266: /* execution_keyword_permutation: %empty  */
#line 3439 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_execution_keyword_permutation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8564 "Celeste_parser.tab.c"
    break;

  case 267: /* class_body: deamerreserved_star__class_stmt__  */
#line 3449 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::class_body({::Celeste::ast::Type::class_body, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__class_stmt__) });
		((*yyvalp).Celeste_class_body) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8575 "Celeste_parser.tab.c"
    break;

  case 268: /* deamerreserved_star__class_stmt__: class_stmt deamerreserved_star__class_stmt__  */
#line 3459 "./Celeste_parser.y"
                                                      {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_class_stmt), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__class_stmt__) });
		((*yyvalp).Celeste_deamerreserved_star__class_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8586 "Celeste_parser.tab.c"
    break;

  case 269: /* deamerreserved_star__class_stmt__: %empty  */
#line 3465 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__class_stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8597 "Celeste_parser.tab.c"
    break;

  case 270: /* class_stmt: accessibility  */
#line 3475 "./Celeste_parser.y"
                       {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_accessibility) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8608 "Celeste_parser.tab.c"
    break;

  case 271: /* class_stmt: class_stmt_member_field_declaration  */
#line 3481 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_member_field_declaration) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8619 "Celeste_parser.tab.c"
    break;

  case 272: /* class_stmt: class_stmt_member_function  */
#line 3487 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_member_function) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8630 "Celeste_parser.tab.c"
    break;

  case 273: /* class_stmt: class_stmt_member_template_function  */
#line 3493 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_member_template_function) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8641 "Celeste_parser.tab.c"
    break;

  case 274: /* class_stmt: class_stmt_constructor  */
#line 3499 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_class_stmt_constructor) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8652 "Celeste_parser.tab.c"
    break;

  case 275: /* class_stmt: template_class_stmt_constructor  */
#line 3505 "./Celeste_parser.y"
                                           {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_class_stmt_constructor) });
		((*yyvalp).Celeste_class_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8663 "Celeste_parser.tab.c"
    break;

  case 276: /* class_stmt_member_field_declaration: type member_field_name EQ value_list COMMA  */
#line 3515 "./Celeste_parser.y"
                                                    {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_member_field_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8675 "Celeste_parser.tab.c"
    break;

  case 277: /* class_stmt_member_field_declaration: type member_field_name COMMA  */
#line 3522 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_member_field_name) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8687 "Celeste_parser.tab.c"
    break;

  case 278: /* class_stmt_member_field_declaration: type member_field_name EQ value_list SEMICOLON  */
#line 3529 "./Celeste_parser.y"
                                                          {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_member_field_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8699 "Celeste_parser.tab.c"
    break;

  case 279: /* class_stmt_member_field_declaration: type member_field_name SEMICOLON  */
#line 3536 "./Celeste_parser.y"
                                            {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_member_field_name) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 8711 "Celeste_parser.tab.c"
    break;

  case 280: /* class_stmt_member_field_declaration: type member_field_name EQ value_list  */
#line 3543 "./Celeste_parser.y"
                                                {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_member_field_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_value_list) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8722 "Celeste_parser.tab.c"
    break;

  case 281: /* class_stmt_member_field_declaration: type member_field_name  */
#line 3549 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_member_field_name) });
		((*yyvalp).Celeste_class_stmt_member_field_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8733 "Celeste_parser.tab.c"
    break;

  case 282: /* member_field_name: symbol_reference  */
#line 3559 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::member_field_name({::Celeste::ast::Type::member_field_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_member_field_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8744 "Celeste_parser.tab.c"
    break;

  case 283: /* class_stmt_member_function: VIRTUAL function_declaration OVERRIDE  */
#line 3569 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8755 "Celeste_parser.tab.c"
    break;

  case 284: /* class_stmt_member_function: VIRTUAL function_declaration  */
#line 3575 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8766 "Celeste_parser.tab.c"
    break;

  case 285: /* class_stmt_member_function: PURE function_declaration OVERRIDE  */
#line 3581 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8777 "Celeste_parser.tab.c"
    break;

  case 286: /* class_stmt_member_function: PURE function_declaration  */
#line 3587 "./Celeste_parser.y"
                                     {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8788 "Celeste_parser.tab.c"
    break;

  case 287: /* class_stmt_member_function: function_declaration OVERRIDE  */
#line 3593 "./Celeste_parser.y"
                                         {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8799 "Celeste_parser.tab.c"
    break;

  case 288: /* class_stmt_member_function: function_declaration  */
#line 3599 "./Celeste_parser.y"
                                {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8810 "Celeste_parser.tab.c"
    break;

  case 289: /* class_stmt_member_template_function: VIRTUAL template_function_declaration OVERRIDE  */
#line 3609 "./Celeste_parser.y"
                                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8821 "Celeste_parser.tab.c"
    break;

  case 290: /* class_stmt_member_template_function: VIRTUAL template_function_declaration  */
#line 3615 "./Celeste_parser.y"
                                                 {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8832 "Celeste_parser.tab.c"
    break;

  case 291: /* class_stmt_member_template_function: PURE template_function_declaration OVERRIDE  */
#line 3621 "./Celeste_parser.y"
                                                       {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8843 "Celeste_parser.tab.c"
    break;

  case 292: /* class_stmt_member_template_function: PURE template_function_declaration  */
#line 3627 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8854 "Celeste_parser.tab.c"
    break;

  case 293: /* class_stmt_member_template_function: template_function_declaration OVERRIDE  */
#line 3633 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_template_function_declaration), new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8865 "Celeste_parser.tab.c"
    break;

  case 294: /* class_stmt_member_template_function: template_function_declaration  */
#line 3639 "./Celeste_parser.y"
                                         {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_template_function_declaration) });
		((*yyvalp).Celeste_class_stmt_member_template_function) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 8876 "Celeste_parser.tab.c"
    break;

  case 295: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3649 "./Celeste_parser.y"
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
#line 8894 "Celeste_parser.tab.c"
    break;

  case 296: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3662 "./Celeste_parser.y"
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
#line 8911 "Celeste_parser.tab.c"
    break;

  case 297: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3674 "./Celeste_parser.y"
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
#line 8929 "Celeste_parser.tab.c"
    break;

  case 298: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3687 "./Celeste_parser.y"
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
#line 8946 "Celeste_parser.tab.c"
    break;

  case 299: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3699 "./Celeste_parser.y"
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
#line 8964 "Celeste_parser.tab.c"
    break;

  case 300: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3712 "./Celeste_parser.y"
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
#line 8981 "Celeste_parser.tab.c"
    break;

  case 301: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3724 "./Celeste_parser.y"
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
#line 8999 "Celeste_parser.tab.c"
    break;

  case 302: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3737 "./Celeste_parser.y"
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
#line 9016 "Celeste_parser.tab.c"
    break;

  case 303: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3749 "./Celeste_parser.y"
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
#line 9034 "Celeste_parser.tab.c"
    break;

  case 304: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3762 "./Celeste_parser.y"
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
#line 9051 "Celeste_parser.tab.c"
    break;

  case 305: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3774 "./Celeste_parser.y"
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
#line 9069 "Celeste_parser.tab.c"
    break;

  case 306: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3787 "./Celeste_parser.y"
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
#line 9086 "Celeste_parser.tab.c"
    break;

  case 307: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3799 "./Celeste_parser.y"
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
#line 9104 "Celeste_parser.tab.c"
    break;

  case 308: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3812 "./Celeste_parser.y"
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
#line 9121 "Celeste_parser.tab.c"
    break;

  case 309: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3824 "./Celeste_parser.y"
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
#line 9139 "Celeste_parser.tab.c"
    break;

  case 310: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3837 "./Celeste_parser.y"
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
#line 9156 "Celeste_parser.tab.c"
    break;

  case 311: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3849 "./Celeste_parser.y"
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
#line 9174 "Celeste_parser.tab.c"
    break;

  case 312: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3862 "./Celeste_parser.y"
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
#line 9191 "Celeste_parser.tab.c"
    break;

  case 313: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3874 "./Celeste_parser.y"
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
#line 9209 "Celeste_parser.tab.c"
    break;

  case 314: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3887 "./Celeste_parser.y"
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
#line 9226 "Celeste_parser.tab.c"
    break;

  case 315: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3899 "./Celeste_parser.y"
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
#line 9244 "Celeste_parser.tab.c"
    break;

  case 316: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3912 "./Celeste_parser.y"
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
#line 9261 "Celeste_parser.tab.c"
    break;

  case 317: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3924 "./Celeste_parser.y"
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
#line 9279 "Celeste_parser.tab.c"
    break;

  case 318: /* template_class_stmt_constructor: TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3937 "./Celeste_parser.y"
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
#line 9296 "Celeste_parser.tab.c"
    break;

  case 319: /* class_stmt_constructor: class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3953 "./Celeste_parser.y"
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
#line 9312 "Celeste_parser.tab.c"
    break;

  case 320: /* class_stmt_constructor: class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3964 "./Celeste_parser.y"
                                                                                                                                            {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9327 "Celeste_parser.tab.c"
    break;

  case 321: /* class_stmt_constructor: class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3974 "./Celeste_parser.y"
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
#line 9343 "Celeste_parser.tab.c"
    break;

  case 322: /* class_stmt_constructor: class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3985 "./Celeste_parser.y"
                                                                                                  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9358 "Celeste_parser.tab.c"
    break;

  case 323: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 3995 "./Celeste_parser.y"
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
#line 9374 "Celeste_parser.tab.c"
    break;

  case 324: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4006 "./Celeste_parser.y"
                                                                                                                                                        {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9389 "Celeste_parser.tab.c"
    break;

  case 325: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4016 "./Celeste_parser.y"
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
#line 9405 "Celeste_parser.tab.c"
    break;

  case 326: /* class_stmt_constructor: CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4027 "./Celeste_parser.y"
                                                                                                              {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_class_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9420 "Celeste_parser.tab.c"
    break;

  case 327: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4037 "./Celeste_parser.y"
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
#line 9436 "Celeste_parser.tab.c"
    break;

  case 328: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4048 "./Celeste_parser.y"
                                                                                                                                             {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__function_argument__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9451 "Celeste_parser.tab.c"
    break;

  case 329: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4058 "./Celeste_parser.y"
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
#line 9467 "Celeste_parser.tab.c"
    break;

  case 330: /* class_stmt_constructor: CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  */
#line 4069 "./Celeste_parser.y"
                                                                                                   {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_function_body) });
		((*yyvalp).Celeste_class_stmt_constructor) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9482 "Celeste_parser.tab.c"
    break;

  case 331: /* accessibility: PUBLIC  */
#line 4083 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PUBLIC({::Celeste::ast::Type::PUBLIC, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_accessibility) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9493 "Celeste_parser.tab.c"
    break;

  case 332: /* accessibility: PROTECTED  */
#line 4089 "./Celeste_parser.y"
                     {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PROTECTED({::Celeste::ast::Type::PROTECTED, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_accessibility) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9504 "Celeste_parser.tab.c"
    break;

  case 333: /* accessibility: PRIVATE  */
#line 4095 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PRIVATE({::Celeste::ast::Type::PRIVATE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_accessibility) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9515 "Celeste_parser.tab.c"
    break;

  case 334: /* class_inherit_base: inherit_base  */
#line 4105 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::class_inherit_base({::Celeste::ast::Type::class_inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inherit_base) });
		((*yyvalp).Celeste_class_inherit_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9526 "Celeste_parser.tab.c"
    break;

  case 335: /* class_inherit_base: compound_base  */
#line 4111 "./Celeste_parser.y"
                         {
		auto* const newNode = new Celeste::ast::node::class_inherit_base({::Celeste::ast::Type::class_inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_compound_base) });
		((*yyvalp).Celeste_class_inherit_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9537 "Celeste_parser.tab.c"
    break;

  case 336: /* inherit_base: INHERIT inherit_base_name  */
#line 4121 "./Celeste_parser.y"
                                   {
		auto* const newNode = new Celeste::ast::node::inherit_base({::Celeste::ast::Type::inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::INHERIT({::Celeste::ast::Type::INHERIT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_inherit_base_name) });
		((*yyvalp).Celeste_inherit_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9548 "Celeste_parser.tab.c"
    break;

  case 337: /* inherit_base_name: symbol_reference  */
#line 4131 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::inherit_base_name({::Celeste::ast::Type::inherit_base_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_inherit_base_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9559 "Celeste_parser.tab.c"
    break;

  case 338: /* compound_base: COMPOSITE compound_base_name  */
#line 4141 "./Celeste_parser.y"
                                      {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_compound_base_name) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9570 "Celeste_parser.tab.c"
    break;

  case 339: /* compound_base: COMPOSITE compound_base_name AS compound_base_alias  */
#line 4147 "./Celeste_parser.y"
                                                               {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_compound_base_alias) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9581 "Celeste_parser.tab.c"
    break;

  case 340: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET deamerreserved_arrow__compound_base_alias__ COMMA RIGHT_SQUARE_BRACKET  */
#line 4153 "./Celeste_parser.y"
                                                                                                                                      {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__compound_base_alias__) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9595 "Celeste_parser.tab.c"
    break;

  case 341: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET deamerreserved_arrow__compound_base_alias__ RIGHT_SQUARE_BRACKET  */
#line 4162 "./Celeste_parser.y"
                                                                                                                                {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__compound_base_alias__) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9608 "Celeste_parser.tab.c"
    break;

  case 342: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET  */
#line 4170 "./Celeste_parser.y"
                                                                                          {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9622 "Celeste_parser.tab.c"
    break;

  case 343: /* compound_base: COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 4179 "./Celeste_parser.y"
                                                                                    {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_compound_base_name), new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_compound_base) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9635 "Celeste_parser.tab.c"
    break;

  case 344: /* deamerreserved_arrow__compound_base_alias__: compound_base_alias deamerreserved_star__COMMA__compound_base_alias__  */
#line 4191 "./Celeste_parser.y"
                                                                               {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__compound_base_alias__({::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_compound_base_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__compound_base_alias__) });
		((*yyvalp).Celeste_deamerreserved_arrow__compound_base_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9646 "Celeste_parser.tab.c"
    break;

  case 345: /* deamerreserved_star__COMMA__compound_base_alias__: COMMA compound_base_alias deamerreserved_star__COMMA__compound_base_alias__  */
#line 4201 "./Celeste_parser.y"
                                                                                     {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_compound_base_alias), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__compound_base_alias__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__compound_base_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 9658 "Celeste_parser.tab.c"
    break;

  case 346: /* deamerreserved_star__COMMA__compound_base_alias__: %empty  */
#line 4208 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__compound_base_alias__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9669 "Celeste_parser.tab.c"
    break;

  case 347: /* compound_base_name: symbol_reference  */
#line 4218 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::compound_base_name({::Celeste::ast::Type::compound_base_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_compound_base_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9680 "Celeste_parser.tab.c"
    break;

  case 348: /* compound_base_alias: VARNAME  */
#line 4228 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::compound_base_alias({::Celeste::ast::Type::compound_base_alias, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_compound_base_alias) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9691 "Celeste_parser.tab.c"
    break;

  case 349: /* enum_declaration: ENUM enum_name LEFT_BRACKET deamerreserved_star__enumeration__ RIGHT_BRACKET  */
#line 4238 "./Celeste_parser.y"
                                                                                      {
		auto* const newNode = new Celeste::ast::node::enum_declaration({::Celeste::ast::Type::enum_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ENUM({::Celeste::ast::Type::ENUM, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_enum_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__enumeration__) });
		((*yyvalp).Celeste_enum_declaration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9704 "Celeste_parser.tab.c"
    break;

  case 350: /* deamerreserved_star__enumeration__: enumeration deamerreserved_star__enumeration__  */
#line 4250 "./Celeste_parser.y"
                                                        {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enumeration__({::Celeste::ast::Type::deamerreserved_star__enumeration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_enumeration), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__enumeration__) });
		((*yyvalp).Celeste_deamerreserved_star__enumeration__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9715 "Celeste_parser.tab.c"
    break;

  case 351: /* deamerreserved_star__enumeration__: %empty  */
#line 4256 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enumeration__({::Celeste::ast::Type::deamerreserved_star__enumeration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__enumeration__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9726 "Celeste_parser.tab.c"
    break;

  case 352: /* enum_name: symbol_reference  */
#line 4266 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::enum_name({::Celeste::ast::Type::enum_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_enum_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9737 "Celeste_parser.tab.c"
    break;

  case 353: /* enumeration: enumeration_name EQ enumeration_value COMMA  */
#line 4276 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Celeste_enumeration_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_enumeration_value) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9749 "Celeste_parser.tab.c"
    break;

  case 354: /* enumeration: enumeration_name EQ enumeration_value  */
#line 4283 "./Celeste_parser.y"
                                                 {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_enumeration_name), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_enumeration_value) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9760 "Celeste_parser.tab.c"
    break;

  case 355: /* enumeration: enumeration_name COMMA  */
#line 4289 "./Celeste_parser.y"
                                  {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_enumeration_name) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9772 "Celeste_parser.tab.c"
    break;

  case 356: /* enumeration: enumeration_name  */
#line 4296 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_enumeration_name) });
		((*yyvalp).Celeste_enumeration) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9783 "Celeste_parser.tab.c"
    break;

  case 357: /* enumeration_name: symbol_reference  */
#line 4306 "./Celeste_parser.y"
                          {
		auto* const newNode = new Celeste::ast::node::enumeration_name({::Celeste::ast::Type::enumeration_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_enumeration_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9794 "Celeste_parser.tab.c"
    break;

  case 358: /* enumeration_value: full_value  */
#line 4316 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::enumeration_value({::Celeste::ast::Type::enumeration_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_full_value) });
		((*yyvalp).Celeste_enumeration_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9805 "Celeste_parser.tab.c"
    break;

  case 359: /* symbol_reference: deamerreserved_arrow__symbol__  */
#line 4326 "./Celeste_parser.y"
                                        {
		auto* const newNode = new Celeste::ast::node::symbol_reference({::Celeste::ast::Type::symbol_reference, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__symbol__) });
		((*yyvalp).Celeste_symbol_reference) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9816 "Celeste_parser.tab.c"
    break;

  case 360: /* deamerreserved_arrow__symbol__: symbol deamerreserved_star__DOT__symbol_secondary__  */
#line 4336 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__symbol__({::Celeste::ast::Type::deamerreserved_arrow__symbol__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__symbol_secondary__) });
		((*yyvalp).Celeste_deamerreserved_arrow__symbol__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9827 "Celeste_parser.tab.c"
    break;

  case 361: /* deamerreserved_star__DOT__symbol_secondary__: DOT symbol_secondary deamerreserved_star__DOT__symbol_secondary__  */
#line 4346 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_secondary), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__DOT__symbol_secondary__) });
		((*yyvalp).Celeste_deamerreserved_star__DOT__symbol_secondary__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 9839 "Celeste_parser.tab.c"
    break;

  case 362: /* deamerreserved_star__DOT__symbol_secondary__: %empty  */
#line 4353 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__DOT__symbol_secondary__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9850 "Celeste_parser.tab.c"
    break;

  case 363: /* symbol_secondary: symbol_name_secondary deamerreserved_star__symbol_access__  */
#line 4363 "./Celeste_parser.y"
                                                                    {
		auto* const newNode = new Celeste::ast::node::symbol_secondary({::Celeste::ast::Type::symbol_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_name_secondary), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__symbol_access__) });
		((*yyvalp).Celeste_symbol_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9861 "Celeste_parser.tab.c"
    break;

  case 364: /* deamerreserved_star__symbol_access__: symbol_access deamerreserved_star__symbol_access__  */
#line 4373 "./Celeste_parser.y"
                                                            {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__symbol_access__({::Celeste::ast::Type::deamerreserved_star__symbol_access__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_access), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__symbol_access__) });
		((*yyvalp).Celeste_deamerreserved_star__symbol_access__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9872 "Celeste_parser.tab.c"
    break;

  case 365: /* deamerreserved_star__symbol_access__: %empty  */
#line 4379 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__symbol_access__({::Celeste::ast::Type::deamerreserved_star__symbol_access__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__symbol_access__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9883 "Celeste_parser.tab.c"
    break;

  case 366: /* symbol: symbol_name deamerreserved_star__symbol_access__  */
#line 4389 "./Celeste_parser.y"
                                                          {
		auto* const newNode = new Celeste::ast::node::symbol({::Celeste::ast::Type::symbol, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_symbol_name), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__symbol_access__) });
		((*yyvalp).Celeste_symbol) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9894 "Celeste_parser.tab.c"
    break;

  case 367: /* symbol_access: index_access  */
#line 4399 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_index_access) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9905 "Celeste_parser.tab.c"
    break;

  case 368: /* symbol_access: anonymous_access  */
#line 4405 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_anonymous_access) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9916 "Celeste_parser.tab.c"
    break;

  case 369: /* symbol_access: function_access  */
#line 4411 "./Celeste_parser.y"
                           {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_function_access) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9927 "Celeste_parser.tab.c"
    break;

  case 370: /* symbol_access: auto_deduce_array  */
#line 4417 "./Celeste_parser.y"
                             {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_auto_deduce_array) });
		((*yyvalp).Celeste_symbol_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9938 "Celeste_parser.tab.c"
    break;

  case 371: /* auto_deduce_array: LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 4427 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::auto_deduce_array({::Celeste::ast::Type::auto_deduce_array, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_auto_deduce_array) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 9951 "Celeste_parser.tab.c"
    break;

  case 372: /* symbol_name_secondary: VARNAME  */
#line 4439 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9962 "Celeste_parser.tab.c"
    break;

  case 373: /* symbol_name_secondary: FOR  */
#line 4445 "./Celeste_parser.y"
               {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9973 "Celeste_parser.tab.c"
    break;

  case 374: /* symbol_name_secondary: CLASS  */
#line 4451 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9984 "Celeste_parser.tab.c"
    break;

  case 375: /* symbol_name_secondary: IF  */
#line 4457 "./Celeste_parser.y"
              {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 9995 "Celeste_parser.tab.c"
    break;

  case 376: /* symbol_name_secondary: ELSEIF  */
#line 4463 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSEIF({::Celeste::ast::Type::ELSEIF, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10006 "Celeste_parser.tab.c"
    break;

  case 377: /* symbol_name_secondary: ELSE  */
#line 4469 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10017 "Celeste_parser.tab.c"
    break;

  case 378: /* symbol_name_secondary: OPERATORNAME  */
#line 4475 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::OPERATORNAME({::Celeste::ast::Type::OPERATORNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10028 "Celeste_parser.tab.c"
    break;

  case 379: /* symbol_name_secondary: CODE  */
#line 4481 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name_secondary) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10039 "Celeste_parser.tab.c"
    break;

  case 380: /* symbol_name: VARNAME  */
#line 4491 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10050 "Celeste_parser.tab.c"
    break;

  case 381: /* symbol_name: FOR  */
#line 4497 "./Celeste_parser.y"
               {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10061 "Celeste_parser.tab.c"
    break;

  case 382: /* symbol_name: OPERATORNAME  */
#line 4503 "./Celeste_parser.y"
                        {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::OPERATORNAME({::Celeste::ast::Type::OPERATORNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10072 "Celeste_parser.tab.c"
    break;

  case 383: /* symbol_name: CODE  */
#line 4509 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_symbol_name) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10083 "Celeste_parser.tab.c"
    break;

  case 384: /* function_access: LEFT_PARANTHESIS deamerreserved_arrow__expression__ COMMA RIGHT_PARANTHESIS  */
#line 4519 "./Celeste_parser.y"
                                                                                     {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__expression__) });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10097 "Celeste_parser.tab.c"
    break;

  case 385: /* function_access: LEFT_PARANTHESIS deamerreserved_arrow__expression__ RIGHT_PARANTHESIS  */
#line 4528 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__expression__) });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10110 "Celeste_parser.tab.c"
    break;

  case 386: /* function_access: LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS  */
#line 4536 "./Celeste_parser.y"
                                                    {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10124 "Celeste_parser.tab.c"
    break;

  case 387: /* function_access: LEFT_PARANTHESIS RIGHT_PARANTHESIS  */
#line 4545 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		((*yyvalp).Celeste_function_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10137 "Celeste_parser.tab.c"
    break;

  case 388: /* deamerreserved_arrow__expression__: expression deamerreserved_star__COMMA__expression__  */
#line 4557 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__expression__({::Celeste::ast::Type::deamerreserved_arrow__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__expression__) });
		((*yyvalp).Celeste_deamerreserved_arrow__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10148 "Celeste_parser.tab.c"
    break;

  case 389: /* deamerreserved_star__COMMA__expression__: COMMA expression deamerreserved_star__COMMA__expression__  */
#line 4567 "./Celeste_parser.y"
                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__expression__({::Celeste::ast::Type::deamerreserved_star__COMMA__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__expression__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 10160 "Celeste_parser.tab.c"
    break;

  case 390: /* deamerreserved_star__COMMA__expression__: %empty  */
#line 4574 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__expression__({::Celeste::ast::Type::deamerreserved_star__COMMA__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__expression__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10171 "Celeste_parser.tab.c"
    break;

  case 391: /* index_access: LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 4584 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::index_access({::Celeste::ast::Type::index_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_index_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10184 "Celeste_parser.tab.c"
    break;

  case 392: /* anonymous_access: LEFT_BRACKET expression RIGHT_BRACKET  */
#line 4596 "./Celeste_parser.y"
                                               {
		auto* const newNode = new Celeste::ast::node::anonymous_access({::Celeste::ast::Type::anonymous_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_anonymous_access) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10197 "Celeste_parser.tab.c"
    break;

  case 393: /* type: deamerreserved_star__type_modifier__ symbol_reference  */
#line 4608 "./Celeste_parser.y"
                                                               {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10208 "Celeste_parser.tab.c"
    break;

  case 394: /* type: deamerreserved_star__type_modifier__ AUTOTYPE array_declaration  */
#line 4614 "./Celeste_parser.y"
                                                                           {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTOTYPE({::Celeste::ast::Type::AUTOTYPE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_array_declaration) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10219 "Celeste_parser.tab.c"
    break;

  case 395: /* type: deamerreserved_star__type_modifier__ AUTOTYPE  */
#line 4620 "./Celeste_parser.y"
                                                         {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTOTYPE({::Celeste::ast::Type::AUTOTYPE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10230 "Celeste_parser.tab.c"
    break;

  case 396: /* type: deamerreserved_star__type_modifier__ AUTO array_declaration  */
#line 4626 "./Celeste_parser.y"
                                                                       {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTO({::Celeste::ast::Type::AUTO, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal) }), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_array_declaration) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10241 "Celeste_parser.tab.c"
    break;

  case 397: /* type: deamerreserved_star__type_modifier__ AUTO  */
#line 4632 "./Celeste_parser.y"
                                                     {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__), new Celeste::ast::node::AUTO({::Celeste::ast::Type::AUTO, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10252 "Celeste_parser.tab.c"
    break;

  case 398: /* deamerreserved_star__type_modifier__: type_modifier deamerreserved_star__type_modifier__  */
#line 4642 "./Celeste_parser.y"
                                                            {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__type_modifier__({::Celeste::ast::Type::deamerreserved_star__type_modifier__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_type_modifier), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__type_modifier__) });
		((*yyvalp).Celeste_deamerreserved_star__type_modifier__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10263 "Celeste_parser.tab.c"
    break;

  case 399: /* deamerreserved_star__type_modifier__: %empty  */
#line 4648 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__type_modifier__({::Celeste::ast::Type::deamerreserved_star__type_modifier__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__type_modifier__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10274 "Celeste_parser.tab.c"
    break;

  case 400: /* type_modifier: STATIC  */
#line 4658 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::STATIC({::Celeste::ast::Type::STATIC, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type_modifier) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10285 "Celeste_parser.tab.c"
    break;

  case 401: /* type_modifier: CONSTANT  */
#line 4664 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTANT({::Celeste::ast::Type::CONSTANT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type_modifier) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10296 "Celeste_parser.tab.c"
    break;

  case 402: /* type_modifier: INLINE  */
#line 4670 "./Celeste_parser.y"
                  {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::INLINE({::Celeste::ast::Type::INLINE, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_type_modifier) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10307 "Celeste_parser.tab.c"
    break;

  case 403: /* value_list: deamerreserved_arrow__full_value__ COMMA  */
#line 4680 "./Celeste_parser.y"
                                                  {
		auto* const newNode = new Celeste::ast::node::value_list({::Celeste::ast::Type::value_list, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_value_list) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10319 "Celeste_parser.tab.c"
    break;

  case 404: /* value_list: deamerreserved_arrow__full_value__  */
#line 4687 "./Celeste_parser.y"
                                              {
		auto* const newNode = new Celeste::ast::node::value_list({::Celeste::ast::Type::value_list, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_value_list) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10330 "Celeste_parser.tab.c"
    break;

  case 405: /* deamerreserved_arrow__full_value__: full_value deamerreserved_star__COMMA__full_value__  */
#line 4697 "./Celeste_parser.y"
                                                             {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__full_value__({::Celeste::ast::Type::deamerreserved_arrow__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_full_value), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__full_value__) });
		((*yyvalp).Celeste_deamerreserved_arrow__full_value__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10341 "Celeste_parser.tab.c"
    break;

  case 406: /* deamerreserved_star__COMMA__full_value__: COMMA full_value deamerreserved_star__COMMA__full_value__  */
#line 4707 "./Celeste_parser.y"
                                                                   {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__full_value__({::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_full_value), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_deamerreserved_star__COMMA__full_value__) });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__full_value__) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
	}
#line 10353 "Celeste_parser.tab.c"
    break;

  case 407: /* deamerreserved_star__COMMA__full_value__: %empty  */
#line 4714 "./Celeste_parser.y"
           {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__full_value__({::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		((*yyvalp).Celeste_deamerreserved_star__COMMA__full_value__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10364 "Celeste_parser.tab.c"
    break;

  case 408: /* full_value: expression  */
#line 4724 "./Celeste_parser.y"
                    {
		auto* const newNode = new Celeste::ast::node::full_value({::Celeste::ast::Type::full_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_expression) });
		((*yyvalp).Celeste_full_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10375 "Celeste_parser.tab.c"
    break;

  case 409: /* value: NUMBER  */
#line 4734 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NUMBER({::Celeste::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10386 "Celeste_parser.tab.c"
    break;

  case 410: /* value: DECIMAL  */
#line 4740 "./Celeste_parser.y"
                   {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DECIMAL({::Celeste::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10397 "Celeste_parser.tab.c"
    break;

  case 411: /* value: TEXT  */
#line 4746 "./Celeste_parser.y"
                {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal) }) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10408 "Celeste_parser.tab.c"
    break;

  case 412: /* value: symbol_reference  */
#line 4752 "./Celeste_parser.y"
                            {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_symbol_reference) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10419 "Celeste_parser.tab.c"
    break;

  case 413: /* value: code_block  */
#line 4758 "./Celeste_parser.y"
                      {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_code_block) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10430 "Celeste_parser.tab.c"
    break;

  case 414: /* value: tuple  */
#line 4764 "./Celeste_parser.y"
                 {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Celeste_tuple) });
		((*yyvalp).Celeste_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 10441 "Celeste_parser.tab.c"
    break;

  case 415: /* tuple: LEFT_PARANTHESIS deamerreserved_arrow__full_value__ COMMA RIGHT_PARANTHESIS  */
#line 4774 "./Celeste_parser.y"
                                                                                     {
		auto* const newNode = new Celeste::ast::node::tuple({::Celeste::ast::Type::tuple, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_tuple) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10455 "Celeste_parser.tab.c"
    break;

  case 416: /* tuple: LEFT_PARANTHESIS deamerreserved_arrow__full_value__ RIGHT_PARANTHESIS  */
#line 4783 "./Celeste_parser.y"
                                                                                 {
		auto* const newNode = new Celeste::ast::node::tuple({::Celeste::ast::Type::tuple, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.Celeste_deamerreserved_arrow__full_value__) });
		((*yyvalp).Celeste_tuple) = newNode;

		// Ignored, Deleted, tokens are deleted
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.Terminal);
		delete (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.Terminal);
	}
#line 10468 "Celeste_parser.tab.c"
    break;


#line 10472 "Celeste_parser.tab.c"

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


#line 4795 "./Celeste_parser.y"


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
