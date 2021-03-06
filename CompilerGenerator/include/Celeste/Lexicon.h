/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef CELESTE_LEXICON_H
#define CELESTE_LEXICON_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/Lexicon.h"

namespace Celeste
{
	class Language;

	class Lexicon : public ::deamer::language::generator::definition::property::user::Lexicon<
								::Celeste::Language>
	{
	public:
		// Terminal declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> CLASS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ENUM;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> FUNCTION;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> IF;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ELSE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_PARANTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_PARANTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COMMA;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DOT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NOTEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NOT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PLUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MINUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DIVIDE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MULTIPLY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> USERDEFINED_OPERATOR;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NUMBER;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DECIMAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> TEXT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ESCAPE_CHARS;

	
	public:
		Lexicon(Celeste::Language* language)
			:	::deamer::language::generator::definition::property::user::Lexicon<
					::Celeste::Language>(language)
		{
		}

		void GenerateObjects() override
		{
			// Terminals
			CLASS.Set(deamer::language::type::definition::object::main::Terminal("CLASS", "class", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ENUM.Set(deamer::language::type::definition::object::main::Terminal("ENUM", "enum", ::deamer::language::type::definition::object::main::SpecialType::Standard));
FUNCTION.Set(deamer::language::type::definition::object::main::Terminal("FUNCTION", "function", ::deamer::language::type::definition::object::main::SpecialType::Standard));
IF.Set(deamer::language::type::definition::object::main::Terminal("IF", "if", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ELSE.Set(deamer::language::type::definition::object::main::Terminal("ELSE", "else", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_BRACKET", "[{]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_BRACKET", "[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_SQUARE_BRACKET", "[\\[]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_SQUARE_BRACKET", "[\\]]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_PARANTHESIS.Set(deamer::language::type::definition::object::main::Terminal("LEFT_PARANTHESIS", "[(]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_PARANTHESIS.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_PARANTHESIS", "[)]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
COLON.Set(deamer::language::type::definition::object::main::Terminal("COLON", "[:]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
SEMICOLON.Set(deamer::language::type::definition::object::main::Terminal("SEMICOLON", "[;]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
COMMA.Set(deamer::language::type::definition::object::main::Terminal("COMMA", "[,]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DOT.Set(deamer::language::type::definition::object::main::Terminal("DOT", "[.]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
EQEQ.Set(deamer::language::type::definition::object::main::Terminal("EQEQ", "[=][=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
EQ.Set(deamer::language::type::definition::object::main::Terminal("EQ", "[=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NOTEQ.Set(deamer::language::type::definition::object::main::Terminal("NOTEQ", "[!][=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NOT.Set(deamer::language::type::definition::object::main::Terminal("NOT", "[!]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PLUS.Set(deamer::language::type::definition::object::main::Terminal("PLUS", "[+]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
MINUS.Set(deamer::language::type::definition::object::main::Terminal("MINUS", "[\\-]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DIVIDE.Set(deamer::language::type::definition::object::main::Terminal("DIVIDE", "[/]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
MULTIPLY.Set(deamer::language::type::definition::object::main::Terminal("MULTIPLY", "[*]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
USERDEFINED_OPERATOR.Set(deamer::language::type::definition::object::main::Terminal("USERDEFINED_OPERATOR", "[=!+\\-/*&\\^%$#@][=!+\\-/*&\\^%$#@]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
VARNAME.Set(deamer::language::type::definition::object::main::Terminal("VARNAME", "[a-zA-Z_]+[a-zA-Z_0-9]*", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NUMBER.Set(deamer::language::type::definition::object::main::Terminal("NUMBER", "[0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DECIMAL.Set(deamer::language::type::definition::object::main::Terminal("DECIMAL", "[0-9]+[\\.][0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
TEXT.Set(deamer::language::type::definition::object::main::Terminal("TEXT", "[\"]([\\\\][\"]|[\\\\][\\\\]|[^\"])*[\"]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ESCAPE_CHARS.Set(deamer::language::type::definition::object::main::Terminal("ESCAPE_CHARS", "[\\n\\r\\t ]+", ::deamer::language::type::definition::object::main::SpecialType::Delete));


			// Add object calls
			// AddObject(...)
			AddObject(CLASS);
AddObject(ENUM);
AddObject(FUNCTION);
AddObject(IF);
AddObject(ELSE);
AddObject(LEFT_BRACKET);
AddObject(RIGHT_BRACKET);
AddObject(LEFT_SQUARE_BRACKET);
AddObject(RIGHT_SQUARE_BRACKET);
AddObject(LEFT_PARANTHESIS);
AddObject(RIGHT_PARANTHESIS);
AddObject(COLON);
AddObject(SEMICOLON);
AddObject(COMMA);
AddObject(DOT);
AddObject(EQEQ);
AddObject(EQ);
AddObject(NOTEQ);
AddObject(NOT);
AddObject(PLUS);
AddObject(MINUS);
AddObject(DIVIDE);
AddObject(MULTIPLY);
AddObject(USERDEFINED_OPERATOR);
AddObject(VARNAME);
AddObject(NUMBER);
AddObject(DECIMAL);
AddObject(TEXT);
AddObject(ESCAPE_CHARS);


			// Place higher level operations here.
			// ReplaceObject(..., ...)
			// DeleteObject(..., ...)
			
		}
	};
}

#endif // CELESTE_LEXICON_H
