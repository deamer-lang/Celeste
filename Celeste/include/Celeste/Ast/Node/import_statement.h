#ifndef Celeste_AST_NODE_import_statement_H
#define Celeste_AST_NODE_import_statement_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class import_statement : public Celeste<import_statement>
	{
	private:
	public:
		import_statement(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<import_statement>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_import_statement_H
