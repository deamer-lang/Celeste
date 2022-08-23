#ifndef Celeste_AST_NODE_symbol_H
#define Celeste_AST_NODE_symbol_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol : public Celeste<symbol>
	{
	private:
	public:
		symbol(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_H
