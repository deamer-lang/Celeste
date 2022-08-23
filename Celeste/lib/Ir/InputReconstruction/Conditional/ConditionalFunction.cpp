#include "Celeste/Ir/InputReconstruction/Conditional/ConditionalFunction.h"

Celeste::ir::inputreconstruction::ConditionalFunction::ConditionalFunction(
	std::unique_ptr<NameReference> functionName_)
	: InputReconstructionObject(Type::ConditionalFunction),
	  functionName(std::move(functionName_))
{
}

void Celeste::ir::inputreconstruction::ConditionalFunction::Add(
	InputReconstructionObject* newObject)
{
	InputReconstructionObject::Add(newObject);
}

void Celeste::ir::inputreconstruction::ConditionalFunction::AddFunctionArgument(
	std::unique_ptr<FunctionArgument> functionArgument)
{
	functionArgument->SetParent(this);
	functionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::ConditionalFunction::AddConditionalFunctionArgument(
	std::unique_ptr<FunctionArgument> functionArgument)
{
	functionArgument->SetParent(this);
	conditionalFunctionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::ConditionalFunction::AddTemplateParameter(
	std::unique_ptr<TemplateParameter> templateParameter)
{
	templateParameter->SetParent(this);
	templateParameters.push_back(std::move(templateParameter));
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::ConditionalFunction::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::ConditionalFunction::Accepts(
	std::variant<ast::reference::Access<ast::node::symbol>,
				 ast::reference::Access<ast::node::symbol_secondary>,
				 ast::reference::Access<ast::node::VARNAME>>
		symbol)
{
	return false;
}
