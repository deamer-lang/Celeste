#ifndef Celeste_AST_NODE_NOTEQ_H
#define Celeste_AST_NODE_NOTEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class NOTEQ : public Celeste<NOTEQ>
	{
	private:
	public:
		NOTEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<NOTEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_NOTEQ_H
