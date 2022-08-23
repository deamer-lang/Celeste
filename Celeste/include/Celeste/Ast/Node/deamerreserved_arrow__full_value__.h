#ifndef Celeste_AST_NODE_deamerreserved_arrow__full_value___H
#define Celeste_AST_NODE_deamerreserved_arrow__full_value___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_arrow__full_value__ : public Celeste<deamerreserved_arrow__full_value__>
	{
	private:
	public:
		deamerreserved_arrow__full_value__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_arrow__full_value__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_arrow__full_value___H
