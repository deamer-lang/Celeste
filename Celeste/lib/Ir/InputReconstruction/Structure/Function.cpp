#include "Celeste/Ir/InputReconstruction/Structure/Function.h"

Celeste::ir::inputreconstruction::Function::Function(std::unique_ptr<NameReference> functionName_,
													 std::unique_ptr<TypeConstruct> returnType_)
	: InputReconstructionObject(Type::Function),
	  returnType(std::move(returnType_)),
	  functionName(std::move(functionName_))
{
}

Celeste::ir::inputreconstruction::Function::Function(Type type,
													 std::unique_ptr<NameReference> functionName_)
	: InputReconstructionObject(type),
	  functionName(std::move(functionName_))
{
}

void Celeste::ir::inputreconstruction::Function::Complete()
{
	functionName->SetParent(this);
	functionName->SetFile(GetFile());
	returnType->SetParent(this);
	returnType->SetFile(GetFile());
	returnType->Destructure();
}

void Celeste::ir::inputreconstruction::Function::Add(InputReconstructionObject* newObject)
{
	InputReconstructionObject::Add(newObject);
}

void Celeste::ir::inputreconstruction::Function::AddFunctionArgument(
	std::unique_ptr<FunctionArgument> functionArgument)
{
	functionArgument->SetParent(this);
	functionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::Function::AddTemplateParameter(
	std::unique_ptr<TemplateParameter> templateParameter)
{
	templateParameter->SetParent(this);
	templateParameters.push_back(std::move(templateParameter));
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::Function::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::Function::Accepts(
	std::variant<ast::reference::Access<ast::node::symbol>,
				 ast::reference::Access<ast::node::symbol_secondary>,
				 ast::reference::Access<ast::node::VARNAME>>
		symbol)
{
	ast::reference::Access<ast::node::symbol_access> symbolAccess;
	if (std::holds_alternative<ast::reference::Access<ast::node::symbol>>(symbol))
	{
		auto symbolDereferenced = std::get<ast::reference::Access<ast::node::symbol>>(symbol);
		symbolAccess = symbolDereferenced.symbol_access();
	}
	else if (std::holds_alternative<ast::reference::Access<ast::node::symbol_secondary>>(symbol))
	{
		auto symbolDereferenced =
			std::get<ast::reference::Access<ast::node::symbol_secondary>>(symbol);
		symbolAccess = symbolDereferenced.symbol_access();
	}
	else if (std::holds_alternative<ast::reference::Access<ast::node::VARNAME>>(symbol))
	{
		// VARNAME may not be used to reference some function
		// As functions are in the form: name + [arguments]
		// Thus VARNAME is an incomplete object for referencing Functions
		return false;
	}

	if (!symbolAccess.anonymous_access().GetContent().empty() ||
		!symbolAccess.auto_deduce_array().GetContent().empty())
	{
		return false;
	}

	auto functionAccess = symbolAccess.function_access();

	if (functionAccess.GetContent().empty())
	{
		return functionArguments.empty();
	}

	if (functionAccess[0].expression().GetContent().size() != functionArguments.size())
	{
		return false;
	}

	for (std::size_t i = 0; i < functionAccess[0].expression().GetContent().size(); i++)
	{
		auto functionAccessMember = functionAccess[0].expression().GetContent()[i];
		auto functionArgument = functionArguments[i].get();

		if (!functionArgument->Accepts(functionAccessMember))
		{
			return false;
		}
	}

	return true;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Function::GetReturnType()
{
	return returnType.get();
}

bool Celeste::ir::inputreconstruction::Function::Accepts(
	const std::string& functionName,
	const std::optional<std::vector<InputReconstructionObject*>>& functionArguments)
{
	if (GetFunctionName()->GetResolvedName() != functionName)
	{
		return false;
	}

	if (!functionArguments.has_value())
	{
		return false;
	}

	for (std::size_t i = 0; i < functionArguments.value().size(); i++)
	{
		auto functionAccessMember = functionArguments.value()[i];
		auto functionArgument = this->functionArguments[i].get();

		if (!functionArgument->Accepts(functionAccessMember))
		{
			return false;
		}
	}

	return true;
}
