#ifndef Celeste_AST_NODE_code_block_modifier_H
#define Celeste_AST_NODE_code_block_modifier_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class code_block_modifier : public Celeste<code_block_modifier>
	{
	private:
	public:
		code_block_modifier(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<code_block_modifier>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_code_block_modifier_H
