#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

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
	std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*> symbol)
{
	return false;
}
