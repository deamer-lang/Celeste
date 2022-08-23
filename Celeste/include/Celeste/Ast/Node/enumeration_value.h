#ifndef Celeste_AST_NODE_enumeration_value_H
#define Celeste_AST_NODE_enumeration_value_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enumeration_value : public Celeste<enumeration_value>
	{
	private:
	public:
		enumeration_value(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enumeration_value>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enumeration_value_H
