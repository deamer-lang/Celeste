#ifndef Celeste_AST_NODE_anonymous_access_H
#define Celeste_AST_NODE_anonymous_access_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class anonymous_access : public Celeste<anonymous_access>
	{
	private:
	public:
		anonymous_access(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<anonymous_access>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_anonymous_access_H
