#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLDECREASE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLDECREASE_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolReferenceCall;

	class SymbolDecrease : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;

	public:
		SymbolDecrease(std::unique_ptr<SymbolReferenceCall> symbolReference_);
		virtual ~SymbolDecrease() = default;
		void Complete();

		SymbolDecrease(const SymbolDecrease& rhs);

	public:
		std::unique_ptr<SymbolReferenceCall>& GetSymbolReference();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLDECREASE_H
