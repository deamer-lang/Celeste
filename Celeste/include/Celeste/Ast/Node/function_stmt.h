#ifndef Celeste_AST_NODE_function_stmt_H
#define Celeste_AST_NODE_function_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/function_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_stmt : public Celeste<function_stmt>, public ::Celeste::ast::common::node::function_stmt
	{
	private:
	public:
		function_stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_stmt_H
