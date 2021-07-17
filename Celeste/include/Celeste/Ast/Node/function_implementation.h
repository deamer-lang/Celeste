#ifndef Celeste_AST_NODE_function_implementation_H
#define Celeste_AST_NODE_function_implementation_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_implementation : public Celeste<function_implementation>, public ::Celeste::ast::common::node::stmt, public ::Celeste::ast::common::node::class_stmt
	{
	private:
	public:
		function_implementation(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_implementation>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_implementation_H
