#ifndef Celeste_AST_NODE_for_loop_H
#define Celeste_AST_NODE_for_loop_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class for_loop : public Celeste<for_loop>
	{
	private:
	public:
		for_loop(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<for_loop>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_for_loop_H
