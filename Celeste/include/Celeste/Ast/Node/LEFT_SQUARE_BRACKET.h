#ifndef Celeste_AST_NODE_LEFT_SQUARE_BRACKET_H
#define Celeste_AST_NODE_LEFT_SQUARE_BRACKET_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class LEFT_SQUARE_BRACKET : public Celeste<LEFT_SQUARE_BRACKET>
	{
	private:
	public:
		LEFT_SQUARE_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<LEFT_SQUARE_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_LEFT_SQUARE_BRACKET_H
