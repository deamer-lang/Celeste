#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INHERITBASE
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INHERITBASE

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class InheritBase : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> inheritBaseTarget;

	public:
		InheritBase(std::unique_ptr<SymbolReferenceCall> inheritBaseTarget_);
		virtual ~InheritBase();

		InheritBase(const InheritBase& rhs);

	public:
		SymbolReferenceCall* GetLinkedType();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INHERITBASE
