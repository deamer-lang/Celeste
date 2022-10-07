#include "Celeste/Ir/InputReconstruction/Computation/SymbolIncrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"

Celeste::ir::inputreconstruction::SymbolIncrease::SymbolIncrease(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::SymbolIncrease),
	  symbolReference(std::move(symbolReference_))
{
}

void Celeste::ir::inputreconstruction::SymbolIncrease::Complete()
{
	symbolReference->SetParent(this);
	symbolReference->SetFile(GetFile());
}

Celeste::ir::inputreconstruction::SymbolIncrease::SymbolIncrease(const SymbolIncrease& rhs)
	: InputReconstructionObject(rhs),
	  symbolReference(static_cast<SymbolReferenceCall*>(rhs.symbolReference->DeepCopy().release()))
{
	this->symbolReference->SetParent(this);
}

std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>&
Celeste::ir::inputreconstruction::SymbolIncrease ::GetSymbolReference()
{
	return symbolReference;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::SymbolIncrease::DeepCopy()
{
	return std::make_unique<SymbolIncrease>(*this);
}
