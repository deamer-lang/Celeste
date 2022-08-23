#ifndef Celeste_AST_NODE_file_import_H
#define Celeste_AST_NODE_file_import_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class file_import : public Celeste<file_import>
	{
	private:
	public:
		file_import(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<file_import>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_file_import_H
