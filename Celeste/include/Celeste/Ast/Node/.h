#ifndef Celeste_AST_NODE__H
#define Celeste_AST_NODE__H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class  : public Celeste<>
	{
	private:
	public:
		(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE__H
