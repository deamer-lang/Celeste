#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_IMPORT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_IMPORT_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Import : public InputReconstructionObject
	{
	private:
		File* targetFile;

	public:
		Import(File* targetFile_);
		virtual ~Import() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_IMPORT_H
