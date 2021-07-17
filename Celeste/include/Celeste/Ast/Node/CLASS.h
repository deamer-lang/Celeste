#ifndef Celeste_AST_NODE_CLASS_H
#define Celeste_AST_NODE_CLASS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class CLASS : public Celeste<CLASS>
	{
	private:
	public:
		CLASS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<CLASS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_CLASS_H
