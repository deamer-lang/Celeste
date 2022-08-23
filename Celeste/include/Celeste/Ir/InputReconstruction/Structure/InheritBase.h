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
		InheritBase(std::unique_ptr<SymbolReferenceCall> inheritBaseTarget_)
			: InputReconstructionObject(Type::InheritBase),
			  inheritBaseTarget(std::move(inheritBaseTarget_))
		{
		}
		virtual ~InheritBase() = default;

	public:
		SymbolReferenceCall* GetLinkedType()
		{
			return inheritBaseTarget.get();
		}
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INHERITBASE
