#ifndef Celeste_AST_COMMON_NODE_condtional_declaration_H
#define Celeste_AST_COMMON_NODE_condtional_declaration_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace Celeste { namespace ast { namespace common { namespace node {

	class condtional_declaration : public ::deamer::external::cpp::ast::CommonNodeAPI<condtional_declaration>
	{	private:
	public:
		condtional_declaration() = default;
		virtual ~condtional_declaration() = default;
	public:
	};
}}}}

#endif // Celeste_AST_COMMON_NODE_condtional_declaration_H
