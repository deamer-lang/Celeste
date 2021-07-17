#ifndef Celeste_AST_NODE_meta_declaration_H
#define Celeste_AST_NODE_meta_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class meta_declaration : public Celeste<meta_declaration>, public ::Celeste::ast::common::node::stmt
	{
	private:
	public:
		meta_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<meta_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_meta_declaration_H
