#ifndef Celeste_AST_NODE_logical_stmt_H
#define Celeste_AST_NODE_logical_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/logical_stmt.h"
#include "Celeste/Ast/Node/function_stmt.h"
#include "Celeste/Ast/Node/condtional_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class logical_stmt : public Celeste<logical_stmt>, public ::Celeste::ast::common::node::logical_stmt, public ::Celeste::ast::common::node::function_stmt, public ::Celeste::ast::common::node::condtional_stmt
	{
	private:
	public:
		logical_stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<logical_stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_logical_stmt_H
