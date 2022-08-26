#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"

Celeste::ir::inputreconstruction::MutationGroup::MutationGroup()
	: InputReconstructionObject(Type::MutationGroup)
{
}

Celeste::ir::inputreconstruction::MutationGroup::~MutationGroup()
{
}

void Celeste::ir::inputreconstruction::MutationGroup::AddSetting(
	std::unique_ptr<SymbolReferenceCall> setting)
{
	setting->SetParent(this);
	setting->SetFile(GetFile());

	settings.push_back(std::move(setting));
}
