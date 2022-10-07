#include "Celeste/Ir/InputReconstruction/Structure/EnumerationMember.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"

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

Celeste::ir::inputreconstruction::EnumerationMember::EnumerationMember(const EnumerationMember& rhs)
	: InputReconstructionObject(rhs),
	  enumerationName(static_cast<NameReference*>(rhs.enumerationName->DeepCopy().release())),
	  enumerationValue(static_cast<Expression*>(rhs.enumerationValue->DeepCopy().release()))
{
	this->enumerationName->SetParent(this);
	this->enumerationValue->SetParent(this);
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

Celeste::ir::inputreconstruction::Enumeration*
Celeste::ir::inputreconstruction::EnumerationMember::GetEnumeration()
{
	return static_cast<Enumeration*>(GetParent());
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::EnumerationMember::DeepCopy()
{
	return std::make_unique<EnumerationMember>(*this);
}
