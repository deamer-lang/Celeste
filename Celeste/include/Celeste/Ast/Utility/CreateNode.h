#ifndef CELESTE_AST_UTILITY_CREATENODE_H
#define CELESTE_AST_UTILITY_CREATENODE_H

#include "Celeste/Ast/Enum/Type.h"
#include "Celeste/Ast/Node/SINGLE_COMMENT.h"
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


#include <Deamer/External/Cpp/Ast/Node.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <string>
#include <vector>

namespace Celeste { namespace ast { namespace utility { 

	struct CreateNode
	{
	private:
		std::string nodeValue;
		std::size_t nodeType = 0;
		
		std::vector<::deamer::external::cpp::ast::Node*> nodes;
		std::vector<std::size_t> baseValues;

		int lineNumber = -1;
		int columnNumber = -1;

		std::size_t productionRuleId = 0;
		::deamer::external::cpp::ast::ProductionRuleType productionRuleType =
					::deamer::external::cpp::ast::ProductionRuleType::unknown;
	
	public:
		CreateNode() = default;
		~CreateNode() = default;

	public:
		CreateNode& Node(const ::deamer::external::cpp::lexer::TerminalObject* terminalObject)
		{
			nodeValue = terminalObject->GetValue();
			nodeType = terminalObject->GetType();
			
			lineNumber = terminalObject->GetLineNumber();
			columnNumber = terminalObject->GetColumnNumber();

			return *this;
		}

		CreateNode& Node(std::size_t nodeType_)
		{
			nodeType = nodeType_;

			return *this;
		}

		CreateNode& ProductionRule(std::size_t productionRuleId_,
			::deamer::external::cpp::ast::ProductionRuleType productionRuleType_ = ::deamer::external::cpp::ast::ProductionRuleType::user)
		{
			productionRuleId = productionRuleId_;
			productionRuleType = productionRuleType_;

			return *this;
		}

		CreateNode& SubNode(::deamer::external::cpp::lexer::TerminalObject* terminalObject)
		{
			CreateNode tmp{};
			
			tmp.Node(terminalObject);
			nodes.push_back(tmp.GetNode());

			return *this;
		}

		CreateNode& SubNode(::deamer::external::cpp::ast::Node* subNode_)
		{
			nodes.push_back(subNode_);
			return *this;
		}

