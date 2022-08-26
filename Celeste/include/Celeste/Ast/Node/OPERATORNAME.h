#ifndef Celeste_AST_NODE_OPERATORNAME_H
#define Celeste_AST_NODE_OPERATORNAME_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class OPERATORNAME : public Celeste<OPERATORNAME>
	{
	private:
	public:
		OPERATORNAME(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<OPERATORNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_OPERATORNAME_H
