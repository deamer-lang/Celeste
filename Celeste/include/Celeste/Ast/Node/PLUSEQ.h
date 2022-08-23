#ifndef Celeste_AST_NODE_PLUSEQ_H
#define Celeste_AST_NODE_PLUSEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PLUSEQ : public Celeste<PLUSEQ>
	{
	private:
	public:
		PLUSEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PLUSEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PLUSEQ_H