		::deamer::external::cpp::ast::Node* GetNode()
		{
			switch(static_cast<::Celeste::ast::Type>(nodeType))
			{
			case ::Celeste::ast::Type::deamerreserved_unknown: {
				return new ::deamer::external::cpp::ast::Node(
					deamer::external::cpp::ast::NodeInformation{
						nodeType, deamer::external::cpp::ast::NodeValue::terminal, nodeValue,
						lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::SINGLE_COMMENT: {
				return new ::Celeste::ast::node::SINGLE_COMMENT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::CONSTANT: {
				return new ::Celeste::ast::node::CONSTANT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::FUNCTION: {
				return new ::Celeste::ast::node::FUNCTION({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::CLASS: {
				return new ::Celeste::ast::node::CLASS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::ENUM: {
				return new ::Celeste::ast::node::ENUM({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::CONDITIONAL: {
				return new ::Celeste::ast::node::CONDITIONAL({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::CODE: {
				return new ::Celeste::ast::node::CODE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::ATTRIBUTETOK: {
				return new ::Celeste::ast::node::ATTRIBUTETOK({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::RUNTIME: {
				return new ::Celeste::ast::node::RUNTIME({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::STATIC: {
				return new ::Celeste::ast::node::STATIC({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::AUTO: {
				return new ::Celeste::ast::node::AUTO({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::AUTOTYPE: {
				return new ::Celeste::ast::node::AUTOTYPE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::TEMPLATE: {
				return new ::Celeste::ast::node::TEMPLATE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::NAMESPACE: {
				return new ::Celeste::ast::node::NAMESPACE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::OPERATORNAME: {
				return new ::Celeste::ast::node::OPERATORNAME({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::OVERRIDE: {
				return new ::Celeste::ast::node::OVERRIDE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::VIRTUAL: {
				return new ::Celeste::ast::node::VIRTUAL({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PURE: {
				return new ::Celeste::ast::node::PURE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::AS: {
				return new ::Celeste::ast::node::AS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::IN: {
				return new ::Celeste::ast::node::IN({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::DISPLAY: {
				return new ::Celeste::ast::node::DISPLAY({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::RETURN: {
				return new ::Celeste::ast::node::RETURN({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::FOR: {
				return new ::Celeste::ast::node::FOR({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::IF: {
				return new ::Celeste::ast::node::IF({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::ELSEIF: {
				return new ::Celeste::ast::node::ELSEIF({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::ELSE: {
				return new ::Celeste::ast::node::ELSE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::INLINE: {
				return new ::Celeste::ast::node::INLINE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::CONSTRUCTOR: {
				return new ::Celeste::ast::node::CONSTRUCTOR({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::FILE_: {
				return new ::Celeste::ast::node::FILE_({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PROGRAM_: {
				return new ::Celeste::ast::node::PROGRAM_({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::IMPORT: {
				return new ::Celeste::ast::node::IMPORT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PUBLIC: {
				return new ::Celeste::ast::node::PUBLIC({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PROTECTED: {
				return new ::Celeste::ast::node::PROTECTED({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PRIVATE: {
				return new ::Celeste::ast::node::PRIVATE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::INHERIT: {
				return new ::Celeste::ast::node::INHERIT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::COMPOSITE: {
				return new ::Celeste::ast::node::COMPOSITE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::LEFT_BRACKET: {
				return new ::Celeste::ast::node::LEFT_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::RIGHT_BRACKET: {
				return new ::Celeste::ast::node::RIGHT_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::LEFT_SQUARE_BRACKET: {
				return new ::Celeste::ast::node::LEFT_SQUARE_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET: {
				return new ::Celeste::ast::node::RIGHT_SQUARE_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::LEFT_PARANTHESIS: {
				return new ::Celeste::ast::node::LEFT_PARANTHESIS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::RIGHT_PARANTHESIS: {
				return new ::Celeste::ast::node::RIGHT_PARANTHESIS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::COLON: {
				return new ::Celeste::ast::node::COLON({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::SEMICOLON: {
				return new ::Celeste::ast::node::SEMICOLON({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::COMMA: {
				return new ::Celeste::ast::node::COMMA({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::DOT: {
				return new ::Celeste::ast::node::DOT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::LTEQ: {
				return new ::Celeste::ast::node::LTEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::GTEQ: {
				return new ::Celeste::ast::node::GTEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::LT: {
				return new ::Celeste::ast::node::LT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::GT: {
				return new ::Celeste::ast::node::GT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PLUSEQ: {
				return new ::Celeste::ast::node::PLUSEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::MINUSEQ: {
				return new ::Celeste::ast::node::MINUSEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::MULTIPLYEQ: {
				return new ::Celeste::ast::node::MULTIPLYEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::DIVIDEEQ: {
				return new ::Celeste::ast::node::DIVIDEEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::EQEQ: {
				return new ::Celeste::ast::node::EQEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::EQ: {
				return new ::Celeste::ast::node::EQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::NOTEQ: {
				return new ::Celeste::ast::node::NOTEQ({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::NOT: {
				return new ::Celeste::ast::node::NOT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PLUSPLUS: {
				return new ::Celeste::ast::node::PLUSPLUS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::PLUS: {
				return new ::Celeste::ast::node::PLUS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::MINUSMINUS: {
				return new ::Celeste::ast::node::MINUSMINUS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::MINUS: {
				return new ::Celeste::ast::node::MINUS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::DIVIDE: {
				return new ::Celeste::ast::node::DIVIDE({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::MULTIPLY: {
				return new ::Celeste::ast::node::MULTIPLY({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::VARNAME: {
				return new ::Celeste::ast::node::VARNAME({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::NUMBER: {
				return new ::Celeste::ast::node::NUMBER({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::DECIMAL: {
				return new ::Celeste::ast::node::DECIMAL({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::TEXT: {
				return new ::Celeste::ast::node::TEXT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::ESCAPE_CHARS: {
				return new ::Celeste::ast::node::ESCAPE_CHARS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::Celeste::ast::Type::program: {
				return new ::Celeste::ast::node::program({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::root_program: {
				return new ::Celeste::ast::node::root_program({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::standard_block: {
				return new ::Celeste::ast::node::standard_block({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__stmt__: {
				return new ::Celeste::ast::node::deamerreserved_star__stmt__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::stmt: {
				return new ::Celeste::ast::node::stmt({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::import_statement: {
				return new ::Celeste::ast::node::import_statement({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::file_import: {
				return new ::Celeste::ast::node::file_import({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::mutation_group: {
				return new ::Celeste::ast::node::mutation_group({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::assignment: {
				return new ::Celeste::ast::node::assignment({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::assignment_operator: {
				return new ::Celeste::ast::node::assignment_operator({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::conditional_if: {
				return new ::Celeste::ast::node::conditional_if({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::conditional_else_if: {
				return new ::Celeste::ast::node::conditional_else_if({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::conditional_else: {
				return new ::Celeste::ast::node::conditional_else({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::conditional_block: {
				return new ::Celeste::ast::node::conditional_block({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_conditional_function_declaration: {
				return new ::Celeste::ast::node::template_conditional_function_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__template_parameter__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__template_parameter__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__function_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__function_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::conditional_function_declaration: {
				return new ::Celeste::ast::node::conditional_function_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_code_function_declaration: {
				return new ::Celeste::ast::node::template_code_function_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::code_function_declaration: {
				return new ::Celeste::ast::node::code_function_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::return_statement: {
				return new ::Celeste::ast::node::return_statement({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_increase: {
				return new ::Celeste::ast::node::symbol_increase({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_decrease: {
				return new ::Celeste::ast::node::symbol_decrease({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::expression: {
				return new ::Celeste::ast::node::expression({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::expression_no_value: {
				return new ::Celeste::ast::node::expression_no_value({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::t_expression: {
				return new ::Celeste::ast::node::t_expression({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::f_expression: {
				return new ::Celeste::ast::node::f_expression({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::display_call: {
				return new ::Celeste::ast::node::display_call({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::for_loop: {
				return new ::Celeste::ast::node::for_loop({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::for_iteration_loop: {
				return new ::Celeste::ast::node::for_iteration_loop({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::for_each_loop: {
				return new ::Celeste::ast::node::for_each_loop({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::for_variable: {
				return new ::Celeste::ast::node::for_variable({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::iterator: {
				return new ::Celeste::ast::node::iterator({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::for_block: {
				return new ::Celeste::ast::node::for_block({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::namespace_declaration: {
				return new ::Celeste::ast::node::namespace_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__namespace_name__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__namespace_name__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__: {
				return new ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::namespace_block: {
				return new ::Celeste::ast::node::namespace_block({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::namespace_name: {
				return new ::Celeste::ast::node::namespace_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::inline_class_declaration: {
				return new ::Celeste::ast::node::inline_class_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::inline_class_declaration_composite: {
				return new ::Celeste::ast::node::inline_class_declaration_composite({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::inline_class_declaration_composite_alias: {
				return new ::Celeste::ast::node::inline_class_declaration_composite_alias({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::inline_class_declaration_composite_name: {
				return new ::Celeste::ast::node::inline_class_declaration_composite_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::created_class_name: {
				return new ::Celeste::ast::node::created_class_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::code_block: {
				return new ::Celeste::ast::node::code_block({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::code_block_input_argument: {
				return new ::Celeste::ast::node::code_block_input_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::code_block_argument: {
				return new ::Celeste::ast::node::code_block_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::code_block_argument_name: {
				return new ::Celeste::ast::node::code_block_argument_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::code_block_program: {
				return new ::Celeste::ast::node::code_block_program({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::variable_declaration: {
				return new ::Celeste::ast::node::variable_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::array_declaration: {
				return new ::Celeste::ast::node::array_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::variable_name: {
				return new ::Celeste::ast::node::variable_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_function_declaration: {
				return new ::Celeste::ast::node::template_function_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_declaration: {
				return new ::Celeste::ast::node::function_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::trailing_return_type: {
				return new ::Celeste::ast::node::trailing_return_type({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::return_type: {
				return new ::Celeste::ast::node::return_type({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::conditional_function_argument: {
				return new ::Celeste::ast::node::conditional_function_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_argument: {
				return new ::Celeste::ast::node::function_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_argument_type: {
				return new ::Celeste::ast::node::function_argument_type({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_argument_name: {
				return new ::Celeste::ast::node::function_argument_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::condition_modifier_function_call: {
				return new ::Celeste::ast::node::condition_modifier_function_call({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::condition_modifier_name: {
				return new ::Celeste::ast::node::condition_modifier_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::condition_modifier_argument: {
				return new ::Celeste::ast::node::condition_modifier_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_body: {
				return new ::Celeste::ast::node::function_body({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_name: {
				return new ::Celeste::ast::node::function_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_class_declaration: {
				return new ::Celeste::ast::node::template_class_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_parameter: {
				return new ::Celeste::ast::node::template_parameter({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_parameter_name: {
				return new ::Celeste::ast::node::template_parameter_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_declaration: {
				return new ::Celeste::ast::node::class_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_name: {
				return new ::Celeste::ast::node::class_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::execution_keyword_permutation: {
				return new ::Celeste::ast::node::execution_keyword_permutation({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_body: {
				return new ::Celeste::ast::node::class_body({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__class_stmt__: {
				return new ::Celeste::ast::node::deamerreserved_star__class_stmt__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_stmt: {
				return new ::Celeste::ast::node::class_stmt({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_stmt_member_field_declaration: {
				return new ::Celeste::ast::node::class_stmt_member_field_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::member_field_name: {
				return new ::Celeste::ast::node::member_field_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_stmt_member_function: {
				return new ::Celeste::ast::node::class_stmt_member_function({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_stmt_member_template_function: {
				return new ::Celeste::ast::node::class_stmt_member_template_function({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::template_class_stmt_constructor: {
				return new ::Celeste::ast::node::template_class_stmt_constructor({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_stmt_constructor: {
				return new ::Celeste::ast::node::class_stmt_constructor({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::accessibility: {
				return new ::Celeste::ast::node::accessibility({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::class_inherit_base: {
				return new ::Celeste::ast::node::class_inherit_base({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::inherit_base: {
				return new ::Celeste::ast::node::inherit_base({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::inherit_base_name: {
				return new ::Celeste::ast::node::inherit_base_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::compound_base: {
				return new ::Celeste::ast::node::compound_base({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::compound_base_name: {
				return new ::Celeste::ast::node::compound_base_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::compound_base_alias: {
				return new ::Celeste::ast::node::compound_base_alias({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute_section: {
				return new ::Celeste::ast::node::attribute_section({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__attribute__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__attribute__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__: {
				return new ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute: {
				return new ::Celeste::ast::node::attribute({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__attribute_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute_argument: {
				return new ::Celeste::ast::node::attribute_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute_template_argument: {
				return new ::Celeste::ast::node::attribute_template_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute_declaration: {
				return new ::Celeste::ast::node::attribute_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute_function_argument: {
				return new ::Celeste::ast::node::attribute_function_argument({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::attribute_name: {
				return new ::Celeste::ast::node::attribute_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::enum_declaration: {
				return new ::Celeste::ast::node::enum_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__enumeration__: {
				return new ::Celeste::ast::node::deamerreserved_star__enumeration__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::enum_name: {
				return new ::Celeste::ast::node::enum_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::enumeration: {
				return new ::Celeste::ast::node::enumeration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::enumeration_name: {
				return new ::Celeste::ast::node::enumeration_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::enumeration_value: {
				return new ::Celeste::ast::node::enumeration_value({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_reference: {
				return new ::Celeste::ast::node::symbol_reference({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__symbol__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__symbol__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__: {
				return new ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_secondary: {
				return new ::Celeste::ast::node::symbol_secondary({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__symbol_access__: {
				return new ::Celeste::ast::node::deamerreserved_star__symbol_access__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol: {
				return new ::Celeste::ast::node::symbol({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_access: {
				return new ::Celeste::ast::node::symbol_access({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::auto_deduce_array: {
				return new ::Celeste::ast::node::auto_deduce_array({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_name_secondary: {
				return new ::Celeste::ast::node::symbol_name_secondary({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::symbol_name: {
				return new ::Celeste::ast::node::symbol_name({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::function_access: {
				return new ::Celeste::ast::node::function_access({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__expression__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__expression__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__expression__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__expression__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::index_access: {
				return new ::Celeste::ast::node::index_access({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::anonymous_access: {
				return new ::Celeste::ast::node::anonymous_access({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::type: {
				return new ::Celeste::ast::node::type({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__type_modifier__: {
				return new ::Celeste::ast::node::deamerreserved_star__type_modifier__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::type_modifier: {
				return new ::Celeste::ast::node::type_modifier({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::value_list: {
				return new ::Celeste::ast::node::value_list({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_arrow__full_value__: {
				return new ::Celeste::ast::node::deamerreserved_arrow__full_value__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__: {
				return new ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::full_value: {
				return new ::Celeste::ast::node::full_value({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::value: {
				return new ::Celeste::ast::node::value({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::Celeste::ast::Type::tuple: {
				return new ::Celeste::ast::node::tuple({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}

			}

			return nullptr;
		}
	};

}}}

#endif // CELESTE_AST_UTILITY_CREATENODE_H