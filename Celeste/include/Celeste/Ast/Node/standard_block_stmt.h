#ifndef Celeste_AST_NODE_standard_block_stmt_H
#define Celeste_AST_NODE_standard_block_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class standard_block_stmt : public Celeste<standard_block_stmt>
	{
	private:
	public:
		standard_block_stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<standard_block_stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_standard_block_stmt_H
