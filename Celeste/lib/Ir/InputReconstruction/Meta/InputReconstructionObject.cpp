#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"

Celeste::ir::inputreconstruction::InputReconstructionObject::InputReconstructionObject(Type type_)
	: type(type_)
{
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetFile(File* file_)
{
	file = file_;
}

Celeste::ir::inputreconstruction::File*
Celeste::ir::inputreconstruction::InputReconstructionObject::GetFile()
{
	return file;
}

Celeste::ir::inputreconstruction::Type
Celeste::ir::inputreconstruction::InputReconstructionObject::GetType()
{
	return type;
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetParent(
	InputReconstructionObject* parent_)
{
	parent = parent_;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::InputReconstructionObject ::GetParent()
{
	if (!parent.has_value())
	{
		return nullptr;
	}

	return parent.value();
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::Add(
	InputReconstructionObject* innerObject)
{
	scope.push_back(innerObject);
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::Add(
	std::vector<InputReconstructionObject*> innerObjects)
{
	for (auto& _ : innerObjects)
	{
		scope.push_back(_);
	}
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::GetIterator(
	InputReconstructionObject* parent)
{
	for (auto iter = std::begin(scope); iter != std::end(scope); ++iter)
	{
		if (*iter == parent)
		{
			return iter;
		}
	}
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>&
Celeste::ir::inputreconstruction::InputReconstructionObject::GetScope()
{
	return scope;
}
