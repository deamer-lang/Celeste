#ifndef Celeste_AST_NODE_condtional_stmt_H
#define Celeste_AST_NODE_condtional_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/condtional_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class condtional_stmt : public Celeste<condtional_stmt>, public ::Celeste::ast::common::node::condtional_stmt
	{
	private:
	public:
		condtional_stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<condtional_stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_condtional_stmt_H
