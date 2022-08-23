#ifndef Celeste_AST_NODE_variable_initialization_H
#define Celeste_AST_NODE_variable_initialization_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class variable_initialization : public Celeste<variable_initialization>
	{
	private:
	public:
		variable_initialization(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<variable_initialization>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_variable_initialization_H
