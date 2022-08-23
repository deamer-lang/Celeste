#ifndef Celeste_AST_NODE_iterator_H
#define Celeste_AST_NODE_iterator_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class iterator : public Celeste<iterator>
	{
	private:
	public:
		iterator(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<iterator>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_iterator_H
