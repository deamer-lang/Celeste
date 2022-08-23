#ifndef Celeste_AST_NODE_COMPOSITE_H
#define Celeste_AST_NODE_COMPOSITE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class COMPOSITE : public Celeste<COMPOSITE>
	{
	private:
	public:
		COMPOSITE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<COMPOSITE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_COMPOSITE_H
