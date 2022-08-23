#ifndef Celeste_AST_NODE_f_expression_H
#define Celeste_AST_NODE_f_expression_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class f_expression : public Celeste<f_expression>
	{
	private:
	public:
		f_expression(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<f_expression>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_f_expression_H
