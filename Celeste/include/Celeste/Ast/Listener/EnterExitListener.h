#ifndef CELESTE_AST_LISTENER_ENTEREXITLISTENER_H
#define CELESTE_AST_LISTENER_ENTEREXITLISTENER_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Enum/Type.h"

#include "Celeste/Ast/Node/SINGLE_COMMENT.h"
#include "Celeste/Ast/Node/MULTI_COMMENT.h"
#include "Celeste/Ast/Node/CONSTANT.h"
#include "Celeste/Ast/Node/FUNCTION.h"
#include "Celeste/Ast/Node/CLASS.h"
#include "Celeste/Ast/Node/ENUM.h"
#include "Celeste/Ast/Node/CONDITIONAL.h"
#include "Celeste/Ast/Node/CODE.h"
#include "Celeste/Ast/Node/ATTRIBUTETOK.h"
#include "Celeste/Ast/Node/RUNTIME.h"
#include "Celeste/Ast/Node/STATIC.h"
#include "Celeste/Ast/Node/AUTO.h"
#include "Celeste/Ast/Node/AUTOTYPE.h"
#include "Celeste/Ast/Node/TEMPLATE.h"
#include "Celeste/Ast/Node/NAMESPACE.h"
#include "Celeste/Ast/Node/OPERATORNAME.h"
#include "Celeste/Ast/Node/OVERRIDE.h"
#include "Celeste/Ast/Node/VIRTUAL.h"
#include "Celeste/Ast/Node/PURE.h"
#include "Celeste/Ast/Node/AS.h"
#include "Celeste/Ast/Node/IN.h"
#include "Celeste/Ast/Node/DISPLAY.h"
#include "Celeste/Ast/Node/RETURN.h"
#include "Celeste/Ast/Node/FOR.h"
#include "Celeste/Ast/Node/IF.h"
#include "Celeste/Ast/Node/ELSEIF.h"
#include "Celeste/Ast/Node/ELSE.h"
#include "Celeste/Ast/Node/INLINE.h"
#include "Celeste/Ast/Node/CONSTRUCTOR.h"
#include "Celeste/Ast/Node/FILE_.h"
#include "Celeste/Ast/Node/PROGRAM_.h"
#include "Celeste/Ast/Node/IMPORT.h"
#include "Celeste/Ast/Node/PUBLIC.h"
#include "Celeste/Ast/Node/PROTECTED.h"
#include "Celeste/Ast/Node/PRIVATE.h"
#include "Celeste/Ast/Node/INHERIT.h"
#include "Celeste/Ast/Node/COMPOSITE.h"
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
#include "Celeste/Ast/Node/LTEQ.h"
#include "Celeste/Ast/Node/GTEQ.h"
#include "Celeste/Ast/Node/LT.h"
#include "Celeste/Ast/Node/GT.h"
#include "Celeste/Ast/Node/PLUSEQ.h"
#include "Celeste/Ast/Node/MINUSEQ.h"
#include "Celeste/Ast/Node/MULTIPLYEQ.h"
#include "Celeste/Ast/Node/DIVIDEEQ.h"
#include "Celeste/Ast/Node/EQEQ.h"
#include "Celeste/Ast/Node/EQ.h"
#include "Celeste/Ast/Node/NOTEQ.h"
#include "Celeste/Ast/Node/NOT.h"
#include "Celeste/Ast/Node/PLUSPLUS.h"
#include "Celeste/Ast/Node/PLUS.h"
#include "Celeste/Ast/Node/MINUSMINUS.h"
#include "Celeste/Ast/Node/MINUS.h"
#include "Celeste/Ast/Node/DIVIDE.h"
#include "Celeste/Ast/Node/MULTIPLY.h"
#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/NUMBER.h"
#include "Celeste/Ast/Node/DECIMAL.h"
#include "Celeste/Ast/Node/TEXT.h"
#include "Celeste/Ast/Node/ESCAPE_CHARS.h"


