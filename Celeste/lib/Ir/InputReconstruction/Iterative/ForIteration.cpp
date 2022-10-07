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

Celeste::ir::inputreconstruction::ForIteration::ForIteration(const ForIteration& rhs)
	: InputReconstructionObject(rhs),
	  expression(static_cast<Expression*>(rhs.expression->DeepCopy().release()))
{
	this->expression->SetParent(this);

	for (auto& rhsValue : rhs.block)
	{
		auto newRhs = std::unique_ptr<InputReconstructionObject>(
			static_cast<InputReconstructionObject*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->block.push_back(std::move(newRhs));
	}
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::ForIteration::GetExpression()
{
	return expression;
}

void Celeste::ir::inputreconstruction::ForIteration::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::ForIteration ::GetScope()
{
	std::vector<InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::ForIteration::DeepCopy()
{
	return std::make_unique<ForIteration>(*this);
}
