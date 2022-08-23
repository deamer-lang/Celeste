#ifndef Celeste_AST_NODE_full_value_H
#define Celeste_AST_NODE_full_value_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class full_value : public Celeste<full_value>
	{
	private:
	public:
		full_value(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<full_value>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_full_value_H
