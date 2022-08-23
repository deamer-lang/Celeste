#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"

Celeste::ir::inputreconstruction::Constructor::Constructor(
	std::unique_ptr<NameReference> functionName_)
	: Function(Type::Constructor, std::move(functionName_))
{
}
