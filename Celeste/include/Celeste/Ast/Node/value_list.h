#ifndef Celeste_AST_NODE_value_list_H
#define Celeste_AST_NODE_value_list_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class value_list : public Celeste<value_list>
	{
	private:
	public:
		value_list(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<value_list>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_value_list_H
