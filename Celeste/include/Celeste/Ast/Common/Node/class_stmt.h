#ifndef Celeste_AST_COMMON_NODE_class_stmt_H
#define Celeste_AST_COMMON_NODE_class_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class class_stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<class_stmt>
	{	private:
	public:
		class_stmt() = default;
		virtual ~class_stmt() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_class_stmt_H
