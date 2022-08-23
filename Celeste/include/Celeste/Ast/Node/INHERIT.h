#ifndef Celeste_AST_NODE_INHERIT_H
#define Celeste_AST_NODE_INHERIT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class INHERIT : public Celeste<INHERIT>
	{
	private:
	public:
		INHERIT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<INHERIT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_INHERIT_H
