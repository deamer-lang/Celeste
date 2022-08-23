#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"

Celeste::ir::inputreconstruction::Tuple::Tuple(ast::node::tuple* value_)
	: InputReconstructionObject(Type::Tuple),
	  value(value_)
{
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
