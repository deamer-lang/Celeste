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

	public:
		std::unique_ptr<SymbolReferenceCall>& GetSymbolReference();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLINCREASE_H
