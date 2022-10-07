#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_DISPLAY_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_DISPLAY_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolReferenceCall;

	class Display : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;

	public:
		Display(std::unique_ptr<SymbolReferenceCall> symbolReference_);
		virtual ~Display() = default;

		Display(const Display& rhs);

		void Resolve();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_DISPLAY_H
