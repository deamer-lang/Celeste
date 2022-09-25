#include "Celeste/Ir/InputReconstruction/Iterative/ForIteration.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::ForIteration::ForIteration(
	std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ForIteration),
	  expression(std::move(expression_))
{
}

void Celeste::ir::inputreconstruction::ForIteration::Complete()
{
	expression->SetParent(this);
	expression->SetFile(GetFile());
	expression->Resolve();
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::ForIteration::GetExpression()
{
	return expression;
}
