#include "Celeste/Ir/InputReconstruction/CodeGeneration/NameFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::NameFunction::NameFunction(
	std::unique_ptr<SymbolReferenceCall> functionName_)
	: InputReconstructionObject(Type::NameFunction),
	  functionName(std::move(functionName_))
{
}

void Celeste::ir::inputreconstruction::NameFunction::Add(InputReconstructionObject* newObject)
{
	InputReconstructionObject::Add(newObject);
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::NameFunction::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::NameFunction::Accepts(
	std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*> symbol)
{
	return false;
}
