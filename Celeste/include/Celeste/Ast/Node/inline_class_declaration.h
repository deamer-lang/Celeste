#ifndef Celeste_AST_NODE_inline_class_declaration_H
#define Celeste_AST_NODE_inline_class_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class inline_class_declaration : public Celeste<inline_class_declaration>
	{
	private:
	public:
		inline_class_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<inline_class_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_inline_class_declaration_H
