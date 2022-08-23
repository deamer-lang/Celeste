#include "Celeste/Ir/InputReconstruction/Computation/Display.h"

Celeste::ir::inputreconstruction::Display::Display(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::Display),
	  symbolReference(std::move(symbolReference_))
{
}
