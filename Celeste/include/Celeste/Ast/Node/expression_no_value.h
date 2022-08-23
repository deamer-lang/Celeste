#ifndef Celeste_AST_NODE_expression_no_value_H
#define Celeste_AST_NODE_expression_no_value_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class expression_no_value : public Celeste<expression_no_value>
	{
	private:
	public:
		expression_no_value(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<expression_no_value>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_expression_no_value_H
