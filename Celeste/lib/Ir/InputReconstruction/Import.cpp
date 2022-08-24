#include "Celeste/Ir/InputReconstruction/Import.h"

Celeste::ir::inputreconstruction::Import::Import(File* targetFile_)
	: InputReconstructionObject(Type::Import),
	  targetFile(targetFile_)
{
}

Celeste::ir::inputreconstruction::File* Celeste::ir::inputreconstruction::Import::GetTarget()
{
	return targetFile;
}
