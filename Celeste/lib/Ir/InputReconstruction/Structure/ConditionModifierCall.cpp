#include "Celeste/Ir/InputReconstruction/Structure/ConditionModifierCall.h"

Celeste::ir::inputreconstruction::ConditionModifierCall::ConditionModifierCall(
	std::unique_ptr<SymbolReferenceCall> conditionModifierReference_)
	: InputReconstructionObject(Type::ConditionModifierCall),
	  conditionModifierReference(std::move(conditionModifierReference_))
{
}

Celeste::ir::inputreconstruction::ConditionModifierCall::ConditionModifierCall(
	const ConditionModifierCall& rhs)
	: InputReconstructionObject(rhs),
	  conditionModifierReference(
		  static_cast<SymbolReferenceCall*>(rhs.conditionModifierReference->DeepCopy().release()))
{
	conditionModifierReference->SetParent(this);

	for (auto& rhsValue : rhs.arguments)
	{
		auto newRhsDownCast =
			std::unique_ptr<Expression>(static_cast<Expression*>(rhsValue->DeepCopy().release()));
		newRhsDownCast->SetParent(this);
		this->arguments.push_back(std::move(newRhsDownCast));
	}
}

void Celeste::ir::inputreconstruction::ConditionModifierCall::AddValue(
	std::unique_ptr<Expression> argument)
{
	arguments.push_back(std::move(argument));
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::ConditionModifierCall::DeepCopy()
{
	return std::make_unique<ConditionModifierCall>(*this);
}
