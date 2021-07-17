#ifndef Celeste_AST_NODE_PLUS_H
#define Celeste_AST_NODE_PLUS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PLUS : public Celeste<PLUS>
	{
	private:
	public:
		PLUS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PLUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PLUS_H
