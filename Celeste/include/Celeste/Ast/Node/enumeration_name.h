#ifndef Celeste_AST_NODE_enumeration_name_H
#define Celeste_AST_NODE_enumeration_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enumeration_name : public Celeste<enumeration_name>
	{
	private:
	public:
		enumeration_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enumeration_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enumeration_name_H
