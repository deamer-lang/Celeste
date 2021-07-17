#ifndef Celeste_AST_NODE_type_H
#define Celeste_AST_NODE_type_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/type.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class type : public Celeste<type>, public ::Celeste::ast::common::node::type
	{
	private:
	public:
		type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_type_H
