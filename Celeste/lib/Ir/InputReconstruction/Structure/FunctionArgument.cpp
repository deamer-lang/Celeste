#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
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
	const ast::node::expression* functionAccess)
{
	// Not yet implemented
	return false;
}

bool Celeste::ir::inputreconstruction::FunctionArgument::Accepts(
	InputReconstructionObject* functionAccess)
{
	// Not yet implemented
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
	}

	return false;
}
