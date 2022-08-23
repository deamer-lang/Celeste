#ifndef Celeste_AST_NODE_enumeration_H
#define Celeste_AST_NODE_enumeration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enumeration : public Celeste<enumeration>
	{
	private:
	public:
		enumeration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enumeration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enumeration_H
