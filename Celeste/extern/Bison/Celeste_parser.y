%define parse.error verbose
%define parse.lac full


%{
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
%}

%token<Terminal> CLASS
%token<Terminal> ENUM
%token<Terminal> FUNCTION
%token<Terminal> IF
%token<Terminal> ELSE
%token<Terminal> LEFT_BRACKET
%token<Terminal> RIGHT_BRACKET
%token<Terminal> LEFT_SQUARE_BRACKET
%token<Terminal> RIGHT_SQUARE_BRACKET
%token<Terminal> LEFT_PARANTHESIS
%token<Terminal> RIGHT_PARANTHESIS
%token<Terminal> COLON
%token<Terminal> SEMICOLON
%token<Terminal> COMMA
%token<Terminal> DOT
%token<Terminal> EQEQ
%token<Terminal> EQ
%token<Terminal> NOTEQ
%token<Terminal> NOT
%token<Terminal> PLUS
%token<Terminal> MINUS
%token<Terminal> DIVIDE
%token<Terminal> MULTIPLY
%token<Terminal> USERDEFINED_OPERATOR
%token<Terminal> VARNAME
%token<Terminal> NUMBER
%token<Terminal> DECIMAL
%token<Terminal> TEXT
%token<Terminal> ESCAPE_CHARS


%nterm<Celeste_program> program
%nterm<Celeste_deamerreserved_star__stmt__> deamerreserved_star__stmt__
%nterm<Celeste_stmt> stmt
%nterm<Celeste_meta_declaration> meta_declaration
%nterm<Celeste_deamerreserved_star__expression__> deamerreserved_star__expression__
%nterm<Celeste_deamerreserved_arrow__RIGHT_SQUARE_BRACKET__> deamerreserved_arrow__RIGHT_SQUARE_BRACKET__
%nterm<Celeste_deamerreserved_star__meta_declaration__> deamerreserved_star__meta_declaration__
%nterm<Celeste_expression> expression
%nterm<Celeste_class_declaration> class_declaration
%nterm<Celeste_deamerreserved_arrow__base_type__> deamerreserved_arrow__base_type__
%nterm<Celeste_deamerreserved_star__COMMA__base_type__> deamerreserved_star__COMMA__base_type__
%nterm<Celeste_class_name> class_name
%nterm<Celeste_base_type> base_type
%nterm<Celeste_class_block> class_block
%nterm<Celeste_deamerreserved_star__class_stmt__> deamerreserved_star__class_stmt__
%nterm<Celeste_enum_declaration> enum_declaration
%nterm<Celeste_enum_name> enum_name
%nterm<Celeste_enum_block> enum_block
%nterm<Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____
%nterm<Celeste_function_declaration> function_declaration
%nterm<Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____> deamerreserved_arrow__deamerreserved_optional__function_argument____
%nterm<Celeste_deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__
%nterm<Celeste_function_implementation> function_implementation
%nterm<Celeste_function_argument> function_argument
%nterm<Celeste_function_arg_type> function_arg_type
%nterm<Celeste_function_arg_name> function_arg_name
%nterm<Celeste_type> type
%nterm<Celeste_function_name> function_name
%nterm<Celeste_return_type> return_type
%nterm<Celeste_function_block> function_block
%nterm<Celeste_deamerreserved_star__function_stmt__> deamerreserved_star__function_stmt__
%nterm<Celeste_class_stmt> class_stmt
%nterm<Celeste_enum_stmt> enum_stmt
%nterm<Celeste_function_stmt> function_stmt
%nterm<Celeste_logical_stmt> logical_stmt
%nterm<Celeste_condtional_declaration> condtional_declaration
%nterm<Celeste_conditional_block> conditional_block
%nterm<Celeste_deamerreserved_star__condtional_stmt__> deamerreserved_star__condtional_stmt__
%nterm<Celeste_condtional_stmt> condtional_stmt
%nterm<Celeste_variable_declaration> variable_declaration
%nterm<Celeste_variable_initialization> variable_initialization


