#ifndef Celeste_AST_NODE_STATIC_H
#define Celeste_AST_NODE_STATIC_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class STATIC : public Celeste<STATIC>
	{
	private:
	public:
		STATIC(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<STATIC>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_STATIC_H
