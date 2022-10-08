#ifndef Celeste_AST_NODE_aliased_type_H
#define Celeste_AST_NODE_aliased_type_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class aliased_type : public Celeste<aliased_type>
	{
	private:
	public:
		aliased_type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<aliased_type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_aliased_type_H
