#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_DISPLAY_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_DISPLAY_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Display : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;

	public:
		Display(std::unique_ptr<SymbolReferenceCall> symbolReference_);
		virtual ~Display() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_DISPLAY_H
