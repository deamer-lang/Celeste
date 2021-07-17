#ifndef Celeste_AST_NODE_function_block_H
#define Celeste_AST_NODE_function_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class function_block : public Celeste<function_block>
	{
	private:
	public:
		function_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<function_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_function_block_H
