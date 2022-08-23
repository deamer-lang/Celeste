#ifndef Celeste_AST_NODE_ELSE_H
#define Celeste_AST_NODE_ELSE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class ELSE : public Celeste<ELSE>
	{
	private:
	public:
		ELSE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<ELSE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_ELSE_H
