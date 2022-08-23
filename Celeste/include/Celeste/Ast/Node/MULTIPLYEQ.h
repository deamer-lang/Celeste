#ifndef Celeste_AST_NODE_MULTIPLYEQ_H
#define Celeste_AST_NODE_MULTIPLYEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class MULTIPLYEQ : public Celeste<MULTIPLYEQ>
	{
	private:
	public:
		MULTIPLYEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<MULTIPLYEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_MULTIPLYEQ_H
