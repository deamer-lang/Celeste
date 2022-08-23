#ifndef Celeste_AST_NODE_AUTO_H
#define Celeste_AST_NODE_AUTO_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class AUTO : public Celeste<AUTO>
	{
	private:
	public:
		AUTO(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<AUTO>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_AUTO_H
