#ifndef Celeste_AST_NODE_LT_H
#define Celeste_AST_NODE_LT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class LT : public Celeste<LT>
	{
	private:
	public:
		LT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<LT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_LT_H
