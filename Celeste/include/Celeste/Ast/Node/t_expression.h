#ifndef Celeste_AST_NODE_t_expression_H
#define Celeste_AST_NODE_t_expression_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class t_expression : public Celeste<t_expression>
	{
	private:
	public:
		t_expression(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<t_expression>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_t_expression_H
