#ifndef Celeste_AST_NODE_class_declaration_H
#define Celeste_AST_NODE_class_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_declaration : public Celeste<class_declaration>
	{
	private:
	public:
		class_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_declaration_H
