#include "Celeste/Ir/InputReconstruction/Structure/Public.h"

Celeste::ir::inputreconstruction::Public::Public()
	: InputReconstructionObject(Type::Public)
{
}

Celeste::ir::inputreconstruction::Public::Public(const Public& rhs)
	: InputReconstructionObject(rhs)
{
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Public::DeepCopy()
{
	return std::make_unique<Public>(*this);
}
