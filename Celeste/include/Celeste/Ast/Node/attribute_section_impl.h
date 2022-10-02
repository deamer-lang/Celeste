#ifndef Celeste_AST_NODE_attribute_section_impl_H
#define Celeste_AST_NODE_attribute_section_impl_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class attribute_section_impl : public Celeste<attribute_section_impl>
	{
	private:
	public:
		attribute_section_impl(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<attribute_section_impl>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_attribute_section_impl_H
