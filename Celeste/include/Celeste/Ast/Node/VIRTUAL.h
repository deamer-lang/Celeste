#ifndef Celeste_AST_NODE_VIRTUAL_H
#define Celeste_AST_NODE_VIRTUAL_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class VIRTUAL : public Celeste<VIRTUAL>
	{
	private:
	public:
		VIRTUAL(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<VIRTUAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_VIRTUAL_H
