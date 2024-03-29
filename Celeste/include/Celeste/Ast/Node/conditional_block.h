#ifndef Celeste_AST_NODE_conditional_block_H
#define Celeste_AST_NODE_conditional_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class conditional_block : public Celeste<conditional_block>
	{
	private:
	public:
		conditional_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<conditional_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_conditional_block_H
