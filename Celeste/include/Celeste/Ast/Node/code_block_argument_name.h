#ifndef Celeste_AST_NODE_code_block_argument_name_H
#define Celeste_AST_NODE_code_block_argument_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class code_block_argument_name : public Celeste<code_block_argument_name>
	{
	private:
	public:
		code_block_argument_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<code_block_argument_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_code_block_argument_name_H
