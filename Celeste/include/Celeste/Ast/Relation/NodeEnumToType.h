#ifndef CELESTE_AST_RELATION_NODEENUMTOTYPE_H
#define CELESTE_AST_RELATION_NODEENUMTOTYPE_H

#include "Celeste/Ast/Enum/Type.h"

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
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__.h"
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


namespace Celeste { namespace ast { namespace relation { 

	template<::Celeste::ast::Type T>
	struct NodeEnumToType
	{
		constexpr static auto value = T;
		using type = void;
	};


	template<>
	struct NodeEnumToType<::Celeste::ast::Type::program>
	{
		constexpr static auto value = ::Celeste::ast::Type::program;
		using type = ::Celeste::ast::node::program;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__stmt__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::stmt;
		using type = ::Celeste::ast::node::stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::meta_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::meta_declaration;
		using type = ::Celeste::ast::node::meta_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__expression__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__expression__;
		using type = ::Celeste::ast::node::deamerreserved_star__expression__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__meta_declaration__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__meta_declaration__;
		using type = ::Celeste::ast::node::deamerreserved_star__meta_declaration__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::expression;
		using type = ::Celeste::ast::node::expression;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_declaration;
		using type = ::Celeste::ast::node::class_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__base_type__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__base_type__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__base_type__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_name;
		using type = ::Celeste::ast::node::class_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::base_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::base_type;
		using type = ::Celeste::ast::node::base_type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_block;
		using type = ::Celeste::ast::node::class_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__class_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__class_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__class_stmt__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enum_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_declaration;
		using type = ::Celeste::ast::node::enum_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enum_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_name;
		using type = ::Celeste::ast::node::enum_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enum_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_block;
		using type = ::Celeste::ast::node::enum_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
		using type = ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_declaration;
		using type = ::Celeste::ast::node::function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____;
		using type = ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_implementation>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_implementation;
		using type = ::Celeste::ast::node::function_implementation;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument;
		using type = ::Celeste::ast::node::function_argument;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_arg_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_arg_type;
		using type = ::Celeste::ast::node::function_arg_type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_arg_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_arg_name;
		using type = ::Celeste::ast::node::function_arg_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::type>
	{
		constexpr static auto value = ::Celeste::ast::Type::type;
		using type = ::Celeste::ast::node::type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_name;
		using type = ::Celeste::ast::node::function_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::return_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::return_type;
		using type = ::Celeste::ast::node::return_type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_block;
		using type = ::Celeste::ast::node::function_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__function_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__function_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__function_stmt__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt;
		using type = ::Celeste::ast::node::class_stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enum_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_stmt;
		using type = ::Celeste::ast::node::enum_stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_stmt;
		using type = ::Celeste::ast::node::function_stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::logical_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::logical_stmt;
		using type = ::Celeste::ast::node::logical_stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::condtional_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::condtional_declaration;
		using type = ::Celeste::ast::node::condtional_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_block;
		using type = ::Celeste::ast::node::conditional_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__condtional_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__condtional_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__condtional_stmt__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::condtional_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::condtional_stmt;
		using type = ::Celeste::ast::node::condtional_stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::variable_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_declaration;
		using type = ::Celeste::ast::node::variable_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::variable_initialization>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_initialization;
		using type = ::Celeste::ast::node::variable_initialization;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::CLASS>
	{
		constexpr static auto value = ::Celeste::ast::Type::CLASS;
		using type = ::Celeste::ast::node::CLASS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ENUM>
	{
		constexpr static auto value = ::Celeste::ast::Type::ENUM;
		using type = ::Celeste::ast::node::ENUM;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::FUNCTION>
	{
		constexpr static auto value = ::Celeste::ast::Type::FUNCTION;
		using type = ::Celeste::ast::node::FUNCTION;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::IF>
	{
		constexpr static auto value = ::Celeste::ast::Type::IF;
		using type = ::Celeste::ast::node::IF;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ELSE>
	{
		constexpr static auto value = ::Celeste::ast::Type::ELSE;
		using type = ::Celeste::ast::node::ELSE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LEFT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_BRACKET;
		using type = ::Celeste::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RIGHT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LEFT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_PARANTHESIS;
		using type = ::Celeste::ast::node::LEFT_PARANTHESIS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RIGHT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_PARANTHESIS;
		using type = ::Celeste::ast::node::RIGHT_PARANTHESIS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::COLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::COLON;
		using type = ::Celeste::ast::node::COLON;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::SEMICOLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::SEMICOLON;
		using type = ::Celeste::ast::node::SEMICOLON;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::COMMA>
	{
		constexpr static auto value = ::Celeste::ast::Type::COMMA;
		using type = ::Celeste::ast::node::COMMA;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::DOT;
		using type = ::Celeste::ast::node::DOT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::EQEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQEQ;
		using type = ::Celeste::ast::node::EQEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::EQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQ;
		using type = ::Celeste::ast::node::EQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NOTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOTEQ;
		using type = ::Celeste::ast::node::NOTEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOT;
		using type = ::Celeste::ast::node::NOT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PLUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUS;
		using type = ::Celeste::ast::node::PLUS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MINUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUS;
		using type = ::Celeste::ast::node::MINUS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DIVIDE>
	{
		constexpr static auto value = ::Celeste::ast::Type::DIVIDE;
		using type = ::Celeste::ast::node::DIVIDE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MULTIPLY>
	{
		constexpr static auto value = ::Celeste::ast::Type::MULTIPLY;
		using type = ::Celeste::ast::node::MULTIPLY;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::USERDEFINED_OPERATOR>
	{
		constexpr static auto value = ::Celeste::ast::Type::USERDEFINED_OPERATOR;
		using type = ::Celeste::ast::node::USERDEFINED_OPERATOR;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::VARNAME>
	{
		constexpr static auto value = ::Celeste::ast::Type::VARNAME;
		using type = ::Celeste::ast::node::VARNAME;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NUMBER>
	{
		constexpr static auto value = ::Celeste::ast::Type::NUMBER;
		using type = ::Celeste::ast::node::NUMBER;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DECIMAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::DECIMAL;
		using type = ::Celeste::ast::node::DECIMAL;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::TEXT>
	{
		constexpr static auto value = ::Celeste::ast::Type::TEXT;
		using type = ::Celeste::ast::node::TEXT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ESCAPE_CHARS>
	{
		constexpr static auto value = ::Celeste::ast::Type::ESCAPE_CHARS;
		using type = ::Celeste::ast::node::ESCAPE_CHARS;
	};


template<::Celeste::ast::Type T>
constexpr static auto NodeEnumToType_v = ::Celeste::ast::relation::NodeEnumToType<T>::value;

template<::Celeste::ast::Type T>
using NodeEnumToType_t = typename ::Celeste::ast::relation::NodeEnumToType<T>::type;

}}}

#endif // CELESTE_AST_RELATION_NODEENUMTOTYPE_H