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

std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>&
Celeste::ir::inputreconstruction::SymbolDecrease ::GetSymbolReference()
{
	return symbolReference;
}
