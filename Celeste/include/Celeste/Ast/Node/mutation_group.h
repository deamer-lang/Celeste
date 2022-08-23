#ifndef Celeste_AST_NODE_mutation_group_H
#define Celeste_AST_NODE_mutation_group_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class mutation_group : public Celeste<mutation_group>
	{
	private:
	public:
		mutation_group(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<mutation_group>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_mutation_group_H
