#include "Celeste/Ir/InputReconstruction/Structure/TypeExplicitAlias.h"

Celeste::ir::inputreconstruction::TypeExplicitAlias::TypeExplicitAlias(
	std::unique_ptr<NameReference> aliasName_, std::unique_ptr<SymbolReferenceCall> aliasedType_)
	: InputReconstructionObject(Type::TypeExplicitAlias),
	  aliasName(std::move(aliasName_)),
	  aliasedType(std::move(aliasedType_))
{
	aliasName->SetParent(this);
	aliasedType->SetParent(this);
}

void Celeste::ir::inputreconstruction::TypeExplicitAlias::Complete()
{
	aliasName->SetFile(GetFile());
	aliasedType->SetFile(GetFile());
}

Celeste::ir::inputreconstruction::TypeExplicitAlias::TypeExplicitAlias(const TypeExplicitAlias& rhs)
	: InputReconstructionObject(rhs),
	  aliasName(static_cast<NameReference*>(rhs.aliasName->DeepCopy().release())),
	  aliasedType(static_cast<SymbolReferenceCall*>(rhs.aliasedType->DeepCopy().release()))
{
	aliasName->SetParent(this);
	aliasedType->SetParent(this);
}

std::unique_ptr<Celeste::ir::inputreconstruction::NameReference>&
Celeste::ir::inputreconstruction::TypeExplicitAlias::GetAliasName()
{
	return aliasName;
}

std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>&
Celeste::ir::inputreconstruction::TypeExplicitAlias::GetAliasedType()
{
	return aliasedType;
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::TypeExplicitAlias::GetAliasedForwardedType()
{
	auto type = GetAliasedType()->GetResolvedLinkedIr();
	while (type.has_value() && type.value()->GetType() == Type::TypeExplicitAlias)
	{
		type =
			static_cast<TypeExplicitAlias*>(type.value())->GetAliasedType()->GetResolvedLinkedIr();
	}

	if (!type.has_value() || type.has_value() && type.value()->GetType() == Type::TypeExplicitAlias)
	{
		return std::nullopt;
	}

	return type;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::TypeExplicitAlias::DeepCopy()
{
	return std::make_unique<TypeExplicitAlias>(*this);
}
