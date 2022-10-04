#ifndef Celeste_AST_VISITOR_DEAMER_VISITOR_H
#define Celeste_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
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
			case Celeste::ast::Type::SINGLE_COMMENT:
			{
				Visit(static_cast<const Celeste::ast::node::SINGLE_COMMENT*>(node));
				break;
			}
			case Celeste::ast::Type::MULTI_COMMENT:
			{
				Visit(static_cast<const Celeste::ast::node::MULTI_COMMENT*>(node));
				break;
			}
			case Celeste::ast::Type::CONSTANT:
			{
				Visit(static_cast<const Celeste::ast::node::CONSTANT*>(node));
				break;
			}
			case Celeste::ast::Type::FUNCTION:
			{
				Visit(static_cast<const Celeste::ast::node::FUNCTION*>(node));
				break;
			}
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
			case Celeste::ast::Type::CONDITIONAL:
			{
				Visit(static_cast<const Celeste::ast::node::CONDITIONAL*>(node));
				break;
			}
			case Celeste::ast::Type::CODE:
			{
				Visit(static_cast<const Celeste::ast::node::CODE*>(node));
				break;
			}
			case Celeste::ast::Type::ATTRIBUTETOK:
			{
				Visit(static_cast<const Celeste::ast::node::ATTRIBUTETOK*>(node));
				break;
			}
			case Celeste::ast::Type::RUNTIME:
			{
				Visit(static_cast<const Celeste::ast::node::RUNTIME*>(node));
				break;
			}
			case Celeste::ast::Type::STATIC:
			{
				Visit(static_cast<const Celeste::ast::node::STATIC*>(node));
				break;
			}
			case Celeste::ast::Type::AUTO:
			{
				Visit(static_cast<const Celeste::ast::node::AUTO*>(node));
				break;
			}
			case Celeste::ast::Type::AUTOTYPE:
			{
				Visit(static_cast<const Celeste::ast::node::AUTOTYPE*>(node));
				break;
			}
			case Celeste::ast::Type::TEMPLATE:
			{
				Visit(static_cast<const Celeste::ast::node::TEMPLATE*>(node));
				break;
			}
			case Celeste::ast::Type::NAMESPACE:
			{
				Visit(static_cast<const Celeste::ast::node::NAMESPACE*>(node));
				break;
			}
			case Celeste::ast::Type::OPERATORNAME:
			{
				Visit(static_cast<const Celeste::ast::node::OPERATORNAME*>(node));
				break;
			}
			case Celeste::ast::Type::OVERRIDE:
			{
				Visit(static_cast<const Celeste::ast::node::OVERRIDE*>(node));
				break;
			}
			case Celeste::ast::Type::VIRTUAL:
			{
				Visit(static_cast<const Celeste::ast::node::VIRTUAL*>(node));
				break;
			}
			case Celeste::ast::Type::PURE:
			{
				Visit(static_cast<const Celeste::ast::node::PURE*>(node));
				break;
			}
			case Celeste::ast::Type::AS:
			{
				Visit(static_cast<const Celeste::ast::node::AS*>(node));
				break;
			}
			case Celeste::ast::Type::IN:
			{
				Visit(static_cast<const Celeste::ast::node::IN*>(node));
				break;
			}
			case Celeste::ast::Type::DISPLAY:
			{
				Visit(static_cast<const Celeste::ast::node::DISPLAY*>(node));
				break;
			}
			case Celeste::ast::Type::RETURN:
			{
				Visit(static_cast<const Celeste::ast::node::RETURN*>(node));
				break;
			}
			case Celeste::ast::Type::FOR:
			{
				Visit(static_cast<const Celeste::ast::node::FOR*>(node));
				break;
			}
			case Celeste::ast::Type::IF:
			{
				Visit(static_cast<const Celeste::ast::node::IF*>(node));
				break;
			}
			case Celeste::ast::Type::ELSEIF:
			{
				Visit(static_cast<const Celeste::ast::node::ELSEIF*>(node));
				break;
			}
			case Celeste::ast::Type::ELSE:
			{
				Visit(static_cast<const Celeste::ast::node::ELSE*>(node));
				break;
			}
			case Celeste::ast::Type::INLINE:
			{
				Visit(static_cast<const Celeste::ast::node::INLINE*>(node));
				break;
			}
			case Celeste::ast::Type::CONSTRUCTOR:
			{
				Visit(static_cast<const Celeste::ast::node::CONSTRUCTOR*>(node));
				break;
			}
			case Celeste::ast::Type::FILE_:
			{
				Visit(static_cast<const Celeste::ast::node::FILE_*>(node));
				break;
			}
			case Celeste::ast::Type::PROGRAM_:
			{
				Visit(static_cast<const Celeste::ast::node::PROGRAM_*>(node));
				break;
			}
			case Celeste::ast::Type::IMPORT:
			{
				Visit(static_cast<const Celeste::ast::node::IMPORT*>(node));
				break;
			}
			case Celeste::ast::Type::PUBLIC:
			{
				Visit(static_cast<const Celeste::ast::node::PUBLIC*>(node));
				break;
			}
			case Celeste::ast::Type::PROTECTED:
			{
				Visit(static_cast<const Celeste::ast::node::PROTECTED*>(node));
				break;
			}
			case Celeste::ast::Type::PRIVATE:
			{
				Visit(static_cast<const Celeste::ast::node::PRIVATE*>(node));
				break;
			}
			case Celeste::ast::Type::INHERIT:
			{
				Visit(static_cast<const Celeste::ast::node::INHERIT*>(node));
				break;
			}
			case Celeste::ast::Type::COMPOSITE:
			{
				Visit(static_cast<const Celeste::ast::node::COMPOSITE*>(node));
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
			case Celeste::ast::Type::LTEQ:
			{
				Visit(static_cast<const Celeste::ast::node::LTEQ*>(node));
				break;
			}
			case Celeste::ast::Type::GTEQ:
			{
				Visit(static_cast<const Celeste::ast::node::GTEQ*>(node));
				break;
			}
			case Celeste::ast::Type::LT:
			{
				Visit(static_cast<const Celeste::ast::node::LT*>(node));
				break;
			}
			case Celeste::ast::Type::GT:
			{
				Visit(static_cast<const Celeste::ast::node::GT*>(node));
				break;
			}
			case Celeste::ast::Type::PLUSEQ:
			{
				Visit(static_cast<const Celeste::ast::node::PLUSEQ*>(node));
				break;
			}
			case Celeste::ast::Type::MINUSEQ:
			{
				Visit(static_cast<const Celeste::ast::node::MINUSEQ*>(node));
				break;
			}
			case Celeste::ast::Type::MULTIPLYEQ:
			{
				Visit(static_cast<const Celeste::ast::node::MULTIPLYEQ*>(node));
				break;
			}
			case Celeste::ast::Type::DIVIDEEQ:
			{
				Visit(static_cast<const Celeste::ast::node::DIVIDEEQ*>(node));
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
			case Celeste::ast::Type::PLUSPLUS:
			{
				Visit(static_cast<const Celeste::ast::node::PLUSPLUS*>(node));
				break;
			}
			case Celeste::ast::Type::PLUS:
			{
				Visit(static_cast<const Celeste::ast::node::PLUS*>(node));
				break;
			}
			case Celeste::ast::Type::MINUSMINUS:
			{
				Visit(static_cast<const Celeste::ast::node::MINUSMINUS*>(node));
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
			case Celeste::ast::Type::root_program:
			{
				Visit(static_cast<const Celeste::ast::node::root_program*>(node));
				break;
			}
			case Celeste::ast::Type::standard_block:
			{
				Visit(static_cast<const Celeste::ast::node::standard_block*>(node));
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
			case Celeste::ast::Type::import_statement:
			{
				Visit(static_cast<const Celeste::ast::node::import_statement*>(node));
				break;
			}
			case Celeste::ast::Type::file_import:
			{
				Visit(static_cast<const Celeste::ast::node::file_import*>(node));
				break;
			}
			case Celeste::ast::Type::mutation_group:
			{
				Visit(static_cast<const Celeste::ast::node::mutation_group*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__symbol_reference__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol_reference__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*>(node));
				break;
			}
			case Celeste::ast::Type::assignment:
			{
				Visit(static_cast<const Celeste::ast::node::assignment*>(node));
				break;
			}
			case Celeste::ast::Type::assignment_operator:
			{
				Visit(static_cast<const Celeste::ast::node::assignment_operator*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_if:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_if*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_else_if:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_else_if*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_else:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_else*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_block:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_block*>(node));
				break;
			}
			case Celeste::ast::Type::template_conditional_function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::template_conditional_function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__template_parameter__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__template_parameter__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::template_code_function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::template_code_function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::code_function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::code_function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::return_statement:
			{
				Visit(static_cast<const Celeste::ast::node::return_statement*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_increase:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_increase*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_decrease:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_decrease*>(node));
				break;
			}
			case Celeste::ast::Type::expression:
			{
				Visit(static_cast<const Celeste::ast::node::expression*>(node));
				break;
			}
			case Celeste::ast::Type::expression_no_value:
			{
				Visit(static_cast<const Celeste::ast::node::expression_no_value*>(node));
				break;
			}
			case Celeste::ast::Type::t_expression:
			{
				Visit(static_cast<const Celeste::ast::node::t_expression*>(node));
				break;
			}
			case Celeste::ast::Type::f_expression:
			{
				Visit(static_cast<const Celeste::ast::node::f_expression*>(node));
				break;
			}
			case Celeste::ast::Type::display_call:
			{
				Visit(static_cast<const Celeste::ast::node::display_call*>(node));
				break;
			}
			case Celeste::ast::Type::for_loop:
			{
				Visit(static_cast<const Celeste::ast::node::for_loop*>(node));
				break;
			}
			case Celeste::ast::Type::for_iteration_loop:
			{
				Visit(static_cast<const Celeste::ast::node::for_iteration_loop*>(node));
				break;
			}
			case Celeste::ast::Type::for_each_loop:
			{
				Visit(static_cast<const Celeste::ast::node::for_each_loop*>(node));
				break;
			}
			case Celeste::ast::Type::for_variable:
			{
				Visit(static_cast<const Celeste::ast::node::for_variable*>(node));
				break;
			}
			case Celeste::ast::Type::iterator:
			{
				Visit(static_cast<const Celeste::ast::node::iterator*>(node));
				break;
			}
			case Celeste::ast::Type::for_block:
			{
				Visit(static_cast<const Celeste::ast::node::for_block*>(node));
				break;
			}
			case Celeste::ast::Type::namespace_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::namespace_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__namespace_name__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__namespace_name__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*>(node));
				break;
			}
			case Celeste::ast::Type::namespace_block:
			{
				Visit(static_cast<const Celeste::ast::node::namespace_block*>(node));
				break;
			}
			case Celeste::ast::Type::namespace_name:
			{
				Visit(static_cast<const Celeste::ast::node::namespace_name*>(node));
				break;
			}
			case Celeste::ast::Type::inline_class_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::inline_class_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*>(node));
				break;
			}
			case Celeste::ast::Type::inline_class_declaration_composite:
			{
				Visit(static_cast<const Celeste::ast::node::inline_class_declaration_composite*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*>(node));
				break;
			}
			case Celeste::ast::Type::inline_class_declaration_composite_alias:
			{
				Visit(static_cast<const Celeste::ast::node::inline_class_declaration_composite_alias*>(node));
				break;
			}
			case Celeste::ast::Type::inline_class_declaration_composite_name:
			{
				Visit(static_cast<const Celeste::ast::node::inline_class_declaration_composite_name*>(node));
				break;
			}
			case Celeste::ast::Type::created_class_name:
			{
				Visit(static_cast<const Celeste::ast::node::created_class_name*>(node));
				break;
			}
			case Celeste::ast::Type::code_block:
			{
				Visit(static_cast<const Celeste::ast::node::code_block*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::code_block_input_argument:
			{
				Visit(static_cast<const Celeste::ast::node::code_block_input_argument*>(node));
				break;
			}
			case Celeste::ast::Type::code_block_argument:
			{
				Visit(static_cast<const Celeste::ast::node::code_block_argument*>(node));
				break;
			}
			case Celeste::ast::Type::code_block_argument_name:
			{
				Visit(static_cast<const Celeste::ast::node::code_block_argument_name*>(node));
				break;
			}
			case Celeste::ast::Type::code_block_program:
			{
				Visit(static_cast<const Celeste::ast::node::code_block_program*>(node));
				break;
			}
			case Celeste::ast::Type::variable_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::variable_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::array_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::array_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::variable_name:
			{
				Visit(static_cast<const Celeste::ast::node::variable_name*>(node));
				break;
			}
			case Celeste::ast::Type::template_function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::template_function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::function_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::function_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::trailing_return_type:
			{
				Visit(static_cast<const Celeste::ast::node::trailing_return_type*>(node));
				break;
			}
			case Celeste::ast::Type::return_type:
			{
				Visit(static_cast<const Celeste::ast::node::return_type*>(node));
				break;
			}
			case Celeste::ast::Type::conditional_function_argument:
			{
				Visit(static_cast<const Celeste::ast::node::conditional_function_argument*>(node));
				break;
			}
			case Celeste::ast::Type::function_argument:
			{
				Visit(static_cast<const Celeste::ast::node::function_argument*>(node));
				break;
			}
			case Celeste::ast::Type::function_argument_type:
			{
				Visit(static_cast<const Celeste::ast::node::function_argument_type*>(node));
				break;
			}
			case Celeste::ast::Type::function_argument_name:
			{
				Visit(static_cast<const Celeste::ast::node::function_argument_name*>(node));
				break;
			}
			case Celeste::ast::Type::condition_modifier_function_call:
			{
				Visit(static_cast<const Celeste::ast::node::condition_modifier_function_call*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::condition_modifier_name:
			{
				Visit(static_cast<const Celeste::ast::node::condition_modifier_name*>(node));
				break;
			}
			case Celeste::ast::Type::condition_modifier_argument:
			{
				Visit(static_cast<const Celeste::ast::node::condition_modifier_argument*>(node));
				break;
			}
			case Celeste::ast::Type::function_body:
			{
				Visit(static_cast<const Celeste::ast::node::function_body*>(node));
				break;
			}
			case Celeste::ast::Type::function_name:
			{
				Visit(static_cast<const Celeste::ast::node::function_name*>(node));
				break;
			}
			case Celeste::ast::Type::template_class_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::template_class_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::template_parameter:
			{
				Visit(static_cast<const Celeste::ast::node::template_parameter*>(node));
				break;
			}
			case Celeste::ast::Type::template_parameter_name:
			{
				Visit(static_cast<const Celeste::ast::node::template_parameter_name*>(node));
				break;
			}
			case Celeste::ast::Type::class_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::class_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*>(node));
				break;
			}
			case Celeste::ast::Type::class_name:
			{
				Visit(static_cast<const Celeste::ast::node::class_name*>(node));
				break;
			}
			case Celeste::ast::Type::execution_keyword_permutation:
			{
				Visit(static_cast<const Celeste::ast::node::execution_keyword_permutation*>(node));
				break;
			}
			case Celeste::ast::Type::class_body:
			{
				Visit(static_cast<const Celeste::ast::node::class_body*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__class_stmt__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__class_stmt__*>(node));
				break;
			}
			case Celeste::ast::Type::class_stmt:
			{
				Visit(static_cast<const Celeste::ast::node::class_stmt*>(node));
				break;
			}
			case Celeste::ast::Type::class_stmt_member_field_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::class_stmt_member_field_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::member_field_name:
			{
				Visit(static_cast<const Celeste::ast::node::member_field_name*>(node));
				break;
			}
			case Celeste::ast::Type::class_stmt_member_function:
			{
				Visit(static_cast<const Celeste::ast::node::class_stmt_member_function*>(node));
				break;
			}
			case Celeste::ast::Type::class_stmt_member_template_function:
			{
				Visit(static_cast<const Celeste::ast::node::class_stmt_member_template_function*>(node));
				break;
			}
			case Celeste::ast::Type::template_class_stmt_constructor:
			{
				Visit(static_cast<const Celeste::ast::node::template_class_stmt_constructor*>(node));
				break;
			}
			case Celeste::ast::Type::class_stmt_constructor:
			{
				Visit(static_cast<const Celeste::ast::node::class_stmt_constructor*>(node));
				break;
			}
			case Celeste::ast::Type::accessibility:
			{
				Visit(static_cast<const Celeste::ast::node::accessibility*>(node));
				break;
			}
			case Celeste::ast::Type::class_inherit_base:
			{
				Visit(static_cast<const Celeste::ast::node::class_inherit_base*>(node));
				break;
			}
			case Celeste::ast::Type::inherit_base:
			{
				Visit(static_cast<const Celeste::ast::node::inherit_base*>(node));
				break;
			}
			case Celeste::ast::Type::inherit_base_name:
			{
				Visit(static_cast<const Celeste::ast::node::inherit_base_name*>(node));
				break;
			}
			case Celeste::ast::Type::compound_base:
			{
				Visit(static_cast<const Celeste::ast::node::compound_base*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*>(node));
				break;
			}
			case Celeste::ast::Type::compound_base_name:
			{
				Visit(static_cast<const Celeste::ast::node::compound_base_name*>(node));
				break;
			}
			case Celeste::ast::Type::compound_base_alias:
			{
				Visit(static_cast<const Celeste::ast::node::compound_base_alias*>(node));
				break;
			}
			case Celeste::ast::Type::attribute_section:
			{
				Visit(static_cast<const Celeste::ast::node::attribute_section*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*>(node));
				break;
			}
			case Celeste::ast::Type::attribute:
			{
				Visit(static_cast<const Celeste::ast::node::attribute*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::attribute_argument:
			{
				Visit(static_cast<const Celeste::ast::node::attribute_argument*>(node));
				break;
			}
			case Celeste::ast::Type::attribute_template_argument:
			{
				Visit(static_cast<const Celeste::ast::node::attribute_template_argument*>(node));
				break;
			}
			case Celeste::ast::Type::attribute_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::attribute_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*>(node));
				break;
			}
			case Celeste::ast::Type::attribute_function_argument:
			{
				Visit(static_cast<const Celeste::ast::node::attribute_function_argument*>(node));
				break;
			}
			case Celeste::ast::Type::attribute_name:
			{
				Visit(static_cast<const Celeste::ast::node::attribute_name*>(node));
				break;
			}
			case Celeste::ast::Type::enum_declaration:
			{
				Visit(static_cast<const Celeste::ast::node::enum_declaration*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__enumeration__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__enumeration__*>(node));
				break;
			}
			case Celeste::ast::Type::enum_name:
			{
				Visit(static_cast<const Celeste::ast::node::enum_name*>(node));
				break;
			}
			case Celeste::ast::Type::enumeration:
			{
				Visit(static_cast<const Celeste::ast::node::enumeration*>(node));
				break;
			}
			case Celeste::ast::Type::enumeration_name:
			{
				Visit(static_cast<const Celeste::ast::node::enumeration_name*>(node));
				break;
			}
			case Celeste::ast::Type::enumeration_value:
			{
				Visit(static_cast<const Celeste::ast::node::enumeration_value*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_reference:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_reference*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__symbol__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__symbol__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_secondary:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_secondary*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__symbol_access__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__symbol_access__*>(node));
				break;
			}
			case Celeste::ast::Type::symbol:
			{
				Visit(static_cast<const Celeste::ast::node::symbol*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_access:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_access*>(node));
				break;
			}
			case Celeste::ast::Type::auto_deduce_array:
			{
				Visit(static_cast<const Celeste::ast::node::auto_deduce_array*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_name_secondary:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_name_secondary*>(node));
				break;
			}
			case Celeste::ast::Type::symbol_name:
			{
				Visit(static_cast<const Celeste::ast::node::symbol_name*>(node));
				break;
			}
			case Celeste::ast::Type::function_access:
			{
				Visit(static_cast<const Celeste::ast::node::function_access*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__expression__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__expression__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__expression__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__expression__*>(node));
				break;
			}
			case Celeste::ast::Type::index_access:
			{
				Visit(static_cast<const Celeste::ast::node::index_access*>(node));
				break;
			}
			case Celeste::ast::Type::anonymous_access:
			{
				Visit(static_cast<const Celeste::ast::node::anonymous_access*>(node));
				break;
			}
			case Celeste::ast::Type::type:
			{
				Visit(static_cast<const Celeste::ast::node::type*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__type_modifier__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__type_modifier__*>(node));
				break;
			}
			case Celeste::ast::Type::type_modifier:
			{
				Visit(static_cast<const Celeste::ast::node::type_modifier*>(node));
				break;
			}
			case Celeste::ast::Type::value_list:
			{
				Visit(static_cast<const Celeste::ast::node::value_list*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_arrow__full_value__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_arrow__full_value__*>(node));
				break;
			}
			case Celeste::ast::Type::deamerreserved_star__COMMA__full_value__:
			{
				Visit(static_cast<const Celeste::ast::node::deamerreserved_star__COMMA__full_value__*>(node));
				break;
			}
			case Celeste::ast::Type::full_value:
			{
				Visit(static_cast<const Celeste::ast::node::full_value*>(node));
				break;
			}
			case Celeste::ast::Type::value:
			{
				Visit(static_cast<const Celeste::ast::node::value*>(node));
				break;
			}
			case Celeste::ast::Type::tuple:
			{
				Visit(static_cast<const Celeste::ast::node::tuple*>(node));
				break;
			}
			}
		}
		virtual void Visit(const Celeste::ast::node::SINGLE_COMMENT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::MULTI_COMMENT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::CONSTANT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::FUNCTION* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::CLASS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ENUM* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::CONDITIONAL* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::CODE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ATTRIBUTETOK* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::RUNTIME* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::STATIC* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::AUTO* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::AUTOTYPE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::TEMPLATE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::NAMESPACE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::OPERATORNAME* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::OVERRIDE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::VIRTUAL* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PURE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::AS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::IN* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::DISPLAY* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::RETURN* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::FOR* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::IF* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ELSEIF* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::ELSE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::INLINE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::CONSTRUCTOR* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::FILE_* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PROGRAM_* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::IMPORT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PUBLIC* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PROTECTED* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PRIVATE* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::INHERIT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::COMPOSITE* node)
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
		virtual void Visit(const Celeste::ast::node::LTEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::GTEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::LT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::GT* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PLUSEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::MINUSEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::MULTIPLYEQ* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::DIVIDEEQ* node)
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
		virtual void Visit(const Celeste::ast::node::PLUSPLUS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::PLUS* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::MINUSMINUS* node)
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
		virtual void Visit(const Celeste::ast::node::root_program* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::standard_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__stmt__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::import_statement* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::file_import* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::mutation_group* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__symbol_reference__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::assignment* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::assignment_operator* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_if* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_else_if* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_else* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_conditional_function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__template_parameter__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_code_function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::code_function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::return_statement* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_increase* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_decrease* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::expression* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::expression_no_value* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::t_expression* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::f_expression* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::display_call* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::for_loop* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::for_iteration_loop* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::for_each_loop* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::for_variable* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::iterator* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::for_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::namespace_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__namespace_name__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::namespace_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::namespace_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::inline_class_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::inline_class_declaration_composite* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::inline_class_declaration_composite_alias* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::inline_class_declaration_composite_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::created_class_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::code_block* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::code_block_input_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::code_block_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::code_block_argument_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::code_block_program* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::variable_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::array_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::variable_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::trailing_return_type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::return_type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::conditional_function_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_argument_type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_argument_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::condition_modifier_function_call* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::condition_modifier_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::condition_modifier_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_body* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_class_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_parameter* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_parameter_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::execution_keyword_permutation* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_body* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__class_stmt__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_stmt* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_stmt_member_field_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::member_field_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_stmt_member_function* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_stmt_member_template_function* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::template_class_stmt_constructor* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_stmt_constructor* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::accessibility* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::class_inherit_base* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::inherit_base* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::inherit_base_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::compound_base* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::compound_base_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::compound_base_alias* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute_section* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__attribute__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__attribute_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute_template_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute_function_argument* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::attribute_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enum_declaration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__enumeration__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enum_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enumeration* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enumeration_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::enumeration_value* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_reference* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__symbol__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_secondary* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__symbol_access__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_access* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::auto_deduce_array* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_name_secondary* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::symbol_name* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::function_access* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__expression__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__expression__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::index_access* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::anonymous_access* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::type* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__type_modifier__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::type_modifier* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::value_list* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_arrow__full_value__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::deamerreserved_star__COMMA__full_value__* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::full_value* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::value* node)
		{
		}
		virtual void Visit(const Celeste::ast::node::tuple* node)
		{
		}
	};

}}}

#endif // Celeste_AST_VISITOR_DEAMER_VISITOR_H
