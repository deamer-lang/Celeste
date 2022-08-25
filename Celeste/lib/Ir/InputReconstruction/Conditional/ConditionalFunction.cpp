#include "Celeste/Ir/InputReconstruction/Conditional/ConditionalFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"

struct Celeste::ir::inputreconstruction::ConditionalFunction::Impl
{
	std::unique_ptr<NameReference> functionName;
	std::vector<std::unique_ptr<FunctionArgument>> functionArguments;
	std::vector<std::unique_ptr<FunctionArgument>> conditionalFunctionArguments;
	std::vector<std::unique_ptr<TemplateParameter>> templateParameters;

	Impl(std::unique_ptr<NameReference> functionName_) : functionName(std::move(functionName_))
	{
	}

	~Impl() = default;
};

Celeste::ir::inputreconstruction::ConditionalFunction::ConditionalFunction(
	std::unique_ptr<NameReference> functionName_)
	: InputReconstructionObject(Type::ConditionalFunction),
	  impl(std::make_unique<Impl>(std::move(functionName_)))
{
}

Celeste::ir::inputreconstruction::ConditionalFunction::~ConditionalFunction()
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
	impl->functionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::ConditionalFunction::AddConditionalFunctionArgument(
	std::unique_ptr<FunctionArgument> functionArgument)
{
	functionArgument->SetParent(this);
	impl->conditionalFunctionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::ConditionalFunction::AddTemplateParameter(
	std::unique_ptr<TemplateParameter> templateParameter)
{
	templateParameter->SetParent(this);
	impl->templateParameters.push_back(std::move(templateParameter));
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::ConditionalFunction::GetFunctionName()
{
	return impl->functionName.get();
}

bool Celeste::ir::inputreconstruction::ConditionalFunction::Accepts(
	std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*> symbol)
{
	return false;
}
