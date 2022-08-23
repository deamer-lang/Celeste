#ifndef Celeste_AST_NODE_condition_modifier_name_H
#define Celeste_AST_NODE_condition_modifier_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class condition_modifier_name : public Celeste<condition_modifier_name>
	{
	private:
	public:
		condition_modifier_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<condition_modifier_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_condition_modifier_name_H
