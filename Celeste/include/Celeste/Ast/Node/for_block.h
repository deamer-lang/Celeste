#ifndef Celeste_AST_NODE_for_block_H
#define Celeste_AST_NODE_for_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class for_block : public Celeste<for_block>
	{
	private:
	public:
		for_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<for_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_for_block_H
