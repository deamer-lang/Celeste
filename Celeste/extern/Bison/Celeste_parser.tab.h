/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton interface for Bison GLR parsers in C

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
    SINGLE_COMMENT = 258,          /* SINGLE_COMMENT  */
    CONSTANT = 259,                /* CONSTANT  */
    FUNCTION = 260,                /* FUNCTION  */
    CLASS = 261,                   /* CLASS  */
    ENUM = 262,                    /* ENUM  */
    CONDITIONAL = 263,             /* CONDITIONAL  */
    CODE = 264,                    /* CODE  */
    RUNTIME = 265,                 /* RUNTIME  */
    STATIC = 266,                  /* STATIC  */
    AUTO = 267,                    /* AUTO  */
    AUTOTYPE = 268,                /* AUTOTYPE  */
    TEMPLATE = 269,                /* TEMPLATE  */
    NAMESPACE = 270,               /* NAMESPACE  */
    OPERATORNAME = 271,            /* OPERATORNAME  */
    OVERRIDE = 272,                /* OVERRIDE  */
    VIRTUAL = 273,                 /* VIRTUAL  */
    PURE = 274,                    /* PURE  */
    AS = 275,                      /* AS  */
    IN = 276,                      /* IN  */
    DISPLAY = 277,                 /* DISPLAY  */
    RETURN = 278,                  /* RETURN  */
    FOR = 279,                     /* FOR  */
    IF = 280,                      /* IF  */
    ELSEIF = 281,                  /* ELSEIF  */
    ELSE = 282,                    /* ELSE  */
    INLINE = 283,                  /* INLINE  */
    CONSTRUCTOR = 284,             /* CONSTRUCTOR  */
    FILE_ = 285,                   /* FILE_  */
    PROGRAM_ = 286,                /* PROGRAM_  */
    IMPORT = 287,                  /* IMPORT  */
    PUBLIC = 288,                  /* PUBLIC  */
    PROTECTED = 289,               /* PROTECTED  */
    PRIVATE = 290,                 /* PRIVATE  */
    INHERIT = 291,                 /* INHERIT  */
    COMPOSITE = 292,               /* COMPOSITE  */
    LEFT_BRACKET = 293,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 294,           /* RIGHT_BRACKET  */
    LEFT_SQUARE_BRACKET = 295,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 296,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARANTHESIS = 297,        /* LEFT_PARANTHESIS  */
    RIGHT_PARANTHESIS = 298,       /* RIGHT_PARANTHESIS  */
    COLON = 299,                   /* COLON  */
    SEMICOLON = 300,               /* SEMICOLON  */
    COMMA = 301,                   /* COMMA  */
    DOT = 302,                     /* DOT  */
    LTEQ = 303,                    /* LTEQ  */
    GTEQ = 304,                    /* GTEQ  */
    LT = 305,                      /* LT  */
    GT = 306,                      /* GT  */
    PLUSEQ = 307,                  /* PLUSEQ  */
    MINUSEQ = 308,                 /* MINUSEQ  */
    MULTIPLYEQ = 309,              /* MULTIPLYEQ  */
    DIVIDEEQ = 310,                /* DIVIDEEQ  */
    EQEQ = 311,                    /* EQEQ  */
    EQ = 312,                      /* EQ  */
    NOTEQ = 313,                   /* NOTEQ  */
    NOT = 314,                     /* NOT  */
    PLUSPLUS = 315,                /* PLUSPLUS  */
    PLUS = 316,                    /* PLUS  */
    MINUSMINUS = 317,              /* MINUSMINUS  */
    MINUS = 318,                   /* MINUS  */
    DIVIDE = 319,                  /* DIVIDE  */
    MULTIPLY = 320,                /* MULTIPLY  */
    VARNAME = 321,                 /* VARNAME  */
    NUMBER = 322,                  /* NUMBER  */
    DECIMAL = 323,                 /* DECIMAL  */
    TEXT = 324,                    /* TEXT  */
    ESCAPE_CHARS = 325             /* ESCAPE_CHARS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 452 "./Celeste_parser.y"

	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::Celeste::ast::node::SINGLE_COMMENT* Celeste_SINGLE_COMMENT;
	::Celeste::ast::node::CONSTANT* Celeste_CONSTANT;
	::Celeste::ast::node::FUNCTION* Celeste_FUNCTION;
	::Celeste::ast::node::CLASS* Celeste_CLASS;
	::Celeste::ast::node::ENUM* Celeste_ENUM;
	::Celeste::ast::node::CONDITIONAL* Celeste_CONDITIONAL;
	::Celeste::ast::node::CODE* Celeste_CODE;
	::Celeste::ast::node::RUNTIME* Celeste_RUNTIME;
	::Celeste::ast::node::STATIC* Celeste_STATIC;
	::Celeste::ast::node::AUTO* Celeste_AUTO;
	::Celeste::ast::node::AUTOTYPE* Celeste_AUTOTYPE;
	::Celeste::ast::node::TEMPLATE* Celeste_TEMPLATE;
	::Celeste::ast::node::NAMESPACE* Celeste_NAMESPACE;
	::Celeste::ast::node::OPERATORNAME* Celeste_OPERATORNAME;
	::Celeste::ast::node::OVERRIDE* Celeste_OVERRIDE;
	::Celeste::ast::node::VIRTUAL* Celeste_VIRTUAL;
	::Celeste::ast::node::PURE* Celeste_PURE;
	::Celeste::ast::node::AS* Celeste_AS;
	::Celeste::ast::node::IN* Celeste_IN;
	::Celeste::ast::node::DISPLAY* Celeste_DISPLAY;
	::Celeste::ast::node::RETURN* Celeste_RETURN;
	::Celeste::ast::node::FOR* Celeste_FOR;
	::Celeste::ast::node::IF* Celeste_IF;
	::Celeste::ast::node::ELSEIF* Celeste_ELSEIF;
	::Celeste::ast::node::ELSE* Celeste_ELSE;
	::Celeste::ast::node::INLINE* Celeste_INLINE;
	::Celeste::ast::node::CONSTRUCTOR* Celeste_CONSTRUCTOR;
	::Celeste::ast::node::FILE_* Celeste_FILE_;
	::Celeste::ast::node::PROGRAM_* Celeste_PROGRAM_;
	::Celeste::ast::node::IMPORT* Celeste_IMPORT;
	::Celeste::ast::node::PUBLIC* Celeste_PUBLIC;
	::Celeste::ast::node::PROTECTED* Celeste_PROTECTED;
	::Celeste::ast::node::PRIVATE* Celeste_PRIVATE;
	::Celeste::ast::node::INHERIT* Celeste_INHERIT;
	::Celeste::ast::node::COMPOSITE* Celeste_COMPOSITE;
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
	::Celeste::ast::node::LTEQ* Celeste_LTEQ;
	::Celeste::ast::node::GTEQ* Celeste_GTEQ;
	::Celeste::ast::node::LT* Celeste_LT;
	::Celeste::ast::node::GT* Celeste_GT;
	::Celeste::ast::node::PLUSEQ* Celeste_PLUSEQ;
	::Celeste::ast::node::MINUSEQ* Celeste_MINUSEQ;
	::Celeste::ast::node::MULTIPLYEQ* Celeste_MULTIPLYEQ;
	::Celeste::ast::node::DIVIDEEQ* Celeste_DIVIDEEQ;
	::Celeste::ast::node::EQEQ* Celeste_EQEQ;
	::Celeste::ast::node::EQ* Celeste_EQ;
	::Celeste::ast::node::NOTEQ* Celeste_NOTEQ;
	::Celeste::ast::node::NOT* Celeste_NOT;
	::Celeste::ast::node::PLUSPLUS* Celeste_PLUSPLUS;
	::Celeste::ast::node::PLUS* Celeste_PLUS;
	::Celeste::ast::node::MINUSMINUS* Celeste_MINUSMINUS;
	::Celeste::ast::node::MINUS* Celeste_MINUS;
	::Celeste::ast::node::DIVIDE* Celeste_DIVIDE;
	::Celeste::ast::node::MULTIPLY* Celeste_MULTIPLY;
	::Celeste::ast::node::VARNAME* Celeste_VARNAME;
	::Celeste::ast::node::NUMBER* Celeste_NUMBER;
	::Celeste::ast::node::DECIMAL* Celeste_DECIMAL;
	::Celeste::ast::node::TEXT* Celeste_TEXT;
	::Celeste::ast::node::ESCAPE_CHARS* Celeste_ESCAPE_CHARS;
	::Celeste::ast::node::program* Celeste_program;
	::Celeste::ast::node::root_program* Celeste_root_program;
	::Celeste::ast::node::standard_block* Celeste_standard_block;
	::Celeste::ast::node::deamerreserved_star__stmt__* Celeste_deamerreserved_star__stmt__;
	::Celeste::ast::node::stmt* Celeste_stmt;
	::Celeste::ast::node::import_statement* Celeste_import_statement;
	::Celeste::ast::node::file_import* Celeste_file_import;
	::Celeste::ast::node::mutation_group* Celeste_mutation_group;
	::Celeste::ast::node::deamerreserved_arrow__symbol_reference__* Celeste_deamerreserved_arrow__symbol_reference__;
	::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* Celeste_deamerreserved_star__COMMA__symbol_reference__;
	::Celeste::ast::node::assignment* Celeste_assignment;
	::Celeste::ast::node::assignment_operator* Celeste_assignment_operator;
	::Celeste::ast::node::conditional_if* Celeste_conditional_if;
	::Celeste::ast::node::conditional_else_if* Celeste_conditional_else_if;
	::Celeste::ast::node::conditional_else* Celeste_conditional_else;
	::Celeste::ast::node::conditional_block* Celeste_conditional_block;
	::Celeste::ast::node::template_conditional_function_declaration* Celeste_template_conditional_function_declaration;
	::Celeste::ast::node::deamerreserved_arrow__template_parameter__* Celeste_deamerreserved_arrow__template_parameter__;
	::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* Celeste_deamerreserved_star__COMMA__template_parameter__;
	::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* Celeste_deamerreserved_arrow__conditional_function_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* Celeste_deamerreserved_star__COMMA__conditional_function_argument__;
	::Celeste::ast::node::deamerreserved_arrow__function_argument__* Celeste_deamerreserved_arrow__function_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* Celeste_deamerreserved_star__COMMA__function_argument__;
	::Celeste::ast::node::conditional_function_declaration* Celeste_conditional_function_declaration;
	::Celeste::ast::node::template_code_function_declaration* Celeste_template_code_function_declaration;
	::Celeste::ast::node::code_function_declaration* Celeste_code_function_declaration;
	::Celeste::ast::node::return_statement* Celeste_return_statement;
	::Celeste::ast::node::symbol_increase* Celeste_symbol_increase;
	::Celeste::ast::node::symbol_decrease* Celeste_symbol_decrease;
	::Celeste::ast::node::expression* Celeste_expression;
	::Celeste::ast::node::expression_no_value* Celeste_expression_no_value;
	::Celeste::ast::node::t_expression* Celeste_t_expression;
	::Celeste::ast::node::f_expression* Celeste_f_expression;
	::Celeste::ast::node::display_call* Celeste_display_call;
	::Celeste::ast::node::for_loop* Celeste_for_loop;
	::Celeste::ast::node::for_iteration_loop* Celeste_for_iteration_loop;
	::Celeste::ast::node::for_each_loop* Celeste_for_each_loop;
	::Celeste::ast::node::for_variable* Celeste_for_variable;
	::Celeste::ast::node::iterator* Celeste_iterator;
	::Celeste::ast::node::for_block* Celeste_for_block;
	::Celeste::ast::node::namespace_declaration* Celeste_namespace_declaration;
	::Celeste::ast::node::deamerreserved_arrow__namespace_name__* Celeste_deamerreserved_arrow__namespace_name__;
	::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* Celeste_deamerreserved_star__DOT__namespace_name__;
	::Celeste::ast::node::namespace_block* Celeste_namespace_block;
	::Celeste::ast::node::namespace_name* Celeste_namespace_name;
	::Celeste::ast::node::inline_class_declaration* Celeste_inline_class_declaration;
	::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* Celeste_deamerreserved_arrow__inline_class_declaration_composite__;
	::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__;
	::Celeste::ast::node::inline_class_declaration_composite* Celeste_inline_class_declaration_composite;
	::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__;
	::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
	::Celeste::ast::node::inline_class_declaration_composite_alias* Celeste_inline_class_declaration_composite_alias;
	::Celeste::ast::node::inline_class_declaration_composite_name* Celeste_inline_class_declaration_composite_name;
	::Celeste::ast::node::created_class_name* Celeste_created_class_name;
	::Celeste::ast::node::code_block* Celeste_code_block;
	::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* Celeste_deamerreserved_arrow__code_block_input_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* Celeste_deamerreserved_star__COMMA__code_block_input_argument__;
	::Celeste::ast::node::code_block_input_argument* Celeste_code_block_input_argument;
	::Celeste::ast::node::code_block_argument* Celeste_code_block_argument;
	::Celeste::ast::node::code_block_argument_name* Celeste_code_block_argument_name;
	::Celeste::ast::node::code_block_program* Celeste_code_block_program;
	::Celeste::ast::node::variable_declaration* Celeste_variable_declaration;
	::Celeste::ast::node::array_declaration* Celeste_array_declaration;
	::Celeste::ast::node::variable_name* Celeste_variable_name;
	::Celeste::ast::node::template_function_declaration* Celeste_template_function_declaration;
	::Celeste::ast::node::function_declaration* Celeste_function_declaration;
	::Celeste::ast::node::trailing_return_type* Celeste_trailing_return_type;
	::Celeste::ast::node::return_type* Celeste_return_type;
	::Celeste::ast::node::conditional_function_argument* Celeste_conditional_function_argument;
	::Celeste::ast::node::function_argument* Celeste_function_argument;
	::Celeste::ast::node::function_argument_type* Celeste_function_argument_type;
	::Celeste::ast::node::function_argument_name* Celeste_function_argument_name;
	::Celeste::ast::node::condition_modifier_function_call* Celeste_condition_modifier_function_call;
	::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* Celeste_deamerreserved_arrow__condition_modifier_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* Celeste_deamerreserved_star__COMMA__condition_modifier_argument__;
	::Celeste::ast::node::condition_modifier_name* Celeste_condition_modifier_name;
	::Celeste::ast::node::condition_modifier_argument* Celeste_condition_modifier_argument;
	::Celeste::ast::node::function_body* Celeste_function_body;
	::Celeste::ast::node::function_name* Celeste_function_name;
	::Celeste::ast::node::template_class_declaration* Celeste_template_class_declaration;
	::Celeste::ast::node::template_parameter* Celeste_template_parameter;
	::Celeste::ast::node::template_parameter_name* Celeste_template_parameter_name;
	::Celeste::ast::node::class_declaration* Celeste_class_declaration;
	::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* Celeste_deamerreserved_arrow__class_inherit_base__;
	::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* Celeste_deamerreserved_star__COMMA__class_inherit_base__;
	::Celeste::ast::node::class_name* Celeste_class_name;
	::Celeste::ast::node::execution_keyword_permutation* Celeste_execution_keyword_permutation;
	::Celeste::ast::node::class_body* Celeste_class_body;
	::Celeste::ast::node::deamerreserved_star__class_stmt__* Celeste_deamerreserved_star__class_stmt__;
	::Celeste::ast::node::class_stmt* Celeste_class_stmt;
	::Celeste::ast::node::class_stmt_member_field_declaration* Celeste_class_stmt_member_field_declaration;
	::Celeste::ast::node::member_field_name* Celeste_member_field_name;
	::Celeste::ast::node::class_stmt_member_function* Celeste_class_stmt_member_function;
	::Celeste::ast::node::class_stmt_member_template_function* Celeste_class_stmt_member_template_function;
	::Celeste::ast::node::template_class_stmt_constructor* Celeste_template_class_stmt_constructor;
	::Celeste::ast::node::class_stmt_constructor* Celeste_class_stmt_constructor;
	::Celeste::ast::node::accessibility* Celeste_accessibility;
	::Celeste::ast::node::class_inherit_base* Celeste_class_inherit_base;
	::Celeste::ast::node::inherit_base* Celeste_inherit_base;
	::Celeste::ast::node::inherit_base_name* Celeste_inherit_base_name;
	::Celeste::ast::node::compound_base* Celeste_compound_base;
	::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* Celeste_deamerreserved_arrow__compound_base_alias__;
	::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* Celeste_deamerreserved_star__COMMA__compound_base_alias__;
	::Celeste::ast::node::compound_base_name* Celeste_compound_base_name;
	::Celeste::ast::node::compound_base_alias* Celeste_compound_base_alias;
	::Celeste::ast::node::enum_declaration* Celeste_enum_declaration;
	::Celeste::ast::node::deamerreserved_star__enumeration__* Celeste_deamerreserved_star__enumeration__;
	::Celeste::ast::node::enum_name* Celeste_enum_name;
	::Celeste::ast::node::enumeration* Celeste_enumeration;
	::Celeste::ast::node::enumeration_name* Celeste_enumeration_name;
	::Celeste::ast::node::enumeration_value* Celeste_enumeration_value;
	::Celeste::ast::node::symbol_reference* Celeste_symbol_reference;
	::Celeste::ast::node::deamerreserved_arrow__symbol__* Celeste_deamerreserved_arrow__symbol__;
	::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* Celeste_deamerreserved_star__DOT__symbol_secondary__;
	::Celeste::ast::node::symbol_secondary* Celeste_symbol_secondary;
	::Celeste::ast::node::deamerreserved_star__symbol_access__* Celeste_deamerreserved_star__symbol_access__;
	::Celeste::ast::node::symbol* Celeste_symbol;
	::Celeste::ast::node::symbol_access* Celeste_symbol_access;
	::Celeste::ast::node::auto_deduce_array* Celeste_auto_deduce_array;
	::Celeste::ast::node::symbol_name_secondary* Celeste_symbol_name_secondary;
	::Celeste::ast::node::symbol_name* Celeste_symbol_name;
	::Celeste::ast::node::function_access* Celeste_function_access;
	::Celeste::ast::node::deamerreserved_arrow__expression__* Celeste_deamerreserved_arrow__expression__;
	::Celeste::ast::node::deamerreserved_star__COMMA__expression__* Celeste_deamerreserved_star__COMMA__expression__;
	::Celeste::ast::node::index_access* Celeste_index_access;
	::Celeste::ast::node::anonymous_access* Celeste_anonymous_access;
	::Celeste::ast::node::type* Celeste_type;
	::Celeste::ast::node::deamerreserved_star__type_modifier__* Celeste_deamerreserved_star__type_modifier__;
	::Celeste::ast::node::type_modifier* Celeste_type_modifier;
	::Celeste::ast::node::value_list* Celeste_value_list;
	::Celeste::ast::node::deamerreserved_arrow__full_value__* Celeste_deamerreserved_arrow__full_value__;
	::Celeste::ast::node::deamerreserved_star__COMMA__full_value__* Celeste_deamerreserved_star__COMMA__full_value__;
	::Celeste::ast::node::full_value* Celeste_full_value;
	::Celeste::ast::node::value* Celeste_value;
	::Celeste::ast::node::tuple* Celeste_tuple;


#line 337 "Celeste_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE Celestelval;

int Celesteparse (void);

#endif /* !YY_CELESTE_CELESTE_PARSER_TAB_H_INCLUDED  */
