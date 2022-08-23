#ifndef Celeste_AST_NODE_value_H
#define Celeste_AST_NODE_value_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class value : public Celeste<value>
	{
	private:
	public:
		value(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<value>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_value_H
