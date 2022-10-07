#include "Celeste/Ir/InputReconstruction/Computation/Display.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::Display::Display(
	std::unique_ptr<SymbolReferenceCall> symbolReference_)
	: InputReconstructionObject(Type::Display),
	  symbolReference(std::move(symbolReference_))
{
}

Celeste::ir::inputreconstruction::Display::Display(const Display& rhs)
	: InputReconstructionObject(rhs),
	  symbolReference(static_cast<SymbolReferenceCall*>(rhs.symbolReference->DeepCopy().release()))
{
	this->symbolReference->SetParent(this);
}

void Celeste::ir::inputreconstruction::Display::Resolve()
{
	symbolReference->SetParent(this);
	symbolReference->SetFile(GetFile());
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Display::DeepCopy()
{
	return std::make_unique<Display>(*this);
}
