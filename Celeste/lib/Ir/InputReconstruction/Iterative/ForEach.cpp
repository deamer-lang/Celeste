#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

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

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::ForEach::GetVariable()
{
	return variableName.get();
}
