#ifndef Celeste_AST_NODE_class_name_H
#define Celeste_AST_NODE_class_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_name : public Celeste<class_name>
	{
	private:
	public:
		class_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_name_H
