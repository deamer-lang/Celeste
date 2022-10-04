#ifndef Celeste_AST_NODE_MULTI_COMMENT_H
#define Celeste_AST_NODE_MULTI_COMMENT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class MULTI_COMMENT : public Celeste<MULTI_COMMENT>
	{
	private:
	public:
		MULTI_COMMENT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<MULTI_COMMENT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_MULTI_COMMENT_H
