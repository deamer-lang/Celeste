#ifndef Celeste_AST_NODE_SEMICOLON_H
#define Celeste_AST_NODE_SEMICOLON_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class SEMICOLON : public Celeste<SEMICOLON>
	{
	private:
	public:
		SEMICOLON(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<SEMICOLON>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_SEMICOLON_H
