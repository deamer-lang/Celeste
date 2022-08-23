#ifndef Celeste_AST_NODE_variable_declaration_H
#define Celeste_AST_NODE_variable_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class variable_declaration : public Celeste<variable_declaration>
	{
	private:
	public:
		variable_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<variable_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_variable_declaration_H
