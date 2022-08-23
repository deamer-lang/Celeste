#ifndef Celeste_AST_NODE_ENUM_H
#define Celeste_AST_NODE_ENUM_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class ENUM : public Celeste<ENUM>
	{
	private:
	public:
		ENUM(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<ENUM>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_ENUM_H
