#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"

Celeste::ir::inputreconstruction::MutationGroup::MutationGroup()
	: InputReconstructionObject(Type::MutationGroup)
{
}

void Celeste::ir::inputreconstruction::MutationGroup::AddSetting(
	std::unique_ptr<SymbolReferenceCall> setting)
{
	settings.push_back(std::move(setting));
}
