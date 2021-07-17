#ifndef Celeste_AST_NODE_return_type_H
#define Celeste_AST_NODE_return_type_H

#include "Celeste/Ast/Node/Celeste.h"
#include "Celeste/Ast/Common/Node/return_type.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class return_type : public Celeste<return_type>, public ::Celeste::ast::common::node::return_type
	{
	private:
	public:
		return_type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<return_type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_return_type_H
