#ifndef Celeste_AST_COMMON_NODE_type_H
#define Celeste_AST_COMMON_NODE_type_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class type : public ::deamer::external::cpp::ast::CommonNodeAPI<type>
	{	private:
	public:
		type() = default;
		virtual ~type() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_type_H
