#ifndef Celeste_AST_NODE_code_block_input_argument_H
#define Celeste_AST_NODE_code_block_input_argument_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class code_block_input_argument : public Celeste<code_block_input_argument>
	{
	private:
	public:
		code_block_input_argument(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<code_block_input_argument>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_code_block_input_argument_H
