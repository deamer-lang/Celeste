#ifndef Celeste_AST_NODE_class_stmt_member_field_initialization_H
#define Celeste_AST_NODE_class_stmt_member_field_initialization_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_stmt_member_field_initialization : public Celeste<class_stmt_member_field_initialization>
	{
	private:
	public:
		class_stmt_member_field_initialization(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_stmt_member_field_initialization>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_stmt_member_field_initialization_H
