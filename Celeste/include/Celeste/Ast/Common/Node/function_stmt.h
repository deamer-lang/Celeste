#ifndef Celeste_AST_COMMON_NODE_function_stmt_H
#define Celeste_AST_COMMON_NODE_function_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class function_stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<function_stmt>
	{	private:
	public:
		function_stmt() = default;
		virtual ~function_stmt() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_function_stmt_H
