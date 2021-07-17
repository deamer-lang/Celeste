#ifndef Celeste_AST_COMMON_NODE_logical_stmt_H
#define Celeste_AST_COMMON_NODE_logical_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class logical_stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<logical_stmt>
	{	private:
	public:
		logical_stmt() = default;
		virtual ~logical_stmt() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_logical_stmt_H
