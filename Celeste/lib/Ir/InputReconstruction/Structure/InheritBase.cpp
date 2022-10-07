#include "Celeste/Ir/InputReconstruction/Structure/InheritBase.h"

Celeste::ir::inputreconstruction::InheritBase::InheritBase(std::unique_ptr<SymbolReferenceCall> inheritBaseTarget_):
	InputReconstructionObject(Type::InheritBase),
	inheritBaseTarget(std::move(inheritBaseTarget_))
{
}

Celeste::ir::inputreconstruction::SymbolReferenceCall* Celeste::ir::inputreconstruction::InheritBase::GetLinkedType()
{
	return inheritBaseTarget.get();
}

Celeste::ir::inputreconstruction::InheritBase::~InheritBase()
{
}

Celeste::ir::inputreconstruction::InheritBase::InheritBase(const InheritBase& rhs)
	: InputReconstructionObject(rhs),
	  inheritBaseTarget(static_cast<SymbolReferenceCall*>(rhs.inheritBaseTarget->DeepCopy().release()))
{
	inheritBaseTarget->SetParent(this);
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> Celeste::ir::inputreconstruction::
InheritBase::DeepCopy()
{
	return std::make_unique<InheritBase>(*this);
}
