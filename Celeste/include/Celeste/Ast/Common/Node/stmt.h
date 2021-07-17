#ifndef Celeste_AST_COMMON_NODE_stmt_H
#define Celeste_AST_COMMON_NODE_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<stmt>
	{	private:
	public:
		stmt() = default;
		virtual ~stmt() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_stmt_H
