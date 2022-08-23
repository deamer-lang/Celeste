#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"

Celeste::ir::inputreconstruction::CodeFunction::CodeFunction(
	std::unique_ptr<NameReference> functionName_)
	: InputReconstructionObject(Type::CodeFunction),
	  functionName(std::move(functionName_))
{
}

void Celeste::ir::inputreconstruction::CodeFunction::Add(InputReconstructionObject* newObject)
{
	InputReconstructionObject::Add(newObject);
}

void Celeste::ir::inputreconstruction::CodeFunction::AddFunctionArgument(
	std::unique_ptr<FunctionArgument> functionArgument)
{
	functionArgument->SetParent(this);
	functionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::CodeFunction::AddTemplateParameter(
	std::unique_ptr<TemplateParameter> templateParameter)
{
	templateParameter->SetParent(this);
	templateParameters.push_back(std::move(templateParameter));
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::CodeFunction::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::CodeFunction::Accepts(
	std::variant<ast::reference::Access<ast::node::symbol>,
				 ast::reference::Access<ast::node::symbol_secondary>,
				 ast::reference::Access<ast::node::VARNAME>>
		symbol)
{
	return false;
}
