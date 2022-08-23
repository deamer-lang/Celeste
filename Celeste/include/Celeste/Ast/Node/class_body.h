#ifndef Celeste_AST_NODE_class_body_H
#define Celeste_AST_NODE_class_body_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_body : public Celeste<class_body>
	{
	private:
	public:
		class_body(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_body>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_body_H
