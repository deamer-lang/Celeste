#ifndef Celeste_AST_NODE_RE_H
#define Celeste_AST_NODE_RE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class RE : public Celeste<RE>
	{
	private:
	public:
		RE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<RE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_RE_H
