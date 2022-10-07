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

	Impl()
	{
	}

	Impl(std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
		: argumentName(std::move(argumentName_)),
		  argumentType(std::move(argumentType_))
	{
	}
	~Impl() = default;

	std::unique_ptr<Impl> DeepCopy(ConditionModifierArgument* conditionModifierArgument)
	{
		auto newImpl = std::make_unique<Impl>();

		newImpl->argumentName = std::unique_ptr<NameReference>(
			static_cast<NameReference*>(this->argumentName->DeepCopy().release()));
		newImpl->argumentName->SetParent(conditionModifierArgument);

		newImpl->argumentType = std::unique_ptr<TypeConstruct>(
			static_cast<TypeConstruct*>(this->argumentType->DeepCopy().release()));
		newImpl->argumentType->SetParent(conditionModifierArgument);

		for (auto& rhsValue : this->values)
		{
			auto newRhsValue = std::unique_ptr<Expression>(
				static_cast<Expression*>(rhsValue->DeepCopy().release()));
			newRhsValue->SetParent(conditionModifierArgument);
			values.push_back(std::move(newRhsValue));
		}

		return std::move(newImpl);
	}
};

Celeste::ir::inputreconstruction::ConditionModifierArgument::ConditionModifierArgument(
	std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
	: InputReconstructionObject(Type::ConditionModifierArgument),
	  impl(std::make_unique<Impl>(std::move(argumentName_), std::move(argumentType_)))
{
}

Celeste::ir::inputreconstruction::ConditionModifierArgument::ConditionModifierArgument(
	const ConditionModifierArgument& rhs)
	: InputReconstructionObject(rhs),
	  impl(rhs.impl->DeepCopy(this))
{
}

void Celeste::ir::inputreconstruction::ConditionModifierArgument::AddValue(
	std::unique_ptr<Expression> value)
{
	impl->values.push_back(std::move(value));
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::ConditionModifierArgument::DeepCopy()
{
	return std::make_unique<ConditionModifierArgument>(*this);
}
