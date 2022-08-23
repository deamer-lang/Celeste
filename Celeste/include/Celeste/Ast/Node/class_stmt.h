#ifndef Celeste_AST_NODE_class_stmt_H
#define Celeste_AST_NODE_class_stmt_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class class_stmt : public Celeste<class_stmt>
	{
	private:
	public:
		class_stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<class_stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_class_stmt_H
