#ifndef Celeste_AST_LISTENER_DEAMER_LISTENER_H
#define Celeste_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
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

namespace Celeste { namespace ast { namespace listener { 

	class Listener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		Listener() = default;
		~Listener() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<Celeste::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case Celeste::ast::Type::CLASS:
			{
				Listen(static_cast<const Celeste::ast::node::CLASS*>(node));
				break;
			}
			case Celeste::ast::Type::ENUM:
			{
				Listen(static_cast<const Celeste::ast::node::ENUM*>(node));
				break;
			}
			case Celeste::ast::Type::FUNCTION:
			{
				Listen(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				break;
			}
			case Celeste::ast::Type::IF:
			{
				Listen(static_cast<const Celeste::ast::node::IF*>(node));
				break;
			}
			case Celeste::ast::Type::ELSE:
			{
				Listen(static_cast<const Celeste::ast::node::ELSE*>(node));
				break;
			}
			case Celeste::ast::Type::LEFT_BRACKET:
			{
				Listen(static_cast<const Celeste::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::RIGHT_BRACKET:
			{
				Listen(static_cast<const Celeste::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Listen(static_cast<const Celeste::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Listen(static_cast<const Celeste::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case Celeste::ast::Type::LEFT_PARANTHESIS:
			{
				Listen(static_cast<const Celeste::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}
			case Celeste::ast::Type::RIGHT_PARANTHESIS:
			{
				Listen(static_cast<const Celeste::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}
			case Celeste::ast::Type::COLON:
			{
				Listen(static_cast<const Celeste::ast::node::COLON*>(node));
				break;
			}
			case Celeste::ast::Type::SEMICOLON:
			{
				Listen(static_cast<const Celeste::ast::node::SEMICOLON*>(node));
				break;
			}
			case Celeste::ast::Type::COMMA:
			{
				Listen(static_cast<const Celeste::ast::node::COMMA*>(node));
				break;
			}
			case Celeste::ast::Type::DOT:
			{
				Listen(static_cast<const Celeste::ast::node::DOT*>(node));
				break;
			}
			case Celeste::ast::Type::EQEQ:
			{
				Listen(static_cast<const Celeste::ast::node::EQEQ*>(node));
				break;
			}
			case Celeste::ast::Type::EQ:
			{
				Listen(static_cast<const Celeste::ast::node::EQ*>(node));
				break;
			}
			case Celeste::ast::Type::NOTEQ:
			{
				Listen(static_cast<const Celeste::ast::node::NOTEQ*>(node));
				break;
			}
			case Celeste::ast::Type::NOT:
			{
				Listen(static_cast<const Celeste::ast::node::NOT*>(node));
				break;
			}
			case Celeste::ast::Type::PLUS:
			{
				Listen(static_cast<const Celeste::ast::node::PLUS*>(node));
				break;
			}
			case Celeste::ast::Type::MINUS:
			{
				Listen(static_cast<const Celeste::ast::node::MINUS*>(node));
				break;
			}
			case Celeste::ast::Type::DIVIDE:
			{
				Listen(static_cast<const Celeste::ast::node::DIVIDE*>(node));
				break;
			}
			case Celeste::ast::Type::MULTIPLY:
			{
				Listen(static_cast<const Celeste::ast::node::MULTIPLY*>(node));
				break;
			}
			case Celeste::ast::Type::USERDEFINED_OPERATOR:
			{
				Listen(static_cast<const Celeste::ast::node::USERDEFINED_OPERATOR*>(node));
				break;
			}
			case Celeste::ast::Type::VARNAME:
			{
				Listen(static_cast<const Celeste::ast::node::VARNAME*>(node));
				break;
			}
			case Celeste::ast::Type::NUMBER:
			{
				Listen(static_cast<const Celeste::ast::node::NUMBER*>(node));
				break;
			}
			case Celeste::ast::Type::DECIMAL:
			{
				Listen(static_cast<const Celeste::ast::node::DECIMAL*>(node));
				break;
			}
			case Celeste::ast::Type::TEXT:
			{
				Listen(static_cast<const Celeste::ast::node::TEXT*>(node));
				break;
			}
			case Celeste::ast::Type::ESCAPE_CHARS:
			{
				Listen(static_cast<const Celeste::ast::node::ESCAPE_CHARS*>(node));
				break;
			}

			case Celeste::ast::Type::program:
			{
				Listen(static_cast<const Celeste::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__stmt__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__stmt__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::stmt:
			{
				Listen(static_cast<const Celeste::ast::node::stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::meta_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::meta_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__expression__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__expression__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__meta_declaration__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__meta_declaration__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::expression:
			{
				Listen(static_cast<const Celeste::ast::node::expression*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::class_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__base_type__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__base_type__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__base_type__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__base_type__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_name:
			{
				Listen(static_cast<const Celeste::ast::node::class_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::base_type:
			{
				Listen(static_cast<const Celeste::ast::node::base_type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_block:
			{
				Listen(static_cast<const Celeste::ast::node::class_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enum_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enum_name:
			{
				Listen(static_cast<const Celeste::ast::node::enum_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enum_block:
			{
				Listen(static_cast<const Celeste::ast::node::enum_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_implementation:
			{
				Listen(static_cast<const Celeste::ast::node::function_implementation*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_argument:
			{
				Listen(static_cast<const Celeste::ast::node::function_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_arg_type:
			{
				Listen(static_cast<const Celeste::ast::node::function_arg_type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_arg_name:
			{
				Listen(static_cast<const Celeste::ast::node::function_arg_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::type:
			{
				Listen(static_cast<const Celeste::ast::node::type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_name:
			{
				Listen(static_cast<const Celeste::ast::node::function_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::return_type:
			{
				Listen(static_cast<const Celeste::ast::node::return_type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_block:
			{
				Listen(static_cast<const Celeste::ast::node::function_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__function_stmt__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__function_stmt__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_stmt:
			{
				Listen(static_cast<const Celeste::ast::node::class_stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enum_stmt:
			{
				Listen(static_cast<const Celeste::ast::node::enum_stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_stmt:
			{
				Listen(static_cast<const Celeste::ast::node::function_stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::logical_stmt:
			{
				Listen(static_cast<const Celeste::ast::node::logical_stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::condtional_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::condtional_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_block:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__condtional_stmt__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__condtional_stmt__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::condtional_stmt:
			{
				Listen(static_cast<const Celeste::ast::node::condtional_stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::variable_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::variable_initialization:
			{
				Listen(static_cast<const Celeste::ast::node::variable_initialization*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const Celeste::ast::node::CLASS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ENUM* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::FUNCTION* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::IF* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ELSE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::LEFT_SQUARE_BRACKET* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::RIGHT_SQUARE_BRACKET* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::LEFT_PARANTHESIS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::RIGHT_PARANTHESIS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::COLON* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::SEMICOLON* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::COMMA* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::DOT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::EQEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::EQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::NOTEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::NOT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PLUS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::MINUS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::DIVIDE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::MULTIPLY* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::USERDEFINED_OPERATOR* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::VARNAME* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::NUMBER* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::DECIMAL* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::TEXT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ESCAPE_CHARS* node)
		{
		}

		virtual void Listen(const Celeste::ast::node::program* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__stmt__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::meta_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__expression__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__meta_declaration__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::expression* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__base_type__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__base_type__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::base_type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__class_stmt__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enum_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enum_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enum_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_implementation* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_arg_type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_arg_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::return_type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__function_stmt__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enum_stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::logical_stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::condtional_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__condtional_stmt__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::condtional_stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::variable_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::variable_initialization* node)
		{
		}
	private:
		void DefaultAction(const ::deamer::external::cpp::ast::Node* node)
		{
			for(const auto* child : node->GetNodes())
			{
				Dispatch(child);
			}
		}
	};

}}}

#endif // Celeste_AST_LISTENER_DEAMER_LISTENER_H
