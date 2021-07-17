#ifndef Celeste_AST_COMMON_NODE_condtional_stmt_H
#define Celeste_AST_COMMON_NODE_condtional_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class condtional_stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<condtional_stmt>
	{	private:
	public:
		condtional_stmt() = default;
		virtual ~condtional_stmt() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_condtional_stmt_H
