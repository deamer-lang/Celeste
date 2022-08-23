#ifndef Celeste_AST_NODE_deamerreserved_star__COMMA__compound_base_alias___H
#define Celeste_AST_NODE_deamerreserved_star__COMMA__compound_base_alias___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_star__COMMA__compound_base_alias__ : public Celeste<deamerreserved_star__COMMA__compound_base_alias__>
	{
	private:
	public:
		deamerreserved_star__COMMA__compound_base_alias__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_star__COMMA__compound_base_alias__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_star__COMMA__compound_base_alias___H
