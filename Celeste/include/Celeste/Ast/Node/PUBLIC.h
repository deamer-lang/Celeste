#ifndef Celeste_AST_NODE_PUBLIC_H
#define Celeste_AST_NODE_PUBLIC_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PUBLIC : public Celeste<PUBLIC>
	{
	private:
	public:
		PUBLIC(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PUBLIC>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PUBLIC_H
