%option yylineno
%option noyywrap
%option never-interactive
%option nounistd

%{
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include "Celeste/Flex/Lexer.h"
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
#include "Bison/Celeste_parser.tab.h"
void showError();
extern int Celestelex();

static bool local_store = false;
static int column = 0;
static int handleColumn(const std::string& text);
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> local_objects;
#ifndef yyval
#define yyval yytext
#endif //yyval
%}

CLASS	(class)
ENUM	(enum)
FUNCTION	(function)
IF	(if)
ELSE	(else)
LEFT_BRACKET	([{])
RIGHT_BRACKET	([}])
LEFT_SQUARE_BRACKET	([\[])
RIGHT_SQUARE_BRACKET	([\]])
LEFT_PARANTHESIS	([(])
RIGHT_PARANTHESIS	([)])
COLON	([:])
SEMICOLON	([;])
COMMA	([,])
DOT	([.])
EQEQ	([=][=])
EQ	([=])
NOTEQ	([!][=])
NOT	([!])
PLUS	([+])
MINUS	([\-])
DIVIDE	([/])
MULTIPLY	([*])
USERDEFINED_OPERATOR	([=!+\-/*&\^%$#@][=!+\-/*&\^%$#@]+)
VARNAME	([a-zA-Z_]+[a-zA-Z_0-9]*)
NUMBER	([0-9]+)
DECIMAL	([0-9]+[\.][0-9]+)
TEXT	(["]([\\]["]|[\\][\\]|[^"])*["])
ESCAPE_CHARS	([\n\r\t ]+)

%%

{CLASS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(1)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(1));;handleColumn(yyval);if (!local_store) return (CLASS);;}
{ENUM}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(2)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(2));;handleColumn(yyval);if (!local_store) return (ENUM);;}
{FUNCTION}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(3)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(3));;handleColumn(yyval);if (!local_store) return (FUNCTION);;}
{IF}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(4)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(4));;handleColumn(yyval);if (!local_store) return (IF);;}
{ELSE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(5)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(5));;handleColumn(yyval);if (!local_store) return (ELSE);;}
{LEFT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(6)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(6));;handleColumn(yyval);if (!local_store) return (LEFT_BRACKET);;}
{RIGHT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(7)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(7));;handleColumn(yyval);if (!local_store) return (RIGHT_BRACKET);;}
{LEFT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(8)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(8));;handleColumn(yyval);if (!local_store) return (LEFT_SQUARE_BRACKET);;}
{RIGHT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(9)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(9));;handleColumn(yyval);if (!local_store) return (RIGHT_SQUARE_BRACKET);;}
{LEFT_PARANTHESIS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(10)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(10));;handleColumn(yyval);if (!local_store) return (LEFT_PARANTHESIS);;}
{RIGHT_PARANTHESIS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(11)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(11));;handleColumn(yyval);if (!local_store) return (RIGHT_PARANTHESIS);;}
{COLON}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(12)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(12));;handleColumn(yyval);if (!local_store) return (COLON);;}
{SEMICOLON}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(13)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(13));;handleColumn(yyval);if (!local_store) return (SEMICOLON);;}
{COMMA}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(14)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(14));;handleColumn(yyval);if (!local_store) return (COMMA);;}
{DOT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(15)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(15));;handleColumn(yyval);if (!local_store) return (DOT);;}
{EQEQ}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(16)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(16));;handleColumn(yyval);if (!local_store) return (EQEQ);;}
{EQ}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(17)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(17));;handleColumn(yyval);if (!local_store) return (EQ);;}
{NOTEQ}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(18)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(18));;handleColumn(yyval);if (!local_store) return (NOTEQ);;}
{NOT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(19)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(19));;handleColumn(yyval);if (!local_store) return (NOT);;}
{PLUS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(20)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(20));;handleColumn(yyval);if (!local_store) return (PLUS);;}
{MINUS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(21)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(21));;handleColumn(yyval);if (!local_store) return (MINUS);;}
{DIVIDE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(22)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(22));;handleColumn(yyval);if (!local_store) return (DIVIDE);;}
{MULTIPLY}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(23)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(23));;handleColumn(yyval);if (!local_store) return (MULTIPLY);;}
{USERDEFINED_OPERATOR}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(24)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(24));;handleColumn(yyval);if (!local_store) return (USERDEFINED_OPERATOR);;}
{VARNAME}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(25)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(25));;handleColumn(yyval);if (!local_store) return (VARNAME);;}
{NUMBER}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(26)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(26));;handleColumn(yyval);if (!local_store) return (NUMBER);;}
{DECIMAL}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(27)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(27));;handleColumn(yyval);if (!local_store) return (DECIMAL);;}
{TEXT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(28)));else Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(28));;handleColumn(yyval);if (!local_store) return (TEXT);;}
{ESCAPE_CHARS}	{handleColumn(yyval);if (!local_store) ;}

%%
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

static int handleColumn(const std::string& text)
{
	int currentColumn = column;
	currentColumn += text.size();
	for (auto character : text)
	{
		if (character == '\n')
		{
			currentColumn = 0;
			break;
		}
	}
	
	return currentColumn;
}

std::vector<const deamer::external::cpp::lexer::TerminalObject*> Celeste::lexer::Lexer::Tokenize(const std::string& text) const
{
	local_store = true;
	column = 0;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}


