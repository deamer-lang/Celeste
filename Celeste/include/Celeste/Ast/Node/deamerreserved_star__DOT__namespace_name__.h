#ifndef Celeste_AST_NODE_deamerreserved_star__DOT__namespace_name___H
#define Celeste_AST_NODE_deamerreserved_star__DOT__namespace_name___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_star__DOT__namespace_name__ : public Celeste<deamerreserved_star__DOT__namespace_name__>
	{
	private:
	public:
		deamerreserved_star__DOT__namespace_name__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_star__DOT__namespace_name__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_star__DOT__namespace_name___H
