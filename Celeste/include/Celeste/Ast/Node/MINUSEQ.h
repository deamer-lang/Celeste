#ifndef Celeste_AST_NODE_MINUSEQ_H
#define Celeste_AST_NODE_MINUSEQ_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class MINUSEQ : public Celeste<MINUSEQ>
	{
	private:
	public:
		MINUSEQ(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<MINUSEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_MINUSEQ_H
