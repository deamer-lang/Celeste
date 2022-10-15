#include "Celeste/Ir/InputReconstruction/Structure/TemplateArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/TypeExplicitAlias.h"

Celeste::ir::inputreconstruction::TemplateArgument::TemplateArgument(
	std::unique_ptr<NameReference> argumentName_, std::unique_ptr<TypeConstruct> argumentType_)
	: InputReconstructionObject(Type::TemplateArgument),
	  argumentName(std::move(argumentName_)),
	  argumentType(std::move(argumentType_))
{
	argumentName->SetParent(this);
}

void Celeste::ir::inputreconstruction::TemplateArgument::Complete()
{
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::Expression>>&
Celeste::ir::inputreconstruction::TemplateArgument::GetValues()
{
	return values;
}

Celeste::ir::inputreconstruction::TemplateArgument::TemplateArgument(const TemplateArgument& rhs)
	: InputReconstructionObject(rhs),
	  argumentName(std::unique_ptr<NameReference>(
		  static_cast<NameReference*>(rhs.argumentName->DeepCopy().release()))),
	  argumentType(std::unique_ptr<TypeConstruct>(
		  static_cast<TypeConstruct*>(rhs.argumentType->DeepCopy().release())))
{
	argumentName->SetParent(this);
	argumentType->SetParent(this);
}

void Celeste::ir::inputreconstruction::TemplateArgument::AddValue(std::unique_ptr<Expression> value)
{
	value->SetParent(this);
	values.push_back(std::move(value));
}

void Celeste::ir::inputreconstruction::TemplateArgument::AddConditionalModifier(
	std::unique_ptr<ConditionModifierCall> unique)
{
	unique->SetParent(this);
	conditionModifierCall = std::move(unique);
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::TemplateArgument::GetAliasedType()
{
	if (!values.empty())
	{
		return nullptr;
	}

	auto typeReferenced = argumentType->GetCoreType();
	if (!typeReferenced.has_value())
	{
		// Indicates semantic issue in source code
		return nullptr;
	}

	if (typeReferenced.value()->GetType() == Type::TypeExplicitAlias)
	{
		auto forwardedType =
			static_cast<TypeExplicitAlias*>(typeReferenced.value())->GetAliasedForwardedType();
		if (!forwardedType.has_value())
		{
			// Indicates semantic issue in source code
			return nullptr;
		}

		return forwardedType.value();
	}

	return typeReferenced.value();
}

bool Celeste::ir::inputreconstruction::TemplateArgument::Accepts(
	InputReconstructionObject* functionAccess)
{
	throw std::logic_error("Unimplemented");
}

bool Celeste::ir::inputreconstruction::TemplateArgument::Accepts(
	const std::unique_ptr<Expression>& expression)
{
	throw std::logic_error("Unimplemented");
}

std::string Celeste::ir::inputreconstruction::TemplateArgument::GetName()
{
	return argumentName->GetResolvedName();
}

Celeste::ir::inputreconstruction::TypeConstruct*
Celeste::ir::inputreconstruction::TemplateArgument::GetArgumentType()
{
	return argumentType.get();
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::TemplateArgument::DeepCopy()
{
	return std::make_unique<TemplateArgument>(*this);
}
