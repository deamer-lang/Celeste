#ifndef Celeste_AST_NODE_EQ_H
#define Celeste_AST_NODE_EQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class EQ : public Celeste<EQ>
	{
	private:
	public:
		EQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<EQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_EQ_H
