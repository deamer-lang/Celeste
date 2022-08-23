#ifndef Celeste_AST_NODE_conditional_else_H
#define Celeste_AST_NODE_conditional_else_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class conditional_else : public Celeste<conditional_else>
	{
	private:
	public:
		conditional_else(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<conditional_else>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_conditional_else_H
