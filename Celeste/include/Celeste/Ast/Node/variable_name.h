#ifndef Celeste_AST_NODE_variable_name_H
#define Celeste_AST_NODE_variable_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class variable_name : public Celeste<variable_name>
	{
	private:
	public:
		variable_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<variable_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_variable_name_H
