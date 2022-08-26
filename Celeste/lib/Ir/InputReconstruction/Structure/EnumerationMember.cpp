#include "Celeste/Ir/InputReconstruction/Structure/EnumerationMember.h"

Celeste::ir::inputreconstruction::EnumerationMember::EnumerationMember(
	std::unique_ptr<NameReference> enumerationName_, std::unique_ptr<Expression> enumerationValue_)
	: InputReconstructionObject(Type::EnumerationMember),
	  enumerationName(std::move(enumerationName_)),
	  enumerationValue(std::move(enumerationValue_))
{
}

void Celeste::ir::inputreconstruction::EnumerationMember::Complete()
{
	enumerationName->SetParent(this);
	enumerationName->SetFile(GetFile());

	if (enumerationValue != nullptr)
	{
		enumerationValue->SetParent(this);
		enumerationValue->SetFile(GetFile());
	}
}

std::unique_ptr<Celeste::ir::inputreconstruction::NameReference>&
Celeste::ir::inputreconstruction::EnumerationMember::GetName()
{
	return enumerationName;
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::EnumerationMember::GetExpression()
{
	return enumerationValue;
}
