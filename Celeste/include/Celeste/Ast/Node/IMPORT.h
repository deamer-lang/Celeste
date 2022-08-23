#ifndef Celeste_AST_NODE_IMPORT_H
#define Celeste_AST_NODE_IMPORT_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node {

	class IMPORT : public Celeste<IMPORT>
	{
	private:
	public:
		IMPORT(deamer::external::cpp::ast::NodeInformation information_)
		: Celeste<IMPORT>(information_, {}, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_IMPORT_H
