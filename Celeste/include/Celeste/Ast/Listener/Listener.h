#ifndef Celeste_AST_LISTENER_DEAMER_LISTENER_H
#define Celeste_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
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
			case Celeste::ast::Type::SINGLE_COMMENT:
			{
				Listen(static_cast<const Celeste::ast::node::SINGLE_COMMENT*>(node));
				break;
			}
			case Celeste::ast::Type::MULTI_COMMENT:
			{
				Listen(static_cast<const Celeste::ast::node::MULTI_COMMENT*>(node));
				break;
			}
			case Celeste::ast::Type::CONSTANT:
			{
				Listen(static_cast<const Celeste::ast::node::CONSTANT*>(node));
				break;
			}
			case Celeste::ast::Type::FUNCTION:
			{
				Listen(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				break;
			}
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
			case Celeste::ast::Type::CONDITIONAL:
			{
				Listen(static_cast<const Celeste::ast::node::CONDITIONAL*>(node));
				break;
			}
			case Celeste::ast::Type::CODE:
			{
				Listen(static_cast<const Celeste::ast::node::CODE*>(node));
				break;
			}
			case Celeste::ast::Type::ATTRIBUTETOK:
			{
				Listen(static_cast<const Celeste::ast::node::ATTRIBUTETOK*>(node));
				break;
			}
			case Celeste::ast::Type::RUNTIME:
			{
				Listen(static_cast<const Celeste::ast::node::RUNTIME*>(node));
				break;
			}
			case Celeste::ast::Type::STATIC:
			{
				Listen(static_cast<const Celeste::ast::node::STATIC*>(node));
				break;
			}
			case Celeste::ast::Type::AUTO:
			{
				Listen(static_cast<const Celeste::ast::node::AUTO*>(node));
				break;
			}
			case Celeste::ast::Type::AUTOTYPE:
			{
				Listen(static_cast<const Celeste::ast::node::AUTOTYPE*>(node));
				break;
			}
			case Celeste::ast::Type::TEMPLATE:
			{
				Listen(static_cast<const Celeste::ast::node::TEMPLATE*>(node));
				break;
			}
			case Celeste::ast::Type::NAMESPACE:
			{
				Listen(static_cast<const Celeste::ast::node::NAMESPACE*>(node));
				break;
			}
			case Celeste::ast::Type::OPERATORNAME:
			{
				Listen(static_cast<const Celeste::ast::node::OPERATORNAME*>(node));
				break;
			}
			case Celeste::ast::Type::OVERRIDE:
			{
				Listen(static_cast<const Celeste::ast::node::OVERRIDE*>(node));
				break;
			}
			case Celeste::ast::Type::VIRTUAL:
			{
				Listen(static_cast<const Celeste::ast::node::VIRTUAL*>(node));
				break;
			}
			case Celeste::ast::Type::PURE:
			{
				Listen(static_cast<const Celeste::ast::node::PURE*>(node));
				break;
			}
			case Celeste::ast::Type::AS:
			{
				Listen(static_cast<const Celeste::ast::node::AS*>(node));
				break;
			}
			case Celeste::ast::Type::IN:
			{
				Listen(static_cast<const Celeste::ast::node::IN*>(node));
				break;
			}
			case Celeste::ast::Type::DISPLAY:
			{
				Listen(static_cast<const Celeste::ast::node::DISPLAY*>(node));
				break;
			}
			case Celeste::ast::Type::RETURN:
			{
				Listen(static_cast<const Celeste::ast::node::RETURN*>(node));
				break;
			}
			case Celeste::ast::Type::FOR:
			{
				Listen(static_cast<const Celeste::ast::node::FOR*>(node));
				break;
			}
			case Celeste::ast::Type::IF:
			{
				Listen(static_cast<const Celeste::ast::node::IF*>(node));
				break;
			}
			case Celeste::ast::Type::ELSEIF:
			{
				Listen(static_cast<const Celeste::ast::node::ELSEIF*>(node));
				break;
			}
			case Celeste::ast::Type::ELSE:
			{
				Listen(static_cast<const Celeste::ast::node::ELSE*>(node));
				break;
			}
			case Celeste::ast::Type::INLINE:
			{
				Listen(static_cast<const Celeste::ast::node::INLINE*>(node));
				break;
			}
			case Celeste::ast::Type::CONSTRUCTOR:
			{
				Listen(static_cast<const Celeste::ast::node::CONSTRUCTOR*>(node));
				break;
			}
			case Celeste::ast::Type::FILE_:
			{
				Listen(static_cast<const Celeste::ast::node::FILE_*>(node));
				break;
			}
			case Celeste::ast::Type::PROGRAM_:
			{
				Listen(static_cast<const Celeste::ast::node::PROGRAM_*>(node));
				break;
			}
			case Celeste::ast::Type::IMPORT:
			{
				Listen(static_cast<const Celeste::ast::node::IMPORT*>(node));
				break;
			}
			case Celeste::ast::Type::PUBLIC:
			{
				Listen(static_cast<const Celeste::ast::node::PUBLIC*>(node));
				break;
			}
			case Celeste::ast::Type::PROTECTED:
			{
				Listen(static_cast<const Celeste::ast::node::PROTECTED*>(node));
				break;
			}
			case Celeste::ast::Type::PRIVATE:
			{
				Listen(static_cast<const Celeste::ast::node::PRIVATE*>(node));
				break;
			}
			case Celeste::ast::Type::INHERIT:
			{
				Listen(static_cast<const Celeste::ast::node::INHERIT*>(node));
				break;
			}
			case Celeste::ast::Type::COMPOSITE:
			{
				Listen(static_cast<const Celeste::ast::node::COMPOSITE*>(node));
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
			case Celeste::ast::Type::LTEQ:
			{
				Listen(static_cast<const Celeste::ast::node::LTEQ*>(node));
				break;
			}
			case Celeste::ast::Type::GTEQ:
			{
				Listen(static_cast<const Celeste::ast::node::GTEQ*>(node));
				break;
			}
			case Celeste::ast::Type::LT:
			{
				Listen(static_cast<const Celeste::ast::node::LT*>(node));
				break;
			}
			case Celeste::ast::Type::GT:
			{
				Listen(static_cast<const Celeste::ast::node::GT*>(node));
				break;
			}
			case Celeste::ast::Type::PLUSEQ:
			{
				Listen(static_cast<const Celeste::ast::node::PLUSEQ*>(node));
				break;
			}
			case Celeste::ast::Type::MINUSEQ:
			{
				Listen(static_cast<const Celeste::ast::node::MINUSEQ*>(node));
				break;
			}
			case Celeste::ast::Type::MULTIPLYEQ:
			{
				Listen(static_cast<const Celeste::ast::node::MULTIPLYEQ*>(node));
				break;
			}
			case Celeste::ast::Type::DIVIDEEQ:
			{
				Listen(static_cast<const Celeste::ast::node::DIVIDEEQ*>(node));
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
			case Celeste::ast::Type::PLUSPLUS:
			{
				Listen(static_cast<const Celeste::ast::node::PLUSPLUS*>(node));
				break;
			}
			case Celeste::ast::Type::PLUS:
			{
				Listen(static_cast<const Celeste::ast::node::PLUS*>(node));
				break;
			}
			case Celeste::ast::Type::MINUSMINUS:
			{
				Listen(static_cast<const Celeste::ast::node::MINUSMINUS*>(node));
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
			case Celeste::ast::Type::root_program:
			{
				Listen(static_cast<const Celeste::ast::node::root_program*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::standard_block:
			{
				Listen(static_cast<const Celeste::ast::node::standard_block*>(node));
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
			case Celeste::ast::Type::import_statement:
			{
				Listen(static_cast<const Celeste::ast::node::import_statement*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::file_import:
			{
				Listen(static_cast<const Celeste::ast::node::file_import*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::mutation_group:
			{
				Listen(static_cast<const Celeste::ast::node::mutation_group*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__symbol_reference__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol_reference__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::assignment:
			{
				Listen(static_cast<const Celeste::ast::node::assignment*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::assignment_operator:
			{
				Listen(static_cast<const Celeste::ast::node::assignment_operator*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_if:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_if*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_else_if:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_else_if*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_else:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_else*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_block:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_conditional_function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::template_conditional_function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__template_parameter__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__template_parameter__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_code_function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::template_code_function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::code_function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::code_function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::return_statement:
			{
				Listen(static_cast<const Celeste::ast::node::return_statement*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_increase:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_increase*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_decrease:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_decrease*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::expression:
			{
				Listen(static_cast<const Celeste::ast::node::expression*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::expression_no_value:
			{
				Listen(static_cast<const Celeste::ast::node::expression_no_value*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::t_expression:
			{
				Listen(static_cast<const Celeste::ast::node::t_expression*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::f_expression:
			{
				Listen(static_cast<const Celeste::ast::node::f_expression*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::display_call:
			{
				Listen(static_cast<const Celeste::ast::node::display_call*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::for_loop:
			{
				Listen(static_cast<const Celeste::ast::node::for_loop*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::for_iteration_loop:
			{
				Listen(static_cast<const Celeste::ast::node::for_iteration_loop*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::for_each_loop:
			{
				Listen(static_cast<const Celeste::ast::node::for_each_loop*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::for_variable:
			{
				Listen(static_cast<const Celeste::ast::node::for_variable*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::iterator:
			{
				Listen(static_cast<const Celeste::ast::node::iterator*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::for_block:
			{
				Listen(static_cast<const Celeste::ast::node::for_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::namespace_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::namespace_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__namespace_name__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__namespace_name__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::namespace_block:
			{
				Listen(static_cast<const Celeste::ast::node::namespace_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::namespace_name:
			{
				Listen(static_cast<const Celeste::ast::node::namespace_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::inline_class_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::inline_class_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::inline_class_declaration_composite:
			{
				Listen(static_cast<const Celeste::ast::node::inline_class_declaration_composite*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::inline_class_declaration_composite_alias:
			{
				Listen(static_cast<const Celeste::ast::node::inline_class_declaration_composite_alias*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::inline_class_declaration_composite_name:
			{
				Listen(static_cast<const Celeste::ast::node::inline_class_declaration_composite_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::created_class_name:
			{
				Listen(static_cast<const Celeste::ast::node::created_class_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::code_block:
			{
				Listen(static_cast<const Celeste::ast::node::code_block*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::code_block_input_argument:
			{
				Listen(static_cast<const Celeste::ast::node::code_block_input_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::code_block_argument:
			{
				Listen(static_cast<const Celeste::ast::node::code_block_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::code_block_argument_name:
			{
				Listen(static_cast<const Celeste::ast::node::code_block_argument_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::code_block_program:
			{
				Listen(static_cast<const Celeste::ast::node::code_block_program*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::variable_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::array_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::array_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::variable_name:
			{
				Listen(static_cast<const Celeste::ast::node::variable_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::template_function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::function_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::trailing_return_type:
			{
				Listen(static_cast<const Celeste::ast::node::trailing_return_type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::return_type:
			{
				Listen(static_cast<const Celeste::ast::node::return_type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::conditional_function_argument:
			{
				Listen(static_cast<const Celeste::ast::node::conditional_function_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_argument:
			{
				Listen(static_cast<const Celeste::ast::node::function_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_argument_type:
			{
				Listen(static_cast<const Celeste::ast::node::function_argument_type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_argument_name:
			{
				Listen(static_cast<const Celeste::ast::node::function_argument_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::condition_modifier_function_call:
			{
				Listen(static_cast<const Celeste::ast::node::condition_modifier_function_call*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::condition_modifier_name:
			{
				Listen(static_cast<const Celeste::ast::node::condition_modifier_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::condition_modifier_argument:
			{
				Listen(static_cast<const Celeste::ast::node::condition_modifier_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_body:
			{
				Listen(static_cast<const Celeste::ast::node::function_body*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_name:
			{
				Listen(static_cast<const Celeste::ast::node::function_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_class_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::template_class_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_parameter:
			{
				Listen(static_cast<const Celeste::ast::node::template_parameter*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_parameter_name:
			{
				Listen(static_cast<const Celeste::ast::node::template_parameter_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::class_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_name:
			{
				Listen(static_cast<const Celeste::ast::node::class_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::execution_keyword_permutation:
			{
				Listen(static_cast<const Celeste::ast::node::execution_keyword_permutation*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_body:
			{
				Listen(static_cast<const Celeste::ast::node::class_body*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_stmt:
			{
				Listen(static_cast<const Celeste::ast::node::class_stmt*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_stmt_member_field_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::class_stmt_member_field_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::member_field_name:
			{
				Listen(static_cast<const Celeste::ast::node::member_field_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_stmt_member_function:
			{
				Listen(static_cast<const Celeste::ast::node::class_stmt_member_function*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_stmt_member_template_function:
			{
				Listen(static_cast<const Celeste::ast::node::class_stmt_member_template_function*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::template_class_stmt_constructor:
			{
				Listen(static_cast<const Celeste::ast::node::template_class_stmt_constructor*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_stmt_constructor:
			{
				Listen(static_cast<const Celeste::ast::node::class_stmt_constructor*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::accessibility:
			{
				Listen(static_cast<const Celeste::ast::node::accessibility*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::class_inherit_base:
			{
				Listen(static_cast<const Celeste::ast::node::class_inherit_base*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::inherit_base:
			{
				Listen(static_cast<const Celeste::ast::node::inherit_base*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::inherit_base_name:
			{
				Listen(static_cast<const Celeste::ast::node::inherit_base_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::compound_base:
			{
				Listen(static_cast<const Celeste::ast::node::compound_base*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::compound_base_name:
			{
				Listen(static_cast<const Celeste::ast::node::compound_base_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::compound_base_alias:
			{
				Listen(static_cast<const Celeste::ast::node::compound_base_alias*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute_section:
			{
				Listen(static_cast<const Celeste::ast::node::attribute_section*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute:
			{
				Listen(static_cast<const Celeste::ast::node::attribute*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute_argument:
			{
				Listen(static_cast<const Celeste::ast::node::attribute_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute_template_argument:
			{
				Listen(static_cast<const Celeste::ast::node::attribute_template_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::attribute_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute_function_argument:
			{
				Listen(static_cast<const Celeste::ast::node::attribute_function_argument*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::attribute_name:
			{
				Listen(static_cast<const Celeste::ast::node::attribute_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enum_declaration:
			{
				Listen(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__enumeration__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__enumeration__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enum_name:
			{
				Listen(static_cast<const Celeste::ast::node::enum_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enumeration:
			{
				Listen(static_cast<const Celeste::ast::node::enumeration*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enumeration_name:
			{
				Listen(static_cast<const Celeste::ast::node::enumeration_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::enumeration_value:
			{
				Listen(static_cast<const Celeste::ast::node::enumeration_value*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_reference:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_reference*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__symbol__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_secondary:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_secondary*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__symbol_access__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__symbol_access__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol:
			{
				Listen(static_cast<const Celeste::ast::node::symbol*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_access:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_access*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::auto_deduce_array:
			{
				Listen(static_cast<const Celeste::ast::node::auto_deduce_array*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_name_secondary:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_name_secondary*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::symbol_name:
			{
				Listen(static_cast<const Celeste::ast::node::symbol_name*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::function_access:
			{
				Listen(static_cast<const Celeste::ast::node::function_access*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__expression__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__expression__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__expression__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__expression__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::index_access:
			{
				Listen(static_cast<const Celeste::ast::node::index_access*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::anonymous_access:
			{
				Listen(static_cast<const Celeste::ast::node::anonymous_access*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::type:
			{
				Listen(static_cast<const Celeste::ast::node::type*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__type_modifier__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__type_modifier__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::type_modifier:
			{
				Listen(static_cast<const Celeste::ast::node::type_modifier*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::value_list:
			{
				Listen(static_cast<const Celeste::ast::node::value_list*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__full_value__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_arrow__full_value__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__full_value__:
			{
				Listen(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__full_value__*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::full_value:
			{
				Listen(static_cast<const Celeste::ast::node::full_value*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::value:
			{
				Listen(static_cast<const Celeste::ast::node::value*>(node));
				DefaultAction(node);
				break;
			}
			case Celeste::ast::Type::tuple:
			{
				Listen(static_cast<const Celeste::ast::node::tuple*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const Celeste::ast::node::SINGLE_COMMENT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::MULTI_COMMENT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::CONSTANT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::FUNCTION* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::CLASS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ENUM* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::CONDITIONAL* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::CODE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ATTRIBUTETOK* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::RUNTIME* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::STATIC* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::AUTO* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::AUTOTYPE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::TEMPLATE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::NAMESPACE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::OPERATORNAME* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::OVERRIDE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::VIRTUAL* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PURE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::AS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::IN* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::DISPLAY* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::RETURN* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::FOR* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::IF* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ELSEIF* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::ELSE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::INLINE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::CONSTRUCTOR* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::FILE_* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PROGRAM_* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::IMPORT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PUBLIC* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PROTECTED* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PRIVATE* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::INHERIT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::COMPOSITE* node)
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
		virtual void Listen(const Celeste::ast::node::LTEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::GTEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::LT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::GT* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PLUSEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::MINUSEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::MULTIPLYEQ* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::DIVIDEEQ* node)
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
		virtual void Listen(const Celeste::ast::node::PLUSPLUS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::PLUS* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::MINUSMINUS* node)
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
		virtual void Listen(const Celeste::ast::node::root_program* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::standard_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__stmt__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::import_statement* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::file_import* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::mutation_group* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__symbol_reference__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::assignment* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::assignment_operator* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_if* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_else_if* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_else* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_conditional_function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__template_parameter__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_code_function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::code_function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::return_statement* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_increase* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_decrease* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::expression* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::expression_no_value* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::t_expression* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::f_expression* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::display_call* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::for_loop* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::for_iteration_loop* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::for_each_loop* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::for_variable* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::iterator* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::for_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::namespace_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__namespace_name__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::namespace_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::namespace_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::inline_class_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::inline_class_declaration_composite* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::inline_class_declaration_composite_alias* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::inline_class_declaration_composite_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::created_class_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::code_block* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::code_block_input_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::code_block_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::code_block_argument_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::code_block_program* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::variable_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::array_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::variable_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::trailing_return_type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::return_type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::conditional_function_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_argument_type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_argument_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::condition_modifier_function_call* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::condition_modifier_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::condition_modifier_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_body* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_class_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_parameter* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_parameter_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::execution_keyword_permutation* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_body* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__class_stmt__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_stmt* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_stmt_member_field_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::member_field_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_stmt_member_function* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_stmt_member_template_function* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::template_class_stmt_constructor* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_stmt_constructor* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::accessibility* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::class_inherit_base* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::inherit_base* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::inherit_base_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::compound_base* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::compound_base_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::compound_base_alias* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute_section* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__attribute__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__attribute_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute_template_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute_function_argument* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::attribute_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enum_declaration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__enumeration__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enum_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enumeration* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enumeration_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::enumeration_value* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_reference* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__symbol__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_secondary* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__symbol_access__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_access* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::auto_deduce_array* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_name_secondary* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::symbol_name* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::function_access* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__expression__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__expression__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::index_access* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::anonymous_access* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::type* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__type_modifier__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::type_modifier* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::value_list* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_arrow__full_value__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::deamerreserved_star__COMMA__full_value__* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::full_value* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::value* node)
		{
		}
		virtual void Listen(const Celeste::ast::node::tuple* node)
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