#include "Celeste/Ast/Node/program.h"
#include "Celeste/Ast/Node/root_program.h"
#include "Celeste/Ast/Node/standard_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__stmt__.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/import_statement.h"
#include "Celeste/Ast/Node/file_import.h"
#include "Celeste/Ast/Node/mutation_group.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__symbol_reference__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__symbol_reference__.h"
#include "Celeste/Ast/Node/assignment.h"
#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ast/Node/conditional_if.h"
#include "Celeste/Ast/Node/conditional_else_if.h"
#include "Celeste/Ast/Node/conditional_else.h"
#include "Celeste/Ast/Node/conditional_block.h"
#include "Celeste/Ast/Node/template_conditional_function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__template_parameter__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__template_parameter__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__conditional_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__conditional_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__function_argument__.h"
#include "Celeste/Ast/Node/conditional_function_declaration.h"
#include "Celeste/Ast/Node/template_code_function_declaration.h"
#include "Celeste/Ast/Node/code_function_declaration.h"
#include "Celeste/Ast/Node/return_statement.h"
#include "Celeste/Ast/Node/symbol_increase.h"
#include "Celeste/Ast/Node/symbol_decrease.h"
#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ast/Node/expression_no_value.h"
#include "Celeste/Ast/Node/t_expression.h"
#include "Celeste/Ast/Node/f_expression.h"
#include "Celeste/Ast/Node/display_call.h"
#include "Celeste/Ast/Node/for_loop.h"
#include "Celeste/Ast/Node/for_iteration_loop.h"
#include "Celeste/Ast/Node/for_each_loop.h"
#include "Celeste/Ast/Node/for_variable.h"
#include "Celeste/Ast/Node/iterator.h"
#include "Celeste/Ast/Node/for_block.h"
#include "Celeste/Ast/Node/namespace_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__namespace_name__.h"
#include "Celeste/Ast/Node/deamerreserved_star__DOT__namespace_name__.h"
#include "Celeste/Ast/Node/namespace_block.h"
#include "Celeste/Ast/Node/namespace_name.h"
#include "Celeste/Ast/Node/inline_class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__inline_class_declaration_composite__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__inline_class_declaration_composite__.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__inline_class_declaration_composite_alias__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__inline_class_declaration_composite_alias__.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite_alias.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite_name.h"
#include "Celeste/Ast/Node/created_class_name.h"
#include "Celeste/Ast/Node/code_block.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__code_block_input_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__code_block_input_argument__.h"
#include "Celeste/Ast/Node/code_block_input_argument.h"
#include "Celeste/Ast/Node/code_block_argument.h"
#include "Celeste/Ast/Node/code_block_argument_name.h"
#include "Celeste/Ast/Node/code_block_program.h"
#include "Celeste/Ast/Node/variable_declaration.h"
#include "Celeste/Ast/Node/array_declaration.h"
#include "Celeste/Ast/Node/variable_name.h"
#include "Celeste/Ast/Node/template_function_declaration.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/trailing_return_type.h"
#include "Celeste/Ast/Node/return_type.h"
#include "Celeste/Ast/Node/conditional_function_argument.h"
#include "Celeste/Ast/Node/function_argument.h"
#include "Celeste/Ast/Node/function_argument_type.h"
#include "Celeste/Ast/Node/function_argument_name.h"
#include "Celeste/Ast/Node/condition_modifier_function_call.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__condition_modifier_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__condition_modifier_argument__.h"
#include "Celeste/Ast/Node/condition_modifier_name.h"
#include "Celeste/Ast/Node/condition_modifier_argument.h"
#include "Celeste/Ast/Node/function_body.h"
#include "Celeste/Ast/Node/function_name.h"
#include "Celeste/Ast/Node/template_class_declaration.h"
#include "Celeste/Ast/Node/template_parameter.h"
#include "Celeste/Ast/Node/template_parameter_name.h"
#include "Celeste/Ast/Node/class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__class_inherit_base__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__class_inherit_base__.h"
#include "Celeste/Ast/Node/class_name.h"
#include "Celeste/Ast/Node/execution_keyword_permutation.h"
#include "Celeste/Ast/Node/class_body.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include "Celeste/Ast/Node/class_stmt_member_field_declaration.h"
#include "Celeste/Ast/Node/member_field_name.h"
#include "Celeste/Ast/Node/class_stmt_member_function.h"
#include "Celeste/Ast/Node/class_stmt_member_template_function.h"
#include "Celeste/Ast/Node/template_class_stmt_constructor.h"
#include "Celeste/Ast/Node/class_stmt_constructor.h"
#include "Celeste/Ast/Node/accessibility.h"
#include "Celeste/Ast/Node/class_inherit_base.h"
#include "Celeste/Ast/Node/inherit_base.h"
#include "Celeste/Ast/Node/inherit_base_name.h"
#include "Celeste/Ast/Node/compound_base.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__compound_base_alias__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__compound_base_alias__.h"
#include "Celeste/Ast/Node/compound_base_name.h"
#include "Celeste/Ast/Node/compound_base_alias.h"
#include "Celeste/Ast/Node/attribute_section.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__attribute__.h"
#include "Celeste/Ast/Node/deamerreserved_star__deamerreserved_optional__COMMA____attribute__.h"
#include "Celeste/Ast/Node/attribute.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__attribute_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__attribute_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__attribute_template_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__attribute_template_argument__.h"
#include "Celeste/Ast/Node/attribute_argument.h"
#include "Celeste/Ast/Node/attribute_template_argument.h"
#include "Celeste/Ast/Node/attribute_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__attribute_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__attribute_function_argument__.h"
#include "Celeste/Ast/Node/attribute_function_argument.h"
#include "Celeste/Ast/Node/attribute_name.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_star__enumeration__.h"
#include "Celeste/Ast/Node/enum_name.h"
#include "Celeste/Ast/Node/enumeration.h"
#include "Celeste/Ast/Node/enumeration_name.h"
#include "Celeste/Ast/Node/enumeration_value.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__symbol__.h"
#include "Celeste/Ast/Node/deamerreserved_star__DOT__symbol_secondary__.h"
#include "Celeste/Ast/Node/symbol_secondary.h"
#include "Celeste/Ast/Node/deamerreserved_star__symbol_access__.h"
#include "Celeste/Ast/Node/symbol.h"
#include "Celeste/Ast/Node/symbol_access.h"
#include "Celeste/Ast/Node/auto_deduce_array.h"
#include "Celeste/Ast/Node/symbol_name_secondary.h"
#include "Celeste/Ast/Node/symbol_name.h"
#include "Celeste/Ast/Node/function_access.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__expression__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__expression__.h"
#include "Celeste/Ast/Node/index_access.h"
#include "Celeste/Ast/Node/anonymous_access.h"
#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ast/Node/deamerreserved_star__type_modifier__.h"
#include "Celeste/Ast/Node/type_modifier.h"
#include "Celeste/Ast/Node/value_list.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__full_value__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__full_value__.h"
#include "Celeste/Ast/Node/full_value.h"
#include "Celeste/Ast/Node/value.h"
#include "Celeste/Ast/Node/tuple.h"

