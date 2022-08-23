#ifndef Celeste_AST_NODE_conditional_else_if_H
#define Celeste_AST_NODE_conditional_else_if_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class conditional_else_if : public Celeste<conditional_else_if>
	{
	private:
	public:
		conditional_else_if(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<conditional_else_if>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_conditional_else_if_H
