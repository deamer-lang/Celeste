#ifndef Celeste_AST_NODE_IN_H
#define Celeste_AST_NODE_IN_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class IN : public Celeste<IN>
	{
	private:
	public:
		IN(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<IN>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_IN_H
