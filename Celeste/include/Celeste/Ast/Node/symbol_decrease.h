#ifndef Celeste_AST_NODE_symbol_decrease_H
#define Celeste_AST_NODE_symbol_decrease_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol_decrease : public Celeste<symbol_decrease>
	{
	private:
	public:
		symbol_decrease(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol_decrease>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_decrease_H
