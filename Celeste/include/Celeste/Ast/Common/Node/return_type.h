#ifndef Celeste_AST_COMMON_NODE_return_type_H
#define Celeste_AST_COMMON_NODE_return_type_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class return_type : public ::deamer::external::cpp::ast::CommonNodeAPI<return_type>
	{	private:
	public:
		return_type() = default;
		virtual ~return_type() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_return_type_H
