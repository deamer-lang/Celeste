#ifndef Celeste_AST_NODE_PRIVATE_H
#define Celeste_AST_NODE_PRIVATE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PRIVATE : public Celeste<PRIVATE>
	{
	private:
	public:
		PRIVATE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PRIVATE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PRIVATE_H
