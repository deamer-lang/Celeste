#include "Celeste/Ir/InputReconstruction/Import.h"

Celeste::ir::inputreconstruction::Import::Import(File* targetFile_, bool availableAtCodeTime_)
	: InputReconstructionObject(Type::Import),
	  targetFile(targetFile_),
	  availableAtCodeTime(availableAtCodeTime_)
{
	if (targetFile == nullptr)
	{
		throw std::logic_error("TargetFile is nullptr");
	}
}

Celeste::ir::inputreconstruction::File* Celeste::ir::inputreconstruction::Import::GetTarget()
{
	return targetFile;
}

bool Celeste::ir::inputreconstruction::Import::AvailableAtCodeTime()
{
	return availableAtCodeTime;
}
