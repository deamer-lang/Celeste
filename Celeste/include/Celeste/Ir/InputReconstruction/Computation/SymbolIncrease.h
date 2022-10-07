#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolReferenceCall;

	class SymbolIncrease : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;

	public:
		SymbolIncrease(std::unique_ptr<SymbolReferenceCall> symbolReference_);
		virtual ~SymbolIncrease() = default;
		void Complete();

		SymbolIncrease(const SymbolIncrease& rhs);

	public:
		std::unique_ptr<SymbolReferenceCall>& GetSymbolReference();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H
