#ifndef Celeste_AST_NODE_SINGLE_COMMENT_H
#define Celeste_AST_NODE_SINGLE_COMMENT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class SINGLE_COMMENT : public Celeste<SINGLE_COMMENT>
	{
	private:
	public:
		SINGLE_COMMENT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<SINGLE_COMMENT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_SINGLE_COMMENT_H
