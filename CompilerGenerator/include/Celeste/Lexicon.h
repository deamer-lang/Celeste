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
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> SINGLE_COMMENT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> CONSTANT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> FUNCTION;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> CLASS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ENUM;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> CONDITIONAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> CODE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ATTRIBUTETOK;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RUNTIME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> STATIC;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> AUTO;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> AUTOTYPE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> TEMPLATE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NAMESPACE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> OPERATORNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> OVERRIDE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> VIRTUAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PURE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> AS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> IN;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DISPLAY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RETURN;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> FOR;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> IF;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ELSEIF;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ELSE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> INLINE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> CONSTRUCTOR;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> FILE_;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PROGRAM_;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> IMPORT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PUBLIC;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PROTECTED;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PRIVATE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> INHERIT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COMPOSITE;
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
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LTEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> GTEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> GT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PLUSEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MINUSEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MULTIPLYEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DIVIDEEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NOTEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NOT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PLUSPLUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> PLUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MINUSMINUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MINUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DIVIDE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MULTIPLY;
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
			SINGLE_COMMENT.Set(deamer::language::type::definition::object::main::Terminal("SINGLE_COMMENT", "[/][^\\n\\r]*[\\n\\r]{0,1}", ::deamer::language::type::definition::object::main::SpecialType::Delete));
