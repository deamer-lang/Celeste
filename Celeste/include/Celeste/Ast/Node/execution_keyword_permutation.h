#ifndef Celeste_AST_NODE_execution_keyword_permutation_H
#define Celeste_AST_NODE_execution_keyword_permutation_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class execution_keyword_permutation : public Celeste<execution_keyword_permutation>
	{
	private:
	public:
		execution_keyword_permutation(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<execution_keyword_permutation>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_execution_keyword_permutation_H
