#ifndef Celeste_AST_NODE_inherit_base_H
#define Celeste_AST_NODE_inherit_base_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class inherit_base : public Celeste<inherit_base>
	{
	private:
	public:
		inherit_base(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<inherit_base>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_inherit_base_H
