#ifndef Celeste_AST_NODE_deamerreserved_star__code_block_modifier___H
#define Celeste_AST_NODE_deamerreserved_star__code_block_modifier___H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class deamerreserved_star__code_block_modifier__ : public Celeste<deamerreserved_star__code_block_modifier__>
	{
	private:
	public:
		deamerreserved_star__code_block_modifier__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<deamerreserved_star__code_block_modifier__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_deamerreserved_star__code_block_modifier___H
