#ifndef Celeste_AST_NODE_assignment_operator_H
#define Celeste_AST_NODE_assignment_operator_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class assignment_operator : public Celeste<assignment_operator>
	{
	private:
	public:
		assignment_operator(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<assignment_operator>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_assignment_operator_H
