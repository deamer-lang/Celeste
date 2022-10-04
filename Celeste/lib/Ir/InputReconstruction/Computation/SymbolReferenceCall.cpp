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

Celeste::ir::inputreconstruction::SymbolReferenceCall::SymbolReferenceCall(const std::string& varname_)
	: NameReference(Type::SymbolReferenceCall, varname_)
{
}

Celeste::ir::inputreconstruction::SymbolReferenceCall::~SymbolReferenceCall()
{
	// This should only be enabled when there are memory leaks.
	// For now this is useless as the lifetime of this object is bound to the lifetime of the file
	// it belongs to.
	if constexpr (false)
	{
		if (GetFile() == nullptr)
		{
			std::cout
				<< "Internal Compiler Error, File is not properly set for SymbolReferenceCall\n";
			return;
		}
		GetFile()->RemoveUnresolvedReference(this);
	}
}
