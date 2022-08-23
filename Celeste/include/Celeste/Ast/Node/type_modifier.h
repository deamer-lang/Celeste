#ifndef Celeste_AST_NODE_type_modifier_H
#define Celeste_AST_NODE_type_modifier_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class type_modifier : public Celeste<type_modifier>
	{
	private:
	public:
		type_modifier(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<type_modifier>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_type_modifier_H
