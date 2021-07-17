#ifndef Celeste_AST_NODE_FUNCTION_H
#define Celeste_AST_NODE_FUNCTION_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class FUNCTION : public Celeste<FUNCTION>
	{
	private:
	public:
		FUNCTION(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<FUNCTION>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_FUNCTION_H
