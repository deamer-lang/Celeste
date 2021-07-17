#ifndef Celeste_AST_COMMON_NODE_enum_stmt_H
#define Celeste_AST_COMMON_NODE_enum_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class enum_stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<enum_stmt>
	{	private:
	public:
		enum_stmt() = default;
		virtual ~enum_stmt() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_enum_stmt_H
