#include "Celeste/Ir/InputReconstruction/Structure/InlineClass.h"

Celeste::ir::inputreconstruction::InlineClass::InlineClass(
	std::unique_ptr<NameReference> inlineClassName_)
	: InputReconstructionObject(Type::InlineClass),
	  inlineClassName(std::move(inlineClassName_))
{
}

Celeste::ir::inputreconstruction::InlineClass::InlineClass(const InlineClass& rhs)
	: InputReconstructionObject(rhs),
	  lastAccessibility(rhs.lastAccessibility)
{
	this->inlineClassName = std::unique_ptr<NameReference>(
		static_cast<NameReference*>(rhs.inlineClassName->DeepCopy().release()));
	this->inlineClassName->SetParent(this);

	for (auto& [accessibility, object] : rhs.block)
	{
		this->InlineClass::Add(object);
		this->block.emplace_back(accessibility, object);
	}
}

void Celeste::ir::inputreconstruction::InlineClass::Add(InputReconstructionObject* newObject)
{
	if (newObject->GetType() == Type::Private)
	{
		lastAccessibility = Accessibility::Private;
	}
	else if (newObject->GetType() == Type::Protected)
	{
		lastAccessibility = Accessibility::Protected;
	}
	else if (newObject->GetType() == Type::Public)
	{
		lastAccessibility = Accessibility::Public;
	}
	else
	{
		Add(newObject, lastAccessibility);
	}
}

void Celeste::ir::inputreconstruction::InlineClass::Add(InputReconstructionObject* object,
														Accessibility accessibility)
{
	block.emplace_back(std::pair<Accessibility, InputReconstructionObject*>{accessibility, object});
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::InlineClass::DeepCopy()
{
	return std::make_unique<InlineClass>(*this);
}
