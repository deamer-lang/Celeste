#ifndef Celeste_AST_NODE_tuple_H
#define Celeste_AST_NODE_tuple_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class tuple : public Celeste<tuple>
	{
	private:
	public:
		tuple(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<tuple>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_tuple_H