CONSTANT.Set(deamer::language::type::definition::object::main::Terminal("CONSTANT", "[Cc][Oo][Nn][Ss][Tt]([Aa][Nn][Tt]){0,1}", ::deamer::language::type::definition::object::main::SpecialType::Standard));
FUNCTION.Set(deamer::language::type::definition::object::main::Terminal("FUNCTION", "[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
CLASS.Set(deamer::language::type::definition::object::main::Terminal("CLASS", "[Cc][Ll][Aa][Ss][Ss]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ENUM.Set(deamer::language::type::definition::object::main::Terminal("ENUM", "[Ee][Nn][Uu][Mm]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
CONDITIONAL.Set(deamer::language::type::definition::object::main::Terminal("CONDITIONAL", "[Cc][Oo][Nn][Dd][Ii][Tt][Ii][Oo][Nn][Aa][Ll]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
CODE.Set(deamer::language::type::definition::object::main::Terminal("CODE", "[Cc][Oo][Dd][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ATTRIBUTETOK.Set(deamer::language::type::definition::object::main::Terminal("ATTRIBUTETOK", "[Aa][Tt][Tt][Rr][Ii][Bb][Uu][Tt][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RUNTIME.Set(deamer::language::type::definition::object::main::Terminal("RUNTIME", "[Rr][Uu][Nn][Tt][Ii][Mm][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
STATIC.Set(deamer::language::type::definition::object::main::Terminal("STATIC", "[Ss][Tt][Aa][Tt][Ii][Cc]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
AUTO.Set(deamer::language::type::definition::object::main::Terminal("AUTO", "[Aa][Uu][Tt][Oo]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
AUTOTYPE.Set(deamer::language::type::definition::object::main::Terminal("AUTOTYPE", "[Aa][Uu][Tt][Oo][Tt][Yy][Pp][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
TEMPLATE.Set(deamer::language::type::definition::object::main::Terminal("TEMPLATE", "[Tt][Ee][Mm][Pp][Ll][Aa][Tt][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NAMESPACE.Set(deamer::language::type::definition::object::main::Terminal("NAMESPACE", "[Nn][Aa][Mm][Ee][Ss][Pp][Aa][Cc][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
OPERATORNAME.Set(deamer::language::type::definition::object::main::Terminal("OPERATORNAME", "[Oo][Pp][Ee][Rr][Aa][Tt][Oo][Rr][\\\\+\\-?!*^%@#$^<>=:|]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
OVERRIDE.Set(deamer::language::type::definition::object::main::Terminal("OVERRIDE", "[Oo][Vv][Ee][Rr][Rr][Ii][Dd][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
VIRTUAL.Set(deamer::language::type::definition::object::main::Terminal("VIRTUAL", "[Vv][Ii][Rr][Tt][Uu][Aa][Ll]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PURE.Set(deamer::language::type::definition::object::main::Terminal("PURE", "(([Pp][Uu][Rr][Ee])|([Aa][Bb][Ss][Tt][Rr][Aa][Cc][Tt]))", ::deamer::language::type::definition::object::main::SpecialType::Standard));
AS.Set(deamer::language::type::definition::object::main::Terminal("AS", "[Aa][Ss]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
IN.Set(deamer::language::type::definition::object::main::Terminal("IN", "[Ii][Nn]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DISPLAY.Set(deamer::language::type::definition::object::main::Terminal("DISPLAY", "[Dd][Ii][Ss][Pp][Ll][Aa][Yy]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RETURN.Set(deamer::language::type::definition::object::main::Terminal("RETURN", "[Rr][Ee][Tt][Uu][Rr][Nn]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
FOR.Set(deamer::language::type::definition::object::main::Terminal("FOR", "[Ff][Oo][Rr]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
IF.Set(deamer::language::type::definition::object::main::Terminal("IF", "[Ii][Ff]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ELSEIF.Set(deamer::language::type::definition::object::main::Terminal("ELSEIF", "[Ee][Ll]([Ss][Ee][ ]*){0,1}[Ii][Ff]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ELSE.Set(deamer::language::type::definition::object::main::Terminal("ELSE", "[Ee][Ll][Ss][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
INLINE.Set(deamer::language::type::definition::object::main::Terminal("INLINE", "[Ii][Nn][Ll][Ii][Nn][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
CONSTRUCTOR.Set(deamer::language::type::definition::object::main::Terminal("CONSTRUCTOR", "[Cc][Oo][Nn][Ss][Tt][Rr][Uu][Cc][Tt][Oo][Rr]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
FILE_.Set(deamer::language::type::definition::object::main::Terminal("FILE_", "[Ff][Ii][Ll][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PROGRAM_.Set(deamer::language::type::definition::object::main::Terminal("PROGRAM_", "[Pp][Rr][Oo][Gg][Rr][Aa][Mm]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
IMPORT.Set(deamer::language::type::definition::object::main::Terminal("IMPORT", "[Ii][Mm][Pp][Oo][Rr][Tt]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PUBLIC.Set(deamer::language::type::definition::object::main::Terminal("PUBLIC", "[Pp][Uu][Bb][Ll][Ii][Cc]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PROTECTED.Set(deamer::language::type::definition::object::main::Terminal("PROTECTED", "[Pp][Rr][Oo][Tt][Ee][Cc][Tt][Ee][Dd]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
PRIVATE.Set(deamer::language::type::definition::object::main::Terminal("PRIVATE", "[Pp][Rr][Ii][Vv][Aa][Tt][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
INHERIT.Set(deamer::language::type::definition::object::main::Terminal("INHERIT", "[Ii][Nn][Hh][Ee][Rr][Ii][Tt]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
COMPOSITE.Set(deamer::language::type::definition::object::main::Terminal("COMPOSITE", "[Cc][Oo][Mm][Pp][Oo][Ss][Ii][Tt][Ee]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_BRACKET", "[{]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
RIGHT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_BRACKET", "[}]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
LEFT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_SQUARE_BRACKET", "[\\[]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
RIGHT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_SQUARE_BRACKET", "[\\]]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
LEFT_PARANTHESIS.Set(deamer::language::type::definition::object::main::Terminal("LEFT_PARANTHESIS", "[(]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
RIGHT_PARANTHESIS.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_PARANTHESIS", "[)]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
COLON.Set(deamer::language::type::definition::object::main::Terminal("COLON", "[:]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
SEMICOLON.Set(deamer::language::type::definition::object::main::Terminal("SEMICOLON", "[;]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
COMMA.Set(deamer::language::type::definition::object::main::Terminal("COMMA", "[,]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
DOT.Set(deamer::language::type::definition::object::main::Terminal("DOT", "[.]", ::deamer::language::type::definition::object::main::SpecialType::Ignore));
LTEQ.Set(deamer::language::type::definition::object::main::Terminal("LTEQ", "[<][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
GTEQ.Set(deamer::language::type::definition::object::main::Terminal("GTEQ", "[>][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
LT.Set(deamer::language::type::definition::object::main::Terminal("LT", "[<]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
GT.Set(deamer::language::type::definition::object::main::Terminal("GT", "[>]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
PLUSEQ.Set(deamer::language::type::definition::object::main::Terminal("PLUSEQ", "[+][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
MINUSEQ.Set(deamer::language::type::definition::object::main::Terminal("MINUSEQ", "[-][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
MULTIPLYEQ.Set(deamer::language::type::definition::object::main::Terminal("MULTIPLYEQ", "[*][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
DIVIDEEQ.Set(deamer::language::type::definition::object::main::Terminal("DIVIDEEQ", "[\\\\][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
EQEQ.Set(deamer::language::type::definition::object::main::Terminal("EQEQ", "[=][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
EQ.Set(deamer::language::type::definition::object::main::Terminal("EQ", "[=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
NOTEQ.Set(deamer::language::type::definition::object::main::Terminal("NOTEQ", "[!][=]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
NOT.Set(deamer::language::type::definition::object::main::Terminal("NOT", "[!]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
PLUSPLUS.Set(deamer::language::type::definition::object::main::Terminal("PLUSPLUS", "[+][+]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
PLUS.Set(deamer::language::type::definition::object::main::Terminal("PLUS", "[+]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
MINUSMINUS.Set(deamer::language::type::definition::object::main::Terminal("MINUSMINUS", "[\\-][\\-]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
MINUS.Set(deamer::language::type::definition::object::main::Terminal("MINUS", "[\\-]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
DIVIDE.Set(deamer::language::type::definition::object::main::Terminal("DIVIDE", "[\\\\]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
MULTIPLY.Set(deamer::language::type::definition::object::main::Terminal("MULTIPLY", "[*]", ::deamer::language::type::definition::object::main::SpecialType::NoValue));
VARNAME.Set(deamer::language::type::definition::object::main::Terminal("VARNAME", "[a-zA-Z_][a-zA-Z_0-9]*", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NUMBER.Set(deamer::language::type::definition::object::main::Terminal("NUMBER", "[-]{0,1}[0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DECIMAL.Set(deamer::language::type::definition::object::main::Terminal("DECIMAL", "[-]{0,1}[0-9]+[\\.][0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
TEXT.Set(deamer::language::type::definition::object::main::Terminal("TEXT", "[\"]([\\\\][\"]|[\\\\][\\\\]|[^\"])*[\"]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ESCAPE_CHARS.Set(deamer::language::type::definition::object::main::Terminal("ESCAPE_CHARS", "[\\n\\r\\t ]+", ::deamer::language::type::definition::object::main::SpecialType::Delete));


			// Add object calls
			// AddObject(...)
			AddObject(SINGLE_COMMENT);
AddObject(CONSTANT);
AddObject(FUNCTION);
AddObject(CLASS);
AddObject(ENUM);
AddObject(CONDITIONAL);
AddObject(CODE);
AddObject(ATTRIBUTETOK);
AddObject(RUNTIME);
AddObject(STATIC);
AddObject(AUTO);
AddObject(AUTOTYPE);
AddObject(TEMPLATE);
AddObject(NAMESPACE);
AddObject(OPERATORNAME);
AddObject(OVERRIDE);
AddObject(VIRTUAL);
AddObject(PURE);
AddObject(AS);
AddObject(IN);
AddObject(DISPLAY);
AddObject(RETURN);
AddObject(FOR);
AddObject(IF);
AddObject(ELSEIF);
AddObject(ELSE);
AddObject(INLINE);
AddObject(CONSTRUCTOR);
AddObject(FILE_);
AddObject(PROGRAM_);
AddObject(IMPORT);
AddObject(PUBLIC);
AddObject(PROTECTED);
AddObject(PRIVATE);
AddObject(INHERIT);
AddObject(COMPOSITE);
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
AddObject(LTEQ);
AddObject(GTEQ);
AddObject(LT);
AddObject(GT);
AddObject(PLUSEQ);
AddObject(MINUSEQ);
AddObject(MULTIPLYEQ);
AddObject(DIVIDEEQ);
AddObject(EQEQ);
AddObject(EQ);
AddObject(NOTEQ);
AddObject(NOT);
AddObject(PLUSPLUS);
AddObject(PLUS);
AddObject(MINUSMINUS);
AddObject(MINUS);
AddObject(DIVIDE);
AddObject(MULTIPLY);
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
