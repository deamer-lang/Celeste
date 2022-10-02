#ifndef Celeste_AST_NODE_ATTRIBUTETOK_H
#define Celeste_AST_NODE_ATTRIBUTETOK_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class ATTRIBUTETOK : public Celeste<ATTRIBUTETOK>
	{
	private:
	public:
		ATTRIBUTETOK(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<ATTRIBUTETOK>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_ATTRIBUTETOK_H
