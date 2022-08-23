#ifndef Celeste_AST_NODE_deamerreserved_star__COMMA__symbol_reference___H
#define Celeste_AST_NODE_deamerreserved_star__COMMA__symbol_reference___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_star__COMMA__symbol_reference__ : public Celeste<deamerreserved_star__COMMA__symbol_reference__>
	{
	private:
	public:
		deamerreserved_star__COMMA__symbol_reference__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_star__COMMA__symbol_reference__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_star__COMMA__symbol_reference___H