%union{
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
	::Celeste::ast::node::deamerreserved_star__COMMA__base_type__* Celeste_deamerreserved_star__COMMA__base_type__;
	::Celeste::ast::node::class_name* Celeste_class_name;
	::Celeste::ast::node::base_type* Celeste_base_type;
	::Celeste::ast::node::class_block* Celeste_class_block;
	::Celeste::ast::node::deamerreserved_star__class_stmt__* Celeste_deamerreserved_star__class_stmt__;
	::Celeste::ast::node::enum_declaration* Celeste_enum_declaration;
	::Celeste::ast::node::enum_name* Celeste_enum_name;
	::Celeste::ast::node::enum_block* Celeste_enum_block;
	::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* Celeste_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
	::Celeste::ast::node::function_declaration* Celeste_function_declaration;
	::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* Celeste_deamerreserved_arrow__deamerreserved_optional__function_argument____;
	::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* Celeste_deamerreserved_star__COMMA__function_argument__;
	::Celeste::ast::node::function_implementation* Celeste_function_implementation;
	::Celeste::ast::node::function_argument* Celeste_function_argument;
	::Celeste::ast::node::function_arg_type* Celeste_function_arg_type;
	::Celeste::ast::node::function_arg_name* Celeste_function_arg_name;
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

}

%%


