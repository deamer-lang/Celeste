#ifndef Celeste_AST_NODE_PROGRAM__H
#define Celeste_AST_NODE_PROGRAM__H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PROGRAM_ : public Celeste<PROGRAM_>
	{
	private:
	public:
		PROGRAM_(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PROGRAM_>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PROGRAM__H
