/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_CELESTE_CELESTE_PARSER_TAB_H_INCLUDED
# define YY_CELESTE_CELESTE_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int Celestedebug;
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
    CLASS = 258,                   /* CLASS  */
    ENUM = 259,                    /* ENUM  */
    FUNCTION = 260,                /* FUNCTION  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    LEFT_BRACKET = 263,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 264,           /* RIGHT_BRACKET  */
    LEFT_SQUARE_BRACKET = 265,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 266,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARANTHESIS = 267,        /* LEFT_PARANTHESIS  */
    RIGHT_PARANTHESIS = 268,       /* RIGHT_PARANTHESIS  */
    COLON = 269,                   /* COLON  */
    SEMICOLON = 270,               /* SEMICOLON  */
    COMMA = 271,                   /* COMMA  */
    DOT = 272,                     /* DOT  */
    EQEQ = 273,                    /* EQEQ  */
    EQ = 274,                      /* EQ  */
    NOTEQ = 275,                   /* NOTEQ  */
    NOT = 276,                     /* NOT  */
    PLUS = 277,                    /* PLUS  */
    MINUS = 278,                   /* MINUS  */
    DIVIDE = 279,                  /* DIVIDE  */
    MULTIPLY = 280,                /* MULTIPLY  */
    USERDEFINED_OPERATOR = 281,    /* USERDEFINED_OPERATOR  */
    VARNAME = 282,                 /* VARNAME  */
    NUMBER = 283,                  /* NUMBER  */
    DECIMAL = 284,                 /* DECIMAL  */
    TEXT = 285                     /* TEXT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 161 "./Celeste_parser.y"

	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::Celeste::ast::node::CLASS* Celeste_CLASS;
	::Celeste::ast::node::ENUM* Celeste_ENUM;
	::Celeste::ast::node::FUNCTION* Celeste_FUNCTION;
	::Celeste::ast::node::IF* Celeste_IF;
	::Celeste::ast::node::ELSE* Celeste_ELSE;
	::Celeste::ast::node::LEFT_BRACKET* Celeste_LEFT_BRACKET;
	::Celeste::ast::node::RIGHT_BRACKET* Celeste_RIGHT_BRACKET;
	::Celeste::ast::node::LEFT_SQUARE_BRACKET* Celeste_LEFT_SQUARE_BRACKET;
	::Celeste::ast::node::RIGHT_SQUARE_BRACKET* Celeste_RIGHT_SQUARE_BRACKET;
	::Celeste::ast::node::LEFT_PARANTHESIS* Celeste_LEFT_PARANTHESIS;
	::Celeste::ast::node::RIGHT_PARANTHESIS* Celeste_RIGHT_PARANTHESIS;
	::Celeste::ast::node::COLON* Celeste_COLON;
	::Celeste::ast::node::SEMICOLON* Celeste_SEMICOLON;
	::Celeste::ast::node::COMMA* Celeste_COMMA;
	::Celeste::ast::node::DOT* Celeste_DOT;
	::Celeste::ast::node::EQEQ* Celeste_EQEQ;
	::Celeste::ast::node::EQ* Celeste_EQ;
	::Celeste::ast::node::NOTEQ* Celeste_NOTEQ;
	::Celeste::ast::node::NOT* Celeste_NOT;
	::Celeste::ast::node::PLUS* Celeste_PLUS;
	::Celeste::ast::node::MINUS* Celeste_MINUS;
	::Celeste::ast::node::DIVIDE* Celeste_DIVIDE;
	::Celeste::ast::node::MULTIPLY* Celeste_MULTIPLY;
	::Celeste::ast::node::USERDEFINED_OPERATOR* Celeste_USERDEFINED_OPERATOR;
	::Celeste::ast::node::VARNAME* Celeste_VARNAME;
	::Celeste::ast::node::NUMBER* Celeste_NUMBER;
	::Celeste::ast::node::DECIMAL* Celeste_DECIMAL;
	::Celeste::ast::node::TEXT* Celeste_TEXT;
	::Celeste::ast::node::ESCAPE_CHARS* Celeste_ESCAPE_CHARS;
	::Celeste::ast::node::program* Celeste_program;
	::Celeste::ast::node::deamerreserved_star__stmt__* Celeste_deamerreserved_star__stmt__;
	::Celeste::ast::node::stmt* Celeste_stmt;
	::Celeste::ast::node::meta_declaration* Celeste_meta_declaration;
	::Celeste::ast::node::deamerreserved_star__expression__* Celeste_deamerreserved_star__expression__;
	::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* Celeste_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
	::Celeste::ast::node::deamerreserved_star__meta_declaration__* Celeste_deamerreserved_star__meta_declaration__;
	::Celeste::ast::node::expression* Celeste_expression;
	::Celeste::ast::node::class_declaration* Celeste_class_declaration;
	::Celeste::ast::node::deamerreserved_arrow__base_type__* Celeste_deamerreserved_arrow__base_type__;
	::Celeste::ast::node::deamerreserved_star__COMMA__* Celeste_deamerreserved_star__COMMA__;
	::Celeste::ast::node::base_type* Celeste_base_type;
	::Celeste::ast::node::class_block* Celeste_class_block;
	::Celeste::ast::node::deamerreserved_star__class_stmt__* Celeste_deamerreserved_star__class_stmt__;
	::Celeste::ast::node::enum_declaration* Celeste_enum_declaration;
	::Celeste::ast::node::enum_block* Celeste_enum_block;
	::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
	::Celeste::ast::node::function_declaration* Celeste_function_declaration;
	::Celeste::ast::node::deamerreserved_arrow__function_argument__* Celeste_deamerreserved_arrow__function_argument__;
	::Celeste::ast::node::function_implementation* Celeste_function_implementation;
	::Celeste::ast::node::function_argument* Celeste_function_argument;
	::Celeste::ast::node::type* Celeste_type;
	::Celeste::ast::node::function_name* Celeste_function_name;
	::Celeste::ast::node::return_type* Celeste_return_type;
	::Celeste::ast::node::function_block* Celeste_function_block;
	::Celeste::ast::node::deamerreserved_star__function_stmt__* Celeste_deamerreserved_star__function_stmt__;
	::Celeste::ast::node::class_stmt* Celeste_class_stmt;
	::Celeste::ast::node::enum_stmt* Celeste_enum_stmt;
	::Celeste::ast::node::function_stmt* Celeste_function_stmt;
	::Celeste::ast::node::logical_stmt* Celeste_logical_stmt;
	::Celeste::ast::node::condtional_declaration* Celeste_condtional_declaration;
	::Celeste::ast::node::conditional_block* Celeste_conditional_block;
	::Celeste::ast::node::deamerreserved_star__condtional_stmt__* Celeste_deamerreserved_star__condtional_stmt__;
	::Celeste::ast::node::condtional_stmt* Celeste_condtional_stmt;
	::Celeste::ast::node::variable_declaration* Celeste_variable_declaration;
	::Celeste::ast::node::variable_initialization* Celeste_variable_initialization;

#line 163 "Celeste_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE Celestelval;

int Celesteparse (void);

#endif /* !YY_CELESTE_CELESTE_PARSER_TAB_H_INCLUDED  */
