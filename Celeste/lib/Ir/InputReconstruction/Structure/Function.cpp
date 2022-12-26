#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/CodeBlockRoot.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
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

Celeste::ir::inputreconstruction::Function::Function(const Function& rhs)
	: InputReconstructionObject(rhs)
{
	if (rhs.returnType != nullptr)
	{
		auto newRhs = std::unique_ptr<TypeConstruct>(
			static_cast<TypeConstruct*>(rhs.returnType->DeepCopy().release()));
		newRhs->SetParent(this);
		this->returnType = std::move(newRhs);
	}

	auto newFunctionNameRhs = std::unique_ptr<NameReference>(
		static_cast<NameReference*>(rhs.functionName->DeepCopy().release()));
	newFunctionNameRhs->SetParent(this);
	this->functionName = std::move(newFunctionNameRhs);

	for (auto& rhsValue : rhs.functionArguments)
	{
		auto newRhs = std::unique_ptr<FunctionArgument>(
			static_cast<FunctionArgument*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->functionArguments.push_back(std::move(newRhs));
	}

	for (auto& rhsValue : rhs.templateParameters)
	{
		auto newRhs = std::unique_ptr<TemplateParameter>(
			static_cast<TemplateParameter*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->templateParameters.push_back(std::move(newRhs));
	}

	for (auto& rhsValue : rhs.block)
	{
		auto newRhs = std::unique_ptr<InputReconstructionObject>(
			static_cast<InputReconstructionObject*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->block.push_back(std::move(newRhs));
	}
}

Celeste::ir::inputreconstruction::Function::Function(const Function& rhs, const std::string& name)
	: InputReconstructionObject(rhs)
{
	if (rhs.returnType != nullptr)
	{
		auto newRhs = std::unique_ptr<TypeConstruct>(
			static_cast<TypeConstruct*>(rhs.returnType->DeepCopy().release()));
		newRhs->SetParent(this);
		this->returnType = std::move(newRhs);
	}

	auto newFunctionNameRhs = std::make_unique<NameReference>(name);
	newFunctionNameRhs->SetFile(GetFile());
	newFunctionNameRhs->SetParent(this);
	this->functionName = std::move(newFunctionNameRhs);

	for (auto& rhsValue : rhs.functionArguments)
	{
		auto newRhs = std::unique_ptr<FunctionArgument>(
			static_cast<FunctionArgument*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->functionArguments.push_back(std::move(newRhs));
	}

	for (auto& rhsValue : rhs.templateParameters)
	{
		auto newRhs = std::unique_ptr<TemplateParameter>(
			static_cast<TemplateParameter*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->templateParameters.push_back(std::move(newRhs));
	}

	for (auto& rhsValue : rhs.block)
	{
		auto newRhs = std::unique_ptr<InputReconstructionObject>(
			static_cast<InputReconstructionObject*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->block.push_back(std::move(newRhs));
	}
}

void Celeste::ir::inputreconstruction::Function::Add(
	std::unique_ptr<InputReconstructionObject> newObject)
{
	block.push_back(std::move(newObject));
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
	if (GetParent()->GetType() != Type::Class && GetParent()->GetType() != Type::MonomorphizedClass)
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
	// This checks if the symmbol has a function access, if not then it cannot be used to reference
	// functions.
	if (accesses.empty() || !(accesses[0]->IsFunctionAccess() ||
							  (accesses.size() == 2 && accesses[1]->IsFunctionAccess())))
	{
		return false;
	}

	SymbolAccess* functionAccess;
	if (accesses[0]->IsFunctionAccess())
	{
		functionAccess = accesses[0];
	}
	else
	{
		functionAccess = accesses[1];
	}
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

bool Celeste::ir::inputreconstruction::Function::Accepts(
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
Celeste::ir::inputreconstruction::Function::GetReturnType()
{
	if (GetType() == Type::Constructor)
	{
		return GetParent();
	}
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

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::TemplateParameter>>&
Celeste::ir::inputreconstruction::Function::GetTemplateFunctionParameters()
{
	return templateParameters;
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::Function::GetOwnedBlock()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> block_;
	for (auto& statement : GetBlock())
	{
		block_.push_back(statement.get());
	}
	return block_;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>&
Celeste::ir::inputreconstruction::Function::GetBlock()
{
	return block;
}

bool Celeste::ir::inputreconstruction::Function::HasTemplateParameters()
{
	return !templateParameters.empty();
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::MonomorphizedFunction>>&
Celeste::ir::inputreconstruction ::Function::GetMonomorphizedFunctions()
{
	return monomorphizedFunctions;
}

Celeste::ir::inputreconstruction::MonomorphizedFunction*
Celeste::ir::inputreconstruction::Function::ConstructMonomorphizedFunction(
	const std::vector<Expression>& expressionList)
{
	if (!TemplateParametersAcceptsExpressionList(expressionList))
	{
		return nullptr;
	}

	std::vector<InputReconstructionObject*> typeList;
	for (auto& expression : expressionList)
	{
		typeList.push_back(expression.DeduceType());
	}

	auto iter = mapTypeListWithMonomorphizedFunction.find(typeList);
	if (iter == mapTypeListWithMonomorphizedFunction.end())
	{
		// New monomorphized function
		auto copiedName = std::unique_ptr<NameReference>(
			static_cast<NameReference*>(functionName->DeepCopy().release()));
		auto copiedType = std::unique_ptr<TypeConstruct>(
			static_cast<TypeConstruct*>(returnType->DeepCopy().release()));
		auto newMonomorphizedFunction =
			std::make_unique<MonomorphizedFunction>(std::move(copiedName), std::move(copiedType));
		newMonomorphizedFunction->SetParent(GetParent());
		newMonomorphizedFunction->SetTemplateParent(this);
		newMonomorphizedFunction->SetFile(GetFile());

		for (auto i = 0; i < expressionList.size(); i++)
		{
			auto& currentExpression = expressionList[i];
			auto& currentType = typeList[i];
			auto typeName = std::unique_ptr<NameReference>(static_cast<NameReference*>(
				templateParameters[i]->GetName()->DeepCopy().release()));
			typeName->SetParent(templateParameters[i]->GetParent());
			typeName->Resolve();

			auto type = std::make_unique<TypeConstruct>(currentType);
			type->SetParent(currentType->GetParent());
			type->Destructure();
			auto templateArgument =
				std::make_unique<TemplateArgument>(std::move(typeName), std::move(type));
			if (!currentExpression.IsTypeReference())
			{
				templateArgument->AddValue(std::unique_ptr<Expression>(
					static_cast<Expression*>(currentType->DeepCopy().release())));
			}

			newMonomorphizedFunction->AddTemplateArgument(std::move(templateArgument));
		}

		for (auto& functionArgument : functionArguments)
		{
			newMonomorphizedFunction->AddFunctionArgument(std::unique_ptr<FunctionArgument>(
				static_cast<FunctionArgument*>(functionArgument->DeepCopy().release())));
		}

		for (auto& statement : GetBlock())
		{
			auto newStatement = statement->DeepCopy();
			newMonomorphizedFunction->Add(std::move(newStatement));
		}

		auto tmp = newMonomorphizedFunction.get();

		mapTypeListWithMonomorphizedFunction.insert({typeList, newMonomorphizedFunction.get()});
		monomorphizedFunctions.push_back(std::move(newMonomorphizedFunction));
		return tmp;
	}

	return iter->second;
}

bool Celeste::ir::inputreconstruction::Function::TemplateParametersAcceptsExpressionList(
	const std::vector<Expression>& vector)
{
	// First we simply check if the expressions are enough to fill in the template parameters;
	// Later we limit this to also semantically limit the expression list.
	// If you ask for autotype, only types are allowed.
	return templateParameters.size() == vector.size();
}

bool Celeste::ir::inputreconstruction::Function::HasOptimizedBytecode() const
{
	return bytecodeRepresentation.has_value();
}

Celeste::ir::inputreconstruction::BytecodeRepresentation&
Celeste::ir::inputreconstruction::Function::GetBytecode()
{
	if (!bytecodeRepresentation.has_value())
	{
		ConstructBytecode();
	}

	return bytecodeRepresentation.value();
}

void Celeste::ir::inputreconstruction::Function::ConstructBytecode(std::size_t level)
{
	bytecode::Constructor construction(level);
	construction.AddObject(this);
	bytecodeRepresentation.emplace(construction.GetRepresentation());
}

void Celeste::ir::inputreconstruction::Function::AddCodeBlock(CodeBlock* codeBlock)
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
Celeste::ir::inputreconstruction::Function::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::Function::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::Function::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::Function::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::Function::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::Function::GetReverseIterator(
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
Celeste::ir::inputreconstruction::Function::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Function ::DeepCopy()
{
	return std::make_unique<Function>(*this);
}

void Celeste::ir::inputreconstruction::Function::AddToBlock(
	std::unique_ptr<InputReconstructionObject> newObject)
{
	newObject->SetParent(this);
	block.push_back(std::move(newObject));
}
