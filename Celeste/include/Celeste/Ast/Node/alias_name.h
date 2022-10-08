#ifndef Celeste_AST_NODE_alias_name_H
#define Celeste_AST_NODE_alias_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class alias_name : public Celeste<alias_name>
	{
	private:
	public:
		alias_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<alias_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_alias_name_H
