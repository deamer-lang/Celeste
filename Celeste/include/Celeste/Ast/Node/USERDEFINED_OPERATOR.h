#ifndef Celeste_AST_NODE_USERDEFINED_OPERATOR_H
#define Celeste_AST_NODE_USERDEFINED_OPERATOR_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class USERDEFINED_OPERATOR : public Celeste<USERDEFINED_OPERATOR>
	{
	private:
	public:
		USERDEFINED_OPERATOR(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<USERDEFINED_OPERATOR>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_USERDEFINED_OPERATOR_H
