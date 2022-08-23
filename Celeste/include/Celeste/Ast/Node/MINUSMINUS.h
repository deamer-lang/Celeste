#ifndef Celeste_AST_NODE_MINUSMINUS_H
#define Celeste_AST_NODE_MINUSMINUS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class MINUSMINUS : public Celeste<MINUSMINUS>
	{
	private:
	public:
		MINUSMINUS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<MINUSMINUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_MINUSMINUS_H
