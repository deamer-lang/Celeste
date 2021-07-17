#ifndef Celeste_AST_NODE_COMMA_H
#define Celeste_AST_NODE_COMMA_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/enum_stmt.h"
#include "Celeste/Ast/Node/enum_stmt.h"
#include "Celeste/Ast/Node/enum_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class COMMA : public Celeste<COMMA>, public ::Celeste::ast::common::node::enum_stmt, public ::Celeste::ast::common::node::enum_stmt, public ::Celeste::ast::common::node::enum_stmt
	{
	private:
	public:
		COMMA(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<COMMA>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_COMMA_H
