#ifndef Celeste_AST_NODE_FILE_H
#define Celeste_AST_NODE_FILE_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class FILE : public Celeste<FILE>
	{
	private:
	public:
		FILE(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<FILE>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_FILE_H
