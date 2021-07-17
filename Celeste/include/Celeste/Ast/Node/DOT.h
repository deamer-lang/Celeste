#ifndef Celeste_AST_NODE_DOT_H
#define Celeste_AST_NODE_DOT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class DOT : public Celeste<DOT>
	{
	private:
	public:
		DOT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<DOT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_DOT_H
