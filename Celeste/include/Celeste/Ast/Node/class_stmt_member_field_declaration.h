#ifndef Celeste_AST_NODE_class_stmt_member_field_declaration_H
#define Celeste_AST_NODE_class_stmt_member_field_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_stmt_member_field_declaration : public Celeste<class_stmt_member_field_declaration>
	{
	private:
	public:
		class_stmt_member_field_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_stmt_member_field_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_stmt_member_field_declaration_H
