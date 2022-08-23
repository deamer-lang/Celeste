#ifndef Celeste_AST_NODE_CONSTRUCTOR_H
#define Celeste_AST_NODE_CONSTRUCTOR_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class CONSTRUCTOR : public Celeste<CONSTRUCTOR>
	{
	private:
	public:
		CONSTRUCTOR(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<CONSTRUCTOR>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_CONSTRUCTOR_H
