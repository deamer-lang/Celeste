#ifndef Celeste_AST_NODE_MINUS_H
#define Celeste_AST_NODE_MINUS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class MINUS : public Celeste<MINUS>
	{
	private:
	public:
		MINUS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<MINUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_MINUS_H
