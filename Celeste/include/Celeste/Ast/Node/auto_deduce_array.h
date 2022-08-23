#ifndef Celeste_AST_NODE_auto_deduce_array_H
#define Celeste_AST_NODE_auto_deduce_array_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class auto_deduce_array : public Celeste<auto_deduce_array>
	{
	private:
	public:
		auto_deduce_array(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<auto_deduce_array>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_auto_deduce_array_H
