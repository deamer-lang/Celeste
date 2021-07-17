#ifndef CELESTE_AST_RELATION_NODETYPETOENUM_H
#define CELESTE_AST_RELATION_NODETYPETOENUM_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace node {

class program;
class deamerreserved_star__stmt__;
class stmt;
class meta_declaration;
class deamerreserved_star__expression__;
class deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
class deamerreserved_star__meta_declaration__;
class expression;
class class_declaration;
class deamerreserved_arrow__base_type__;
class deamerreserved_star__COMMA__;
class base_type;
class class_block;
class deamerreserved_star__class_stmt__;
class enum_declaration;
class enum_block;
class deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
class function_declaration;
class deamerreserved_arrow__deamerreserved_optional__function_argument____;
class deamerreserved_star__COMMA__function_argument__;
class function_implementation;
class function_argument;
class type;
class function_name;
class return_type;
class function_block;
class deamerreserved_star__function_stmt__;
class class_stmt;
class enum_stmt;
class function_stmt;
class logical_stmt;
class condtional_declaration;
class conditional_block;
class deamerreserved_star__condtional_stmt__;
class condtional_stmt;
class variable_declaration;
class variable_initialization;
class CLASS;
class ENUM;
class FUNCTION;
class IF;
class ELSE;
class LEFT_BRACKET;
class RIGHT_BRACKET;
class LEFT_SQUARE_BRACKET;
class RIGHT_SQUARE_BRACKET;
class LEFT_PARANTHESIS;
class RIGHT_PARANTHESIS;
class COLON;
class SEMICOLON;
class COMMA;
class DOT;
class EQEQ;
class EQ;
class NOTEQ;
class NOT;
class PLUS;
class MINUS;
class DIVIDE;
class MULTIPLY;
class USERDEFINED_OPERATOR;
class VARNAME;
class NUMBER;
class DECIMAL;
class TEXT;
class ESCAPE_CHARS;

}}}

namespace Celeste { namespace ast { namespace relation { 

