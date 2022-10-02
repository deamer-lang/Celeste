#ifndef Celeste_AST_NODE_attribute_template_argument_H
#define Celeste_AST_NODE_attribute_template_argument_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class attribute_template_argument : public Celeste<attribute_template_argument>
	{
	private:
	public:
		attribute_template_argument(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<attribute_template_argument>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_attribute_template_argument_H
