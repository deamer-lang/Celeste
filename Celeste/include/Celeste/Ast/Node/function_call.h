#ifndef Celeste_AST_NODE_function_call_H
#define Celeste_AST_NODE_function_call_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_call : public Celeste<function_call>
	{
	private:
	public:
		function_call(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_call>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_call_H
