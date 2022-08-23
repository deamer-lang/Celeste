#ifndef Celeste_AST_NODE_VARNAME_H
#define Celeste_AST_NODE_VARNAME_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class VARNAME : public Celeste<VARNAME>
	{
	private:
	public:
		VARNAME(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<VARNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_VARNAME_H
