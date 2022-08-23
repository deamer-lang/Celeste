#include "Celeste/Ir/InputReconstruction/Structure/Namespace.h"

Celeste::ir::inputreconstruction::Namespace::Namespace(
	std::unique_ptr<NameReference> namespaceName_)
	: InputReconstructionObject(Type::Namespace),
	  namespaceName(std::move(namespaceName_))
{
}
