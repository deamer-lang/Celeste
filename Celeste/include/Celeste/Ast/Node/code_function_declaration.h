#ifndef Celeste_AST_NODE_code_function_declaration_H
#define Celeste_AST_NODE_code_function_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class code_function_declaration : public Celeste<code_function_declaration>
	{
	private:
	public:
		code_function_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<code_function_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_code_function_declaration_H
