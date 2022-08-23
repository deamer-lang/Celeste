#include "Celeste/Ir/InputReconstruction/Structure/ConditionModifierCall.h"

Celeste::ir::inputreconstruction::ConditionModifierCall::ConditionModifierCall(
	std::unique_ptr<SymbolReferenceCall> conditionModifierReference_)
	: InputReconstructionObject(Type::ConditionModifierCall),
	  conditionModifierReference(std::move(conditionModifierReference_))
{
}

void Celeste::ir::inputreconstruction::ConditionModifierCall::AddValue(
	std::unique_ptr<Expression> argument)
{
	arguments.push_back(std::move(argument));
}
