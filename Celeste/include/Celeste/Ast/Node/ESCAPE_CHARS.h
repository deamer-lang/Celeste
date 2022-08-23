#ifndef Celeste_AST_NODE_ESCAPE_CHARS_H
#define Celeste_AST_NODE_ESCAPE_CHARS_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class ESCAPE_CHARS : public Celeste<ESCAPE_CHARS>
	{
	private:
	public:
		ESCAPE_CHARS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<ESCAPE_CHARS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_ESCAPE_CHARS_H
