#ifndef Celeste_AST_NODE_execution_keyword_H
#define Celeste_AST_NODE_execution_keyword_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class execution_keyword : public Celeste<execution_keyword>
	{
	private:
	public:
		execution_keyword(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<execution_keyword>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_execution_keyword_H
