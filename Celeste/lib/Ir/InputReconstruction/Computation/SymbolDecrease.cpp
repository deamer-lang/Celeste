#include "Celeste/Ir/InputReconstruction/Computation/SymbolDecrease.h"

Celeste::ir::inputreconstruction::SymbolDecrease::SymbolDecrease(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::SymbolDecrease),
	  symbolReference(std::move(symbolReference_))
{
}
