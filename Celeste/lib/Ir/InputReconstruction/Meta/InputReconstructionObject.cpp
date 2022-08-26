#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"

struct Celeste::ir::inputreconstruction::InputReconstructionObject::Impl
{
	Type type;
	File* file = nullptr;
	std::optional<InputReconstructionObject*> parent;
	std::vector<InputReconstructionObject*> scope;

	std::vector<InputReconstructionObject*> objectThatReferenceThis;

	Impl(Type type_) : type(type_)
	{
	}

	~Impl() = default;
};

Celeste::ir::inputreconstruction::InputReconstructionObject::InputReconstructionObject(Type type_)
	: impl(std::make_unique<Impl>(type_))
{
}

Celeste::ir::inputreconstruction::InputReconstructionObject::~InputReconstructionObject()
{
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetFile(File* file_)
{
	impl->file = file_;
}

Celeste::ir::inputreconstruction::File*
Celeste::ir::inputreconstruction::InputReconstructionObject::GetFile()
{
	return impl->file;
}

Celeste::ir::inputreconstruction::Type
Celeste::ir::inputreconstruction::InputReconstructionObject::GetType()
{
	return impl->type;
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetParent(
	InputReconstructionObject* parent_)
{
	impl->parent = parent_;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::InputReconstructionObject ::GetParent()
{
	if (!impl->parent.has_value())
	{
		return nullptr;
	}

	return impl->parent.value();
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::Add(
	InputReconstructionObject* innerObject)
{
	impl->scope.push_back(innerObject);
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::Add(
	std::vector<InputReconstructionObject*> innerObjects)
{
	for (auto& _ : innerObjects)
	{
		Add(_);
	}
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::GetIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = std::begin(impl->scope); iter != std::end(impl->scope); ++iter)
	{
		if (*iter == irComponent)
		{
			return iter;
		}
	}

	return std::end(impl->scope);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::begin()
{
	return std::begin(impl->scope);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::end()
{
	return std::end(impl->scope);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>&
Celeste::ir::inputreconstruction::InputReconstructionObject::GetScope()
{
	return impl->scope;
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::reverse_iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::GetReverseIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = std::rbegin(impl->scope); iter != std::rend(impl->scope); ++iter)
	{
		if (*iter == irComponent)
		{
			return iter;
		}
	}

	return std::rend(impl->scope);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::reverse_iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::rend()
{
	return std::rend(impl->scope);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>::reverse_iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::rbegin()
{
	return std::rbegin(impl->scope);
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetReferencingObject(
	InputReconstructionObject* object)
{
	impl->objectThatReferenceThis.push_back(object);
}
