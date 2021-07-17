#ifndef Celeste_AST_NODE_condtional_declaration_H
#define Celeste_AST_NODE_condtional_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/condtional_declaration.h"
#include "Celeste/Ast/Node/logical_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class condtional_declaration : public Celeste<condtional_declaration>, public ::Celeste::ast::common::node::condtional_declaration, public ::Celeste::ast::common::node::logical_stmt
	{
	private:
	public:
		condtional_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<condtional_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_condtional_declaration_H