#include <Deamer/External/Cpp/Ast/Listener.h>
#include <Deamer/Algorithm/Tree/DFS.h>

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
			::deamer::algorithm::tree::DFS::Execute::Heap::Search(node,
				&::deamer::external::cpp::ast::Node::GetParent,
				&::deamer::external::cpp::ast::Node::GetNodes,
				&EnterExitListener::DispatchEntry,
				&EnterExitListener::DispatchExit,
				this);
		}

		void DispatchEntry(const ::deamer::external::cpp::ast::Node* node) 
		{
			const auto enumeratedValue = static_cast<Celeste::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case Celeste::ast::Type::SINGLE_COMMENT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::SINGLE_COMMENT*>(node));
				break;
			}

			case Celeste::ast::Type::MULTI_COMMENT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MULTI_COMMENT*>(node));
				break;
			}

			case Celeste::ast::Type::CONSTANT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::CONSTANT*>(node));
				break;
			}

			case Celeste::ast::Type::FUNCTION:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				break;
			}

			case Celeste::ast::Type::CLASS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::CLASS*>(node));
				break;
			}

			case Celeste::ast::Type::ENUM:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ENUM*>(node));
				break;
			}

			case Celeste::ast::Type::CONDITIONAL:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::CONDITIONAL*>(node));
				break;
			}

			case Celeste::ast::Type::CODE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::CODE*>(node));
				break;
			}

			case Celeste::ast::Type::ATTRIBUTETOK:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ATTRIBUTETOK*>(node));
				break;
			}

			case Celeste::ast::Type::RUNTIME:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RUNTIME*>(node));
				break;
			}

			case Celeste::ast::Type::STATIC:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::STATIC*>(node));
				break;
			}

			case Celeste::ast::Type::AUTO:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::AUTO*>(node));
				break;
			}

			case Celeste::ast::Type::AUTOTYPE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::AUTOTYPE*>(node));
				break;
			}

			case Celeste::ast::Type::TEMPLATE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::TEMPLATE*>(node));
				break;
			}

			case Celeste::ast::Type::NAMESPACE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NAMESPACE*>(node));
				break;
			}

			case Celeste::ast::Type::OPERATORNAME:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::OPERATORNAME*>(node));
				break;
			}

			case Celeste::ast::Type::OVERRIDE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::OVERRIDE*>(node));
				break;
			}

			case Celeste::ast::Type::VIRTUAL:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::VIRTUAL*>(node));
				break;
			}

			case Celeste::ast::Type::PURE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PURE*>(node));
				break;
			}

			case Celeste::ast::Type::AS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::AS*>(node));
				break;
			}

			case Celeste::ast::Type::IN:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::IN*>(node));
				break;
			}

			case Celeste::ast::Type::DISPLAY:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DISPLAY*>(node));
				break;
			}

			case Celeste::ast::Type::RETURN:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RETURN*>(node));
				break;
			}

			case Celeste::ast::Type::FOR:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::FOR*>(node));
				break;
			}

			case Celeste::ast::Type::IF:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::IF*>(node));
				break;
			}

			case Celeste::ast::Type::ELSEIF:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ELSEIF*>(node));
				break;
			}

			case Celeste::ast::Type::ELSE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::ELSE*>(node));
				break;
			}

			case Celeste::ast::Type::INLINE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::INLINE*>(node));
				break;
			}

			case Celeste::ast::Type::CONSTRUCTOR:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::CONSTRUCTOR*>(node));
				break;
			}

			case Celeste::ast::Type::FILE_:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::FILE_*>(node));
				break;
			}

			case Celeste::ast::Type::PROGRAM_:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PROGRAM_*>(node));
				break;
			}

			case Celeste::ast::Type::IMPORT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::IMPORT*>(node));
				break;
			}

			case Celeste::ast::Type::PUBLIC:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PUBLIC*>(node));
				break;
			}

			case Celeste::ast::Type::PROTECTED:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PROTECTED*>(node));
				break;
			}

			case Celeste::ast::Type::PRIVATE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PRIVATE*>(node));
				break;
			}

			case Celeste::ast::Type::INHERIT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::INHERIT*>(node));
				break;
			}

			case Celeste::ast::Type::COMPOSITE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::COMPOSITE*>(node));
				break;
			}

			case Celeste::ast::Type::LEFT_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LEFT_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::RIGHT_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RIGHT_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::LEFT_SQUARE_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}

			case Celeste::ast::Type::LEFT_PARANTHESIS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}

			case Celeste::ast::Type::RIGHT_PARANTHESIS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}

			case Celeste::ast::Type::COLON:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::COLON*>(node));
				break;
			}

			case Celeste::ast::Type::SEMICOLON:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::SEMICOLON*>(node));
				break;
			}

			case Celeste::ast::Type::COMMA:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::COMMA*>(node));
				break;
			}

			case Celeste::ast::Type::DOT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DOT*>(node));
				break;
			}

			case Celeste::ast::Type::LTEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LTEQ*>(node));
				break;
			}

			case Celeste::ast::Type::GTEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::GTEQ*>(node));
				break;
			}

			case Celeste::ast::Type::LT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::LT*>(node));
				break;
			}

			case Celeste::ast::Type::GT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::GT*>(node));
				break;
			}

			case Celeste::ast::Type::PLUSEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PLUSEQ*>(node));
				break;
			}

			case Celeste::ast::Type::MINUSEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MINUSEQ*>(node));
				break;
			}

			case Celeste::ast::Type::MULTIPLYEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MULTIPLYEQ*>(node));
				break;
			}

			case Celeste::ast::Type::DIVIDEEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DIVIDEEQ*>(node));
				break;
			}

			case Celeste::ast::Type::EQEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::EQEQ*>(node));
				break;
			}

			case Celeste::ast::Type::EQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::EQ*>(node));
				break;
			}

			case Celeste::ast::Type::NOTEQ:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NOTEQ*>(node));
				break;
			}

			case Celeste::ast::Type::NOT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NOT*>(node));
				break;
			}

			case Celeste::ast::Type::PLUSPLUS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PLUSPLUS*>(node));
				break;
			}

			case Celeste::ast::Type::PLUS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::PLUS*>(node));
				break;
			}

			case Celeste::ast::Type::MINUSMINUS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MINUSMINUS*>(node));
				break;
			}

			case Celeste::ast::Type::MINUS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MINUS*>(node));
				break;
			}

			case Celeste::ast::Type::DIVIDE:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DIVIDE*>(node));
				break;
			}

			case Celeste::ast::Type::MULTIPLY:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::MULTIPLY*>(node));
				break;
			}

			case Celeste::ast::Type::VARNAME:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::VARNAME*>(node));
				break;
			}

			case Celeste::ast::Type::NUMBER:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::NUMBER*>(node));
				break;
			}

			case Celeste::ast::Type::DECIMAL:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::DECIMAL*>(node));
				break;
			}

			case Celeste::ast::Type::TEXT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::TEXT*>(node));
				break;
			}

			case Celeste::ast::Type::ESCAPE_CHARS:
			{
				// Entry terminal
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
				break;
			}

			case Celeste::ast::Type::root_program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::root_program*>(node));
				break;
			}

			case Celeste::ast::Type::standard_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::standard_block*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__stmt__*>(node));
				break;
			}

			case Celeste::ast::Type::stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::stmt*>(node));
				break;
			}

			case Celeste::ast::Type::import_statement:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::import_statement*>(node));
				break;
			}

			case Celeste::ast::Type::file_import:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::file_import*>(node));
				break;
			}

			case Celeste::ast::Type::mutation_group:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::mutation_group*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__symbol_reference__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol_reference__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*>(node));
				break;
			}

			case Celeste::ast::Type::assignment:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::assignment*>(node));
				break;
			}

			case Celeste::ast::Type::assignment_operator:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::assignment_operator*>(node));
				break;
			}

			case Celeste::ast::Type::conditional_if:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_if*>(node));
				break;
			}

			case Celeste::ast::Type::conditional_else_if:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_else_if*>(node));
				break;
			}

			case Celeste::ast::Type::conditional_else:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_else*>(node));
				break;
			}

			case Celeste::ast::Type::conditional_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_block*>(node));
				break;
			}

			case Celeste::ast::Type::template_conditional_function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_conditional_function_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__template_parameter__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__template_parameter__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__function_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::conditional_function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_function_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::template_code_function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_code_function_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::code_function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::code_function_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::return_statement:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::return_statement*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_increase:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_increase*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_decrease:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_decrease*>(node));
				break;
			}

			case Celeste::ast::Type::expression:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::expression*>(node));
				break;
			}

			case Celeste::ast::Type::expression_no_value:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::expression_no_value*>(node));
				break;
			}

			case Celeste::ast::Type::t_expression:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::t_expression*>(node));
				break;
			}

			case Celeste::ast::Type::f_expression:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::f_expression*>(node));
				break;
			}

			case Celeste::ast::Type::display_call:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::display_call*>(node));
				break;
			}

			case Celeste::ast::Type::for_loop:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::for_loop*>(node));
				break;
			}

			case Celeste::ast::Type::for_iteration_loop:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::for_iteration_loop*>(node));
				break;
			}

			case Celeste::ast::Type::for_each_loop:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::for_each_loop*>(node));
				break;
			}

			case Celeste::ast::Type::for_variable:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::for_variable*>(node));
				break;
			}

			case Celeste::ast::Type::iterator:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::iterator*>(node));
				break;
			}

			case Celeste::ast::Type::for_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::for_block*>(node));
				break;
			}

			case Celeste::ast::Type::namespace_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::namespace_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__namespace_name__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__namespace_name__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*>(node));
				break;
			}

			case Celeste::ast::Type::namespace_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::namespace_block*>(node));
				break;
			}

			case Celeste::ast::Type::namespace_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::namespace_name*>(node));
				break;
			}

			case Celeste::ast::Type::inline_class_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::inline_class_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*>(node));
				break;
			}

			case Celeste::ast::Type::inline_class_declaration_composite:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::inline_class_declaration_composite*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*>(node));
				break;
			}

			case Celeste::ast::Type::inline_class_declaration_composite_alias:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::inline_class_declaration_composite_alias*>(node));
				break;
			}

			case Celeste::ast::Type::inline_class_declaration_composite_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::inline_class_declaration_composite_name*>(node));
				break;
			}

			case Celeste::ast::Type::created_class_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::created_class_name*>(node));
				break;
			}

			case Celeste::ast::Type::code_block:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::code_block*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::code_block_input_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::code_block_input_argument*>(node));
				break;
			}

			case Celeste::ast::Type::code_block_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::code_block_argument*>(node));
				break;
			}

			case Celeste::ast::Type::code_block_argument_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::code_block_argument_name*>(node));
				break;
			}

			case Celeste::ast::Type::code_block_program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::code_block_program*>(node));
				break;
			}

			case Celeste::ast::Type::variable_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::array_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::array_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::variable_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::variable_name*>(node));
				break;
			}

			case Celeste::ast::Type::template_function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_function_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::function_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::trailing_return_type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::trailing_return_type*>(node));
				break;
			}

			case Celeste::ast::Type::return_type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::return_type*>(node));
				break;
			}

			case Celeste::ast::Type::conditional_function_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::conditional_function_argument*>(node));
				break;
			}

			case Celeste::ast::Type::function_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_argument*>(node));
				break;
			}

			case Celeste::ast::Type::function_argument_type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_argument_type*>(node));
				break;
			}

			case Celeste::ast::Type::function_argument_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_argument_name*>(node));
				break;
			}

			case Celeste::ast::Type::condition_modifier_function_call:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::condition_modifier_function_call*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::condition_modifier_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::condition_modifier_name*>(node));
				break;
			}

			case Celeste::ast::Type::condition_modifier_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::condition_modifier_argument*>(node));
				break;
			}

			case Celeste::ast::Type::function_body:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_body*>(node));
				break;
			}

			case Celeste::ast::Type::function_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_name*>(node));
				break;
			}

			case Celeste::ast::Type::template_class_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_class_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::template_parameter:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_parameter*>(node));
				break;
			}

			case Celeste::ast::Type::template_parameter_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_parameter_name*>(node));
				break;
			}

			case Celeste::ast::Type::class_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*>(node));
				break;
			}

			case Celeste::ast::Type::class_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_name*>(node));
				break;
			}

			case Celeste::ast::Type::execution_keyword_permutation:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::execution_keyword_permutation*>(node));
				break;
			}

			case Celeste::ast::Type::class_body:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_body*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				break;
			}

			case Celeste::ast::Type::class_stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_stmt*>(node));
				break;
			}

			case Celeste::ast::Type::class_stmt_member_field_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_stmt_member_field_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::member_field_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::member_field_name*>(node));
				break;
			}

			case Celeste::ast::Type::class_stmt_member_function:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_stmt_member_function*>(node));
				break;
			}

			case Celeste::ast::Type::class_stmt_member_template_function:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_stmt_member_template_function*>(node));
				break;
			}

			case Celeste::ast::Type::template_class_stmt_constructor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::template_class_stmt_constructor*>(node));
				break;
			}

			case Celeste::ast::Type::class_stmt_constructor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_stmt_constructor*>(node));
				break;
			}

			case Celeste::ast::Type::accessibility:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::accessibility*>(node));
				break;
			}

			case Celeste::ast::Type::class_inherit_base:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::class_inherit_base*>(node));
				break;
			}

			case Celeste::ast::Type::inherit_base:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::inherit_base*>(node));
				break;
			}

			case Celeste::ast::Type::inherit_base_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::inherit_base_name*>(node));
				break;
			}

			case Celeste::ast::Type::compound_base:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::compound_base*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*>(node));
				break;
			}

			case Celeste::ast::Type::compound_base_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::compound_base_name*>(node));
				break;
			}

			case Celeste::ast::Type::compound_base_alias:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::compound_base_alias*>(node));
				break;
			}

			case Celeste::ast::Type::attribute_section:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute_section*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*>(node));
				break;
			}

			case Celeste::ast::Type::attribute:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::attribute_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute_argument*>(node));
				break;
			}

			case Celeste::ast::Type::attribute_template_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute_template_argument*>(node));
				break;
			}

			case Celeste::ast::Type::attribute_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*>(node));
				break;
			}

			case Celeste::ast::Type::attribute_function_argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute_function_argument*>(node));
				break;
			}

			case Celeste::ast::Type::attribute_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::attribute_name*>(node));
				break;
			}

			case Celeste::ast::Type::enum_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__enumeration__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__enumeration__*>(node));
				break;
			}

			case Celeste::ast::Type::enum_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enum_name*>(node));
				break;
			}

			case Celeste::ast::Type::enumeration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enumeration*>(node));
				break;
			}

			case Celeste::ast::Type::enumeration_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enumeration_name*>(node));
				break;
			}

			case Celeste::ast::Type::enumeration_value:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::enumeration_value*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_reference:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_reference*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__symbol__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_secondary:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_secondary*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__symbol_access__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__symbol_access__*>(node));
				break;
			}

			case Celeste::ast::Type::symbol:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_access:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_access*>(node));
				break;
			}

			case Celeste::ast::Type::auto_deduce_array:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::auto_deduce_array*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_name_secondary:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_name_secondary*>(node));
				break;
			}

			case Celeste::ast::Type::symbol_name:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::symbol_name*>(node));
				break;
			}

			case Celeste::ast::Type::function_access:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::function_access*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__expression__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__expression__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__expression__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__expression__*>(node));
				break;
			}

			case Celeste::ast::Type::index_access:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::index_access*>(node));
				break;
			}

			case Celeste::ast::Type::anonymous_access:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::anonymous_access*>(node));
				break;
			}

			case Celeste::ast::Type::type:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::type*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__type_modifier__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__type_modifier__*>(node));
				break;
			}

			case Celeste::ast::Type::type_modifier:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::type_modifier*>(node));
				break;
			}

			case Celeste::ast::Type::value_list:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::value_list*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__full_value__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_arrow__full_value__*>(node));
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__full_value__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__full_value__*>(node));
				break;
			}

			case Celeste::ast::Type::full_value:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::full_value*>(node));
				break;
			}

			case Celeste::ast::Type::value:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::value*>(node));
				break;
			}

			case Celeste::ast::Type::tuple:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const Celeste::ast::node::tuple*>(node));
				break;
			}

			}
		}

		void DispatchExit(const ::deamer::external::cpp::ast::Node* node) 
		{
			const auto enumeratedValue = static_cast<Celeste::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case Celeste::ast::Type::SINGLE_COMMENT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::SINGLE_COMMENT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::MULTI_COMMENT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::MULTI_COMMENT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::CONSTANT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::CONSTANT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::FUNCTION:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::CLASS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::CLASS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::ENUM:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::ENUM*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::CONDITIONAL:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::CONDITIONAL*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::CODE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::CODE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::ATTRIBUTETOK:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::ATTRIBUTETOK*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::RUNTIME:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::RUNTIME*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::STATIC:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::STATIC*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::AUTO:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::AUTO*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::AUTOTYPE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::AUTOTYPE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::TEMPLATE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::TEMPLATE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::NAMESPACE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::NAMESPACE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::OPERATORNAME:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::OPERATORNAME*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::OVERRIDE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::OVERRIDE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::VIRTUAL:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::VIRTUAL*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PURE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PURE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::AS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::AS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::IN:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::IN*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::DISPLAY:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::DISPLAY*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::RETURN:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::RETURN*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::FOR:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::FOR*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::IF:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::IF*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::ELSEIF:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::ELSEIF*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::ELSE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::ELSE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::INLINE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::INLINE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::CONSTRUCTOR:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::CONSTRUCTOR*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::FILE_:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::FILE_*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PROGRAM_:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PROGRAM_*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::IMPORT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::IMPORT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PUBLIC:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PUBLIC*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PROTECTED:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PROTECTED*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PRIVATE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PRIVATE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::INHERIT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::INHERIT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::COMPOSITE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::COMPOSITE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::LEFT_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::LEFT_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::RIGHT_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::RIGHT_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::LEFT_SQUARE_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::LEFT_SQUARE_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::LEFT_PARANTHESIS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::LEFT_PARANTHESIS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::RIGHT_PARANTHESIS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::RIGHT_PARANTHESIS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::COLON:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::COLON*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::SEMICOLON:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::SEMICOLON*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::COMMA:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::COMMA*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::DOT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::DOT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::LTEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::LTEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::GTEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::GTEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::LT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::LT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::GT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::GT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PLUSEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PLUSEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::MINUSEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::MINUSEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::MULTIPLYEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::MULTIPLYEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::DIVIDEEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::DIVIDEEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::EQEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::EQEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::EQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::EQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::NOTEQ:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::NOTEQ*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::NOT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::NOT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PLUSPLUS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PLUSPLUS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::PLUS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::PLUS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::MINUSMINUS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::MINUSMINUS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::MINUS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::MINUS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::DIVIDE:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::DIVIDE*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::MULTIPLY:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::MULTIPLY*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::VARNAME:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::VARNAME*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::NUMBER:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::NUMBER*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::DECIMAL:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::DECIMAL*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::TEXT:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::TEXT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::ESCAPE_CHARS:
			{
				// Exit terminal
				ListenExit(static_cast<const Celeste::ast::node::ESCAPE_CHARS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}


			// Nonterminal cases
			
			case Celeste::ast::Type::program:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::root_program:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::root_program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::standard_block:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::standard_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__stmt__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::stmt:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::import_statement:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::import_statement*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::file_import:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::file_import*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::mutation_group:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::mutation_group*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__symbol_reference__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol_reference__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::assignment:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::assignment*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::assignment_operator:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::assignment_operator*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_if:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_if*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_else_if:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_else_if*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_else:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_else*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_block:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_conditional_function_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_conditional_function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__template_parameter__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__template_parameter__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__function_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_function_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_code_function_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_code_function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::code_function_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::code_function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::return_statement:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::return_statement*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_increase:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_increase*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_decrease:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_decrease*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::expression:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::expression*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::expression_no_value:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::expression_no_value*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::t_expression:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::t_expression*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::f_expression:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::f_expression*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::display_call:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::display_call*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::for_loop:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::for_loop*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::for_iteration_loop:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::for_iteration_loop*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::for_each_loop:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::for_each_loop*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::for_variable:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::for_variable*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::iterator:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::iterator*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::for_block:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::for_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::namespace_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::namespace_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__namespace_name__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__namespace_name__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::namespace_block:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::namespace_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::namespace_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::namespace_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::inline_class_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::inline_class_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::inline_class_declaration_composite:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::inline_class_declaration_composite*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::inline_class_declaration_composite_alias:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::inline_class_declaration_composite_alias*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::inline_class_declaration_composite_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::inline_class_declaration_composite_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::created_class_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::created_class_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::code_block:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::code_block*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::code_block_input_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::code_block_input_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::code_block_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::code_block_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::code_block_argument_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::code_block_argument_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::code_block_program:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::code_block_program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::variable_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::array_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::array_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::variable_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::variable_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_function_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::trailing_return_type:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::trailing_return_type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::return_type:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::return_type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::conditional_function_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::conditional_function_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_argument_type:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_argument_type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_argument_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_argument_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::condition_modifier_function_call:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::condition_modifier_function_call*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::condition_modifier_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::condition_modifier_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::condition_modifier_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::condition_modifier_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_body:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_body*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_class_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_class_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_parameter:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_parameter*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_parameter_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_parameter_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::execution_keyword_permutation:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::execution_keyword_permutation*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_body:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_body*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_stmt:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_stmt_member_field_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_stmt_member_field_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::member_field_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::member_field_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_stmt_member_function:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_stmt_member_function*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_stmt_member_template_function:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_stmt_member_template_function*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::template_class_stmt_constructor:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::template_class_stmt_constructor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_stmt_constructor:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_stmt_constructor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::accessibility:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::accessibility*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::class_inherit_base:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::class_inherit_base*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::inherit_base:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::inherit_base*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::inherit_base_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::inherit_base_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::compound_base:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::compound_base*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::compound_base_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::compound_base_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::compound_base_alias:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::compound_base_alias*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute_section:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute_section*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute_template_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute_template_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute_function_argument:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute_function_argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::attribute_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::attribute_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enum_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__enumeration__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__enumeration__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enum_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enum_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enumeration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enumeration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enumeration_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enumeration_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::enumeration_value:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::enumeration_value*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_reference:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_reference*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__symbol__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_secondary:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_secondary*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__symbol_access__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__symbol_access__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_access:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_access*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::auto_deduce_array:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::auto_deduce_array*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_name_secondary:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_name_secondary*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::symbol_name:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::symbol_name*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::function_access:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::function_access*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__expression__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__expression__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__expression__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__expression__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::index_access:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::index_access*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::anonymous_access:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::anonymous_access*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::type:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::type*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__type_modifier__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__type_modifier__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::type_modifier:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::type_modifier*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::value_list:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::value_list*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_arrow__full_value__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_arrow__full_value__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::deamerreserved_star__COMMA__full_value__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__full_value__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::full_value:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::full_value*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::value:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::value*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case Celeste::ast::Type::tuple:
			{
				// Exit nonterminal
				ListenExit(static_cast<const Celeste::ast::node::tuple*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const Celeste::ast::node::SINGLE_COMMENT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::MULTI_COMMENT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::CONSTANT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::FUNCTION* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::CLASS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ENUM* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::CONDITIONAL* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::CODE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ATTRIBUTETOK* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::RUNTIME* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::STATIC* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::AUTO* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::AUTOTYPE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::TEMPLATE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::NAMESPACE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::OPERATORNAME* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::OVERRIDE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::VIRTUAL* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PURE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::AS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::IN* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::DISPLAY* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::RETURN* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::FOR* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::IF* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ELSEIF* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::ELSE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::INLINE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::CONSTRUCTOR* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::FILE_* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PROGRAM_* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::IMPORT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PUBLIC* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PROTECTED* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PRIVATE* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::INHERIT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::COMPOSITE* node) 
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

		virtual void ListenEntry(const Celeste::ast::node::LTEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::GTEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::LT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::GT* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PLUSEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::MINUSEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::MULTIPLYEQ* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::DIVIDEEQ* node) 
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

		virtual void ListenEntry(const Celeste::ast::node::PLUSPLUS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::PLUS* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::MINUSMINUS* node) 
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

		
		virtual void ListenExit(const Celeste::ast::node::SINGLE_COMMENT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::MULTI_COMMENT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::CONSTANT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::FUNCTION* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::CLASS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::ENUM* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::CONDITIONAL* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::CODE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::ATTRIBUTETOK* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::RUNTIME* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::STATIC* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::AUTO* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::AUTOTYPE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::TEMPLATE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::NAMESPACE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::OPERATORNAME* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::OVERRIDE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::VIRTUAL* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PURE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::AS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::IN* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::DISPLAY* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::RETURN* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::FOR* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::IF* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::ELSEIF* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::ELSE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::INLINE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::CONSTRUCTOR* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::FILE_* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PROGRAM_* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::IMPORT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PUBLIC* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PROTECTED* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PRIVATE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::INHERIT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::COMPOSITE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::LEFT_BRACKET* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::RIGHT_BRACKET* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::LEFT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::RIGHT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::LEFT_PARANTHESIS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::RIGHT_PARANTHESIS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::COLON* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::SEMICOLON* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::COMMA* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::DOT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::LTEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::GTEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::LT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::GT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PLUSEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::MINUSEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::MULTIPLYEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::DIVIDEEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::EQEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::EQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::NOTEQ* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::NOT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PLUSPLUS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::PLUS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::MINUSMINUS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::MINUS* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::DIVIDE* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::MULTIPLY* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::NUMBER* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::DECIMAL* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::TEXT* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::ESCAPE_CHARS* node) 
		{
		}


		
		virtual void ListenEntry(const Celeste::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::root_program* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::standard_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__stmt__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::import_statement* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::file_import* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::mutation_group* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__symbol_reference__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::assignment* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::assignment_operator* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_if* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_else_if* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_else* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_conditional_function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__template_parameter__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_code_function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::code_function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::return_statement* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_increase* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_decrease* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::expression* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::expression_no_value* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::t_expression* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::f_expression* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::display_call* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::for_loop* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::for_iteration_loop* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::for_each_loop* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::for_variable* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::iterator* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::for_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::namespace_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__namespace_name__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::namespace_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::namespace_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::inline_class_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::inline_class_declaration_composite* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::inline_class_declaration_composite_alias* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::inline_class_declaration_composite_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::created_class_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::code_block* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::code_block_input_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::code_block_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::code_block_argument_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::code_block_program* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::array_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::variable_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::trailing_return_type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::return_type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::conditional_function_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_argument_type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_argument_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::condition_modifier_function_call* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::condition_modifier_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::condition_modifier_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_body* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_class_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_parameter* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_parameter_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::execution_keyword_permutation* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_body* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__class_stmt__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_stmt* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_stmt_member_field_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::member_field_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_stmt_member_function* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_stmt_member_template_function* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::template_class_stmt_constructor* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_stmt_constructor* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::accessibility* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::class_inherit_base* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::inherit_base* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::inherit_base_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::compound_base* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::compound_base_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::compound_base_alias* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute_section* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__attribute__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__attribute_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute_template_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute_function_argument* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::attribute_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enum_declaration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__enumeration__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enum_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enumeration* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enumeration_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::enumeration_value* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_reference* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__symbol__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_secondary* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__symbol_access__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_access* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::auto_deduce_array* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_name_secondary* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::symbol_name* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::function_access* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__expression__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__expression__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::index_access* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::anonymous_access* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::type* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__type_modifier__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::type_modifier* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::value_list* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_arrow__full_value__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::deamerreserved_star__COMMA__full_value__* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::full_value* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::value* node) 
		{
		}

		virtual void ListenEntry(const Celeste::ast::node::tuple* node) 
		{
		}

		
		virtual void ListenExit(const Celeste::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::root_program* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::standard_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__stmt__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::import_statement* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::file_import* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::mutation_group* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__symbol_reference__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::assignment* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::assignment_operator* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_if* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_else_if* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_else* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_conditional_function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__template_parameter__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_code_function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::code_function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::return_statement* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_increase* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_decrease* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::expression* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::expression_no_value* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::t_expression* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::f_expression* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::display_call* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::for_loop* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::for_iteration_loop* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::for_each_loop* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::for_variable* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::iterator* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::for_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::namespace_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__namespace_name__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::namespace_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::namespace_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::inline_class_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::inline_class_declaration_composite* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::inline_class_declaration_composite_alias* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::inline_class_declaration_composite_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::created_class_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::code_block* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::code_block_input_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::code_block_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::code_block_argument_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::code_block_program* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::array_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::variable_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::trailing_return_type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::return_type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::conditional_function_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_argument_type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_argument_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::condition_modifier_function_call* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::condition_modifier_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::condition_modifier_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_body* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_class_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_parameter* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_parameter_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::execution_keyword_permutation* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_body* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__class_stmt__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_stmt* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_stmt_member_field_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::member_field_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_stmt_member_function* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_stmt_member_template_function* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::template_class_stmt_constructor* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_stmt_constructor* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::accessibility* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::class_inherit_base* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::inherit_base* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::inherit_base_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::compound_base* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::compound_base_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::compound_base_alias* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute_section* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__attribute__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__attribute_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute_template_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute_function_argument* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::attribute_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enum_declaration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__enumeration__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enum_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enumeration* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enumeration_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::enumeration_value* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_reference* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__symbol__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_secondary* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__symbol_access__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_access* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::auto_deduce_array* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_name_secondary* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::symbol_name* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::function_access* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__expression__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__expression__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::index_access* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::anonymous_access* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::type* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__type_modifier__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::type_modifier* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::value_list* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_arrow__full_value__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::deamerreserved_star__COMMA__full_value__* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::full_value* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::value* node) 
		{
		}

		virtual void ListenExit(const Celeste::ast::node::tuple* node) 
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
	};

}}}

#endif // CELESTE_AST_LISTENER_ENTEREXITLISTENER_H