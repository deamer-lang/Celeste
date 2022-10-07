#include "Celeste/Ir/InputReconstruction/Structure/Namespace.h"

Celeste::ir::inputreconstruction::Namespace::Namespace(
	std::unique_ptr<NameReference> namespaceName_)
	: InputReconstructionObject(Type::Namespace),
	  namespaceName(std::move(namespaceName_))
{
}

Celeste::ir::inputreconstruction::Namespace::Namespace(const Namespace& rhs)
	: InputReconstructionObject(rhs),
	  namespaceName(static_cast<NameReference*>(rhs.namespaceName->DeepCopy().release()))
{
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Namespace ::DeepCopy()
{
	return std::make_unique<Namespace>(*this);
}
