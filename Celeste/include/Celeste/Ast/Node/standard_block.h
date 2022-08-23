#ifndef Celeste_AST_NODE_standard_block_H
#define Celeste_AST_NODE_standard_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class standard_block : public Celeste<standard_block>
	{
	private:
	public:
		standard_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<standard_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_standard_block_H
