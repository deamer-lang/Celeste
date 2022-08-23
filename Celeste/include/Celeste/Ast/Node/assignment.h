#ifndef Celeste_AST_NODE_assignment_H
#define Celeste_AST_NODE_assignment_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class assignment : public Celeste<assignment>
	{
	private:
	public:
		assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_assignment_H
