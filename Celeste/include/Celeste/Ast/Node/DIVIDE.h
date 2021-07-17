#ifndef Celeste_AST_NODE_DIVIDE_H
#define Celeste_AST_NODE_DIVIDE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class DIVIDE : public Celeste<DIVIDE>
	{
	private:
	public:
		DIVIDE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<DIVIDE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_DIVIDE_H
