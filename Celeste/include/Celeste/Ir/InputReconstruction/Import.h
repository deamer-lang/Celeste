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
		bool availableAtCodeTime = false;

	public:
		Import(File* targetFile_, bool availableAtCodeTime_ = false);
		virtual ~Import() = default;

	public:
		File* GetTarget();
		bool AvailableAtCodeTime();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_IMPORT_H
