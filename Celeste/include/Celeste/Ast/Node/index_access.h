#ifndef Celeste_AST_NODE_index_access_H
#define Celeste_AST_NODE_index_access_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class index_access : public Celeste<index_access>
	{
	private:
	public:
		index_access(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<index_access>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_index_access_H
