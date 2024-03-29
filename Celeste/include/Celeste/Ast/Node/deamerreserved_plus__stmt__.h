#ifndef Celeste_AST_NODE_deamerreserved_plus__stmt___H
#define Celeste_AST_NODE_deamerreserved_plus__stmt___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_plus__stmt__ : public Celeste<deamerreserved_plus__stmt__>
	{
	private:
	public:
		deamerreserved_plus__stmt__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_plus__stmt__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_plus__stmt___H
