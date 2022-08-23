#ifndef Celeste_AST_NODE_DISPLAY_H
#define Celeste_AST_NODE_DISPLAY_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class DISPLAY : public Celeste<DISPLAY>
	{
	private:
	public:
		DISPLAY(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<DISPLAY>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_DISPLAY_H
