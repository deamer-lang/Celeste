#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"

struct Celeste::ir::inputreconstruction::InputReconstructionObject::Impl
{
	Type type;
	File* file = nullptr;
	std::optional<InputReconstructionObject*> parent;
	std::vector<InputReconstructionObject*> scope;
	std::vector<std::unique_ptr<InputReconstructionObject>> scope2;

	std::vector<InputReconstructionObject*> objectThatReferenceThis;

	GroupType groupType = GroupType::Standard;

	Impl(Type type_) : type(type_)
	{
	}

	~Impl() = default;

	std::unique_ptr<Impl> DeepCopy(InputReconstructionObject* inputReconstructionObject)
	{
		auto newImpl = std::make_unique<Impl>(type);
		newImpl->file = file;
		newImpl->parent =
			std::nullopt; // Safety, this prevents accidental reads to non-related parents
		newImpl->objectThatReferenceThis = {}; // Safety, ""
		newImpl->groupType = groupType;
		return std::move(newImpl);
	}
};

Celeste::ir::inputreconstruction::InputReconstructionObject::InputReconstructionObject(Type type_)
	: impl(std::make_unique<Impl>(type_))
{
}

Celeste::ir::inputreconstruction::InputReconstructionObject::~InputReconstructionObject()
{
}

Celeste::ir::inputreconstruction::InputReconstructionObject::InputReconstructionObject(
	const InputReconstructionObject& rhs)
	: impl(rhs.impl->DeepCopy(this))
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
Celeste::ir::inputreconstruction::InputReconstructionObject::GetType() const
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

void Celeste::ir::inputreconstruction::InputReconstructionObject::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	throw std::logic_error("Unimplemented Member Function, Critical Error");
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::GetIterator(
	InputReconstructionObject* irComponent)
{
	// throw std::logic_error("Critical Error, Member function (GetIterator) not implemented.");
	return end();
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::begin()
{
	// throw std::logic_error("Critical Error, Member function (GetScope) not implemented.");
	return std::begin(impl->scope2);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::end()
{
	// throw std::logic_error("Critical Error, Member function (GetScope) not implemented.");
	return std::end(impl->scope2);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::InputReconstructionObject::GetScope()
{
	throw std::logic_error("Critical Error, Member function (GetScope) not implemented.");
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::GetReverseIterator(
	InputReconstructionObject* irComponent)
{
	// throw std::logic_error("Critical Error, Member function (GetReverseIterator) not
	// implemented.");
	return rend();
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::rend()
{
	// throw std::logic_error("Critical Error, Member function (rend) not implemented.");
	return std::rend(impl->scope2);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir::inputreconstruction::InputReconstructionObject::rbegin()
{
	// throw std::logic_error("Critical Error, Member function (rbegin) not implemented.");
	return std::rbegin(impl->scope2);
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetReferencingObject(
	InputReconstructionObject* object)
{
	impl->objectThatReferenceThis.push_back(object);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::InputReconstructionObject::GetReferencesToThisObject()
{
	return impl->objectThatReferenceThis;
}

void Celeste::ir::inputreconstruction::InputReconstructionObject::SetGroupType(GroupType groupType_)
{
	impl->groupType = groupType_;
}

Celeste::ir::inputreconstruction::GroupType
Celeste::ir::inputreconstruction::InputReconstructionObject::GetGroupType()
{
	return impl->groupType;
}
