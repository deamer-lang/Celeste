#ifndef Celeste_AST_NODE_stmt_H
#define Celeste_AST_NODE_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class stmt : public Celeste<stmt>, public ::Celeste::ast::common::node::stmt
	{
	private:
	public:
		stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_stmt_H
