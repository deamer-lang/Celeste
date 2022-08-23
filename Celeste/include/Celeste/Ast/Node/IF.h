#ifndef Celeste_AST_NODE_IF_H
#define Celeste_AST_NODE_IF_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class IF : public Celeste<IF>
	{
	private:
	public:
		IF(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<IF>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_IF_H
