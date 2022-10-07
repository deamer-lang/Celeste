#include "Celeste/Ir/InputReconstruction/Computation/Return.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::Return::Return(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::Return),
	  expression(std::move(expression_))
{
}

Celeste::ir::inputreconstruction::Return::Return(const Return& rhs)
	: InputReconstructionObject(rhs),
	  expression(static_cast<Expression*>(rhs.expression->DeepCopy().release()))
{
	this->expression->SetParent(this);
}

void Celeste::ir::inputreconstruction::Return::Resolve()
{
	expression->SetParent(this);
	expression->SetFile(GetFile());
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::Return::GetExpression()
{
	return expression;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Return::DeepCopy()
{
	return std::make_unique<Return>(*this);
}
