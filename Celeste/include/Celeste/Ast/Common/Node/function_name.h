#ifndef Celeste_AST_COMMON_NODE_function_name_H
#define Celeste_AST_COMMON_NODE_function_name_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class function_name : public ::deamer::external::cpp::ast::CommonNodeAPI<function_name>
	{	private:
	public:
		function_name() = default;
		virtual ~function_name() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_function_name_H
