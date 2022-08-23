#ifndef Celeste_AST_NODE_program_H
#define Celeste_AST_NODE_program_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class program : public Celeste<program>
	{
	private:
	public:
		program(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<program>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_program_H
