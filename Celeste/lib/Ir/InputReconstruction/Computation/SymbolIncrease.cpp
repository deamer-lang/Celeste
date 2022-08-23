#include "Celeste/Ir/InputReconstruction/Computation/SymbolIncrease.h"

Celeste::ir::inputreconstruction::SymbolIncrease::SymbolIncrease(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::SymbolIncrease),
	  symbolReference(std::move(symbolReference_))
{
}
