#ifndef Celeste_AST_NODE_COLON_H
#define Celeste_AST_NODE_COLON_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class COLON : public Celeste<COLON>
	{
	private:
	public:
		COLON(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<COLON>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_COLON_H
