#ifndef Celeste_AST_NODE_RIGHT_BRACKET_H
#define Celeste_AST_NODE_RIGHT_BRACKET_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class RIGHT_BRACKET : public Celeste<RIGHT_BRACKET>
	{
	private:
	public:
		RIGHT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<RIGHT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_RIGHT_BRACKET_H
