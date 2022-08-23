#ifndef Celeste_AST_NODE_namespace_declaration_H
#define Celeste_AST_NODE_namespace_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class namespace_declaration : public Celeste<namespace_declaration>
	{
	private:
	public:
		namespace_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<namespace_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_namespace_declaration_H
