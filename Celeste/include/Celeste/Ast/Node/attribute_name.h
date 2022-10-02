#ifndef Celeste_AST_NODE_attribute_name_H
#define Celeste_AST_NODE_attribute_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class attribute_name : public Celeste<attribute_name>
	{
	private:
	public:
		attribute_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<attribute_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_attribute_name_H
