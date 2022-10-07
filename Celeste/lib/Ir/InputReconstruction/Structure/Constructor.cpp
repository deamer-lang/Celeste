#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"

Celeste::ir::inputreconstruction::Constructor::Constructor(
	std::unique_ptr<NameReference> functionName_)
	: Function(Type::Constructor, std::move(functionName_))
{
}

Celeste::ir::inputreconstruction::Constructor::Constructor(const Constructor& rhs) : Function(rhs)
{
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

void Celeste::ir::inputreconstruction::Constructor::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::Constructor::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::Constructor::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::Constructor::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::Constructor::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::Constructor::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::Constructor::GetReverseIterator(
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
Celeste::ir::inputreconstruction::Constructor ::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Constructor::DeepCopy()
{
	return std::make_unique<Constructor>(*this);
}
