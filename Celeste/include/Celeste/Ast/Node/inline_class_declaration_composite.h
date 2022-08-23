#ifndef Celeste_AST_NODE_inline_class_declaration_composite_H
#define Celeste_AST_NODE_inline_class_declaration_composite_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class inline_class_declaration_composite : public Celeste<inline_class_declaration_composite>
	{
	private:
	public:
		inline_class_declaration_composite(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<inline_class_declaration_composite>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_inline_class_declaration_composite_H
