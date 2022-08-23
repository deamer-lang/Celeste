#ifndef Celeste_AST_NODE_symbol_access_H
#define Celeste_AST_NODE_symbol_access_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol_access : public Celeste<symbol_access>
	{
	private:
	public:
		symbol_access(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol_access>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_access_H
