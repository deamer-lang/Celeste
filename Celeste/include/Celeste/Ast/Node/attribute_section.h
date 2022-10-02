#ifndef Celeste_AST_NODE_attribute_section_H
#define Celeste_AST_NODE_attribute_section_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class attribute_section : public Celeste<attribute_section>
	{
	private:
	public:
		attribute_section(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<attribute_section>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_attribute_section_H
