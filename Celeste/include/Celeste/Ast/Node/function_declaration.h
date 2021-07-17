#ifndef Celeste_AST_NODE_function_declaration_H
#define Celeste_AST_NODE_function_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_declaration : public Celeste<function_declaration>, public ::Celeste::ast::common::node::stmt, public ::Celeste::ast::common::node::class_stmt
	{
	private:
	public:
		function_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_declaration_H
