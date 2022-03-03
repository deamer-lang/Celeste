#ifndef Celeste_AST_NODE_enum_name_H
#define Celeste_AST_NODE_enum_name_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class enum_name : public Celeste<enum_name>
	{
	private:
	public:
		enum_name(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<enum_name>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_enum_name_H
