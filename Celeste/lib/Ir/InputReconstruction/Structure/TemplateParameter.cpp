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

void Celeste::ir::inputreconstruction::TemplateParameter::AddValue(
	std::unique_ptr<Expression> value)
{
	values.push_back(std::move(value));
}
