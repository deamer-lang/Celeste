#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include <string>

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

	if (GetType() == Type::Function)
	{
		returnType->SetParent(this);
		returnType->SetFile(GetFile());
		returnType->Destructure();
	}
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

Celeste::ir::inputreconstruction::Function*
Celeste::ir::inputreconstruction::Function::GetVirtualFunctionParent()
{
	if (GetParent()->GetType() != Type::Class)
	{
		return nullptr;
	}

	auto classObject = static_cast<Class*>(GetParent());
	auto result = classObject->GetMember(functionName.get(), Accessibility::UniversalPrivate);
	if (result == nullptr)
	{
		return nullptr;
	}

	if (result->GetType() == Type::Function)
	{
		return static_cast<Function*>(result);
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::Function::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::Function::Accepts(NameReference* symbol)
{
	auto accesses = symbol->GetSymbolAccesses();
	if (accesses.empty() || !accesses[0]->IsFunctionAccess())
	{
		return false;
	}

	auto& functionAccess = accesses[0];
	auto& expressions = functionAccess->GetExpressions();

	if (expressions.size() != functionArguments.size())
	{
		return false;
	}

	for (std::size_t i = 0; i < expressions.size(); i++)
	{
		auto& functionAccessMember = expressions[i];
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

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::FunctionArgument>>&
Celeste::ir::inputreconstruction::Function::GetFunctionArguments()
{
	return functionArguments;
}
