#ifndef CELESTE_AST_VISUALISATION_GRAPH_H
#define CELESTE_AST_VISUALISATION_GRAPH_H

#include "Celeste/Ast/Listener/EnterExitListener.h"

namespace Celeste { namespace ast { namespace listener { namespace deamer { namespace visualisation {

	class Graph : public EnterExitListener
	{
	private:
		std::string output;

		void Init()
		{
			output += "digraph Celeste_AST {\n";
		}

		void End()
		{
			output += "}\n";
		}

		void AddConnection(const  ::deamer::external::cpp::ast::Node* source, const  ::deamer::external::cpp::ast::Node* target)
		{
			output += "\t" + std::to_string(::std::size_t(source)) + " -> " + std::to_string(::std::size_t(target)) + ";\n";
		}

		
		void ListenEntry(const ::Celeste::ast::node::program* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"program\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::root_program* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"root_program\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::standard_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"standard_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__stmt__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__stmt__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::import_statement* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"import_statement\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::file_import* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"file_import\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::mutation_group* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"mutation_group\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__symbol_reference__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__symbol_reference__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::assignment* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"assignment\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::assignment_operator* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"assignment_operator\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_if* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_if\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_else_if* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_else_if\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_else* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_else\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_conditional_function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_conditional_function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__template_parameter__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__template_parameter__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__conditional_function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__conditional_function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_code_function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_code_function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::code_function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"code_function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::return_statement* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"return_statement\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_increase* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_increase\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_decrease* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_decrease\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::expression* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"expression\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::expression_no_value* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"expression_no_value\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::t_expression* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"t_expression\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::f_expression* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"f_expression\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::display_call* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"display_call\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::for_loop* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"for_loop\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::for_iteration_loop* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"for_iteration_loop\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::for_each_loop* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"for_each_loop\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::for_variable* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"for_variable\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::iterator* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"iterator\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::for_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"for_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::namespace_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"namespace_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__namespace_name__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__DOT__namespace_name__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::namespace_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"namespace_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::namespace_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"namespace_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::inline_class_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"inline_class_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__inline_class_declaration_composite__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__inline_class_declaration_composite__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::inline_class_declaration_composite* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"inline_class_declaration_composite\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__inline_class_declaration_composite_alias__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__inline_class_declaration_composite_alias__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::inline_class_declaration_composite_alias* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"inline_class_declaration_composite_alias\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::inline_class_declaration_composite_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"inline_class_declaration_composite_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::created_class_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"created_class_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::code_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"code_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__code_block_input_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__code_block_input_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::code_block_input_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"code_block_input_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::code_block_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"code_block_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::code_block_argument_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"code_block_argument_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::code_block_program* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"code_block_program\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::variable_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"variable_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::array_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"array_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::variable_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"variable_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::trailing_return_type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"trailing_return_type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::return_type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"return_type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_function_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_function_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_argument_type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_argument_type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_argument_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_argument_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::condition_modifier_function_call* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"condition_modifier_function_call\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__condition_modifier_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__condition_modifier_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::condition_modifier_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"condition_modifier_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::condition_modifier_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"condition_modifier_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_body* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_body\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_class_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_class_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_parameter* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_parameter\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_parameter_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_parameter_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__class_inherit_base__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__class_inherit_base__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::execution_keyword_permutation* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"execution_keyword_permutation\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_body* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_body\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__class_stmt__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__class_stmt__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_stmt_member_field_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_stmt_member_field_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::member_field_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"member_field_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_stmt_member_function* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_stmt_member_function\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_stmt_member_template_function* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_stmt_member_template_function\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::template_class_stmt_constructor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"template_class_stmt_constructor\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_stmt_constructor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_stmt_constructor\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::accessibility* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"accessibility\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_inherit_base* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_inherit_base\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::inherit_base* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"inherit_base\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::inherit_base_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"inherit_base_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::compound_base* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"compound_base\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__compound_base_alias__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__compound_base_alias__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::compound_base_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"compound_base_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::compound_base_alias* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"compound_base_alias\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute_section* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute_section\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__attribute__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__attribute__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__deamerreserved_optional__COMMA____attribute__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__attribute_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__attribute_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__attribute_template_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__attribute_template_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute_template_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute_template_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__attribute_function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__attribute_function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute_function_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute_function_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::attribute_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"attribute_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enum_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enum_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__enumeration__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__enumeration__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enum_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enum_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enumeration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enumeration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enumeration_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enumeration_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enumeration_value* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enumeration_value\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_reference* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_reference\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__symbol__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__symbol__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__DOT__symbol_secondary__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_secondary* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_secondary\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__symbol_access__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__symbol_access__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_access* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_access\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::auto_deduce_array* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"auto_deduce_array\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_name_secondary* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_name_secondary\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::symbol_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"symbol_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_access* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_access\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__expression__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__expression__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__expression__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::index_access* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"index_access\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::anonymous_access* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"anonymous_access\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__type_modifier__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__type_modifier__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::type_modifier* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"type_modifier\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::value_list* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"value_list\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__full_value__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__full_value__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__full_value__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::full_value* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"full_value\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::value* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"value\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::tuple* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"tuple\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::SINGLE_COMMENT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"SINGLE_COMMENT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::CONSTANT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"CONSTANT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::FUNCTION* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"FUNCTION\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::CLASS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"CLASS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::ENUM* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ENUM\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::CONDITIONAL* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"CONDITIONAL\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::CODE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"CODE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::ATTRIBUTETOK* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ATTRIBUTETOK\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::RUNTIME* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RUNTIME\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::STATIC* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"STATIC\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::AUTO* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"AUTO\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::AUTOTYPE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"AUTOTYPE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::TEMPLATE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"TEMPLATE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::NAMESPACE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"NAMESPACE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::OPERATORNAME* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"OPERATORNAME\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::OVERRIDE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"OVERRIDE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::VIRTUAL* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"VIRTUAL\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PURE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PURE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::AS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"AS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::IN* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"IN\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::DISPLAY* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DISPLAY\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::RETURN* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RETURN\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::FOR* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"FOR\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::IF* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"IF\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::ELSEIF* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ELSEIF\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::ELSE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ELSE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::INLINE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"INLINE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::CONSTRUCTOR* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"CONSTRUCTOR\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::FILE_* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"FILE_\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PROGRAM_* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PROGRAM_\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::IMPORT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"IMPORT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PUBLIC* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PUBLIC\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PROTECTED* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PROTECTED\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PRIVATE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PRIVATE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::INHERIT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"INHERIT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::COMPOSITE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"COMPOSITE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::LEFT_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_BRACKET\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::RIGHT_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_BRACKET\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::LEFT_SQUARE_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_SQUARE_BRACKET\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_SQUARE_BRACKET\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::LEFT_PARANTHESIS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_PARANTHESIS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::RIGHT_PARANTHESIS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_PARANTHESIS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::COLON* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"COLON\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::SEMICOLON* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"SEMICOLON\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::COMMA* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"COMMA\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::DOT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DOT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::LTEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LTEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::GTEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"GTEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::LT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::GT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"GT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PLUSEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PLUSEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::MINUSEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MINUSEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::MULTIPLYEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MULTIPLYEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::DIVIDEEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DIVIDEEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::EQEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"EQEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::EQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"EQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::NOTEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"NOTEQ\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::NOT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"NOT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PLUSPLUS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PLUSPLUS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::PLUS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PLUS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::MINUSMINUS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MINUSMINUS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::MINUS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MINUS\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::DIVIDE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DIVIDE\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::MULTIPLY* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MULTIPLY\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::VARNAME* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"VARNAME\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::NUMBER* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"NUMBER\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::DECIMAL* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DECIMAL\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::TEXT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"TEXT\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::ESCAPE_CHARS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ESCAPE_CHARS\"];\n";
		}

		
		void ListenExit(const ::Celeste::ast::node::program* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::root_program* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::standard_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__stmt__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::import_statement* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::file_import* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::mutation_group* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::assignment* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::assignment_operator* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_if* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_else_if* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_else* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_conditional_function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__template_parameter__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_code_function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::code_function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::return_statement* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_increase* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_decrease* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::expression* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::expression_no_value* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::t_expression* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::f_expression* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::display_call* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::for_loop* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::for_iteration_loop* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::for_each_loop* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::for_variable* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::iterator* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::for_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::namespace_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__namespace_name__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::namespace_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::namespace_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::inline_class_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::inline_class_declaration_composite* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::inline_class_declaration_composite_alias* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::inline_class_declaration_composite_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::created_class_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::code_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::code_block_input_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::code_block_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::code_block_argument_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::code_block_program* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::variable_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::array_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::variable_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::trailing_return_type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::return_type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_function_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_argument_type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_argument_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::condition_modifier_function_call* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::condition_modifier_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::condition_modifier_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_body* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_class_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_parameter* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_parameter_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::execution_keyword_permutation* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_body* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__class_stmt__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_stmt_member_field_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::member_field_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_stmt_member_function* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_stmt_member_template_function* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::template_class_stmt_constructor* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_stmt_constructor* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::accessibility* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_inherit_base* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::inherit_base* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::inherit_base_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::compound_base* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::compound_base_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::compound_base_alias* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute_section* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__attribute__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_optional__COMMA____attribute__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__attribute_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__attribute_template_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_template_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute_template_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__attribute_function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__attribute_function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute_function_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::attribute_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enum_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__enumeration__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enum_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enumeration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enumeration_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enumeration_value* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_reference* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__symbol__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_secondary* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__symbol_access__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_access* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::auto_deduce_array* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_name_secondary* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::symbol_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_access* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__expression__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__expression__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::index_access* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::anonymous_access* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__type_modifier__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::type_modifier* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::value_list* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__full_value__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::full_value* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::value* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::tuple* node) override
		{
		}


	public:
		Graph()
		{
			Init();
		}


		std::string GetGraph()
		{
			End();
			return output;
		}
	};

}}}}}

#endif // CELESTE_AST_VISUALISATION_GRAPH_H