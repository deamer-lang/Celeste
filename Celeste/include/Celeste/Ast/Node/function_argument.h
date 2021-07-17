#ifndef Celeste_AST_NODE_function_argument_H
#define Celeste_AST_NODE_function_argument_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_argument : public Celeste<function_argument>
	{
	private:
	public:
		function_argument(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_argument>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_argument_H
