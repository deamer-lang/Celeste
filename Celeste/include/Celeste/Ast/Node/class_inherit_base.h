#ifndef Celeste_AST_NODE_class_inherit_base_H
#define Celeste_AST_NODE_class_inherit_base_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_inherit_base : public Celeste<class_inherit_base>
	{
	private:
	public:
		class_inherit_base(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_inherit_base>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_inherit_base_H
