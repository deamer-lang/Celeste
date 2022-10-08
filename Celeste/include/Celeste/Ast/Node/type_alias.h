#ifndef Celeste_AST_NODE_type_alias_H
#define Celeste_AST_NODE_type_alias_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class type_alias : public Celeste<type_alias>
	{
	private:
	public:
		type_alias(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<type_alias>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_type_alias_H