	template<typename T>
	struct NodeTypeToEnum
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_unknown;
		using type = void;
	};


	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::program>
	{
		constexpr static auto value = ::Celeste::ast::Type::program;
		using type = ::Celeste::ast::node::program;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__stmt__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::stmt;
		using type = ::Celeste::ast::node::stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::meta_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::meta_declaration;
		using type = ::Celeste::ast::node::meta_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__expression__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__expression__;
		using type = ::Celeste::ast::node::deamerreserved_star__expression__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__meta_declaration__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__meta_declaration__;
		using type = ::Celeste::ast::node::deamerreserved_star__meta_declaration__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::expression;
		using type = ::Celeste::ast::node::expression;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_declaration;
		using type = ::Celeste::ast::node::class_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__base_type__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__base_type__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__base_type__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::base_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::base_type;
		using type = ::Celeste::ast::node::base_type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_block;
		using type = ::Celeste::ast::node::class_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__class_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__class_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__class_stmt__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enum_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_declaration;
		using type = ::Celeste::ast::node::enum_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enum_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_block;
		using type = ::Celeste::ast::node::enum_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
		using type = ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_declaration;
		using type = ::Celeste::ast::node::function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____;
		using type = ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_implementation>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_implementation;
		using type = ::Celeste::ast::node::function_implementation;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument;
		using type = ::Celeste::ast::node::function_argument;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::type>
	{
		constexpr static auto value = ::Celeste::ast::Type::type;
		using type = ::Celeste::ast::node::type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_name;
		using type = ::Celeste::ast::node::function_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::return_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::return_type;
		using type = ::Celeste::ast::node::return_type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_block;
		using type = ::Celeste::ast::node::function_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__function_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__function_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__function_stmt__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt;
		using type = ::Celeste::ast::node::class_stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enum_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_stmt;
		using type = ::Celeste::ast::node::enum_stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_stmt;
		using type = ::Celeste::ast::node::function_stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::logical_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::logical_stmt;
		using type = ::Celeste::ast::node::logical_stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::condtional_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::condtional_declaration;
		using type = ::Celeste::ast::node::condtional_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_block;
		using type = ::Celeste::ast::node::conditional_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__condtional_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__condtional_stmt__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::condtional_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::condtional_stmt;
		using type = ::Celeste::ast::node::condtional_stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::variable_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_declaration;
		using type = ::Celeste::ast::node::variable_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::variable_initialization>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_initialization;
		using type = ::Celeste::ast::node::variable_initialization;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::CLASS>
	{
		constexpr static auto value = ::Celeste::ast::Type::CLASS;
		using type = ::Celeste::ast::node::CLASS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ENUM>
	{
		constexpr static auto value = ::Celeste::ast::Type::ENUM;
		using type = ::Celeste::ast::node::ENUM;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::FUNCTION>
	{
		constexpr static auto value = ::Celeste::ast::Type::FUNCTION;
		using type = ::Celeste::ast::node::FUNCTION;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::IF>
	{
		constexpr static auto value = ::Celeste::ast::Type::IF;
		using type = ::Celeste::ast::node::IF;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ELSE>
	{
		constexpr static auto value = ::Celeste::ast::Type::ELSE;
		using type = ::Celeste::ast::node::ELSE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LEFT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_BRACKET;
		using type = ::Celeste::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RIGHT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LEFT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_PARANTHESIS;
		using type = ::Celeste::ast::node::LEFT_PARANTHESIS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RIGHT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_PARANTHESIS;
		using type = ::Celeste::ast::node::RIGHT_PARANTHESIS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::COLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::COLON;
		using type = ::Celeste::ast::node::COLON;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::SEMICOLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::SEMICOLON;
		using type = ::Celeste::ast::node::SEMICOLON;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::COMMA>
	{
		constexpr static auto value = ::Celeste::ast::Type::COMMA;
		using type = ::Celeste::ast::node::COMMA;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::DOT;
		using type = ::Celeste::ast::node::DOT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::EQEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQEQ;
		using type = ::Celeste::ast::node::EQEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::EQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQ;
		using type = ::Celeste::ast::node::EQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NOTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOTEQ;
		using type = ::Celeste::ast::node::NOTEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOT;
		using type = ::Celeste::ast::node::NOT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PLUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUS;
		using type = ::Celeste::ast::node::PLUS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MINUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUS;
		using type = ::Celeste::ast::node::MINUS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DIVIDE>
	{
		constexpr static auto value = ::Celeste::ast::Type::DIVIDE;
		using type = ::Celeste::ast::node::DIVIDE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MULTIPLY>
	{
		constexpr static auto value = ::Celeste::ast::Type::MULTIPLY;
		using type = ::Celeste::ast::node::MULTIPLY;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::USERDEFINED_OPERATOR>
	{
		constexpr static auto value = ::Celeste::ast::Type::USERDEFINED_OPERATOR;
		using type = ::Celeste::ast::node::USERDEFINED_OPERATOR;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::VARNAME>
	{
		constexpr static auto value = ::Celeste::ast::Type::VARNAME;
		using type = ::Celeste::ast::node::VARNAME;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NUMBER>
	{
		constexpr static auto value = ::Celeste::ast::Type::NUMBER;
		using type = ::Celeste::ast::node::NUMBER;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DECIMAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::DECIMAL;
		using type = ::Celeste::ast::node::DECIMAL;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::TEXT>
	{
		constexpr static auto value = ::Celeste::ast::Type::TEXT;
		using type = ::Celeste::ast::node::TEXT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ESCAPE_CHARS>
	{
		constexpr static auto value = ::Celeste::ast::Type::ESCAPE_CHARS;
		using type = ::Celeste::ast::node::ESCAPE_CHARS;
	};


template<typename T>
constexpr static auto NodeTypeToEnum_v = ::Celeste::ast::relation::NodeTypeToEnum<T>::value;

template<typename T>
using NodeTypeToEnum_t = typename ::Celeste::ast::relation::NodeTypeToEnum<T>::type;

}}}

#endif // CELESTE_AST_RELATION_NODETYPETOENUM_H