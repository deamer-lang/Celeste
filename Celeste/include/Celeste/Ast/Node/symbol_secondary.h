#ifndef Celeste_AST_NODE_symbol_secondary_H
#define Celeste_AST_NODE_symbol_secondary_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol_secondary : public Celeste<symbol_secondary>
	{
	private:
	public:
		symbol_secondary(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol_secondary>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_secondary_H
