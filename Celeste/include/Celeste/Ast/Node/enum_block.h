#ifndef Celeste_AST_NODE_enum_block_H
#define Celeste_AST_NODE_enum_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enum_block : public Celeste<enum_block>
	{
	private:
	public:
		enum_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enum_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enum_block_H