program:
	deamerreserved_star__stmt__  {
		auto* const newNode = new Celeste::ast::node::program({::Celeste::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;


deamerreserved_star__stmt__:
	stmt deamerreserved_star__stmt__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


stmt:
	class_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| enum_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_implementation  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| meta_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


meta_declaration:
	LEFT_SQUARE_BRACKET deamerreserved_star__expression__ deamerreserved_arrow__RIGHT_SQUARE_BRACKET__  {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET class_declaration  {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET enum_declaration  {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET function_declaration  {
		auto* const newNode = new Celeste::ast::node::meta_declaration({::Celeste::ast::Type::meta_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_SQUARE_BRACKET({::Celeste::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__expression__:
	expression deamerreserved_star__expression__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__expression__({::Celeste::ast::Type::deamerreserved_star__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__expression__({::Celeste::ast::Type::deamerreserved_star__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__RIGHT_SQUARE_BRACKET__:
	RIGHT_SQUARE_BRACKET deamerreserved_star__meta_declaration__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__({::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::RIGHT_SQUARE_BRACKET({::Celeste::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__meta_declaration__:
	meta_declaration deamerreserved_star__meta_declaration__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__meta_declaration__({::Celeste::ast::Type::deamerreserved_star__meta_declaration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__meta_declaration__({::Celeste::ast::Type::deamerreserved_star__meta_declaration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


expression:
	expression PLUS expression  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::PLUS({::Celeste::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| expression MINUS expression  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::MINUS({::Celeste::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| expression DIVIDE expression  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::DIVIDE({::Celeste::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| expression MULTIPLY expression  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::MULTIPLY({::Celeste::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| expression USERDEFINED_OPERATOR expression  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::USERDEFINED_OPERATOR({::Celeste::ast::Type::USERDEFINED_OPERATOR, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| VARNAME  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| NUMBER  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NUMBER({::Celeste::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| DECIMAL  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DECIMAL({::Celeste::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| TEXT  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_declaration:
	CLASS class_name COLON deamerreserved_arrow__base_type__ class_block  {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::COLON({::Celeste::ast::Type::COLON, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| CLASS class_name class_block  {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__base_type__:
	base_type deamerreserved_star__COMMA__base_type__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__base_type__({::Celeste::ast::Type::deamerreserved_arrow__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__base_type__:
	COMMA base_type deamerreserved_star__COMMA__base_type__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__base_type__({::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::COMMA({::Celeste::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__base_type__({::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::class_name({::Celeste::ast::Type::class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


base_type:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::base_type({::Celeste::ast::Type::base_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_block:
	LEFT_BRACKET deamerreserved_star__class_stmt__ RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_block({::Celeste::ast::Type::class_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__class_stmt__:
	class_stmt deamerreserved_star__class_stmt__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enum_declaration:
	ENUM enum_name enum_block  {
		auto* const newNode = new Celeste::ast::node::enum_declaration({::Celeste::ast::Type::enum_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ENUM({::Celeste::ast::Type::ENUM, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enum_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::enum_name({::Celeste::ast::Type::enum_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enum_block:
	LEFT_BRACKET deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::enum_block({::Celeste::ast::Type::enum_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____:
	enum_stmt deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____({::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| COMMA deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____({::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::COMMA({::Celeste::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____({::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_declaration:
	FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS return_type SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__deamerreserved_optional__function_argument____:
	function_argument deamerreserved_star__COMMA__function_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____({::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____({::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__function_argument__:
	COMMA function_argument deamerreserved_star__COMMA__function_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new Celeste::ast::node::COMMA({::Celeste::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_implementation:
	FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS return_type function_block  {
		auto* const newNode = new Celeste::ast::node::function_implementation({::Celeste::ast::Type::function_implementation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS function_block  {
		auto* const newNode = new Celeste::ast::node::function_implementation({::Celeste::ast::Type::function_implementation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_argument:
	function_arg_type function_arg_name EQ expression  {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_arg_type function_arg_name  {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_arg_type:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::function_arg_type({::Celeste::ast::Type::function_arg_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_arg_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::function_arg_name({::Celeste::ast::Type::function_arg_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


type:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::function_name({::Celeste::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


return_type:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::return_type({::Celeste::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_block:
	LEFT_BRACKET deamerreserved_star__function_stmt__ RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_block({::Celeste::ast::Type::function_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__function_stmt__:
	function_stmt deamerreserved_star__function_stmt__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__function_stmt__({::Celeste::ast::Type::deamerreserved_star__function_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__function_stmt__({::Celeste::ast::Type::deamerreserved_star__function_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_stmt:
	variable_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_implementation  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enum_stmt:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::enum_stmt({::Celeste::ast::Type::enum_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_stmt:
	logical_stmt  {
		auto* const newNode = new Celeste::ast::node::function_stmt({::Celeste::ast::Type::function_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


logical_stmt:
	variable_declaration  {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| variable_initialization  {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| condtional_declaration  {
		auto* const newNode = new Celeste::ast::node::logical_stmt({::Celeste::ast::Type::logical_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


condtional_declaration:
	IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| ELSE LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block  {
		auto* const newNode = new Celeste::ast::node::condtional_declaration({::Celeste::ast::Type::condtional_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::LEFT_PARANTHESIS({::Celeste::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, new Celeste::ast::node::RIGHT_PARANTHESIS({::Celeste::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


conditional_block:
	LEFT_BRACKET deamerreserved_star__condtional_stmt__ RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_block({::Celeste::ast::Type::conditional_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::LEFT_BRACKET({::Celeste::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::RIGHT_BRACKET({::Celeste::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__condtional_stmt__:
	condtional_stmt deamerreserved_star__condtional_stmt__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__condtional_stmt__({::Celeste::ast::Type::deamerreserved_star__condtional_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__condtional_stmt__({::Celeste::ast::Type::deamerreserved_star__condtional_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


condtional_stmt:
	logical_stmt  {
		auto* const newNode = new Celeste::ast::node::condtional_stmt({::Celeste::ast::Type::condtional_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


variable_declaration:
	type VARNAME SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


variable_initialization:
	type VARNAME EQ expression SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::variable_initialization({::Celeste::ast::Type::variable_initialization, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4, new Celeste::ast::node::SEMICOLON({::Celeste::ast::Type::SEMICOLON, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;



%%

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
