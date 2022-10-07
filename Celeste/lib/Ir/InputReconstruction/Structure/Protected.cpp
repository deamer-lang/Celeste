#include "Celeste/Ir/InputReconstruction/Structure/Protected.h"

Celeste::ir::inputreconstruction::Protected::Protected()
	: InputReconstructionObject(Type::Protected)
{
}

Celeste::ir::inputreconstruction::Protected::Protected(const Protected& rhs)
	: InputReconstructionObject(rhs)
{
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Protected::DeepCopy()
{
	return std::make_unique<Protected>(*this);
}
