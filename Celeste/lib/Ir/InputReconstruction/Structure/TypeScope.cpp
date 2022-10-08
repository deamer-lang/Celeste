#include "Celeste/Ir/InputReconstruction/Structure/TypeScope.h"

Celeste::ir::inputreconstruction::TypeScope::TypeScope(std::unique_ptr<NameReference> name_)
	: InputReconstructionObject(Type::TypeScope),
	  name(std::move(name_))
{
	name.value()->SetParent(this);
}

Celeste::ir::inputreconstruction::TypeScope::TypeScope()
	: InputReconstructionObject(Type::TypeScope)
{
}

void Celeste::ir::inputreconstruction::TypeScope::Complete()
{
}

Celeste::ir::inputreconstruction::TypeScope::TypeScope(const TypeScope& rhs)
	: InputReconstructionObject(rhs)
{
	if (rhs.name.has_value())
	{
		name = std::unique_ptr<NameReference>(
			static_cast<NameReference*>(rhs.name.value()->DeepCopy().release()));
		name.value()->SetParent(this);
	}

	for (auto& rhsValue : rhs.block)
	{
		auto newRhsValue = rhsValue->DeepCopy();
		newRhsValue->SetParent(this);
		block.push_back(std::move(newRhsValue));
	}
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::TypeScope::DeepCopy()
{
	return std::make_unique<TypeScope>(*this);
}
