#ifndef Celeste_AST_NODE_PURE_H
#define Celeste_AST_NODE_PURE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PURE : public Celeste<PURE>
	{
	private:
	public:
		PURE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PURE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PURE_H
