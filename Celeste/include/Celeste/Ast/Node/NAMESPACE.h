#ifndef Celeste_AST_NODE_NAMESPACE_H
#define Celeste_AST_NODE_NAMESPACE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class NAMESPACE : public Celeste<NAMESPACE>
	{
	private:
	public:
		NAMESPACE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<NAMESPACE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_NAMESPACE_H
