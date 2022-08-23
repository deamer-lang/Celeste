#ifndef Celeste_AST_NODE_AS_H
#define Celeste_AST_NODE_AS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class AS : public Celeste<AS>
	{
	private:
	public:
		AS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<AS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_AS_H
