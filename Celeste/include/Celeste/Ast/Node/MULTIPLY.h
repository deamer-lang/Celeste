#ifndef Celeste_AST_NODE_MULTIPLY_H
#define Celeste_AST_NODE_MULTIPLY_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class MULTIPLY : public Celeste<MULTIPLY>
	{
	private:
	public:
		MULTIPLY(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<MULTIPLY>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_MULTIPLY_H
