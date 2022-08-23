#ifndef Celeste_AST_NODE_CONSTANT_H
#define Celeste_AST_NODE_CONSTANT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class CONSTANT : public Celeste<CONSTANT>
	{
	private:
	public:
		CONSTANT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<CONSTANT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_CONSTANT_H
