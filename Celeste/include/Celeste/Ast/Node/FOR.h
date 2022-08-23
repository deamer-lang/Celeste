#ifndef Celeste_AST_NODE_FOR_H
#define Celeste_AST_NODE_FOR_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class FOR : public Celeste<FOR>
	{
	private:
	public:
		FOR(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<FOR>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_FOR_H
