#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLDECREASE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLDECREASE_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolDecrease : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;

	public:
		SymbolDecrease(std::unique_ptr<SymbolReferenceCall> symbolReference_);
		virtual ~SymbolDecrease() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLDECREASE_H
