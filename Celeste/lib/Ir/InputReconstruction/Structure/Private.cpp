#include "Celeste/Ir/InputReconstruction/Structure/Private.h"

Celeste::ir::inputreconstruction::Private::Private()
	: InputReconstructionObject(Type::Private)
{
}

Celeste::ir::inputreconstruction::Private::Private(const Private& rhs)
	: InputReconstructionObject(rhs)
{
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Private::DeepCopy()
{
	return std::make_unique<Private>(*this);
}
