#ifndef Celeste_AST_NODE_return_statement_H
#define Celeste_AST_NODE_return_statement_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class return_statement : public Celeste<return_statement>
	{
	private:
	public:
		return_statement(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<return_statement>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_return_statement_H
