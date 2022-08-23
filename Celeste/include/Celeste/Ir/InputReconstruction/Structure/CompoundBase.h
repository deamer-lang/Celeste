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
		CompoundBase(std::unique_ptr<SymbolReferenceCall> inheritBaseTarget_)
			: InputReconstructionObject(Type::CompoundBase),
			  inheritBaseTarget(std::move(inheritBaseTarget_))
		{
		}
		virtual ~CompoundBase() = default;

	public:
		SymbolReferenceCall* GetCompoundedBase()
		{
			return inheritBaseTarget.get();
		}

		bool HasAlias(const std::string& name)
		{
			for (auto member : GetScope())
			{
				auto member_ = static_cast<NameReference*>(member);
				if (member_->GetSymbolName() == name)
				{
					return true;
				}
			}

			return false;
		}
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_COMPOUNDBASE_H
