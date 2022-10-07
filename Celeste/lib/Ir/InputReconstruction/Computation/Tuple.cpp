#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"

Celeste::ir::inputreconstruction::Tuple::Tuple(ast::node::tuple* value_)
	: InputReconstructionObject(Type::Tuple),
	  value(value_)
{
}

Celeste::ir::inputreconstruction::Tuple::Tuple(const Tuple& rhs)
	: InputReconstructionObject(rhs),
	  value(rhs.value)
{
	for (auto& rhsExpression : rhs.expressions)
	{
		auto newExpression = std::unique_ptr<Expression>(
			static_cast<Expression*>(rhsExpression->DeepCopy().release()));
		newExpression->SetParent(this);
		expressions.push_back(std::move(newExpression));
	}
}

void Celeste::ir::inputreconstruction::Tuple::Resolve()
{
	ast::reference::Access<ast::node::tuple>(value).full_value().expression().for_all(
		[&](ast::reference::Access<ast::node::expression> fullValue) {
			auto newExpression = std::make_unique<Celeste::ir::inputreconstruction::Expression>(
				const_cast<ast::node::expression*>(fullValue.GetContent()[0]));
			newExpression->SetFile(GetFile());
			newExpression->SetParent(this);
			expressions.push_back(std::move(newExpression));
		});
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Tuple::DeepCopy()
{
	return std::make_unique<Tuple>(*this);
}
