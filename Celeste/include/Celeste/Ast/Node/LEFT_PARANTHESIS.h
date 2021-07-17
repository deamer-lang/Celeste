#ifndef Celeste_AST_NODE_LEFT_PARANTHESIS_H
#define Celeste_AST_NODE_LEFT_PARANTHESIS_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/condtional_declaration.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class LEFT_PARANTHESIS : public Celeste<LEFT_PARANTHESIS>, public ::Celeste::ast::common::node::condtional_declaration
	{
	private:
	public:
		LEFT_PARANTHESIS(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<LEFT_PARANTHESIS>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_LEFT_PARANTHESIS_H
