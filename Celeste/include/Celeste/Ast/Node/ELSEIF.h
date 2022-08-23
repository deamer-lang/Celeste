#ifndef Celeste_AST_NODE_ELSEIF_H
#define Celeste_AST_NODE_ELSEIF_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class ELSEIF : public Celeste<ELSEIF>
	{
	private:
	public:
		ELSEIF(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<ELSEIF>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_ELSEIF_H
