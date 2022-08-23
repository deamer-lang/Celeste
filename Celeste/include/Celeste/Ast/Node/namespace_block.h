#ifndef Celeste_AST_NODE_namespace_block_H
#define Celeste_AST_NODE_namespace_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class namespace_block : public Celeste<namespace_block>
	{
	private:
	public:
		namespace_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<namespace_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_namespace_block_H
