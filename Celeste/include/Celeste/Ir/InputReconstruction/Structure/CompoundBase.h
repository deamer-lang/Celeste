#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_COMPOUNDBASE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_COMPOUNDBASE_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class CompoundBase : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> inheritBaseTarget;
		// Aliases are NameReferences located in the Base Scope.

	public:
		CompoundBase(std::unique_ptr<SymbolReferenceCall> inheritBaseTarget_);
		virtual ~CompoundBase() = default;

		CompoundBase(const CompoundBase& rhs);

	public:
		SymbolReferenceCall* GetCompoundedBase();

		bool HasAlias(const std::string& name);

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_COMPOUNDBASE_H
