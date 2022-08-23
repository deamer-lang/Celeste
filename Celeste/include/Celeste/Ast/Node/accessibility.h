#ifndef Celeste_AST_NODE_accessibility_H
#define Celeste_AST_NODE_accessibility_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class accessibility : public Celeste<accessibility>
	{
	private:
	public:
		accessibility(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<accessibility>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_accessibility_H
