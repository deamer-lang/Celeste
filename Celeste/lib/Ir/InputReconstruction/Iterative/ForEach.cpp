#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"

Celeste::ir::inputreconstruction::ForEach::ForEach(std::unique_ptr<TypeConstruct> type_,
												   std::unique_ptr<NameReference> variableName_,
												   std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ForEach),
	  variableType(std::move(type_)),
	  variableName(std::move(variableName_)),
	  expression(std::move(expression_))
{
}

void Celeste::ir::inputreconstruction::ForEach::Complete()
{
	expression->SetFile(GetFile());
	expression->SetParent(this);

	variableType->SetParent(this);
	variableType->SetFile(GetFile());
	variableType->Destructure();

	variableName->SetParent(this);
	variableName->SetFile(GetFile());
}
