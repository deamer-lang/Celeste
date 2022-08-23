#ifndef Celeste_AST_NODE_AUTOTYPE_H
#define Celeste_AST_NODE_AUTOTYPE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class AUTOTYPE : public Celeste<AUTOTYPE>
	{
	private:
	public:
		AUTOTYPE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<AUTOTYPE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_AUTOTYPE_H
