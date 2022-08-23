#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Reference/Access.h"
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
