#ifndef Celeste_AST_NODE_enum_declaration_H
#define Celeste_AST_NODE_enum_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enum_declaration : public Celeste<enum_declaration>, public ::Celeste::ast::common::node::stmt
	{
	private:
	public:
		enum_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enum_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enum_declaration_H
