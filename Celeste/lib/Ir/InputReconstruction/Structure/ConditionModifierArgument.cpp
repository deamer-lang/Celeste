#include "Celeste/Ir/InputReconstruction/Structure/ConditionModifierArgument.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include <vector>

struct Celeste::ir::inputreconstruction::ConditionModifierArgument::Impl
{
	std::unique_ptr<NameReference> argumentName;
	std::unique_ptr<TypeConstruct> argumentType;
	std::vector<std::unique_ptr<Expression>> values;

	Impl(std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
		: argumentName(std::move(argumentName_)),
		  argumentType(std::move(argumentType_))
	{
	}
	~Impl() = default;
};

Celeste::ir::inputreconstruction::ConditionModifierArgument::ConditionModifierArgument(
	std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
	: InputReconstructionObject(Type::ConditionModifierArgument),
	  impl(std::make_unique<Impl>(std::move(argumentName_), std::move(argumentType_)))
{
}

void Celeste::ir::inputreconstruction::ConditionModifierArgument::AddValue(
	std::unique_ptr<Expression> value)
{
	impl->values.push_back(std::move(value));
}
