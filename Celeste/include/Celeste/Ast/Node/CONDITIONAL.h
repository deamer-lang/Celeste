#ifndef Celeste_AST_NODE_CONDITIONAL_H
#define Celeste_AST_NODE_CONDITIONAL_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class CONDITIONAL : public Celeste<CONDITIONAL>
	{
	private:
	public:
		CONDITIONAL(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<CONDITIONAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_CONDITIONAL_H
