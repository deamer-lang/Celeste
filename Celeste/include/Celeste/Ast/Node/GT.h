#ifndef Celeste_AST_NODE_GT_H
#define Celeste_AST_NODE_GT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class GT : public Celeste<GT>
	{
	private:
	public:
		GT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<GT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_GT_H
