#ifndef Celeste_AST_NODE_symbol_name_secondary_H
#define Celeste_AST_NODE_symbol_name_secondary_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol_name_secondary : public Celeste<symbol_name_secondary>
	{
	private:
	public:
		symbol_name_secondary(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol_name_secondary>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_name_secondary_H
