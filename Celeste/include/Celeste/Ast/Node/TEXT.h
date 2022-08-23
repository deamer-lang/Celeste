#ifndef Celeste_AST_NODE_TEXT_H
#define Celeste_AST_NODE_TEXT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class TEXT : public Celeste<TEXT>
	{
	private:
	public:
		TEXT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<TEXT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_TEXT_H
