#ifndef Celeste_AST_NODE_EQEQ_H
#define Celeste_AST_NODE_EQEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class EQEQ : public Celeste<EQEQ>
	{
	private:
	public:
		EQEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<EQEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_EQEQ_H
