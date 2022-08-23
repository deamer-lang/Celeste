#ifndef Celeste_AST_NODE_RIGHT_SQUARE_BRACKET_H
#define Celeste_AST_NODE_RIGHT_SQUARE_BRACKET_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class RIGHT_SQUARE_BRACKET : public Celeste<RIGHT_SQUARE_BRACKET>
	{
	private:
	public:
		RIGHT_SQUARE_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<RIGHT_SQUARE_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_RIGHT_SQUARE_BRACKET_H
