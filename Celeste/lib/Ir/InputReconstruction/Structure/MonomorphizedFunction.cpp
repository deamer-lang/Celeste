#include "Celeste/Ir/InputReconstruction/Structure/MonomorphizedFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Structure/CodeBlockRoot.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"

Celeste::ir::inputreconstruction::MonomorphizedFunction::MonomorphizedFunction(
	std::unique_ptr<NameReference> functionName_, std::unique_ptr<TypeConstruct> returnType_)
	: InputReconstructionObject(Type::MonomorphizedFunction),
	  returnType(std::move(returnType_)),
	  functionName(std::move(functionName_))
{
}

Celeste::ir::inputreconstruction::MonomorphizedFunction::MonomorphizedFunction(
	Type type, std::unique_ptr<NameReference> functionName_)
	: InputReconstructionObject(type),
	  functionName(std::move(functionName_))
{
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::Complete()
{
	functionName->SetFile(GetFile());
	functionName->SetParent(this);

	returnType->SetFile(GetFile());
	returnType->SetParent(this);
}

Celeste::ir::inputreconstruction::MonomorphizedFunction::MonomorphizedFunction(
	const MonomorphizedFunction& rhs)
	: InputReconstructionObject(rhs)
{
	throw std::logic_error("Unimplemented");
}

Celeste::ir::inputreconstruction::MonomorphizedFunction::MonomorphizedFunction(
	const MonomorphizedFunction& rhs, const std::string& name)
	: InputReconstructionObject(rhs)
{
	throw std::logic_error("Unimplemented");
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::SetTemplateParent(
	Function* templateParent_)
{
	templateParent = templateParent_;
}

Celeste::ir::inputreconstruction::Function*
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetTemplateParent()
{
	return templateParent;
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::Add(
	std::unique_ptr<InputReconstructionObject> newObject)
{
	newObject->SetParent(this);
	block.push_back(std::move(newObject));
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::AddFunctionArgument(
	std::unique_ptr<FunctionArgument> functionArgument)
{
	functionArgument->SetParent(this);
	functionArguments.push_back(std::move(functionArgument));
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::AddTemplateArgument(
	std::unique_ptr<TemplateArgument> templateArgument)
{
	templateArgument->SetParent(this);
	templateArguments.push_back(std::move(templateArgument));
}

Celeste::ir::inputreconstruction::Function*
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetVirtualFunctionParent()
{
	return GetTemplateParent()->GetVirtualFunctionParent();
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetFunctionName()
{
	return functionName.get();
}

bool Celeste::ir::inputreconstruction::MonomorphizedFunction::Accepts(NameReference* symbol)
{
	auto accesses = symbol->GetSymbolAccesses();
	// This checks if the symmbol has a function access, if not then it cannot be used to reference
	// functions.
	if (accesses.empty() || !accesses[1]->IsFunctionAccess())
	{
		return false;
	}

	auto& functionAccess = accesses[1];
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

bool Celeste::ir::inputreconstruction::MonomorphizedFunction::Accepts(
	const std::vector<std::unique_ptr<Expression>>& expressions)
{
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
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetReturnType()
{
	if (returnType == nullptr)
	{
		return nullptr;
	}

	return returnType.get();
}

bool Celeste::ir::inputreconstruction::MonomorphizedFunction::Accepts(
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
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetFunctionArguments()
{
	return functionArguments;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::TemplateArgument>>&
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetTemplateFunctionArguments()
{
	return templateArguments;
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetOwnedBlock()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> result;
	for (auto& object : block)
	{
		result.push_back(object.get());
	}
	return result;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>&
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetBlock()
{
	return block;
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::AddCodeBlock(CodeBlock* codeBlock)
{
	auto codeBlockRoot = static_cast<CodeBlockRoot*>(codeBlock->GetBlock()[0].get());

	for (auto& _ : codeBlockRoot->GetBlock())
	{
		auto newDeepCopiedStatement = _->DeepCopy();
		newDeepCopiedStatement->SetParent(this);
		AddToBlock(std::move(newDeepCopiedStatement));
	}
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MonomorphizedFunction::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MonomorphizedFunction::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MonomorphizedFunction::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MonomorphizedFunction::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = begin(); iter != end(); ++iter)
	{
		if ((*iter).get() == irComponent)
		{
			return iter;
		}
	}

	return end();
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MonomorphizedFunction::GetReverseIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = rbegin(); iter != rend(); ++iter)
	{
		if ((*iter).get() == irComponent)
		{
			return iter;
		}
	}

	return rend();
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::MonomorphizedFunction::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::MonomorphizedFunction::DeepCopy()
{
	return std::make_unique<MonomorphizedFunction>(*this);
}

void Celeste::ir::inputreconstruction::MonomorphizedFunction::AddToBlock(
	std::unique_ptr<InputReconstructionObject> newObject)
{
	newObject->SetParent(this);
	block.push_back(std::move(newObject));
}
