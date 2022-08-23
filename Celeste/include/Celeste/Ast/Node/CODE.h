#ifndef Celeste_AST_NODE_CODE_H
#define Celeste_AST_NODE_CODE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class CODE : public Celeste<CODE>
	{
	private:
	public:
		CODE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<CODE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_CODE_H
