#ifndef Celeste_AST_NODE_FILE__H
#define Celeste_AST_NODE_FILE__H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class FILE_ : public Celeste<FILE_>
	{
	private:
	public:
		FILE_(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<FILE_>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_FILE__H
