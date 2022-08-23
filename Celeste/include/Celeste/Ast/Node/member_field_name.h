#ifndef Celeste_AST_NODE_member_field_name_H
#define Celeste_AST_NODE_member_field_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class member_field_name : public Celeste<member_field_name>
	{
	private:
	public:
		member_field_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<member_field_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_member_field_name_H
