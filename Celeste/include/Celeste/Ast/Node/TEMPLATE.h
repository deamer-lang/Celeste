#ifndef Celeste_AST_NODE_TEMPLATE_H
#define Celeste_AST_NODE_TEMPLATE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class TEMPLATE : public Celeste<TEMPLATE>
	{
	private:
	public:
		TEMPLATE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<TEMPLATE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_TEMPLATE_H
