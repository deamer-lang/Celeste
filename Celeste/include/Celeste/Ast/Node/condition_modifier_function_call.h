#ifndef Celeste_AST_NODE_condition_modifier_function_call_H
#define Celeste_AST_NODE_condition_modifier_function_call_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class condition_modifier_function_call : public Celeste<condition_modifier_function_call>
	{
	private:
	public:
		condition_modifier_function_call(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<condition_modifier_function_call>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_condition_modifier_function_call_H
