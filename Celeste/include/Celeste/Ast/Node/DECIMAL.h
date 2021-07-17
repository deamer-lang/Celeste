#ifndef Celeste_AST_NODE_DECIMAL_H
#define Celeste_AST_NODE_DECIMAL_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class DECIMAL : public Celeste<DECIMAL>
	{
	private:
	public:
		DECIMAL(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<DECIMAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_DECIMAL_H
