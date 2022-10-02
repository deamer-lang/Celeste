#ifndef CELESTE_AST_REFERENCE_ACCESSTEMPLATEBASE_H
#define CELESTE_AST_REFERENCE_ACCESSTEMPLATEBASE_H

#include "Celeste/Ast/Relation/NodeEnumToType.h"
#include "Celeste/Ast/Relation/NodeTypeToEnum.h"
#include "Celeste/Ast/Relation/NodeIsInlined.h"

#include "Celeste/Ast/Enum/Type.h"
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


#include <vector>
#include <utility>

namespace Celeste { namespace ast { namespace reference { 

	struct AccessBase
	{	
	public:
		AccessBase() = default;

	protected:
		template<::Celeste::ast::Type T>
		void Get(std::vector<const ::Celeste::ast::relation::NodeEnumToType_t<T>*>& foundNodes, const ::deamer::external::cpp::ast::Node* currentNode)
		{
			for(const auto* const node : currentNode->GetNodes())
			{
				if (node->GetType() == static_cast<::std::size_t>(T))
				{
					foundNodes.push_back(static_cast<const  ::Celeste::ast::relation::NodeEnumToType_t<T>*>(node));
				}
				else if (::Celeste::ast::relation::NodeIsInlined(static_cast<::Celeste::ast::Type>(node->GetType())))
				{
					Get<T>(foundNodes, node);
				}
			}
		}

		template<::Celeste::ast::Type T, typename Q>
		inline std::vector<const ::Celeste::ast::relation::NodeEnumToType_t<T>*> Get(std::vector<const Q*>& currentNodes)
		{
			std::vector<const ::Celeste::ast::relation::NodeEnumToType_t<T>*> foundNodes;

			for (const auto* const currentNode : currentNodes)
			{
				AccessBase::Get<T>(foundNodes, currentNode);
			}

			return foundNodes;
		}
	};

	/*!	\class AccessTemplateBase
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 *
	 *	\details This class contains the type dependent implementation of Access<T>.
	 *	Refrain from using this class, as there is no backwards compatibility
	 *	guarantee of this implementation class,
	 *	Use Access<T> instead, this is backwards compatible and offers different benefits.
	 *
	 *	\see Access
	 */
	template<typename T>
	struct AccessTemplateBase : public AccessBase
	{
		AccessTemplateBase() = delete;
		~AccessTemplateBase() = delete;
	};

	/*! \class Access
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 *
	 *	\details Type dispatcher for logic.
	 *
	 *	\see AccessTemplateBase
	 */
	template<typename T>
	struct Access : public AccessTemplateBase<T>
	{
		Access(std::vector<const T*> ts_) : AccessTemplateBase<T>(ts_)
		{
		}

		Access(const T& t) : AccessTemplateBase<T>(t)
		{
		}

		Access(const T* t) : AccessTemplateBase<T>(t)
		{
		}

		Access(const AccessTemplateBase<T>& rhs) : AccessTemplateBase<T>(rhs)
		{
		}

