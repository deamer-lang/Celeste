#ifndef Celeste_AST_NODE_EXPLICIT_ALIAS_H
#define Celeste_AST_NODE_EXPLICIT_ALIAS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class EXPLICIT_ALIAS : public Celeste<EXPLICIT_ALIAS>
	{
	private:
	public:
		EXPLICIT_ALIAS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<EXPLICIT_ALIAS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_EXPLICIT_ALIAS_H
