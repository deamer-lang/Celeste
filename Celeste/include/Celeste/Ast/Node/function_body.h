#ifndef Celeste_AST_NODE_function_body_H
#define Celeste_AST_NODE_function_body_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_body : public Celeste<function_body>
	{
	private:
	public:
		function_body(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_body>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_body_H
