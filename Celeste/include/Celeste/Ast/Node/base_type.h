#ifndef Celeste_AST_NODE_base_type_H
#define Celeste_AST_NODE_base_type_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class base_type : public Celeste<base_type>
	{
	private:
	public:
		base_type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<base_type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_base_type_H
