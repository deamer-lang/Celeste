#ifndef Celeste_AST_NODE_code_block_H
#define Celeste_AST_NODE_code_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class code_block : public Celeste<code_block>
	{
	private:
	public:
		code_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<code_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_code_block_H
