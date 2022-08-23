#include "Celeste/Ir/InputReconstruction/CodeGeneration/NameFunction.h"

Celeste::ir::inputreconstruction::NameFunction::NameFunction(
	std::unique_ptr<SymbolReferenceCall> functionName_)
	: InputReconstructionObject(Type::NameFunction),
	  functionName(std::move(functionName_))
{
}

void Celeste::ir::inputreconstruction::NameFunction::Add(InputReconstructionObject* newObject)
{
	InputReconstructionObject::Add(newObject);
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::NameFunction::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::NameFunction::Accepts(
	std::variant<ast::reference::Access<ast::node::symbol>,
				 ast::reference::Access<ast::node::symbol_secondary>,
				 ast::reference::Access<ast::node::VARNAME>>
		symbol)
{
	return false;
}
