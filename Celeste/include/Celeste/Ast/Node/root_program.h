#ifndef Celeste_AST_NODE_root_program_H
#define Celeste_AST_NODE_root_program_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class root_program : public Celeste<root_program>
	{
	private:
	public:
		root_program(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<root_program>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_root_program_H
