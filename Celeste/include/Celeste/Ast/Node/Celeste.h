#ifndef Celeste_AST_NODE_Celeste_H
#define Celeste_AST_NODE_Celeste_H

#include <Deamer/External/Cpp/Ast/TemplateNodeBase.h>

namespace Celeste { namespace ast { namespace node {

	template<typename Derived>
	class Celeste : public ::deamer::external::cpp::ast::TemplateNodeBase<Celeste<Derived>, Derived>
	{
	private:
		
	public:
		Celeste() = default;
		
		Celeste(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_ = {}, std::vector<size_t> baseValues_ = {})
		: deamer::external::cpp::ast::TemplateNodeBase<Celeste<Derived>, Derived>(information_, nodes_, baseValues_)
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_Celeste_H
