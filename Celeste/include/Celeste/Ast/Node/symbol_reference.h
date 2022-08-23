#ifndef Celeste_AST_NODE_symbol_reference_H
#define Celeste_AST_NODE_symbol_reference_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class symbol_reference : public Celeste<symbol_reference>
	{
	private:
	public:
		symbol_reference(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<symbol_reference>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_symbol_reference_H
