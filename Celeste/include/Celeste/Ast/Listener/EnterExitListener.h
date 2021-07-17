#ifndef CELESTE_AST_LISTENER_ENTEREXITLISTENER_H
#define CELESTE_AST_LISTENER_ENTEREXITLISTENER_H

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


namespace Celeste { namespace ast { namespace listener { 

	class EnterExitListener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		EnterExitListener() = default;
		~EnterExitListener() override = default;

	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node)  override
		{
			const auto enumeratedValue = static_cast<Celeste::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case Celeste::ast::Type::CLASS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::CLASS*>(node));
				break;
			}

			case Celeste::ast::Type::ENUM:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ENUM*>(node));
				break;
			}

			case Celeste::ast::Type::FUNCTION:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				break;
			}

			case Celeste::ast::Type::IF:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::IF*>(node));
				break;
			}

			case Celeste::ast::Type::ELSE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ELSE*>(node));
				break;
			}

			case Celeste::ast::Type::LEFT_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LEFT_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::RIGHT_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RIGHT_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::LEFT_SQUARE_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::LEFT_PARANTHESIS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}

			case Celeste::ast::Type::RIGHT_PARANTHESIS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}

			case Celeste::ast::Type::COLON:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::COLON*>(node));
				break;
			}

			case Celeste::ast::Type::SEMICOLON:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::SEMICOLON*>(node));
				break;
			}

			case Celeste::ast::Type::COMMA:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::COMMA*>(node));
				break;
			}

			case Celeste::ast::Type::DOT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DOT*>(node));
				break;
			}

			case Celeste::ast::Type::EQEQ:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::EQEQ*>(node));
				break;
			}

			case Celeste::ast::Type::EQ:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::EQ*>(node));
				break;
			}

			case Celeste::ast::Type::NOTEQ:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NOTEQ*>(node));
				break;
			}

			case Celeste::ast::Type::NOT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NOT*>(node));
				break;
			}

			case Celeste::ast::Type::PLUS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PLUS*>(node));
				break;
			}

			case Celeste::ast::Type::MINUS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MINUS*>(node));
				break;
			}

			case Celeste::ast::Type::DIVIDE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DIVIDE*>(node));
				break;
			}

			case Celeste::ast::Type::MULTIPLY:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MULTIPLY*>(node));
				break;
			}

			case Celeste::ast::Type::USERDEFINED_OPERATOR:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::USERDEFINED_OPERATOR*>(node));
				break;
			}

			case Celeste::ast::Type::VARNAME:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::VARNAME*>(node));
				break;
			}

			case Celeste::ast::Type::NUMBER:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NUMBER*>(node));
				break;
			}

			case Celeste::ast::Type::DECIMAL:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DECIMAL*>(node));
				break;
			}

			case Celeste::ast::Type::TEXT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::TEXT*>(node));
				break;
			}

			case Celeste::ast::Type::ESCAPE_CHARS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ESCAPE_CHARS*>(node));
				break;
			}


			// Nonterminal cases
			
			case Celeste::ast::Type::program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::program*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__stmt__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::meta_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::meta_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::meta_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__expression__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__expression__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__expression__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__meta_declaration__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__meta_declaration__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__meta_declaration__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::expression:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::expression*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::expression*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__base_type__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__base_type__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__base_type__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::base_type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::base_type*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::base_type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_block*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enum_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enum_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enum_block*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enum_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_implementation:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_implementation*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_implementation*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_argument*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::type*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_name*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::return_type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::return_type*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::return_type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_block*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__function_stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__function_stmt__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__function_stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enum_stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enum_stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enum_stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::logical_stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::logical_stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::logical_stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::condtional_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::condtional_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::condtional_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_block*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__condtional_stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__condtional_stmt__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__condtional_stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::condtional_stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::condtional_stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::condtional_stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::variable_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::variable_initialization:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::variable_initialization*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::variable_initialization*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const Celeste::ast::node::CLASS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ENUM* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::FUNCTION* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::IF* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ELSE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::LEFT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::RIGHT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::LEFT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::RIGHT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::LEFT_PARANTHESIS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::RIGHT_PARANTHESIS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::COLON* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::SEMICOLON* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::COMMA* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::DOT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::EQEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::EQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::NOTEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::NOT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PLUS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::MINUS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::DIVIDE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::MULTIPLY* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::USERDEFINED_OPERATOR* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::NUMBER* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::DECIMAL* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::TEXT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ESCAPE_CHARS* node) 
		{
		}

		

		
		virtual void ListenEntry(const Celeste::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__stmt__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::meta_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__expression__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__meta_declaration__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::expression* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__base_type__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::base_type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__class_stmt__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enum_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enum_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_implementation* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::return_type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__function_stmt__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enum_stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::logical_stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::condtional_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__condtional_stmt__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::condtional_stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::variable_initialization* node) 
		{
		}

		
		virtual void ListenExit(const Celeste::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__stmt__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::meta_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__expression__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__meta_declaration__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::expression* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__base_type__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::base_type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__class_stmt__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enum_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enum_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_implementation* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::return_type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__function_stmt__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enum_stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::logical_stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::condtional_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__condtional_stmt__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::condtional_stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::variable_initialization* node) 
		{
		}


		
		virtual void EnterTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterAnything(const ::deamer::external::cpp::ast::Node* node) 
		{
		}

		virtual void ExitAnything(const ::deamer::external::cpp::ast::Node* node) 
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

#endif // CELESTE_AST_LISTENER_ENTEREXITLISTENER_H