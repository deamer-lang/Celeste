#include "Celeste/Ir/InputReconstruction/Computation/SymbolIncrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"

Celeste::ir::inputreconstruction::SymbolIncrease::SymbolIncrease(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::SymbolIncrease),
	  symbolReference(std::move(symbolReference_))
{
}

void Celeste::ir::inputreconstruction::SymbolIncrease::Complete()
{
	symbolReference->SetParent(this);
	symbolReference->SetFile(GetFile());
}
