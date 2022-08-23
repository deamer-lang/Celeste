#ifndef Celeste_AST_NODE_for_variable_H
#define Celeste_AST_NODE_for_variable_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class for_variable : public Celeste<for_variable>
	{
	private:
	public:
		for_variable(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<for_variable>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_for_variable_H
