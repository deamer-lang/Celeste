#ifndef Celeste_AST_NODE_deamerreserved_star__meta_declaration___H
#define Celeste_AST_NODE_deamerreserved_star__meta_declaration___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_star__meta_declaration__ : public Celeste<deamerreserved_star__meta_declaration__>
	{
	private:
	public:
		deamerreserved_star__meta_declaration__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_star__meta_declaration__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_star__meta_declaration___H