		Access() = default;
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::program>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::root_program>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::standard_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::import_statement>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::file_import>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::mutation_group>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::assignment>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::assignment_operator>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_if>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_else_if>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_else>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::return_statement>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_increase>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_decrease>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::expression>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::expression_no_value>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::t_expression>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::f_expression>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::display_call>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_loop>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_each_loop>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_variable>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::iterator>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::namespace_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::namespace_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::namespace_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::created_class_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_argument_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_program>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::array_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::trailing_return_type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::return_type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument_type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condition_modifier_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_body>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_class_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_parameter>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_parameter_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_body>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::member_field_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::accessibility>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_inherit_base>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inherit_base>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inherit_base_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::compound_base>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::compound_base_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::compound_base_alias>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_section>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enumeration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enumeration_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enumeration_value>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_reference>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_secondary>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_access>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_access>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::index_access>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::anonymous_access>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::type_modifier>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::value_list>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::full_value>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::value>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::tuple>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::SINGLE_COMMENT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CONSTANT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FUNCTION>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CLASS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ENUM>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CONDITIONAL>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CODE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RUNTIME>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::STATIC>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::AUTO>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::AUTOTYPE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::TEMPLATE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NAMESPACE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::OPERATORNAME>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::OVERRIDE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::VIRTUAL>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PURE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::AS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IN>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DISPLAY>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RETURN>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FOR>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IF>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ELSEIF>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ELSE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::INLINE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FILE_>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PROGRAM_>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IMPORT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PUBLIC>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PROTECTED>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PRIVATE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::INHERIT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COMPOSITE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COLON>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::SEMICOLON>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COMMA>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DOT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LTEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::GTEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::GT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUSEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUSEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOTEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUSPLUS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUSMINUS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DIVIDE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MULTIPLY>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::VARNAME>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NUMBER>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DECIMAL>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::TEXT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>;


	
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::program> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::program*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::program*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::program& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::program* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::program>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::program*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::root_program> root_program();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::root_program> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::root_program*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::root_program*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::root_program& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::root_program* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::root_program>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::root_program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::root_program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::root_program*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::root_program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::standard_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::standard_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::standard_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::standard_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::standard_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::standard_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::standard_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::standard_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> deamerreserved_star__stmt__();
AccessTemplateBase<::Celeste::ast::node::stmt> stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::standard_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__stmt__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__stmt__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> deamerreserved_star__stmt__();
AccessTemplateBase<::Celeste::ast::node::stmt> stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::import_statement> import_statement();
AccessTemplateBase<::Celeste::ast::node::mutation_group> mutation_group();
AccessTemplateBase<::Celeste::ast::node::assignment> assignment();
AccessTemplateBase<::Celeste::ast::node::conditional_if> conditional_if();
AccessTemplateBase<::Celeste::ast::node::conditional_else_if> conditional_else_if();
AccessTemplateBase<::Celeste::ast::node::conditional_else> conditional_else();
AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration> template_conditional_function_declaration();
AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration> conditional_function_declaration();
AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration> template_code_function_declaration();
AccessTemplateBase<::Celeste::ast::node::code_function_declaration> code_function_declaration();
AccessTemplateBase<::Celeste::ast::node::return_statement> return_statement();
AccessTemplateBase<::Celeste::ast::node::symbol_increase> symbol_increase();
AccessTemplateBase<::Celeste::ast::node::symbol_decrease> symbol_decrease();
AccessTemplateBase<::Celeste::ast::node::display_call> display_call();
AccessTemplateBase<::Celeste::ast::node::for_loop> for_loop();
AccessTemplateBase<::Celeste::ast::node::namespace_declaration> namespace_declaration();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration> inline_class_declaration();
AccessTemplateBase<::Celeste::ast::node::variable_declaration> variable_declaration();
AccessTemplateBase<::Celeste::ast::node::template_function_declaration> template_function_declaration();
AccessTemplateBase<::Celeste::ast::node::function_declaration> function_declaration();
AccessTemplateBase<::Celeste::ast::node::template_class_declaration> template_class_declaration();
AccessTemplateBase<::Celeste::ast::node::class_declaration> class_declaration();
AccessTemplateBase<::Celeste::ast::node::attribute_declaration> attribute_declaration();
AccessTemplateBase<::Celeste::ast::node::enum_declaration> enum_declaration();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::SEMICOLON> SEMICOLON();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::import_statement> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::import_statement*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::import_statement*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::import_statement& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::import_statement* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::import_statement>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::import_statement>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::import_statement*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::import_statement*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::file_import> file_import();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::import_statement>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::file_import> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::file_import*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::file_import*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::file_import& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::file_import* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::file_import>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::file_import>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::file_import*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::file_import*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::FILE_> FILE_();
AccessTemplateBase<::Celeste::ast::node::IMPORT> IMPORT();
AccessTemplateBase<::Celeste::ast::node::TEXT> TEXT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::file_import>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::mutation_group> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::mutation_group*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::mutation_group*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::mutation_group& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::mutation_group* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::mutation_group>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::mutation_group>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::mutation_group*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::mutation_group*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__> deamerreserved_arrow__symbol_reference__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> deamerreserved_star__COMMA__symbol_reference__();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::mutation_group>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> deamerreserved_star__COMMA__symbol_reference__();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> deamerreserved_star__COMMA__symbol_reference__();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::assignment> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::assignment*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::assignment*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::assignment& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::assignment* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::assignment>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::assignment>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::assignment*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::assignment*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::assignment_operator> assignment_operator();
AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::assignment>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::assignment_operator> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::assignment_operator*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::assignment_operator*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::assignment_operator& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::assignment_operator* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::assignment_operator>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::assignment_operator>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::assignment_operator*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::assignment_operator*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::PLUSEQ> PLUSEQ();
AccessTemplateBase<::Celeste::ast::node::MINUSEQ> MINUSEQ();
AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ> MULTIPLYEQ();
AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ> DIVIDEEQ();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::assignment_operator>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_if> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_if*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_if*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_if& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_if* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_if>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_if>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_if*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_if*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_block> conditional_block();
AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::IF> IF();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_if>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_else_if> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_else_if*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_else_if*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_else_if& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_else_if* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_else_if>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_else_if>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_else_if*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_else_if*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_block> conditional_block();
AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::IF> IF();
AccessTemplateBase<::Celeste::ast::node::ELSEIF> ELSEIF();
AccessTemplateBase<::Celeste::ast::node::ELSE> ELSE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_else_if>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_else> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_else*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_else*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_else& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_else* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_else>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_else>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_else*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_else*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_block> conditional_block();
AccessTemplateBase<::Celeste::ast::node::ELSE> ELSE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_else>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_conditional_function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_conditional_function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_conditional_function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_conditional_function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_conditional_function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_conditional_function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> deamerreserved_arrow__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__> deamerreserved_arrow__conditional_function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> deamerreserved_star__COMMA__conditional_function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> conditional_function_argument();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::CONDITIONAL> CONDITIONAL();
AccessTemplateBase<::Celeste::ast::node::TEMPLATE> TEMPLATE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> deamerreserved_star__COMMA__conditional_function_argument__();
AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> conditional_function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> deamerreserved_star__COMMA__conditional_function_argument__();
AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> conditional_function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__> deamerreserved_arrow__conditional_function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> deamerreserved_star__COMMA__conditional_function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> conditional_function_argument();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::CONDITIONAL> CONDITIONAL();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_code_function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_code_function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_code_function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_code_function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_code_function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_code_function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> deamerreserved_arrow__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::CODE> CODE();
AccessTemplateBase<::Celeste::ast::node::TEMPLATE> TEMPLATE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::code_function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::code_function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::code_function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::code_function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::code_function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::code_function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::CODE> CODE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::code_function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::return_statement> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::return_statement*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::return_statement*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::return_statement& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::return_statement* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::return_statement>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::return_statement>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::return_statement*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::return_statement*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::RETURN> RETURN();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::return_statement>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_increase> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_increase*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_increase*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_increase& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_increase* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_increase>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_increase>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_increase*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_increase*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::PLUSPLUS> PLUSPLUS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_increase>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_decrease> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_decrease*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_decrease*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_decrease& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_decrease* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_decrease>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_decrease>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_decrease*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_decrease*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::MINUSMINUS> MINUSMINUS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_decrease>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::expression> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::expression*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::expression*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::expression& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::expression* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::expression>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::expression>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::expression*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::expression*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression_no_value> expression_no_value();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::expression>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::expression_no_value> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::expression_no_value*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::expression_no_value*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::expression_no_value& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::expression_no_value* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::expression_no_value>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::expression_no_value>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::expression_no_value*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::expression_no_value*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression_no_value> expression_no_value();
AccessTemplateBase<::Celeste::ast::node::t_expression> t_expression();
AccessTemplateBase<::Celeste::ast::node::PLUS> PLUS();
AccessTemplateBase<::Celeste::ast::node::MINUS> MINUS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::expression_no_value>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::t_expression> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::t_expression*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::t_expression*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::t_expression& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::t_expression* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::t_expression>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::t_expression>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::t_expression*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::t_expression*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::t_expression> t_expression();
AccessTemplateBase<::Celeste::ast::node::f_expression> f_expression();
AccessTemplateBase<::Celeste::ast::node::LTEQ> LTEQ();
AccessTemplateBase<::Celeste::ast::node::GTEQ> GTEQ();
AccessTemplateBase<::Celeste::ast::node::LT> LT();
AccessTemplateBase<::Celeste::ast::node::GT> GT();
AccessTemplateBase<::Celeste::ast::node::EQEQ> EQEQ();
AccessTemplateBase<::Celeste::ast::node::NOTEQ> NOTEQ();
AccessTemplateBase<::Celeste::ast::node::NOT> NOT();
AccessTemplateBase<::Celeste::ast::node::DIVIDE> DIVIDE();
AccessTemplateBase<::Celeste::ast::node::MULTIPLY> MULTIPLY();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::t_expression>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::f_expression> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::f_expression*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::f_expression*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::f_expression& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::f_expression* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::f_expression>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::f_expression>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::f_expression*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::f_expression*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression_no_value> expression_no_value();
AccessTemplateBase<::Celeste::ast::node::value> value();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::f_expression>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::display_call> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::display_call*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::display_call*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::display_call& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::display_call* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::display_call>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::display_call>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::display_call*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::display_call*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::DISPLAY> DISPLAY();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::display_call>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_loop> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::for_loop*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::for_loop*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_loop& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_loop* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::for_loop>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::for_loop>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::for_loop*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::for_loop*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::for_iteration_loop> for_iteration_loop();
AccessTemplateBase<::Celeste::ast::node::for_each_loop> for_each_loop();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::for_loop>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_iteration_loop> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::for_iteration_loop*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::for_iteration_loop*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_iteration_loop& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_iteration_loop* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::for_iteration_loop*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::for_iteration_loop*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::for_block> for_block();
AccessTemplateBase<::Celeste::ast::node::FOR> FOR();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_each_loop> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::for_each_loop*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::for_each_loop*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_each_loop& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_each_loop* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::for_each_loop>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::for_each_loop>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::for_each_loop*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::for_each_loop*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::for_variable> for_variable();
AccessTemplateBase<::Celeste::ast::node::iterator> iterator();
AccessTemplateBase<::Celeste::ast::node::for_block> for_block();
AccessTemplateBase<::Celeste::ast::node::type> type();
AccessTemplateBase<::Celeste::ast::node::IN> IN();
AccessTemplateBase<::Celeste::ast::node::FOR> FOR();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COLON> COLON();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::for_each_loop>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_variable> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::for_variable*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::for_variable*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_variable& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_variable* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::for_variable>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::for_variable>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::for_variable*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::for_variable*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::for_variable>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::iterator> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::iterator*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::iterator*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::iterator& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::iterator* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::iterator>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::iterator>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::iterator*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::iterator*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::full_value> full_value();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::iterator>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::for_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::for_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::for_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::for_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::for_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::for_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::for_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::for_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::for_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::namespace_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::namespace_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::namespace_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::namespace_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::namespace_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::namespace_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::namespace_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::namespace_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::namespace_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__> deamerreserved_arrow__namespace_name__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> deamerreserved_star__DOT__namespace_name__();
AccessTemplateBase<::Celeste::ast::node::namespace_block> namespace_block();
AccessTemplateBase<::Celeste::ast::node::namespace_name> namespace_name();
AccessTemplateBase<::Celeste::ast::node::NAMESPACE> NAMESPACE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::DOT> DOT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::namespace_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> deamerreserved_star__DOT__namespace_name__();
AccessTemplateBase<::Celeste::ast::node::namespace_name> namespace_name();
AccessTemplateBase<::Celeste::ast::node::DOT> DOT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> deamerreserved_star__DOT__namespace_name__();
AccessTemplateBase<::Celeste::ast::node::namespace_name> namespace_name();
AccessTemplateBase<::Celeste::ast::node::DOT> DOT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::namespace_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::namespace_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::namespace_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::namespace_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::namespace_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::namespace_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::namespace_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::namespace_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::namespace_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::namespace_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::namespace_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::namespace_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::namespace_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::namespace_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::namespace_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::namespace_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::namespace_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::namespace_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::namespace_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::namespace_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::inline_class_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::inline_class_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::inline_class_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::inline_class_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__> deamerreserved_arrow__inline_class_declaration_composite__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> deamerreserved_star__COMMA__inline_class_declaration_composite__();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> inline_class_declaration_composite();
AccessTemplateBase<::Celeste::ast::node::created_class_name> created_class_name();
AccessTemplateBase<::Celeste::ast::node::COLON> COLON();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> deamerreserved_star__COMMA__inline_class_declaration_composite__();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> inline_class_declaration_composite();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> deamerreserved_star__COMMA__inline_class_declaration_composite__();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> inline_class_declaration_composite();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::inline_class_declaration_composite*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::inline_class_declaration_composite*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration_composite& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration_composite* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::inline_class_declaration_composite*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::inline_class_declaration_composite*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__> deamerreserved_arrow__inline_class_declaration_composite_alias__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> deamerreserved_star__COMMA__inline_class_declaration_composite_alias__();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> inline_class_declaration_composite_alias();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name> inline_class_declaration_composite_name();
AccessTemplateBase<::Celeste::ast::node::AS> AS();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::COLON> COLON();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> deamerreserved_star__COMMA__inline_class_declaration_composite_alias__();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> inline_class_declaration_composite_alias();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> deamerreserved_star__COMMA__inline_class_declaration_composite_alias__();
AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> inline_class_declaration_composite_alias();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_alias*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_alias*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration_composite_alias& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration_composite_alias* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_alias*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_alias*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration_composite_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inline_class_declaration_composite_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::inline_class_declaration_composite_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::created_class_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::created_class_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::created_class_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::created_class_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::created_class_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::created_class_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::created_class_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::created_class_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::created_class_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::created_class_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::code_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::code_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::code_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::code_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::code_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__> deamerreserved_arrow__code_block_input_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> deamerreserved_star__COMMA__code_block_input_argument__();
AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> code_block_input_argument();
AccessTemplateBase<::Celeste::ast::node::code_block_program> code_block_program();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::code_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> deamerreserved_star__COMMA__code_block_input_argument__();
AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> code_block_input_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> deamerreserved_star__COMMA__code_block_input_argument__();
AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> code_block_input_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::code_block_input_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::code_block_input_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_input_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_input_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::code_block_input_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::code_block_input_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block_argument> code_block_argument();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::code_block_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::code_block_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::code_block_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::code_block_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::code_block_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block_argument_name> code_block_argument_name();
AccessTemplateBase<::Celeste::ast::node::type> type();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::code_block_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_argument_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::code_block_argument_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::code_block_argument_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_argument_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_argument_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block_argument_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::code_block_argument_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::code_block_argument_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::code_block_argument_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::code_block_argument_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::code_block_program> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::code_block_program*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::code_block_program*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_program& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::code_block_program* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block_program>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::code_block_program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::code_block_program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::code_block_program*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::code_block_program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::variable_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::variable_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::variable_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::variable_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::variable_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::variable_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::variable_name> variable_name();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::type> type();
AccessTemplateBase<::Celeste::ast::node::value_list> value_list();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::variable_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::array_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::array_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::array_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::array_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::array_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::array_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::array_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::array_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::array_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::array_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::variable_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::variable_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::variable_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::variable_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::variable_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::variable_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::variable_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> deamerreserved_arrow__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::trailing_return_type> trailing_return_type();
AccessTemplateBase<::Celeste::ast::node::return_type> return_type();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::FUNCTION> FUNCTION();
AccessTemplateBase<::Celeste::ast::node::TEMPLATE> TEMPLATE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::trailing_return_type> trailing_return_type();
AccessTemplateBase<::Celeste::ast::node::return_type> return_type();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::FUNCTION> FUNCTION();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::trailing_return_type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::trailing_return_type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::trailing_return_type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::trailing_return_type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::trailing_return_type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::trailing_return_type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::trailing_return_type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::trailing_return_type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::trailing_return_type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::return_type> return_type();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::trailing_return_type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::return_type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::return_type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::return_type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::return_type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::return_type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::return_type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::return_type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::return_type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::return_type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::type> type();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::return_type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_function_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_function_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_function_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_function_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_function_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_function_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument_type> function_argument_type();
AccessTemplateBase<::Celeste::ast::node::function_argument_name> function_argument_name();
AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call> condition_modifier_function_call();
AccessTemplateBase<::Celeste::ast::node::full_value> full_value();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument_type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_argument_type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_argument_type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument_type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument_type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument_type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_argument_type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_argument_type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_argument_type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::type> type();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_argument_type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_argument_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_argument_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_argument_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_argument_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_argument_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_argument_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::condition_modifier_function_call*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::condition_modifier_function_call*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condition_modifier_function_call& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condition_modifier_function_call* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::condition_modifier_function_call*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::condition_modifier_function_call*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__> deamerreserved_arrow__condition_modifier_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> deamerreserved_star__COMMA__condition_modifier_argument__();
AccessTemplateBase<::Celeste::ast::node::condition_modifier_name> condition_modifier_name();
AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> condition_modifier_argument();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> deamerreserved_star__COMMA__condition_modifier_argument__();
AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> condition_modifier_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> deamerreserved_star__COMMA__condition_modifier_argument__();
AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> condition_modifier_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condition_modifier_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::condition_modifier_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::condition_modifier_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condition_modifier_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condition_modifier_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::condition_modifier_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::condition_modifier_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::condition_modifier_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::condition_modifier_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::condition_modifier_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::condition_modifier_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::condition_modifier_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condition_modifier_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condition_modifier_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::condition_modifier_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::condition_modifier_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::full_value> full_value();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_body> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_body*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_body*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_body& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_body* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_body>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_body>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_body*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_body*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::standard_block> standard_block();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_body>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_class_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_class_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_class_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_class_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_class_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_class_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_class_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_class_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_class_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> deamerreserved_arrow__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::class_name> class_name();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::class_body> class_body();
AccessTemplateBase<::Celeste::ast::node::class_inherit_base> class_inherit_base();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::CLASS> CLASS();
AccessTemplateBase<::Celeste::ast::node::TEMPLATE> TEMPLATE();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_class_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_parameter> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_parameter*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_parameter*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_parameter& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_parameter* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_parameter>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_parameter>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_parameter*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_parameter*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::template_parameter_name> template_parameter_name();
AccessTemplateBase<::Celeste::ast::node::type> type();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_parameter>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_parameter_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_parameter_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_parameter_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_parameter_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_parameter_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_parameter_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_parameter_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_parameter_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_parameter_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_parameter_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__> deamerreserved_arrow__class_inherit_base__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> deamerreserved_star__COMMA__class_inherit_base__();
AccessTemplateBase<::Celeste::ast::node::class_name> class_name();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::class_body> class_body();
AccessTemplateBase<::Celeste::ast::node::class_inherit_base> class_inherit_base();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::CLASS> CLASS();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> deamerreserved_star__COMMA__class_inherit_base__();
AccessTemplateBase<::Celeste::ast::node::class_inherit_base> class_inherit_base();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> deamerreserved_star__COMMA__class_inherit_base__();
AccessTemplateBase<::Celeste::ast::node::class_inherit_base> class_inherit_base();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::execution_keyword_permutation*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::execution_keyword_permutation*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::execution_keyword_permutation& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::execution_keyword_permutation* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::execution_keyword_permutation*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::execution_keyword_permutation*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::CODE> CODE();
AccessTemplateBase<::Celeste::ast::node::RUNTIME> RUNTIME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_body> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_body*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_body*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_body& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_body* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_body>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_body>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_body*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_body*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> deamerreserved_star__class_stmt__();
AccessTemplateBase<::Celeste::ast::node::class_stmt> class_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_body>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__class_stmt__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__class_stmt__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> deamerreserved_star__class_stmt__();
AccessTemplateBase<::Celeste::ast::node::class_stmt> class_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration> class_stmt_member_field_declaration();
AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function> class_stmt_member_function();
AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function> class_stmt_member_template_function();
AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor> template_class_stmt_constructor();
AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor> class_stmt_constructor();
AccessTemplateBase<::Celeste::ast::node::accessibility> accessibility();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_stmt_member_field_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_stmt_member_field_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_member_field_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_member_field_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_stmt_member_field_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_stmt_member_field_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::member_field_name> member_field_name();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::type> type();
AccessTemplateBase<::Celeste::ast::node::value_list> value_list();
AccessTemplateBase<::Celeste::ast::node::SEMICOLON> SEMICOLON();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::member_field_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::member_field_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::member_field_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::member_field_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::member_field_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::member_field_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::member_field_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::member_field_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::member_field_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::member_field_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_stmt_member_function*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_stmt_member_function*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_member_function& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_member_function* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_stmt_member_function*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_stmt_member_function*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::function_declaration> function_declaration();
AccessTemplateBase<::Celeste::ast::node::OVERRIDE> OVERRIDE();
AccessTemplateBase<::Celeste::ast::node::VIRTUAL> VIRTUAL();
AccessTemplateBase<::Celeste::ast::node::PURE> PURE();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_stmt_member_template_function*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_stmt_member_template_function*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_member_template_function& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_member_template_function* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_stmt_member_template_function*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_stmt_member_template_function*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::template_function_declaration> template_function_declaration();
AccessTemplateBase<::Celeste::ast::node::OVERRIDE> OVERRIDE();
AccessTemplateBase<::Celeste::ast::node::VIRTUAL> VIRTUAL();
AccessTemplateBase<::Celeste::ast::node::PURE> PURE();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::template_class_stmt_constructor*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::template_class_stmt_constructor*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_class_stmt_constructor& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::template_class_stmt_constructor* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::template_class_stmt_constructor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::template_class_stmt_constructor*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> deamerreserved_arrow__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::template_parameter> template_parameter();
AccessTemplateBase<::Celeste::ast::node::class_name> class_name();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::TEMPLATE> TEMPLATE();
AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR> CONSTRUCTOR();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_stmt_constructor*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_stmt_constructor*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_constructor& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt_constructor* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_stmt_constructor*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_stmt_constructor*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::class_name> class_name();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR> CONSTRUCTOR();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::accessibility> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::accessibility*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::accessibility*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::accessibility& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::accessibility* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::accessibility>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::accessibility>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::accessibility*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::accessibility*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::PUBLIC> PUBLIC();
AccessTemplateBase<::Celeste::ast::node::PROTECTED> PROTECTED();
AccessTemplateBase<::Celeste::ast::node::PRIVATE> PRIVATE();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::accessibility>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_inherit_base> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_inherit_base*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_inherit_base*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_inherit_base& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_inherit_base* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_inherit_base>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_inherit_base>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_inherit_base*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_inherit_base*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::inherit_base> inherit_base();
AccessTemplateBase<::Celeste::ast::node::compound_base> compound_base();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_inherit_base>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inherit_base> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::inherit_base*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::inherit_base*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inherit_base& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inherit_base* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::inherit_base>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::inherit_base>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::inherit_base*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::inherit_base*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::inherit_base_name> inherit_base_name();
AccessTemplateBase<::Celeste::ast::node::INHERIT> INHERIT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::inherit_base>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::inherit_base_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::inherit_base_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::inherit_base_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inherit_base_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::inherit_base_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::inherit_base_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::inherit_base_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::inherit_base_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::inherit_base_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::inherit_base_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::compound_base> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::compound_base*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::compound_base*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::compound_base& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::compound_base* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::compound_base>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::compound_base>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::compound_base*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::compound_base*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__> deamerreserved_arrow__compound_base_alias__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> deamerreserved_star__COMMA__compound_base_alias__();
AccessTemplateBase<::Celeste::ast::node::compound_base_name> compound_base_name();
AccessTemplateBase<::Celeste::ast::node::compound_base_alias> compound_base_alias();
AccessTemplateBase<::Celeste::ast::node::AS> AS();
AccessTemplateBase<::Celeste::ast::node::COMPOSITE> COMPOSITE();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::compound_base>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> deamerreserved_star__COMMA__compound_base_alias__();
AccessTemplateBase<::Celeste::ast::node::compound_base_alias> compound_base_alias();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> deamerreserved_star__COMMA__compound_base_alias__();
AccessTemplateBase<::Celeste::ast::node::compound_base_alias> compound_base_alias();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::compound_base_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::compound_base_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::compound_base_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::compound_base_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::compound_base_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::compound_base_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::compound_base_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::compound_base_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::compound_base_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::compound_base_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::compound_base_alias> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::compound_base_alias*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::compound_base_alias*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::compound_base_alias& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::compound_base_alias* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::compound_base_alias>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::compound_base_alias>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::compound_base_alias*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::compound_base_alias*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::compound_base_alias>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_section> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute_section*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute_section*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_section& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_section* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_section>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute_section>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute_section*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute_section*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__> deamerreserved_arrow__attribute__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> deamerreserved_star__deamerreserved_optional__COMMA____attribute__();
AccessTemplateBase<::Celeste::ast::node::attribute> attribute();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute_section>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> deamerreserved_star__deamerreserved_optional__COMMA____attribute__();
AccessTemplateBase<::Celeste::ast::node::attribute> attribute();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> deamerreserved_star__deamerreserved_optional__COMMA____attribute__();
AccessTemplateBase<::Celeste::ast::node::attribute> attribute();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__> deamerreserved_arrow__attribute_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> deamerreserved_star__COMMA__attribute_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__> deamerreserved_arrow__attribute_template_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> deamerreserved_star__COMMA__attribute_template_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_argument> attribute_argument();
AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> attribute_template_argument();
AccessTemplateBase<::Celeste::ast::node::symbol_name> symbol_name();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> deamerreserved_star__COMMA__attribute_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_argument> attribute_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> deamerreserved_star__COMMA__attribute_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_argument> attribute_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> deamerreserved_star__COMMA__attribute_template_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> attribute_template_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> deamerreserved_star__COMMA__attribute_template_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> attribute_template_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute_template_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute_template_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_template_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_template_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute_template_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute_template_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::trailing_return_type> trailing_return_type();
AccessTemplateBase<::Celeste::ast::node::function_body> function_body();
AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> execution_keyword_permutation();
AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__> deamerreserved_arrow__attribute_function_argument__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> deamerreserved_star__COMMA__attribute_function_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> attribute_function_argument();
AccessTemplateBase<::Celeste::ast::node::attribute_name> attribute_name();
AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK> ATTRIBUTETOK();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> deamerreserved_star__COMMA__attribute_function_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> attribute_function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> deamerreserved_star__COMMA__attribute_function_argument__();
AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> attribute_function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute_function_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute_function_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_function_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_function_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute_function_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute_function_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::attribute_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::attribute_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::attribute_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::attribute_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::attribute_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::attribute_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::attribute_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_name> symbol_name();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::attribute_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enum_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enum_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enum_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enum_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enum_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::attribute_section> attribute_section();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__> deamerreserved_star__enumeration__();
AccessTemplateBase<::Celeste::ast::node::enum_name> enum_name();
AccessTemplateBase<::Celeste::ast::node::enumeration> enumeration();
AccessTemplateBase<::Celeste::ast::node::ENUM> ENUM();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enum_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__enumeration__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__enumeration__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__enumeration__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__enumeration__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__enumeration__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__enumeration__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__> deamerreserved_star__enumeration__();
AccessTemplateBase<::Celeste::ast::node::enumeration> enumeration();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enum_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enum_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enum_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enum_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enum_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enum_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enumeration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enumeration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enumeration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enumeration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enumeration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enumeration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enumeration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enumeration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enumeration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::enumeration_name> enumeration_name();
AccessTemplateBase<::Celeste::ast::node::enumeration_value> enumeration_value();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enumeration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enumeration_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enumeration_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enumeration_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enumeration_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enumeration_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enumeration_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enumeration_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enumeration_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enumeration_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enumeration_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enumeration_value> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enumeration_value*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enumeration_value*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enumeration_value& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enumeration_value* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enumeration_value>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enumeration_value>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enumeration_value*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enumeration_value*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::full_value> full_value();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enumeration_value>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_reference> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_reference*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_reference*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_reference& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_reference* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_reference>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_reference>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_reference*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_reference*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__> deamerreserved_arrow__symbol__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> deamerreserved_star__DOT__symbol_secondary__();
AccessTemplateBase<::Celeste::ast::node::symbol_secondary> symbol_secondary();
AccessTemplateBase<::Celeste::ast::node::symbol> symbol();
AccessTemplateBase<::Celeste::ast::node::DOT> DOT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_reference>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__symbol__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__symbol__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__symbol__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> deamerreserved_star__DOT__symbol_secondary__();
AccessTemplateBase<::Celeste::ast::node::symbol_secondary> symbol_secondary();
AccessTemplateBase<::Celeste::ast::node::symbol> symbol();
AccessTemplateBase<::Celeste::ast::node::DOT> DOT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> deamerreserved_star__DOT__symbol_secondary__();
AccessTemplateBase<::Celeste::ast::node::symbol_secondary> symbol_secondary();
AccessTemplateBase<::Celeste::ast::node::DOT> DOT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_secondary> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_secondary*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_secondary*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_secondary& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_secondary* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_secondary>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_secondary>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_secondary*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_secondary*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> deamerreserved_star__symbol_access__();
AccessTemplateBase<::Celeste::ast::node::symbol_access> symbol_access();
AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary> symbol_name_secondary();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_secondary>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__symbol_access__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__symbol_access__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__symbol_access__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__symbol_access__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__symbol_access__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__symbol_access__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> deamerreserved_star__symbol_access__();
AccessTemplateBase<::Celeste::ast::node::symbol_access> symbol_access();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> deamerreserved_star__symbol_access__();
AccessTemplateBase<::Celeste::ast::node::symbol_access> symbol_access();
AccessTemplateBase<::Celeste::ast::node::symbol_name> symbol_name();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_access> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_access*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_access*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_access& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_access* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_access>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_access>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_access*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_access*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::auto_deduce_array> auto_deduce_array();
AccessTemplateBase<::Celeste::ast::node::function_access> function_access();
AccessTemplateBase<::Celeste::ast::node::index_access> index_access();
AccessTemplateBase<::Celeste::ast::node::anonymous_access> anonymous_access();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_access>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::auto_deduce_array> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::auto_deduce_array*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::auto_deduce_array*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::auto_deduce_array& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::auto_deduce_array* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::auto_deduce_array*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::auto_deduce_array*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_name_secondary*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_name_secondary*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_name_secondary& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_name_secondary* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_name_secondary*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_name_secondary*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::CLASS> CLASS();
AccessTemplateBase<::Celeste::ast::node::CODE> CODE();
AccessTemplateBase<::Celeste::ast::node::OPERATORNAME> OPERATORNAME();
AccessTemplateBase<::Celeste::ast::node::FOR> FOR();
AccessTemplateBase<::Celeste::ast::node::IF> IF();
AccessTemplateBase<::Celeste::ast::node::ELSEIF> ELSEIF();
AccessTemplateBase<::Celeste::ast::node::ELSE> ELSE();
AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::symbol_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::symbol_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::symbol_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::symbol_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::symbol_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::symbol_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::symbol_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::symbol_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::CODE> CODE();
AccessTemplateBase<::Celeste::ast::node::OPERATORNAME> OPERATORNAME();
AccessTemplateBase<::Celeste::ast::node::FOR> FOR();
AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::symbol_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_access> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_access*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_access*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_access& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_access* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_access>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_access>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_access*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_access*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__> deamerreserved_arrow__expression__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> deamerreserved_star__COMMA__expression__();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_access>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__expression__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__expression__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__expression__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__expression__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__expression__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__expression__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> deamerreserved_star__COMMA__expression__();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> deamerreserved_star__COMMA__expression__();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::index_access> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::index_access*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::index_access*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::index_access& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::index_access* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::index_access>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::index_access>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::index_access*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::index_access*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::index_access>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::anonymous_access> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::anonymous_access*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::anonymous_access*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::anonymous_access& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::anonymous_access* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::anonymous_access>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::anonymous_access>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::anonymous_access*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::anonymous_access*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::anonymous_access>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::array_declaration> array_declaration();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__> deamerreserved_star__type_modifier__();
AccessTemplateBase<::Celeste::ast::node::type_modifier> type_modifier();
AccessTemplateBase<::Celeste::ast::node::AUTO> AUTO();
AccessTemplateBase<::Celeste::ast::node::AUTOTYPE> AUTOTYPE();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__type_modifier__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__type_modifier__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__type_modifier__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__type_modifier__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__type_modifier__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__type_modifier__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__> deamerreserved_star__type_modifier__();
AccessTemplateBase<::Celeste::ast::node::type_modifier> type_modifier();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::type_modifier> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::type_modifier*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::type_modifier*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::type_modifier& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::type_modifier* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::type_modifier>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::type_modifier>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::type_modifier*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::type_modifier*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::CONSTANT> CONSTANT();
AccessTemplateBase<::Celeste::ast::node::STATIC> STATIC();
AccessTemplateBase<::Celeste::ast::node::INLINE> INLINE();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::type_modifier>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::value_list> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::value_list*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::value_list*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::value_list& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::value_list* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::value_list>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::value_list>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::value_list*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::value_list*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__> deamerreserved_arrow__full_value__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> deamerreserved_star__COMMA__full_value__();
AccessTemplateBase<::Celeste::ast::node::full_value> full_value();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::value_list>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__full_value__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__full_value__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__full_value__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__full_value__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__full_value__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__full_value__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> deamerreserved_star__COMMA__full_value__();
AccessTemplateBase<::Celeste::ast::node::full_value> full_value();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> deamerreserved_star__COMMA__full_value__();
AccessTemplateBase<::Celeste::ast::node::full_value> full_value();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::full_value> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::full_value*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::full_value*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::full_value& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::full_value* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::full_value>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::full_value>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::full_value*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::full_value*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::full_value>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::value> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::value*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::value*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::value& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::value* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::value>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::value>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::value*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::value*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::code_block> code_block();
AccessTemplateBase<::Celeste::ast::node::symbol_reference> symbol_reference();
AccessTemplateBase<::Celeste::ast::node::tuple> tuple();
AccessTemplateBase<::Celeste::ast::node::NUMBER> NUMBER();
AccessTemplateBase<::Celeste::ast::node::DECIMAL> DECIMAL();
AccessTemplateBase<::Celeste::ast::node::TEXT> TEXT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::value>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::tuple> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::tuple*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::tuple*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::tuple& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::tuple* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::tuple>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::tuple>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::tuple*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::tuple*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__> deamerreserved_arrow__full_value__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> deamerreserved_star__COMMA__full_value__();
AccessTemplateBase<::Celeste::ast::node::full_value> full_value();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::tuple>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::SINGLE_COMMENT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::SINGLE_COMMENT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::SINGLE_COMMENT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::SINGLE_COMMENT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::SINGLE_COMMENT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::SINGLE_COMMENT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::SINGLE_COMMENT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::SINGLE_COMMENT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::SINGLE_COMMENT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::SINGLE_COMMENT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CONSTANT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::CONSTANT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::CONSTANT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CONSTANT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CONSTANT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::CONSTANT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::CONSTANT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::CONSTANT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::CONSTANT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::CONSTANT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FUNCTION> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::FUNCTION*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::FUNCTION*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FUNCTION& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FUNCTION* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::FUNCTION>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::FUNCTION>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::FUNCTION*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::FUNCTION*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::FUNCTION>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CLASS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::CLASS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::CLASS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CLASS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CLASS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::CLASS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::CLASS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::CLASS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::CLASS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::CLASS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ENUM> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ENUM*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ENUM*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ENUM& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ENUM* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ENUM>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ENUM>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ENUM*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ENUM*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ENUM>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CONDITIONAL> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::CONDITIONAL*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::CONDITIONAL*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CONDITIONAL& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CONDITIONAL* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::CONDITIONAL>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::CONDITIONAL>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::CONDITIONAL*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::CONDITIONAL*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::CONDITIONAL>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CODE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::CODE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::CODE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CODE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CODE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::CODE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::CODE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::CODE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::CODE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::CODE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ATTRIBUTETOK*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ATTRIBUTETOK*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ATTRIBUTETOK& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ATTRIBUTETOK* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ATTRIBUTETOK*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ATTRIBUTETOK*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RUNTIME> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RUNTIME*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RUNTIME*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RUNTIME& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RUNTIME* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RUNTIME>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RUNTIME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RUNTIME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RUNTIME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RUNTIME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::STATIC> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::STATIC*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::STATIC*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::STATIC& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::STATIC* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::STATIC>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::STATIC>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::STATIC*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::STATIC*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::STATIC>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::AUTO> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::AUTO*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::AUTO*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::AUTO& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::AUTO* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::AUTO>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::AUTO>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::AUTO*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::AUTO*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::AUTO>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::AUTOTYPE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::AUTOTYPE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::AUTOTYPE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::AUTOTYPE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::AUTOTYPE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::AUTOTYPE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::AUTOTYPE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::AUTOTYPE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::AUTOTYPE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::AUTOTYPE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::TEMPLATE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::TEMPLATE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::TEMPLATE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::TEMPLATE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::TEMPLATE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::TEMPLATE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::TEMPLATE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::TEMPLATE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::TEMPLATE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::TEMPLATE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NAMESPACE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NAMESPACE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NAMESPACE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NAMESPACE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NAMESPACE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NAMESPACE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NAMESPACE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NAMESPACE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NAMESPACE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NAMESPACE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::OPERATORNAME> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::OPERATORNAME*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::OPERATORNAME*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::OPERATORNAME& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::OPERATORNAME* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::OPERATORNAME>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::OPERATORNAME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::OPERATORNAME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::OPERATORNAME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::OPERATORNAME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::OVERRIDE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::OVERRIDE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::OVERRIDE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::OVERRIDE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::OVERRIDE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::OVERRIDE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::OVERRIDE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::OVERRIDE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::OVERRIDE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::OVERRIDE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::VIRTUAL> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::VIRTUAL*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::VIRTUAL*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::VIRTUAL& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::VIRTUAL* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::VIRTUAL>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::VIRTUAL>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::VIRTUAL*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::VIRTUAL*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::VIRTUAL>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PURE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PURE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PURE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PURE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PURE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PURE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PURE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PURE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PURE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PURE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::AS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::AS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::AS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::AS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::AS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::AS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::AS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::AS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::AS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::AS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IN> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::IN*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::IN*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IN& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IN* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::IN>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::IN>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::IN*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::IN*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::IN>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DISPLAY> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DISPLAY*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DISPLAY*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DISPLAY& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DISPLAY* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DISPLAY>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DISPLAY>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DISPLAY*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DISPLAY*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DISPLAY>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RETURN> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RETURN*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RETURN*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RETURN& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RETURN* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RETURN>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RETURN>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RETURN*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RETURN*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RETURN>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FOR> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::FOR*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::FOR*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FOR& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FOR* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::FOR>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::FOR>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::FOR*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::FOR*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::FOR>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IF> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::IF*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::IF*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IF& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IF* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::IF>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::IF>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::IF*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::IF*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::IF>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ELSEIF> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ELSEIF*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ELSEIF*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ELSEIF& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ELSEIF* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ELSEIF>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ELSEIF>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ELSEIF*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ELSEIF*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ELSEIF>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ELSE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ELSE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ELSE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ELSE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ELSE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ELSE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ELSE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ELSE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ELSE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ELSE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::INLINE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::INLINE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::INLINE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::INLINE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::INLINE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::INLINE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::INLINE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::INLINE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::INLINE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::INLINE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::CONSTRUCTOR*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::CONSTRUCTOR*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CONSTRUCTOR& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CONSTRUCTOR* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::CONSTRUCTOR*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::CONSTRUCTOR*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FILE_> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::FILE_*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::FILE_*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FILE_& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FILE_* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::FILE_>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::FILE_>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::FILE_*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::FILE_*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::FILE_>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PROGRAM_> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PROGRAM_*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PROGRAM_*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PROGRAM_& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PROGRAM_* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PROGRAM_>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PROGRAM_>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PROGRAM_*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PROGRAM_*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PROGRAM_>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IMPORT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::IMPORT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::IMPORT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IMPORT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IMPORT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::IMPORT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::IMPORT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::IMPORT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::IMPORT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::IMPORT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PUBLIC> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PUBLIC*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PUBLIC*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PUBLIC& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PUBLIC* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PUBLIC>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PUBLIC>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PUBLIC*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PUBLIC*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PUBLIC>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PROTECTED> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PROTECTED*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PROTECTED*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PROTECTED& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PROTECTED* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PROTECTED>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PROTECTED>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PROTECTED*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PROTECTED*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PROTECTED>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PRIVATE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PRIVATE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PRIVATE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PRIVATE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PRIVATE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PRIVATE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PRIVATE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PRIVATE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PRIVATE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PRIVATE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::INHERIT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::INHERIT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::INHERIT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::INHERIT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::INHERIT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::INHERIT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::INHERIT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::INHERIT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::INHERIT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::INHERIT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COMPOSITE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::COMPOSITE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::COMPOSITE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COMPOSITE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COMPOSITE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::COMPOSITE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::COMPOSITE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::COMPOSITE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::COMPOSITE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::COMPOSITE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_PARANTHESIS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_PARANTHESIS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_PARANTHESIS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_PARANTHESIS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COLON> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::COLON*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::COLON*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COLON& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COLON* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::COLON>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::COLON>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::COLON*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::COLON*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::COLON>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::SEMICOLON> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::SEMICOLON*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::SEMICOLON*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::SEMICOLON& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::SEMICOLON* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::SEMICOLON>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::SEMICOLON>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::SEMICOLON*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::SEMICOLON*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::SEMICOLON>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COMMA> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::COMMA*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::COMMA*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COMMA& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COMMA* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::COMMA>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::COMMA>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::COMMA*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::COMMA*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::COMMA>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DOT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DOT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DOT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DOT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DOT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DOT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LTEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LTEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LTEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LTEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LTEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LTEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LTEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LTEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LTEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LTEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::GTEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::GTEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::GTEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::GTEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::GTEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::GTEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::GTEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::GTEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::GTEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::GTEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::GT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::GT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::GT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::GT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::GT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::GT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::GT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::GT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::GT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::GT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUSEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PLUSEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PLUSEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUSEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUSEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PLUSEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PLUSEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PLUSEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PLUSEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PLUSEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUSEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MINUSEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MINUSEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUSEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUSEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MINUSEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MINUSEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MINUSEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MINUSEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MINUSEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MULTIPLYEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MULTIPLYEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MULTIPLYEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MULTIPLYEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MULTIPLYEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MULTIPLYEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DIVIDEEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DIVIDEEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DIVIDEEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DIVIDEEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DIVIDEEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DIVIDEEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::EQEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::EQEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::EQEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::EQEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::EQEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::EQEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::EQEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::EQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::EQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::EQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::EQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::EQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::EQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::EQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOTEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NOTEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NOTEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOTEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOTEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NOTEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NOTEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NOTEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NOTEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NOTEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NOT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NOT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NOT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUSPLUS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PLUSPLUS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PLUSPLUS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUSPLUS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUSPLUS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PLUSPLUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PLUSPLUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PLUSPLUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PLUSPLUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PLUSPLUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PLUS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PLUS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PLUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PLUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PLUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PLUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PLUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUSMINUS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MINUSMINUS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MINUSMINUS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUSMINUS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUSMINUS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MINUSMINUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MINUSMINUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MINUSMINUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MINUSMINUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MINUSMINUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MINUS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MINUS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MINUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MINUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MINUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MINUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MINUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DIVIDE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DIVIDE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DIVIDE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DIVIDE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DIVIDE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DIVIDE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DIVIDE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DIVIDE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DIVIDE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DIVIDE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MULTIPLY> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MULTIPLY*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MULTIPLY*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MULTIPLY& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MULTIPLY* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MULTIPLY>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MULTIPLY>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MULTIPLY*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MULTIPLY*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MULTIPLY>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::VARNAME> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::VARNAME*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::VARNAME*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::VARNAME& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::VARNAME* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::VARNAME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::VARNAME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::VARNAME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::VARNAME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NUMBER> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NUMBER*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NUMBER*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NUMBER& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NUMBER* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NUMBER>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NUMBER>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NUMBER*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NUMBER*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NUMBER>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DECIMAL> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DECIMAL*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DECIMAL*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DECIMAL& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DECIMAL* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DECIMAL>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DECIMAL>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DECIMAL*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DECIMAL*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DECIMAL>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::TEXT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::TEXT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::TEXT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::TEXT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::TEXT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::TEXT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::TEXT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::TEXT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::TEXT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::TEXT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ESCAPE_CHARS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ESCAPE_CHARS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};


	
		inline AccessTemplateBase<::Celeste::ast::node::root_program> AccessTemplateBase<::Celeste::ast::node::program>::root_program()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::root_program>(Get<::Celeste::ast::Type::root_program>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::root_program>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> AccessTemplateBase<::Celeste::ast::node::standard_block>::deamerreserved_star__stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::stmt> AccessTemplateBase<::Celeste::ast::node::standard_block>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::stmt>(Get<::Celeste::ast::Type::stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>::deamerreserved_star__stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::stmt>(Get<::Celeste::ast::Type::stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::import_statement> AccessTemplateBase<::Celeste::ast::node::stmt>::import_statement()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::import_statement>(Get<::Celeste::ast::Type::import_statement>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::mutation_group> AccessTemplateBase<::Celeste::ast::node::stmt>::mutation_group()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::mutation_group>(Get<::Celeste::ast::Type::mutation_group>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::assignment> AccessTemplateBase<::Celeste::ast::node::stmt>::assignment()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::assignment>(Get<::Celeste::ast::Type::assignment>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_if> AccessTemplateBase<::Celeste::ast::node::stmt>::conditional_if()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_if>(Get<::Celeste::ast::Type::conditional_if>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_else_if> AccessTemplateBase<::Celeste::ast::node::stmt>::conditional_else_if()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_else_if>(Get<::Celeste::ast::Type::conditional_else_if>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_else> AccessTemplateBase<::Celeste::ast::node::stmt>::conditional_else()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_else>(Get<::Celeste::ast::Type::conditional_else>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::template_conditional_function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>(Get<::Celeste::ast::Type::template_conditional_function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::conditional_function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>(Get<::Celeste::ast::Type::conditional_function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::template_code_function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>(Get<::Celeste::ast::Type::template_code_function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::code_function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_function_declaration>(Get<::Celeste::ast::Type::code_function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::return_statement> AccessTemplateBase<::Celeste::ast::node::stmt>::return_statement()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::return_statement>(Get<::Celeste::ast::Type::return_statement>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_increase> AccessTemplateBase<::Celeste::ast::node::stmt>::symbol_increase()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_increase>(Get<::Celeste::ast::Type::symbol_increase>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_decrease> AccessTemplateBase<::Celeste::ast::node::stmt>::symbol_decrease()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_decrease>(Get<::Celeste::ast::Type::symbol_decrease>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::display_call> AccessTemplateBase<::Celeste::ast::node::stmt>::display_call()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::display_call>(Get<::Celeste::ast::Type::display_call>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::for_loop> AccessTemplateBase<::Celeste::ast::node::stmt>::for_loop()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::for_loop>(Get<::Celeste::ast::Type::for_loop>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::namespace_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::namespace_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::namespace_declaration>(Get<::Celeste::ast::Type::namespace_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::inline_class_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>(Get<::Celeste::ast::Type::inline_class_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::variable_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::variable_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::variable_declaration>(Get<::Celeste::ast::Type::variable_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::template_function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_function_declaration>(Get<::Celeste::ast::Type::template_function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_declaration>(Get<::Celeste::ast::Type::function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_class_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::template_class_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_class_declaration>(Get<::Celeste::ast::Type::template_class_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::class_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_declaration>(Get<::Celeste::ast::Type::class_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::attribute_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_declaration>(Get<::Celeste::ast::Type::attribute_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::enum_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_declaration>(Get<::Celeste::ast::Type::enum_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::stmt>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::SEMICOLON> AccessTemplateBase<::Celeste::ast::node::stmt>::SEMICOLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::SEMICOLON>(Get<::Celeste::ast::Type::SEMICOLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::file_import> AccessTemplateBase<::Celeste::ast::node::import_statement>::file_import()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::file_import>(Get<::Celeste::ast::Type::file_import>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FILE_> AccessTemplateBase<::Celeste::ast::node::file_import>::FILE_()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FILE_>(Get<::Celeste::ast::Type::FILE_>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::IMPORT> AccessTemplateBase<::Celeste::ast::node::file_import>::IMPORT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::IMPORT>(Get<::Celeste::ast::Type::IMPORT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEXT> AccessTemplateBase<::Celeste::ast::node::file_import>::TEXT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEXT>(Get<::Celeste::ast::Type::TEXT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::mutation_group>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__> AccessTemplateBase<::Celeste::ast::node::mutation_group>::deamerreserved_arrow__symbol_reference__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>(Get<::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> AccessTemplateBase<::Celeste::ast::node::mutation_group>::deamerreserved_star__COMMA__symbol_reference__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::mutation_group>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::mutation_group>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::mutation_group>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::mutation_group>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::mutation_group>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::mutation_group>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::mutation_group>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::mutation_group>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>::deamerreserved_star__COMMA__symbol_reference__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>::deamerreserved_star__COMMA__symbol_reference__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::assignment_operator> AccessTemplateBase<::Celeste::ast::node::assignment>::assignment_operator()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::assignment_operator>(Get<::Celeste::ast::Type::assignment_operator>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::assignment>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::assignment>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PLUSEQ> AccessTemplateBase<::Celeste::ast::node::assignment_operator>::PLUSEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PLUSEQ>(Get<::Celeste::ast::Type::PLUSEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MINUSEQ> AccessTemplateBase<::Celeste::ast::node::assignment_operator>::MINUSEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MINUSEQ>(Get<::Celeste::ast::Type::MINUSEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ> AccessTemplateBase<::Celeste::ast::node::assignment_operator>::MULTIPLYEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MULTIPLYEQ>(Get<::Celeste::ast::Type::MULTIPLYEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ> AccessTemplateBase<::Celeste::ast::node::assignment_operator>::DIVIDEEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DIVIDEEQ>(Get<::Celeste::ast::Type::DIVIDEEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::assignment_operator>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_block> AccessTemplateBase<::Celeste::ast::node::conditional_if>::conditional_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_block>(Get<::Celeste::ast::Type::conditional_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::conditional_if>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::IF> AccessTemplateBase<::Celeste::ast::node::conditional_if>::IF()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::IF>(Get<::Celeste::ast::Type::IF>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_if>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_if>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::conditional_if>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::conditional_if>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_block> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::conditional_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_block>(Get<::Celeste::ast::Type::conditional_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::IF> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::IF()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::IF>(Get<::Celeste::ast::Type::IF>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ELSEIF> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::ELSEIF()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ELSEIF>(Get<::Celeste::ast::Type::ELSEIF>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ELSE> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::ELSE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ELSE>(Get<::Celeste::ast::Type::ELSE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::conditional_else_if>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_block> AccessTemplateBase<::Celeste::ast::node::conditional_else>::conditional_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_block>(Get<::Celeste::ast::Type::conditional_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ELSE> AccessTemplateBase<::Celeste::ast::node::conditional_else>::ELSE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ELSE>(Get<::Celeste::ast::Type::ELSE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_else>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_else>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::conditional_block>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::deamerreserved_arrow__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_arrow__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::deamerreserved_arrow__conditional_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::deamerreserved_star__COMMA__conditional_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::conditional_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>(Get<::Celeste::ast::Type::conditional_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CONDITIONAL> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::CONDITIONAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CONDITIONAL>(Get<::Celeste::ast::Type::CONDITIONAL>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEMPLATE> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::TEMPLATE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEMPLATE>(Get<::Celeste::ast::Type::TEMPLATE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::template_conditional_function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>::deamerreserved_star__COMMA__conditional_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>::conditional_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>(Get<::Celeste::ast::Type::conditional_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>::deamerreserved_star__COMMA__conditional_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>::conditional_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>(Get<::Celeste::ast::Type::conditional_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::deamerreserved_arrow__conditional_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::deamerreserved_star__COMMA__conditional_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_function_argument> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::conditional_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>(Get<::Celeste::ast::Type::conditional_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CONDITIONAL> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::CONDITIONAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CONDITIONAL>(Get<::Celeste::ast::Type::CONDITIONAL>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::conditional_function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::deamerreserved_arrow__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_arrow__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CODE> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::CODE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CODE>(Get<::Celeste::ast::Type::CODE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEMPLATE> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::TEMPLATE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEMPLATE>(Get<::Celeste::ast::Type::TEMPLATE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::template_code_function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CODE> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::CODE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CODE>(Get<::Celeste::ast::Type::CODE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::code_function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::return_statement>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RETURN> AccessTemplateBase<::Celeste::ast::node::return_statement>::RETURN()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RETURN>(Get<::Celeste::ast::Type::RETURN>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::symbol_increase>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PLUSPLUS> AccessTemplateBase<::Celeste::ast::node::symbol_increase>::PLUSPLUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PLUSPLUS>(Get<::Celeste::ast::Type::PLUSPLUS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::symbol_decrease>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MINUSMINUS> AccessTemplateBase<::Celeste::ast::node::symbol_decrease>::MINUSMINUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MINUSMINUS>(Get<::Celeste::ast::Type::MINUSMINUS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression_no_value> AccessTemplateBase<::Celeste::ast::node::expression>::expression_no_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression_no_value>(Get<::Celeste::ast::Type::expression_no_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression_no_value> AccessTemplateBase<::Celeste::ast::node::expression_no_value>::expression_no_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression_no_value>(Get<::Celeste::ast::Type::expression_no_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::t_expression> AccessTemplateBase<::Celeste::ast::node::expression_no_value>::t_expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::t_expression>(Get<::Celeste::ast::Type::t_expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PLUS> AccessTemplateBase<::Celeste::ast::node::expression_no_value>::PLUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PLUS>(Get<::Celeste::ast::Type::PLUS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MINUS> AccessTemplateBase<::Celeste::ast::node::expression_no_value>::MINUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MINUS>(Get<::Celeste::ast::Type::MINUS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::t_expression> AccessTemplateBase<::Celeste::ast::node::t_expression>::t_expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::t_expression>(Get<::Celeste::ast::Type::t_expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::f_expression> AccessTemplateBase<::Celeste::ast::node::t_expression>::f_expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::f_expression>(Get<::Celeste::ast::Type::f_expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LTEQ> AccessTemplateBase<::Celeste::ast::node::t_expression>::LTEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LTEQ>(Get<::Celeste::ast::Type::LTEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::GTEQ> AccessTemplateBase<::Celeste::ast::node::t_expression>::GTEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::GTEQ>(Get<::Celeste::ast::Type::GTEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LT> AccessTemplateBase<::Celeste::ast::node::t_expression>::LT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LT>(Get<::Celeste::ast::Type::LT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::GT> AccessTemplateBase<::Celeste::ast::node::t_expression>::GT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::GT>(Get<::Celeste::ast::Type::GT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQEQ> AccessTemplateBase<::Celeste::ast::node::t_expression>::EQEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQEQ>(Get<::Celeste::ast::Type::EQEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::NOTEQ> AccessTemplateBase<::Celeste::ast::node::t_expression>::NOTEQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::NOTEQ>(Get<::Celeste::ast::Type::NOTEQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::NOT> AccessTemplateBase<::Celeste::ast::node::t_expression>::NOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::NOT>(Get<::Celeste::ast::Type::NOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DIVIDE> AccessTemplateBase<::Celeste::ast::node::t_expression>::DIVIDE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DIVIDE>(Get<::Celeste::ast::Type::DIVIDE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MULTIPLY> AccessTemplateBase<::Celeste::ast::node::t_expression>::MULTIPLY()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MULTIPLY>(Get<::Celeste::ast::Type::MULTIPLY>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression_no_value> AccessTemplateBase<::Celeste::ast::node::f_expression>::expression_no_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression_no_value>(Get<::Celeste::ast::Type::expression_no_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::value> AccessTemplateBase<::Celeste::ast::node::f_expression>::value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::value>(Get<::Celeste::ast::Type::value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::f_expression>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::f_expression>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::display_call>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DISPLAY> AccessTemplateBase<::Celeste::ast::node::display_call>::DISPLAY()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DISPLAY>(Get<::Celeste::ast::Type::DISPLAY>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::for_iteration_loop> AccessTemplateBase<::Celeste::ast::node::for_loop>::for_iteration_loop()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>(Get<::Celeste::ast::Type::for_iteration_loop>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::for_each_loop> AccessTemplateBase<::Celeste::ast::node::for_loop>::for_each_loop()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::for_each_loop>(Get<::Celeste::ast::Type::for_each_loop>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::for_block> AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>::for_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::for_block>(Get<::Celeste::ast::Type::for_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FOR> AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>::FOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FOR>(Get<::Celeste::ast::Type::FOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::for_iteration_loop>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::for_variable> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::for_variable()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::for_variable>(Get<::Celeste::ast::Type::for_variable>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::iterator> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::iterator()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::iterator>(Get<::Celeste::ast::Type::iterator>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::for_block> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::for_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::for_block>(Get<::Celeste::ast::Type::for_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::IN> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::IN()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::IN>(Get<::Celeste::ast::Type::IN>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FOR> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::FOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FOR>(Get<::Celeste::ast::Type::FOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COLON> AccessTemplateBase<::Celeste::ast::node::for_each_loop>::COLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COLON>(Get<::Celeste::ast::Type::COLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::for_variable>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::iterator>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::for_block>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::deamerreserved_arrow__namespace_name__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>(Get<::Celeste::ast::Type::deamerreserved_arrow__namespace_name__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::deamerreserved_star__DOT__namespace_name__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>(Get<::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::namespace_block> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::namespace_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::namespace_block>(Get<::Celeste::ast::Type::namespace_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::namespace_name> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::namespace_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::namespace_name>(Get<::Celeste::ast::Type::namespace_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::NAMESPACE> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::NAMESPACE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::NAMESPACE>(Get<::Celeste::ast::Type::NAMESPACE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DOT> AccessTemplateBase<::Celeste::ast::node::namespace_declaration>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DOT>(Get<::Celeste::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>::deamerreserved_star__DOT__namespace_name__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>(Get<::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::namespace_name> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>::namespace_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::namespace_name>(Get<::Celeste::ast::Type::namespace_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DOT> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DOT>(Get<::Celeste::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>::deamerreserved_star__DOT__namespace_name__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>(Get<::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::namespace_name> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>::namespace_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::namespace_name>(Get<::Celeste::ast::Type::namespace_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DOT> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DOT>(Get<::Celeste::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::namespace_block>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::namespace_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>::deamerreserved_arrow__inline_class_declaration_composite__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>(Get<::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>::deamerreserved_star__COMMA__inline_class_declaration_composite__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>::inline_class_declaration_composite()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>(Get<::Celeste::ast::Type::inline_class_declaration_composite>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::created_class_name> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>::created_class_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::created_class_name>(Get<::Celeste::ast::Type::created_class_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COLON> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>::COLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COLON>(Get<::Celeste::ast::Type::COLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>::deamerreserved_star__COMMA__inline_class_declaration_composite__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>::inline_class_declaration_composite()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>(Get<::Celeste::ast::Type::inline_class_declaration_composite>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>::deamerreserved_star__COMMA__inline_class_declaration_composite__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>::inline_class_declaration_composite()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>(Get<::Celeste::ast::Type::inline_class_declaration_composite>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::deamerreserved_arrow__inline_class_declaration_composite_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>(Get<::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::inline_class_declaration_composite_alias()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>(Get<::Celeste::ast::Type::inline_class_declaration_composite_alias>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::inline_class_declaration_composite_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name>(Get<::Celeste::ast::Type::inline_class_declaration_composite_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::AS> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::AS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::AS>(Get<::Celeste::ast::Type::AS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COLON> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::COLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COLON>(Get<::Celeste::ast::Type::COLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>::inline_class_declaration_composite_alias()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>(Get<::Celeste::ast::Type::inline_class_declaration_composite_alias>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>::inline_class_declaration_composite_alias()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>(Get<::Celeste::ast::Type::inline_class_declaration_composite_alias>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_alias>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::inline_class_declaration_composite_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::created_class_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__> AccessTemplateBase<::Celeste::ast::node::code_block>::deamerreserved_arrow__code_block_input_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> AccessTemplateBase<::Celeste::ast::node::code_block>::deamerreserved_star__COMMA__code_block_input_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> AccessTemplateBase<::Celeste::ast::node::code_block>::code_block_input_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>(Get<::Celeste::ast::Type::code_block_input_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block_program> AccessTemplateBase<::Celeste::ast::node::code_block>::code_block_program()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block_program>(Get<::Celeste::ast::Type::code_block_program>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::code_block>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::code_block>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::code_block>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::code_block>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::code_block>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>::deamerreserved_star__COMMA__code_block_input_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>::code_block_input_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>(Get<::Celeste::ast::Type::code_block_input_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>::deamerreserved_star__COMMA__code_block_input_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block_input_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>::code_block_input_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>(Get<::Celeste::ast::Type::code_block_input_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block_argument> AccessTemplateBase<::Celeste::ast::node::code_block_input_argument>::code_block_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block_argument>(Get<::Celeste::ast::Type::code_block_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block_argument_name> AccessTemplateBase<::Celeste::ast::node::code_block_argument>::code_block_argument_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block_argument_name>(Get<::Celeste::ast::Type::code_block_argument_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::code_block_argument>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::code_block_argument_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::code_block_program>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::variable_name> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::variable_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::variable_name>(Get<::Celeste::ast::Type::variable_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::value_list> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::value_list()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::value_list>(Get<::Celeste::ast::Type::value_list>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::array_declaration>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::array_declaration>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::array_declaration>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::variable_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::deamerreserved_arrow__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_arrow__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::trailing_return_type> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::trailing_return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::trailing_return_type>(Get<::Celeste::ast::Type::trailing_return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::return_type> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::return_type>(Get<::Celeste::ast::Type::return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FUNCTION> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::FUNCTION()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FUNCTION>(Get<::Celeste::ast::Type::FUNCTION>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEMPLATE> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::TEMPLATE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEMPLATE>(Get<::Celeste::ast::Type::TEMPLATE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::template_function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::function_declaration>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::trailing_return_type> AccessTemplateBase<::Celeste::ast::node::function_declaration>::trailing_return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::trailing_return_type>(Get<::Celeste::ast::Type::trailing_return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::return_type> AccessTemplateBase<::Celeste::ast::node::function_declaration>::return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::return_type>(Get<::Celeste::ast::Type::return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::function_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::function_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::function_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FUNCTION> AccessTemplateBase<::Celeste::ast::node::function_declaration>::FUNCTION()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FUNCTION>(Get<::Celeste::ast::Type::FUNCTION>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::function_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::function_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::return_type> AccessTemplateBase<::Celeste::ast::node::trailing_return_type>::return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::return_type>(Get<::Celeste::ast::Type::return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::return_type>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::conditional_function_argument>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument_type> AccessTemplateBase<::Celeste::ast::node::function_argument>::function_argument_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument_type>(Get<::Celeste::ast::Type::function_argument_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument_name> AccessTemplateBase<::Celeste::ast::node::function_argument>::function_argument_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument_name>(Get<::Celeste::ast::Type::function_argument_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call> AccessTemplateBase<::Celeste::ast::node::function_argument>::condition_modifier_function_call()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>(Get<::Celeste::ast::Type::condition_modifier_function_call>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::function_argument>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::function_argument>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::function_argument_type>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::function_argument_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::deamerreserved_arrow__condition_modifier_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::deamerreserved_star__COMMA__condition_modifier_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condition_modifier_name> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::condition_modifier_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condition_modifier_name>(Get<::Celeste::ast::Type::condition_modifier_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::condition_modifier_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>(Get<::Celeste::ast::Type::condition_modifier_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::condition_modifier_function_call>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>::deamerreserved_star__COMMA__condition_modifier_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>::condition_modifier_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>(Get<::Celeste::ast::Type::condition_modifier_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>::deamerreserved_star__COMMA__condition_modifier_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>::condition_modifier_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>(Get<::Celeste::ast::Type::condition_modifier_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::condition_modifier_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::condition_modifier_argument>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::standard_block> AccessTemplateBase<::Celeste::ast::node::function_body>::standard_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::standard_block>(Get<::Celeste::ast::Type::standard_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::function_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::deamerreserved_arrow__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_arrow__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_name> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::class_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_name>(Get<::Celeste::ast::Type::class_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_body> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::class_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_body>(Get<::Celeste::ast::Type::class_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_inherit_base> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::class_inherit_base()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_inherit_base>(Get<::Celeste::ast::Type::class_inherit_base>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CLASS> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::CLASS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CLASS>(Get<::Celeste::ast::Type::CLASS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEMPLATE> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::TEMPLATE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEMPLATE>(Get<::Celeste::ast::Type::TEMPLATE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::template_class_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter_name> AccessTemplateBase<::Celeste::ast::node::template_parameter>::template_parameter_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter_name>(Get<::Celeste::ast::Type::template_parameter_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::template_parameter>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::template_parameter_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__> AccessTemplateBase<::Celeste::ast::node::class_declaration>::deamerreserved_arrow__class_inherit_base__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>(Get<::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> AccessTemplateBase<::Celeste::ast::node::class_declaration>::deamerreserved_star__COMMA__class_inherit_base__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_name> AccessTemplateBase<::Celeste::ast::node::class_declaration>::class_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_name>(Get<::Celeste::ast::Type::class_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::class_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_body> AccessTemplateBase<::Celeste::ast::node::class_declaration>::class_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_body>(Get<::Celeste::ast::Type::class_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_inherit_base> AccessTemplateBase<::Celeste::ast::node::class_declaration>::class_inherit_base()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_inherit_base>(Get<::Celeste::ast::Type::class_inherit_base>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::class_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CLASS> AccessTemplateBase<::Celeste::ast::node::class_declaration>::CLASS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CLASS>(Get<::Celeste::ast::Type::CLASS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::class_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::class_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::class_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>::deamerreserved_star__COMMA__class_inherit_base__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_inherit_base> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>::class_inherit_base()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_inherit_base>(Get<::Celeste::ast::Type::class_inherit_base>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>::deamerreserved_star__COMMA__class_inherit_base__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_inherit_base> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>::class_inherit_base()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_inherit_base>(Get<::Celeste::ast::Type::class_inherit_base>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::class_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CODE> AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>::CODE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CODE>(Get<::Celeste::ast::Type::CODE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RUNTIME> AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>::RUNTIME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RUNTIME>(Get<::Celeste::ast::Type::RUNTIME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> AccessTemplateBase<::Celeste::ast::node::class_body>::deamerreserved_star__class_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__class_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt> AccessTemplateBase<::Celeste::ast::node::class_body>::class_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt>(Get<::Celeste::ast::Type::class_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>::deamerreserved_star__class_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__class_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>::class_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt>(Get<::Celeste::ast::Type::class_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration> AccessTemplateBase<::Celeste::ast::node::class_stmt>::class_stmt_member_field_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>(Get<::Celeste::ast::Type::class_stmt_member_field_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function> AccessTemplateBase<::Celeste::ast::node::class_stmt>::class_stmt_member_function()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>(Get<::Celeste::ast::Type::class_stmt_member_function>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function> AccessTemplateBase<::Celeste::ast::node::class_stmt>::class_stmt_member_template_function()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>(Get<::Celeste::ast::Type::class_stmt_member_template_function>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor> AccessTemplateBase<::Celeste::ast::node::class_stmt>::template_class_stmt_constructor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>(Get<::Celeste::ast::Type::template_class_stmt_constructor>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor> AccessTemplateBase<::Celeste::ast::node::class_stmt>::class_stmt_constructor()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>(Get<::Celeste::ast::Type::class_stmt_constructor>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::accessibility> AccessTemplateBase<::Celeste::ast::node::class_stmt>::accessibility()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::accessibility>(Get<::Celeste::ast::Type::accessibility>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::member_field_name> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::member_field_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::member_field_name>(Get<::Celeste::ast::Type::member_field_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::value_list> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::value_list()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::value_list>(Get<::Celeste::ast::Type::value_list>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::SEMICOLON> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::SEMICOLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::SEMICOLON>(Get<::Celeste::ast::Type::SEMICOLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_field_declaration>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::member_field_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_declaration> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>::function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_declaration>(Get<::Celeste::ast::Type::function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::OVERRIDE> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>::OVERRIDE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::OVERRIDE>(Get<::Celeste::ast::Type::OVERRIDE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VIRTUAL> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>::VIRTUAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VIRTUAL>(Get<::Celeste::ast::Type::VIRTUAL>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PURE> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_function>::PURE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PURE>(Get<::Celeste::ast::Type::PURE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_function_declaration> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>::template_function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_function_declaration>(Get<::Celeste::ast::Type::template_function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::OVERRIDE> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>::OVERRIDE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::OVERRIDE>(Get<::Celeste::ast::Type::OVERRIDE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VIRTUAL> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>::VIRTUAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VIRTUAL>(Get<::Celeste::ast::Type::VIRTUAL>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PURE> AccessTemplateBase<::Celeste::ast::node::class_stmt_member_template_function>::PURE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PURE>(Get<::Celeste::ast::Type::PURE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::deamerreserved_arrow__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_arrow__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::deamerreserved_star__COMMA__template_parameter__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::template_parameter> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::template_parameter()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::template_parameter>(Get<::Celeste::ast::Type::template_parameter>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_name> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::class_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_name>(Get<::Celeste::ast::Type::class_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEMPLATE> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::TEMPLATE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEMPLATE>(Get<::Celeste::ast::Type::TEMPLATE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::CONSTRUCTOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR>(Get<::Celeste::ast::Type::CONSTRUCTOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::template_class_stmt_constructor>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::deamerreserved_arrow__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_name> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::class_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_name>(Get<::Celeste::ast::Type::class_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::CONSTRUCTOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CONSTRUCTOR>(Get<::Celeste::ast::Type::CONSTRUCTOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::class_stmt_constructor>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PUBLIC> AccessTemplateBase<::Celeste::ast::node::accessibility>::PUBLIC()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PUBLIC>(Get<::Celeste::ast::Type::PUBLIC>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PROTECTED> AccessTemplateBase<::Celeste::ast::node::accessibility>::PROTECTED()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PROTECTED>(Get<::Celeste::ast::Type::PROTECTED>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PRIVATE> AccessTemplateBase<::Celeste::ast::node::accessibility>::PRIVATE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PRIVATE>(Get<::Celeste::ast::Type::PRIVATE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inherit_base> AccessTemplateBase<::Celeste::ast::node::class_inherit_base>::inherit_base()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inherit_base>(Get<::Celeste::ast::Type::inherit_base>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::compound_base> AccessTemplateBase<::Celeste::ast::node::class_inherit_base>::compound_base()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::compound_base>(Get<::Celeste::ast::Type::compound_base>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::inherit_base_name> AccessTemplateBase<::Celeste::ast::node::inherit_base>::inherit_base_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::inherit_base_name>(Get<::Celeste::ast::Type::inherit_base_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::INHERIT> AccessTemplateBase<::Celeste::ast::node::inherit_base>::INHERIT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::INHERIT>(Get<::Celeste::ast::Type::INHERIT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::inherit_base_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__> AccessTemplateBase<::Celeste::ast::node::compound_base>::deamerreserved_arrow__compound_base_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>(Get<::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> AccessTemplateBase<::Celeste::ast::node::compound_base>::deamerreserved_star__COMMA__compound_base_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::compound_base_name> AccessTemplateBase<::Celeste::ast::node::compound_base>::compound_base_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::compound_base_name>(Get<::Celeste::ast::Type::compound_base_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::compound_base_alias> AccessTemplateBase<::Celeste::ast::node::compound_base>::compound_base_alias()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::compound_base_alias>(Get<::Celeste::ast::Type::compound_base_alias>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::AS> AccessTemplateBase<::Celeste::ast::node::compound_base>::AS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::AS>(Get<::Celeste::ast::Type::AS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMPOSITE> AccessTemplateBase<::Celeste::ast::node::compound_base>::COMPOSITE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMPOSITE>(Get<::Celeste::ast::Type::COMPOSITE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::compound_base>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::compound_base>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::compound_base>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>::deamerreserved_star__COMMA__compound_base_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::compound_base_alias> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>::compound_base_alias()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::compound_base_alias>(Get<::Celeste::ast::Type::compound_base_alias>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>::deamerreserved_star__COMMA__compound_base_alias__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::compound_base_alias> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>::compound_base_alias()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::compound_base_alias>(Get<::Celeste::ast::Type::compound_base_alias>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::compound_base_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::compound_base_alias>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__> AccessTemplateBase<::Celeste::ast::node::attribute_section>::deamerreserved_arrow__attribute__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>(Get<::Celeste::ast::Type::deamerreserved_arrow__attribute__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> AccessTemplateBase<::Celeste::ast::node::attribute_section>::deamerreserved_star__deamerreserved_optional__COMMA____attribute__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>(Get<::Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute> AccessTemplateBase<::Celeste::ast::node::attribute_section>::attribute()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute>(Get<::Celeste::ast::Type::attribute>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::attribute_section>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::attribute_section>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::attribute_section>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>::deamerreserved_star__deamerreserved_optional__COMMA____attribute__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>(Get<::Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>::attribute()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute>(Get<::Celeste::ast::Type::attribute>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>::deamerreserved_star__deamerreserved_optional__COMMA____attribute__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>(Get<::Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>::attribute()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute>(Get<::Celeste::ast::Type::attribute>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__> AccessTemplateBase<::Celeste::ast::node::attribute>::deamerreserved_arrow__attribute_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__attribute_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> AccessTemplateBase<::Celeste::ast::node::attribute>::deamerreserved_star__COMMA__attribute_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__> AccessTemplateBase<::Celeste::ast::node::attribute>::deamerreserved_arrow__attribute_template_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> AccessTemplateBase<::Celeste::ast::node::attribute>::deamerreserved_star__COMMA__attribute_template_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_argument> AccessTemplateBase<::Celeste::ast::node::attribute>::attribute_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_argument>(Get<::Celeste::ast::Type::attribute_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> AccessTemplateBase<::Celeste::ast::node::attribute>::attribute_template_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>(Get<::Celeste::ast::Type::attribute_template_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_name> AccessTemplateBase<::Celeste::ast::node::attribute>::symbol_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_name>(Get<::Celeste::ast::Type::symbol_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::attribute>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::attribute>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::attribute>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::attribute>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::attribute>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>::deamerreserved_star__COMMA__attribute_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>::attribute_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_argument>(Get<::Celeste::ast::Type::attribute_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>::deamerreserved_star__COMMA__attribute_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>::attribute_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_argument>(Get<::Celeste::ast::Type::attribute_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>::deamerreserved_star__COMMA__attribute_template_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>::attribute_template_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>(Get<::Celeste::ast::Type::attribute_template_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>::deamerreserved_star__COMMA__attribute_template_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_template_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>::attribute_template_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>(Get<::Celeste::ast::Type::attribute_template_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::attribute_argument>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::attribute_template_argument>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::trailing_return_type> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::trailing_return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::trailing_return_type>(Get<::Celeste::ast::Type::trailing_return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_body> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::function_body()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_body>(Get<::Celeste::ast::Type::function_body>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::execution_keyword_permutation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::execution_keyword_permutation>(Get<::Celeste::ast::Type::execution_keyword_permutation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::deamerreserved_arrow__attribute_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::deamerreserved_star__COMMA__attribute_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::attribute_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>(Get<::Celeste::ast::Type::attribute_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_name> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::attribute_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_name>(Get<::Celeste::ast::Type::attribute_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::ATTRIBUTETOK()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ATTRIBUTETOK>(Get<::Celeste::ast::Type::ATTRIBUTETOK>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::attribute_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>::deamerreserved_star__COMMA__attribute_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>::attribute_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>(Get<::Celeste::ast::Type::attribute_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>::deamerreserved_star__COMMA__attribute_function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>::attribute_function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>(Get<::Celeste::ast::Type::attribute_function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::attribute_function_argument>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_name> AccessTemplateBase<::Celeste::ast::node::attribute_name>::symbol_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_name>(Get<::Celeste::ast::Type::symbol_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::attribute_section> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::attribute_section()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::attribute_section>(Get<::Celeste::ast::Type::attribute_section>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::deamerreserved_star__enumeration__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>(Get<::Celeste::ast::Type::deamerreserved_star__enumeration__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_name> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::enum_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_name>(Get<::Celeste::ast::Type::enum_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enumeration> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::enumeration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enumeration>(Get<::Celeste::ast::Type::enumeration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ENUM> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::ENUM()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ENUM>(Get<::Celeste::ast::Type::ENUM>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>::deamerreserved_star__enumeration__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>(Get<::Celeste::ast::Type::deamerreserved_star__enumeration__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enumeration> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__enumeration__>::enumeration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enumeration>(Get<::Celeste::ast::Type::enumeration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::enum_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enumeration_name> AccessTemplateBase<::Celeste::ast::node::enumeration>::enumeration_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enumeration_name>(Get<::Celeste::ast::Type::enumeration_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enumeration_value> AccessTemplateBase<::Celeste::ast::node::enumeration>::enumeration_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enumeration_value>(Get<::Celeste::ast::Type::enumeration_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::enumeration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::enumeration>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::enumeration_name>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::enumeration_value>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__> AccessTemplateBase<::Celeste::ast::node::symbol_reference>::deamerreserved_arrow__symbol__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>(Get<::Celeste::ast::Type::deamerreserved_arrow__symbol__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> AccessTemplateBase<::Celeste::ast::node::symbol_reference>::deamerreserved_star__DOT__symbol_secondary__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>(Get<::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_secondary> AccessTemplateBase<::Celeste::ast::node::symbol_reference>::symbol_secondary()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_secondary>(Get<::Celeste::ast::Type::symbol_secondary>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol> AccessTemplateBase<::Celeste::ast::node::symbol_reference>::symbol()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol>(Get<::Celeste::ast::Type::symbol>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DOT> AccessTemplateBase<::Celeste::ast::node::symbol_reference>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DOT>(Get<::Celeste::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>::deamerreserved_star__DOT__symbol_secondary__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>(Get<::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_secondary> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>::symbol_secondary()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_secondary>(Get<::Celeste::ast::Type::symbol_secondary>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>::symbol()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol>(Get<::Celeste::ast::Type::symbol>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DOT> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__symbol__>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DOT>(Get<::Celeste::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>::deamerreserved_star__DOT__symbol_secondary__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>(Get<::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_secondary> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>::symbol_secondary()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_secondary>(Get<::Celeste::ast::Type::symbol_secondary>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DOT> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DOT>(Get<::Celeste::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> AccessTemplateBase<::Celeste::ast::node::symbol_secondary>::deamerreserved_star__symbol_access__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>(Get<::Celeste::ast::Type::deamerreserved_star__symbol_access__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_access> AccessTemplateBase<::Celeste::ast::node::symbol_secondary>::symbol_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_access>(Get<::Celeste::ast::Type::symbol_access>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary> AccessTemplateBase<::Celeste::ast::node::symbol_secondary>::symbol_name_secondary()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>(Get<::Celeste::ast::Type::symbol_name_secondary>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>::deamerreserved_star__symbol_access__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>(Get<::Celeste::ast::Type::deamerreserved_star__symbol_access__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_access> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>::symbol_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_access>(Get<::Celeste::ast::Type::symbol_access>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__> AccessTemplateBase<::Celeste::ast::node::symbol>::deamerreserved_star__symbol_access__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__symbol_access__>(Get<::Celeste::ast::Type::deamerreserved_star__symbol_access__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_access> AccessTemplateBase<::Celeste::ast::node::symbol>::symbol_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_access>(Get<::Celeste::ast::Type::symbol_access>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_name> AccessTemplateBase<::Celeste::ast::node::symbol>::symbol_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_name>(Get<::Celeste::ast::Type::symbol_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::auto_deduce_array> AccessTemplateBase<::Celeste::ast::node::symbol_access>::auto_deduce_array()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>(Get<::Celeste::ast::Type::auto_deduce_array>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_access> AccessTemplateBase<::Celeste::ast::node::symbol_access>::function_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_access>(Get<::Celeste::ast::Type::function_access>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::index_access> AccessTemplateBase<::Celeste::ast::node::symbol_access>::index_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::index_access>(Get<::Celeste::ast::Type::index_access>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::anonymous_access> AccessTemplateBase<::Celeste::ast::node::symbol_access>::anonymous_access()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::anonymous_access>(Get<::Celeste::ast::Type::anonymous_access>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::auto_deduce_array>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CLASS> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::CLASS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CLASS>(Get<::Celeste::ast::Type::CLASS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CODE> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::CODE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CODE>(Get<::Celeste::ast::Type::CODE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::OPERATORNAME> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::OPERATORNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::OPERATORNAME>(Get<::Celeste::ast::Type::OPERATORNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FOR> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::FOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FOR>(Get<::Celeste::ast::Type::FOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::IF> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::IF()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::IF>(Get<::Celeste::ast::Type::IF>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ELSEIF> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::ELSEIF()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ELSEIF>(Get<::Celeste::ast::Type::ELSEIF>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ELSE> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::ELSE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ELSE>(Get<::Celeste::ast::Type::ELSE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::symbol_name_secondary>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CODE> AccessTemplateBase<::Celeste::ast::node::symbol_name>::CODE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CODE>(Get<::Celeste::ast::Type::CODE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::OPERATORNAME> AccessTemplateBase<::Celeste::ast::node::symbol_name>::OPERATORNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::OPERATORNAME>(Get<::Celeste::ast::Type::OPERATORNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FOR> AccessTemplateBase<::Celeste::ast::node::symbol_name>::FOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FOR>(Get<::Celeste::ast::Type::FOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::symbol_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::function_access>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__> AccessTemplateBase<::Celeste::ast::node::function_access>::deamerreserved_arrow__expression__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>(Get<::Celeste::ast::Type::deamerreserved_arrow__expression__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> AccessTemplateBase<::Celeste::ast::node::function_access>::deamerreserved_star__COMMA__expression__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__expression__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_access>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_access>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::function_access>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>::deamerreserved_star__COMMA__expression__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__expression__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__expression__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>::deamerreserved_star__COMMA__expression__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__expression__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::index_access>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::index_access>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::index_access>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::anonymous_access>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::anonymous_access>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::anonymous_access>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::array_declaration> AccessTemplateBase<::Celeste::ast::node::type>::array_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::array_declaration>(Get<::Celeste::ast::Type::array_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::type>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__> AccessTemplateBase<::Celeste::ast::node::type>::deamerreserved_star__type_modifier__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>(Get<::Celeste::ast::Type::deamerreserved_star__type_modifier__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type_modifier> AccessTemplateBase<::Celeste::ast::node::type>::type_modifier()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type_modifier>(Get<::Celeste::ast::Type::type_modifier>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::AUTO> AccessTemplateBase<::Celeste::ast::node::type>::AUTO()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::AUTO>(Get<::Celeste::ast::Type::AUTO>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::AUTOTYPE> AccessTemplateBase<::Celeste::ast::node::type>::AUTOTYPE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::AUTOTYPE>(Get<::Celeste::ast::Type::AUTOTYPE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>::deamerreserved_star__type_modifier__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>(Get<::Celeste::ast::Type::deamerreserved_star__type_modifier__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type_modifier> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__type_modifier__>::type_modifier()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type_modifier>(Get<::Celeste::ast::Type::type_modifier>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CONSTANT> AccessTemplateBase<::Celeste::ast::node::type_modifier>::CONSTANT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CONSTANT>(Get<::Celeste::ast::Type::CONSTANT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::STATIC> AccessTemplateBase<::Celeste::ast::node::type_modifier>::STATIC()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::STATIC>(Get<::Celeste::ast::Type::STATIC>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::INLINE> AccessTemplateBase<::Celeste::ast::node::type_modifier>::INLINE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::INLINE>(Get<::Celeste::ast::Type::INLINE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__> AccessTemplateBase<::Celeste::ast::node::value_list>::deamerreserved_arrow__full_value__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>(Get<::Celeste::ast::Type::deamerreserved_arrow__full_value__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> AccessTemplateBase<::Celeste::ast::node::value_list>::deamerreserved_star__COMMA__full_value__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::value_list>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::value_list>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>::deamerreserved_star__COMMA__full_value__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>::deamerreserved_star__COMMA__full_value__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::full_value>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::code_block> AccessTemplateBase<::Celeste::ast::node::value>::code_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::code_block>(Get<::Celeste::ast::Type::code_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::symbol_reference> AccessTemplateBase<::Celeste::ast::node::value>::symbol_reference()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::symbol_reference>(Get<::Celeste::ast::Type::symbol_reference>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::tuple> AccessTemplateBase<::Celeste::ast::node::value>::tuple()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::tuple>(Get<::Celeste::ast::Type::tuple>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::NUMBER> AccessTemplateBase<::Celeste::ast::node::value>::NUMBER()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::NUMBER>(Get<::Celeste::ast::Type::NUMBER>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DECIMAL> AccessTemplateBase<::Celeste::ast::node::value>::DECIMAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DECIMAL>(Get<::Celeste::ast::Type::DECIMAL>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEXT> AccessTemplateBase<::Celeste::ast::node::value>::TEXT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEXT>(Get<::Celeste::ast::Type::TEXT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__> AccessTemplateBase<::Celeste::ast::node::tuple>::deamerreserved_arrow__full_value__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__full_value__>(Get<::Celeste::ast::Type::deamerreserved_arrow__full_value__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__> AccessTemplateBase<::Celeste::ast::node::tuple>::deamerreserved_star__COMMA__full_value__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::full_value> AccessTemplateBase<::Celeste::ast::node::tuple>::full_value()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::full_value>(Get<::Celeste::ast::Type::full_value>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::tuple>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::tuple>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::tuple>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}


	/*!	\class Access_if
	 *
	 *	\brief Accesses the node if it is of the given type.
	 *
	 *	\note A lambda has to be supplied as second argument with paramater: "Access<T>".
	 */
	template<typename T>
	struct Access_if
	{
		const ::deamer::external::cpp::ast::Node* node;

		template<typename FunctionType>
		Access_if(const ::deamer::external::cpp::ast::Node* node_, FunctionType function) : node(node_)
		{
			if (node->GetType() == static_cast<::std::size_t>(::Celeste::ast::relation::NodeTypeToEnum_v<T>))
			{
				function(Access<T>(static_cast<const T*>(node)));
			}
		}
	};

}}}

#endif // CELESTE_AST_REFERENCE_ACCESSTEMPLATEBASE_H