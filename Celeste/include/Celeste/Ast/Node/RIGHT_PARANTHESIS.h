#ifndef Celeste_AST_NODE_RIGHT_PARANTHESIS_H
#define Celeste_AST_NODE_RIGHT_PARANTHESIS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class RIGHT_PARANTHESIS : public Celeste<RIGHT_PARANTHESIS>
	{
	private:
	public:
		RIGHT_PARANTHESIS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<RIGHT_PARANTHESIS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_RIGHT_PARANTHESIS_H
