#ifndef Celeste_AST_NODE_INLINE_H
#define Celeste_AST_NODE_INLINE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class INLINE : public Celeste<INLINE>
	{
	private:
	public:
		INLINE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<INLINE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_INLINE_H
