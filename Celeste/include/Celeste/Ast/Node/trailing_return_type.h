#ifndef Celeste_AST_NODE_trailing_return_type_H
#define Celeste_AST_NODE_trailing_return_type_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class trailing_return_type : public Celeste<trailing_return_type>
	{
	private:
	public:
		trailing_return_type(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<trailing_return_type>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_trailing_return_type_H
