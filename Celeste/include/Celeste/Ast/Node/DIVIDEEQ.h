#ifndef Celeste_AST_NODE_DIVIDEEQ_H
#define Celeste_AST_NODE_DIVIDEEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class DIVIDEEQ : public Celeste<DIVIDEEQ>
	{
	private:
	public:
		DIVIDEEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<DIVIDEEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_DIVIDEEQ_H
