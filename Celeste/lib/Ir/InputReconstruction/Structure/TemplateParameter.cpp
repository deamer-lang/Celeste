#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"

Celeste::ir::inputreconstruction::TemplateParameter::TemplateParameter(
	std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
	: InputReconstructionObject(Type::TemplateParameter),
	  argumentName(std::move(argumentName_)),
	  argumentType(std::move(argumentType_))
{
}

void Celeste::ir::inputreconstruction::TemplateParameter::Complete()
{
	argumentName->SetParent(this);
	argumentName->SetFile(GetFile());
	argumentType->SetParent(this);
	argumentType->SetFile(GetFile());
	argumentType->Destructure();
}

Celeste::ir::inputreconstruction::TemplateParameter::TemplateParameter(const TemplateParameter& rhs)
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
}

std::unique_ptr<Celeste::ir::inputreconstruction::NameReference>&
Celeste::ir::inputreconstruction::TemplateParameter::GetName()
{
	return argumentName;
}

std::unique_ptr<Celeste::ir::inputreconstruction::TypeConstruct>&
Celeste::ir::inputreconstruction::TemplateParameter::GetTypeConstruct()
{
	return argumentType;
}

void Celeste::ir::inputreconstruction::TemplateParameter::AddValue(
	std::unique_ptr<Expression> value)
{
	values.push_back(std::move(value));
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::TemplateParameter::DeepCopy()
{
	return std::make_unique<TemplateParameter>(*this);
}
