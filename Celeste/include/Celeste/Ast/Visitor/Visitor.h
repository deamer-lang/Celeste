#ifndef Celeste_AST_VISITOR_DEAMER_VISITOR_H
#define Celeste_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
#include "Celeste/Ast/Node/Celeste.h"
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
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__.h"
#include "Celeste/Ast/Node/base_type.h"
#include "Celeste/Ast/Node/class_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/enum_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__deamerreserved_optional__function_argument____.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__function_argument__.h"
#include "Celeste/Ast/Node/function_implementation.h"
#include "Celeste/Ast/Node/function_argument.h"
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

namespace Celeste { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<Celeste::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case Celeste::ast::Type::CLASS:
			{
				Visit(static_cast<const Celeste::ast::node::CLASS*>(node));
				break;
			}
			case Celeste::ast::Type::ENUM:
			{
				Visit(static_cast<const Celeste::ast::node::ENUM*>(node));
				break;
			}
			case Celeste::ast::Type::FUNCTION:
			{
				Visit(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				break;
			}
			case Celeste::ast::Type::IF:
			{
				Visit(static_cast<const Celeste::ast::node::IF*>(node));
				break;
			}
			case Celeste::ast::Type::ELSE:
			{
				Visit(static_cast<const Celeste::ast::node::ELSE*>(node));
				break;
			}
			case Celeste::ast::Type::LEFT_BRACKET:
			{
				Visit(static_cast<const Celeste::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::RIGHT_BRACKET:
			{
				Visit(static_cast<const Celeste::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Visit(static_cast<const Celeste::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Visit(static_cast<const Celeste::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::LEFT_PARANTHESIS:
			{
				Visit(static_cast<const Celeste::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}
			case Celeste::ast::Type::RIGHT_PARANTHESIS:
			{
				Visit(static_cast<const Celeste::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}
			case Celeste::ast::Type::COLON:
			{
				Visit(static_cast<const Celeste::ast::node::COLON*>(node));
				break;
			}
			case Celeste::ast::Type::SEMICOLON:
			{
				Visit(static_cast<const Celeste::ast::node::SEMICOLON*>(node));
				break;
			}
			case Celeste::ast::Type::COMMA:
			{
				Visit(static_cast<const Celeste::ast::node::COMMA*>(node));
				break;
			}
			case Celeste::ast::Type::DOT:
			{
				Visit(static_cast<const Celeste::ast::node::DOT*>(node));
				break;
			}
			case Celeste::ast::Type::EQEQ:
			{
				Visit(static_cast<const Celeste::ast::node::EQEQ*>(node));
				break;
			}
			case Celeste::ast::Type::EQ:
			{
				Visit(static_cast<const Celeste::ast::node::EQ*>(node));
				break;
			}
			case Celeste::ast::Type::NOTEQ:
			{
				Visit(static_cast<const Celeste::ast::node::NOTEQ*>(node));
				break;
			}
			case Celeste::ast::Type::NOT:
			{
				Visit(static_cast<const Celeste::ast::node::NOT*>(node));
				break;
			}
			case Celeste::ast::Type::PLUS:
			{
				Visit(static_cast<const Celeste::ast::node::PLUS*>(node));
				break;
			}
			case Celeste::ast::Type::MINUS:
			{
				Visit(static_cast<const Celeste::ast::node::MINUS*>(node));
				break;
			}
			case Celeste::ast::Type::DIVIDE:
			{
				Visit(static_cast<const Celeste::ast::node::DIVIDE*>(node));
				break;
			}
			case Celeste::ast::Type::MULTIPLY:
			{
				Visit(static_cast<const Celeste::ast::node::MULTIPLY*>(node));
				break;
			}
			case Celeste::ast::Type::USERDEFINED_OPERATOR:
			{
				Visit(static_cast<const Celeste::ast::node::USERDEFINED_OPERATOR*>(node));
				break;
			}
			case Celeste::ast::Type::VARNAME:
			{
				Visit(static_cast<const Celeste::ast::node::VARNAME*>(node));
				break;
			}
			case Celeste::ast::Type::NUMBER:
			{
				Visit(static_cast<const Celeste::ast::node::NUMBER*>(node));
				break;
			}
			case Celeste::ast::Type::DECIMAL:
			{
				Visit(static_cast<const Celeste::ast::node::DECIMAL*>(node));
				break;
			}
			case Celeste::ast::Type::TEXT:
			{
				Visit(static_cast<const Celeste::ast::node::TEXT*>(node));
				break;
			}
			case Celeste::ast::Type::ESCAPE_CHARS:
			{
				Visit(static_cast<const Celeste::ast::node::ESCAPE_CHARS*>(node));
				break;
			}

			case Celeste::ast::Type::program:
			{
				Visit(static_cast<const Celeste::ast::node::program*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__stmt__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__stmt__*>(node));
				break;
			}
			case Celeste::ast::Type::stmt:
			{
				Visit(static_cast<const Celeste::ast::node::stmt*>(node));
				break;
			}
			case Celeste::ast::Type::meta_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::meta_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__expression__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__expression__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__meta_declaration__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__meta_declaration__*>(node));
				break;
			}
			case Celeste::ast::Type::expression:
			{
				Visit(static_cast<const Celeste::ast::node::expression*>(node));
				break;
			}
			case Celeste::ast::Type::class_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::class_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__base_type__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__base_type__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__*>(node));
				break;
			}
			case Celeste::ast::Type::base_type:
			{
				Visit(static_cast<const Celeste::ast::node::base_type*>(node));
				break;
			}
			case Celeste::ast::Type::class_block:
			{
				Visit(static_cast<const Celeste::ast::node::class_block*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				break;
			}
			case Celeste::ast::Type::enum_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::enum_block:
			{
				Visit(static_cast<const Celeste::ast::node::enum_block*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*>(node));
				break;
			}
			case Celeste::ast::Type::function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::function_implementation:
			{
				Visit(static_cast<const Celeste::ast::node::function_implementation*>(node));
				break;
			}
			case Celeste::ast::Type::function_argument:
			{
				Visit(static_cast<const Celeste::ast::node::function_argument*>(node));
				break;
			}
			case Celeste::ast::Type::type:
			{
				Visit(static_cast<const Celeste::ast::node::type*>(node));
				break;
			}
			case Celeste::ast::Type::function_name:
			{
				Visit(static_cast<const Celeste::ast::node::function_name*>(node));
				break;
			}
			case Celeste::ast::Type::return_type:
			{
				Visit(static_cast<const Celeste::ast::node::return_type*>(node));
				break;
			}
			case Celeste::ast::Type::function_block:
			{
				Visit(static_cast<const Celeste::ast::node::function_block*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__function_stmt__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__function_stmt__*>(node));
				break;
			}
			case Celeste::ast::Type::class_stmt:
			{
				Visit(static_cast<const Celeste::ast::node::class_stmt*>(node));
				break;
			}
			case Celeste::ast::Type::enum_stmt:
			{
				Visit(static_cast<const Celeste::ast::node::enum_stmt*>(node));
				break;
			}
			case Celeste::ast::Type::function_stmt:
			{
				Visit(static_cast<const Celeste::ast::node::function_stmt*>(node));
				break;
			}
			case Celeste::ast::Type::logical_stmt:
			{
				Visit(static_cast<const Celeste::ast::node::logical_stmt*>(node));
				break;
			}
			case Celeste::ast::Type::condtional_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::condtional_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_block:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_block*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__condtional_stmt__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__condtional_stmt__*>(node));
				break;
			}
			case Celeste::ast::Type::condtional_stmt:
			{
				Visit(static_cast<const Celeste::ast::node::condtional_stmt*>(node));
				break;
			}
			case Celeste::ast::Type::variable_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::variable_initialization:
			{
				Visit(static_cast<const Celeste::ast::node::variable_initialization*>(node));
				break;
			}
			}
		}
		virtual void Visit(const Celeste::ast::node::CLASS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ENUM* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::FUNCTION* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::IF* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ELSE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::LEFT_SQUARE_BRACKET* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::RIGHT_SQUARE_BRACKET* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::LEFT_PARANTHESIS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::RIGHT_PARANTHESIS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::COLON* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::SEMICOLON* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::COMMA* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::DOT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::EQEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::EQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::NOTEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::NOT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PLUS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::MINUS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::DIVIDE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::MULTIPLY* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::USERDEFINED_OPERATOR* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::VARNAME* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::NUMBER* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::DECIMAL* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::TEXT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ESCAPE_CHARS* node)
		{
		}

		virtual void Visit(const Celeste::ast::node::program* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__stmt__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::meta_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__expression__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__meta_declaration__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::expression* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__base_type__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::base_type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__class_stmt__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enum_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enum_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_implementation* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::return_type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__function_stmt__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enum_stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::logical_stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::condtional_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__condtional_stmt__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::condtional_stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::variable_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::variable_initialization* node)
		{
		}
	};

}}}

#endif // Celeste_AST_VISITOR_DEAMER_VISITOR_H
