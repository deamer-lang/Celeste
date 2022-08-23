#ifndef Celeste_AST_NODE_array_declaration_H
#define Celeste_AST_NODE_array_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class array_declaration : public Celeste<array_declaration>
	{
	private:
	public:
		array_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<array_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_array_declaration_H
