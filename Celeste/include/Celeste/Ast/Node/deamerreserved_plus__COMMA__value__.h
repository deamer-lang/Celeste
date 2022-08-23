#ifndef Celeste_AST_NODE_deamerreserved_plus__COMMA__value___H
#define Celeste_AST_NODE_deamerreserved_plus__COMMA__value___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_plus__COMMA__value__ : public Celeste<deamerreserved_plus__COMMA__value__>
	{
	private:
	public:
		deamerreserved_plus__COMMA__value__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_plus__COMMA__value__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_plus__COMMA__value___H
