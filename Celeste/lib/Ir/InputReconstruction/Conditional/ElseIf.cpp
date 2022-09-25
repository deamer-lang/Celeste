#include "Celeste/Ir/InputReconstruction/Conditional/ElseIf.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"

Celeste::ir::inputreconstruction::ElseIf::ElseIf(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ElseIf),
	  expression(std::move(expression_))
{
}

void Celeste::ir::inputreconstruction::ElseIf::Complete()
{
	expression->SetParent(this);
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::ElseIf::GetCondition()
{
	return expression;
}
