#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"

Celeste::ir::inputreconstruction::SymbolReferenceCall::SymbolReferenceCall(
	ast::node::symbol_reference* symbolReference_)
	: NameReference(Type::SymbolReferenceCall, symbolReference_)
{
}

Celeste::ir::inputreconstruction::SymbolReferenceCall::SymbolReferenceCall(
	ast::node::VARNAME* varname_)
	: NameReference(Type::SymbolReferenceCall, varname_)
{
}

Celeste::ir::inputreconstruction::SymbolReferenceCall::SymbolReferenceCall(
	const std::string& varname_)
	: NameReference(Type::SymbolReferenceCall, varname_)
{
}

Celeste::ir::inputreconstruction::SymbolReferenceCall::~SymbolReferenceCall()
{
}

Celeste::ir::inputreconstruction::SymbolReferenceCall::SymbolReferenceCall(
	const SymbolReferenceCall& rhs)
	: NameReference(rhs)
{
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::SymbolReferenceCall::DeepCopy()
{
	return std::make_unique<SymbolReferenceCall>(*this);
}
