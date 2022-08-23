#ifndef Celeste_AST_NODE_namespace_name_H
#define Celeste_AST_NODE_namespace_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class namespace_name : public Celeste<namespace_name>
	{
	private:
	public:
		namespace_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<namespace_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_namespace_name_H
