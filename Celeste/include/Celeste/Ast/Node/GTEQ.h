#ifndef Celeste_AST_NODE_GTEQ_H
#define Celeste_AST_NODE_GTEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class GTEQ : public Celeste<GTEQ>
	{
	private:
	public:
		GTEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<GTEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_GTEQ_H
