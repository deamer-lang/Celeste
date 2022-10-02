#ifndef Celeste_AST_NODE_attribute_H
#define Celeste_AST_NODE_attribute_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class attribute : public Celeste<attribute>
	{
	private:
	public:
		attribute(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<attribute>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_attribute_H
