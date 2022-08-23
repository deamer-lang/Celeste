#ifndef Celeste_AST_NODE_display_call_H
#define Celeste_AST_NODE_display_call_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class display_call : public Celeste<display_call>
	{
	private:
	public:
		display_call(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<display_call>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_display_call_H
