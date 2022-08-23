#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolIncrease : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;

	public:
		SymbolIncrease(std::unique_ptr<SymbolReferenceCall> symbolReference_);
		virtual ~SymbolIncrease() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H
