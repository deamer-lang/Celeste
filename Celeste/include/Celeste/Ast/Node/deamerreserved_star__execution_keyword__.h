#ifndef Celeste_AST_NODE_deamerreserved_star__execution_keyword___H
#define Celeste_AST_NODE_deamerreserved_star__execution_keyword___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_star__execution_keyword__ : public Celeste<deamerreserved_star__execution_keyword__>
	{
	private:
	public:
		deamerreserved_star__execution_keyword__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_star__execution_keyword__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_star__execution_keyword___H
