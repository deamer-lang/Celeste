#ifndef Celeste_AST_NODE_LE_H
#define Celeste_AST_NODE_LE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class LE : public Celeste<LE>
	{
	private:
	public:
		LE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<LE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_LE_H
