#include "Celeste/Ir/InputReconstruction/Structure/CompoundBase.h"

Celeste::ir::inputreconstruction::CompoundBase::CompoundBase(
	std::unique_ptr<SymbolReferenceCall> inheritBaseTarget_)
	: InputReconstructionObject(Type::CompoundBase),
	  inheritBaseTarget(std::move(inheritBaseTarget_))
{
}

Celeste::ir::inputreconstruction::CompoundBase::CompoundBase(const CompoundBase& rhs)
	: InputReconstructionObject(rhs),
	  inheritBaseTarget(
		  static_cast<SymbolReferenceCall*>(rhs.inheritBaseTarget->DeepCopy().release()))
{
	inheritBaseTarget->SetParent(this);
}

Celeste::ir::inputreconstruction::SymbolReferenceCall*
Celeste::ir::inputreconstruction::CompoundBase::GetCompoundedBase()
{
	return inheritBaseTarget.get();
}

bool Celeste::ir::inputreconstruction::CompoundBase::HasAlias(const std::string& name)
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

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::CompoundBase::DeepCopy()
{
	return std::make_unique<CompoundBase>(*this);
}
