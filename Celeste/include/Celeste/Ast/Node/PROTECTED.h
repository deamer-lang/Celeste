#ifndef Celeste_AST_NODE_PROTECTED_H
#define Celeste_AST_NODE_PROTECTED_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PROTECTED : public Celeste<PROTECTED>
	{
	private:
	public:
		PROTECTED(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PROTECTED>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PROTECTED_H
