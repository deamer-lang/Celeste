#ifndef Celeste_AST_NODE_LTEQ_H
#define Celeste_AST_NODE_LTEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class LTEQ : public Celeste<LTEQ>
	{
	private:
	public:
		LTEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<LTEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_LTEQ_H
