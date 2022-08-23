#ifndef Celeste_AST_NODE_NOT_H
#define Celeste_AST_NODE_NOT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class NOT : public Celeste<NOT>
	{
	private:
	public:
		NOT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<NOT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_NOT_H
