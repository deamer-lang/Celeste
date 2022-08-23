#ifndef Celeste_AST_NODE_inline_class_declaration_composite_alias_H
#define Celeste_AST_NODE_inline_class_declaration_composite_alias_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class inline_class_declaration_composite_alias : public Celeste<inline_class_declaration_composite_alias>
	{
	private:
	public:
		inline_class_declaration_composite_alias(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<inline_class_declaration_composite_alias>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_inline_class_declaration_composite_alias_H
