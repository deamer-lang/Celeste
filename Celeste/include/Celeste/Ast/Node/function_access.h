#ifndef Celeste_AST_NODE_function_access_H
#define Celeste_AST_NODE_function_access_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_access : public Celeste<function_access>
	{
	private:
	public:
		function_access(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_access>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_access_H
