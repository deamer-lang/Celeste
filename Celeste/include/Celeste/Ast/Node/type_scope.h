#ifndef Celeste_AST_NODE_type_scope_H
#define Celeste_AST_NODE_type_scope_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class type_scope : public Celeste<type_scope>
	{
	private:
	public:
		type_scope(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<type_scope>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_type_scope_H
