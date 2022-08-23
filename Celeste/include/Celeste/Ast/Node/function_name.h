#ifndef Celeste_AST_NODE_function_name_H
#define Celeste_AST_NODE_function_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_name : public Celeste<function_name>
	{
	private:
	public:
		function_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_name_H
