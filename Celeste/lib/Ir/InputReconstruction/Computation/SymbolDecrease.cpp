#include "Celeste/Ir/InputReconstruction/Computation/SymbolDecrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"

Celeste::ir::inputreconstruction::SymbolDecrease::SymbolDecrease(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::SymbolDecrease),
	  symbolReference(std::move(symbolReference_))
{
}

void Celeste::ir::inputreconstruction::SymbolDecrease::Complete()
{
	symbolReference->SetParent(this);
	symbolReference->SetFile(GetFile());
}
