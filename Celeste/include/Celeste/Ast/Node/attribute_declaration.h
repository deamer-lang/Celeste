#ifndef Celeste_AST_NODE_attribute_declaration_H
#define Celeste_AST_NODE_attribute_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class attribute_declaration : public Celeste<attribute_declaration>
	{
	private:
	public:
		attribute_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<attribute_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_attribute_declaration_H
