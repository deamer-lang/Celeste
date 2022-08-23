#include "Celeste/Ir/InputReconstruction/Structure/ConditionModifierArgument.h"

Celeste::ir::inputreconstruction::ConditionModifierArgument::ConditionModifierArgument(
	std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
	: InputReconstructionObject(Type::ConditionModifierArgument),
	  argumentName(std::move(argumentName_)),
	  argumentType(std::move(argumentType_))
{
}

void Celeste::ir::inputreconstruction::ConditionModifierArgument::AddValue(
	std::unique_ptr<Expression> value)
{
	values.push_back(std::move(value));
}
