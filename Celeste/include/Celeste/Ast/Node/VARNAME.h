#ifndef Celeste_AST_NODE_VARNAME_H
#define Celeste_AST_NODE_VARNAME_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ast/Node/function_name.h"
#include "Celeste/Ast/Node/return_type.h"
#include "Celeste/Ast/Node/enum_stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class VARNAME : public Celeste<VARNAME>, public ::Celeste::ast::common::node::type, public ::Celeste::ast::common::node::function_name, public ::Celeste::ast::common::node::return_type, public ::Celeste::ast::common::node::enum_stmt
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
