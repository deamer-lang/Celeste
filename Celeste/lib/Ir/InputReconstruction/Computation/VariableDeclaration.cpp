#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"

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
