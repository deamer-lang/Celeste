#ifndef Celeste_AST_NODE_enum_stmt_H
#define Celeste_AST_NODE_enum_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/enum_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enum_stmt : public Celeste<enum_stmt>, public ::Celeste::ast::common::node::enum_stmt
	{
	private:
	public:
		enum_stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enum_stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enum_stmt_H
