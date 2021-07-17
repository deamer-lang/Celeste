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

		void ListenEntry(const ::Celeste::ast::node::meta_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"meta_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__expression__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__expression__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__RIGHT_SQUARE_BRACKET__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__meta_declaration__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__meta_declaration__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::expression* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"expression\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__base_type__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__base_type__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::base_type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"base_type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__class_stmt__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__class_stmt__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enum_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enum_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enum_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enum_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__deamerreserved_optional__function_argument____\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__function_argument__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_implementation* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_implementation\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_argument\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_name* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_name\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::return_type* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"return_type\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__function_stmt__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__function_stmt__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::class_stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"class_stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::enum_stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"enum_stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::function_stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"function_stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::logical_stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"logical_stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::condtional_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"condtional_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::conditional_block* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_block\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__condtional_stmt__\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::condtional_stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"condtional_stmt\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::variable_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"variable_declaration\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::variable_initialization* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"variable_initialization\"];\n";
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

		void ListenEntry(const ::Celeste::ast::node::FUNCTION* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"FUNCTION\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::IF* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"IF\"];\n";
		}

		void ListenEntry(const ::Celeste::ast::node::ELSE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ELSE\"];\n";
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

		void ListenEntry(const ::Celeste::ast::node::PLUS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"PLUS\"];\n";
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

		void ListenEntry(const ::Celeste::ast::node::USERDEFINED_OPERATOR* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"USERDEFINED_OPERATOR\"];\n";
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

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__stmt__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::meta_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__expression__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__meta_declaration__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::expression* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__base_type__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::base_type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__class_stmt__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enum_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enum_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_implementation* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_argument* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_name* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::return_type* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__function_stmt__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::class_stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::enum_stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::function_stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::logical_stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::condtional_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::conditional_block* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::condtional_stmt* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::variable_declaration* node) override
		{
		}

		void ListenExit(const ::Celeste::ast::node::variable_initialization* node) override
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