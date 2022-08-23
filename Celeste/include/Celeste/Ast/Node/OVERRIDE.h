#ifndef Celeste_AST_NODE_OVERRIDE_H
#define Celeste_AST_NODE_OVERRIDE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class OVERRIDE : public Celeste<OVERRIDE>
	{
	private:
	public:
		OVERRIDE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<OVERRIDE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_OVERRIDE_H
