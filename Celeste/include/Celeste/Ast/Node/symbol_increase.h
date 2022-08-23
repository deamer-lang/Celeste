#ifndef Celeste_AST_NODE_symbol_increase_H
#define Celeste_AST_NODE_symbol_increase_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol_increase : public Celeste<symbol_increase>
	{
	private:
	public:
		symbol_increase(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol_increase>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_increase_H
