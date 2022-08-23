#include "Celeste/Ir/InputReconstruction/Structure/InlineClass.h"

Celeste::ir::inputreconstruction::InlineClass::InlineClass(
	std::unique_ptr<NameReference> inlineClassName_)
	: InputReconstructionObject(Type::InlineClass),
	  inlineClassName(std::move(inlineClassName_))
{
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
