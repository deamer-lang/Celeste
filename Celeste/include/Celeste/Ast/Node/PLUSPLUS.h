#ifndef Celeste_AST_NODE_PLUSPLUS_H
#define Celeste_AST_NODE_PLUSPLUS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class PLUSPLUS : public Celeste<PLUSPLUS>
	{
	private:
	public:
		PLUSPLUS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<PLUSPLUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_PLUSPLUS_H
