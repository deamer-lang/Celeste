#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::VariableDeclaration::VariableDeclaration(
	std::unique_ptr<NameReference> variableName_, std::unique_ptr<TypeConstruct> type_)
	: InputReconstructionObject(Type::VariableDeclaration),
	  type(std::move(type_)),
	  variableName(std::move(variableName_))
{
}

void Celeste::ir::inputreconstruction::VariableDeclaration::Complete()
{
	type->SetParent(this);
	type->SetFile(GetFile());
	type->Destructure();

	variableName->SetParent(this);
	variableName->SetFile(GetFile());
}

Celeste::ir::inputreconstruction::VariableDeclaration::VariableDeclaration(
	const VariableDeclaration& rhs)
	: InputReconstructionObject(rhs),
	  type(static_cast<TypeConstruct*>(rhs.type->DeepCopy().release())),
	  variableName(static_cast<NameReference*>(rhs.variableName->DeepCopy().release()))
{
	this->variableName->SetParent(this);
	this->type->SetParent(this);

	for (auto& rhsValue : rhs.values)
	{
		auto newRhsValue =
			std::unique_ptr<Expression>(static_cast<Expression*>(rhsValue->DeepCopy().release()));
		newRhsValue->SetParent(this);
		this->values.push_back(std::move(newRhsValue));
	}
}

void Celeste::ir::inputreconstruction::VariableDeclaration::AddValue(
	std::unique_ptr<Expression> newExpression)
{
	newExpression->SetParent(this);
	newExpression->SetFile(GetFile());
	values.push_back(std::move(newExpression));
}

Celeste::ir::inputreconstruction::TypeConstruct*
Celeste::ir::inputreconstruction::VariableDeclaration::GetVariableType()
{
	return type.get();
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::VariableDeclaration::GetName()
{
	return variableName.get();
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::Expression>>&
Celeste::ir::inputreconstruction::VariableDeclaration::GetExpressions()
{
	return values;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::VariableDeclaration::DeepCopy()
{
	return std::make_unique<VariableDeclaration>(*this);
}
