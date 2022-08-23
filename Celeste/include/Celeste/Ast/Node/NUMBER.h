#ifndef Celeste_AST_NODE_NUMBER_H
#define Celeste_AST_NODE_NUMBER_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class NUMBER : public Celeste<NUMBER>
	{
	private:
	public:
		NUMBER(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<NUMBER>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_NUMBER_H
