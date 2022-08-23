#ifndef Celeste_AST_NODE_RUNTIME_H
#define Celeste_AST_NODE_RUNTIME_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class RUNTIME : public Celeste<RUNTIME>
	{
	private:
	public:
		RUNTIME(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<RUNTIME>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_RUNTIME_H
