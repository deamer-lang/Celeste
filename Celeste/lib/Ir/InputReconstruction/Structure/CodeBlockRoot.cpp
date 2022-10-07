#include "Celeste/Ir/InputReconstruction/Structure/CodeBlockRoot.h"

Celeste::ir::inputreconstruction::CodeBlockRoot::CodeBlockRoot()
	: InputReconstructionObject(Type::CodeBlockRoot)
{
}

Celeste::ir::inputreconstruction::CodeBlockRoot::CodeBlockRoot(const CodeBlockRoot& rhs)
	: InputReconstructionObject(rhs)
{
	for (auto& rhsValue : rhs.block)
	{
		auto newRhsValue = rhsValue->DeepCopy();
		newRhsValue->SetParent(this);
		block.push_back(std::move(newRhsValue));
	}
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>&
Celeste::ir::inputreconstruction::CodeBlockRoot::GetBlock()
{
	return block;
}

void Celeste::ir::inputreconstruction::CodeBlockRoot::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::CodeBlockRoot::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::CodeBlockRoot::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::CodeBlockRoot::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::CodeBlockRoot::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::CodeBlockRoot::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::CodeBlockRoot::GetReverseIterator(
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
Celeste::ir::inputreconstruction::CodeBlockRoot::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::CodeBlockRoot::DeepCopy()
{
	return std::make_unique<CodeBlockRoot>(*this);
}
