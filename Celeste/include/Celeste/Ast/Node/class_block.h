#ifndef Celeste_AST_NODE_class_block_H
#define Celeste_AST_NODE_class_block_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_block : public Celeste<class_block>
	{
	private:
	public:
		class_block(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_block>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_block_H
