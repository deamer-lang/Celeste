#ifndef Celeste_AST_NODE_compound_base_name_H
#define Celeste_AST_NODE_compound_base_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class compound_base_name : public Celeste<compound_base_name>
	{
	private:
	public:
		compound_base_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<compound_base_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_compound_base_name_H
