#include "Celeste/Ir/InputReconstruction/Computation/SymbolDecrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"

Celeste::ir::inputreconstruction::SymbolDecrease::SymbolDecrease(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::SymbolDecrease),
	  symbolReference(std::move(symbolReference_))
{
}

void Celeste::ir::inputreconstruction::SymbolDecrease::Complete()
{
	symbolReference->SetParent(this);
	symbolReference->SetFile(GetFile());
}

Celeste::ir::inputreconstruction::SymbolDecrease::SymbolDecrease(const SymbolDecrease& rhs)
	: InputReconstructionObject(rhs),
	  symbolReference(static_cast<SymbolReferenceCall*>(rhs.symbolReference->DeepCopy().release()))
{
	this->symbolReference->SetParent(this);
}

std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>&
Celeste::ir::inputreconstruction::SymbolDecrease ::GetSymbolReference()
{
	return symbolReference;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::SymbolDecrease::DeepCopy()
{
	return std::make_unique<SymbolDecrease>(*this);
}
