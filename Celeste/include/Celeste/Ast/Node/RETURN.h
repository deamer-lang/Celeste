#ifndef Celeste_AST_NODE_RETURN_H
#define Celeste_AST_NODE_RETURN_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class RETURN : public Celeste<RETURN>
	{
	private:
	public:
		RETURN(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<RETURN>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_RETURN_H
