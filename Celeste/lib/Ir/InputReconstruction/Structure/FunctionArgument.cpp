#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"

Celeste::ir::inputreconstruction::FunctionArgument::FunctionArgument(
	std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
	: InputReconstructionObject(Type::FunctionArgument),
	  argumentName(std::move(argumentName_)),
	  argumentType(std::move(argumentType_))
{
}

void Celeste::ir::inputreconstruction::FunctionArgument::Complete()
{
	argumentName->SetParent(this);
	argumentName->SetFile(GetFile());
	argumentType->SetParent(this);
	argumentType->SetFile(GetFile());
	argumentType->Destructure();
}

Celeste::ir::inputreconstruction::FunctionArgument::FunctionArgument(const FunctionArgument& rhs)
	: InputReconstructionObject(rhs),
	  argumentName(static_cast<NameReference*>(rhs.argumentName->DeepCopy().release())),
	  argumentType(static_cast<TypeConstruct*>(rhs.argumentType->DeepCopy().release()))
{
	this->argumentName->SetParent(this);
	this->argumentType->SetParent(this);

	for (auto& rhsValue : rhs.values)
	{
		auto newRhsValue =
			std::unique_ptr<Expression>(static_cast<Expression*>(rhsValue->DeepCopy().release()));
		newRhsValue->SetParent(this);
		this->values.push_back(std::move(newRhsValue));
	}

	if (rhs.conditionModifierCall.has_value())
	{
		auto newRhsValue =
			std::unique_ptr<ConditionModifierCall>(static_cast<ConditionModifierCall*>(
				rhs.conditionModifierCall.value()->DeepCopy().release()));
		newRhsValue->SetParent(this);
		this->conditionModifierCall = std::move(newRhsValue);
	}
}

void Celeste::ir::inputreconstruction::FunctionArgument::AddValue(std::unique_ptr<Expression> value)
{
	values.push_back(std::move(value));
}

void Celeste::ir::inputreconstruction::FunctionArgument::AddConditionalModifier(
	std::unique_ptr<ConditionModifierCall> unique)
{
	conditionModifierCall = std::move(unique);
}

bool Celeste::ir::inputreconstruction::FunctionArgument::Accepts(
	InputReconstructionObject* functionAccess)
{
	switch (functionAccess->GetType())
	{
	case Type::Expression: {
		auto expression = static_cast<Expression*>(functionAccess);
		return argumentType->Equal(expression->DeduceType());
	}
	case Type::Value: {
		auto value = static_cast<Value*>(functionAccess);
		return argumentType->Equal(value->DeduceType());
	}
	case Type::MonomorphizedClass:
	case Type::InlineClass:
	case Type::Class: {
		// The caller should understand that this is a what if simulation
		// The type must still be realized
		return argumentType->Equal(functionAccess);
	}
	}

	return false;
}

bool Celeste::ir::inputreconstruction::FunctionArgument::Accepts(
	const std::unique_ptr<Expression>& expression)
{
	auto deducedType = expression->DeduceType();
	return argumentType->Equal(deducedType);
}

std::string Celeste::ir::inputreconstruction::FunctionArgument::GetName()
{
	return argumentName->GetSymbolName();
}

Celeste::ir::inputreconstruction::TypeConstruct*
Celeste::ir::inputreconstruction::FunctionArgument::GetArgumentType()
{
	return argumentType.get();
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::FunctionArgument::DeepCopy()
{
	return std::make_unique<FunctionArgument>(*this);
}
