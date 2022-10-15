#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"

Celeste::ir::inputreconstruction::TypeConstruct::TypeConstruct(
	InputReconstructionObject* resolvedObject)
	: InputReconstructionObject(Type::TypeConstruct),
	  cacheInputReconstructionObject(resolvedObject)
{
}

Celeste::ir::inputreconstruction::TypeConstruct::TypeConstruct(
	std::unique_ptr<SymbolReferenceCall> type)
	: InputReconstructionObject(Type::TypeConstruct),
	  typeTarget(std::move(type))
{
	typeTarget.value()->SetParent(this);
}

Celeste::ir::inputreconstruction::TypeConstruct::TypeConstruct(ast::node::type* type_)
	: InputReconstructionObject(Type::TypeConstruct),
	  type(type_)
{
}

Celeste::ir::inputreconstruction::TypeConstruct::TypeConstruct()
	: InputReconstructionObject(Type::TypeConstruct)
{
}

Celeste::ir::inputreconstruction::TypeConstruct::TypeConstruct(const TypeConstruct& rhs)
	: InputReconstructionObject(rhs),
	  type(rhs.type),
	  isAuto(rhs.isAuto),
	  isAutoType(rhs.isAutoType),
	  cacheInputReconstructionObject(rhs.cacheInputReconstructionObject)
{
	if (rhs.arrayDeclarationExpression.has_value())
	{
		auto newRhsValue = std::unique_ptr<Expression>(
			static_cast<Expression*>(rhs.arrayDeclarationExpression.value()->DeepCopy().release()));
		newRhsValue->SetParent(this);
		this->arrayDeclarationExpression = std::move(newRhsValue);
	}

	if (rhs.typeTarget.has_value())
	{
		auto newRhsValue = std::unique_ptr<SymbolReferenceCall>(
			static_cast<SymbolReferenceCall*>(rhs.typeTarget.value()->DeepCopy().release()));
		newRhsValue->SetParent(this);
		this->typeTarget = std::move(newRhsValue);
	}
}

void Celeste::ir::inputreconstruction::TypeConstruct::Destructure()
{
	if (cacheInputReconstructionObject.has_value())
	{
		return;
	}

	if (typeTarget.has_value())
	{
		GetFile()->AddUnresolvedSymbolReference(GetSymbolReference().value().get());
	}

	if (type == nullptr)
	{
		// It is initialized in a different way
		return;
	}

	auto access = ast::reference::Access<ast::node::type>(type);
	if (!access.AUTO().GetContent().empty())
	{
		isAuto = true;
		isAutoType = false;
	}
	else if (!access.AUTOTYPE().GetContent().empty())
	{
		isAuto = true;
		isAutoType = true;
	}
	else
	{
		auto _ = std::make_unique<SymbolReferenceCall>(
			const_cast<ast::node::symbol_reference*>(access.symbol_reference().GetContent()[0]));
		_->SetParent(this);
		_->SetFile(GetFile());
		typeTarget = std::move(_);
		GetFile()->AddUnresolvedSymbolReference(GetSymbolReference().value().get());
	}

	if (!access.array_declaration().GetContent().empty())
	{
		auto _ = std::make_unique<Expression>(
			const_cast<ast::node::array_declaration*>(access.array_declaration().GetContent()[0]));
		_->SetParent(this);
		_->SetFile(GetFile());
		_->Resolve();

		arrayDeclarationExpression = std::move(_);
	}
}

bool Celeste::ir::inputreconstruction::TypeConstruct::IsAuto()
{
	return isAuto;
}

bool Celeste::ir::inputreconstruction::TypeConstruct::IsAutoType()
{
	return isAutoType;
}

bool Celeste::ir::inputreconstruction::TypeConstruct::IsArrayDeclaration()
{
	return arrayDeclarationExpression.has_value();
}

bool Celeste::ir::inputreconstruction::TypeConstruct::CoreEqual(
	InputReconstructionObject* deduceType)
{
	if (cacheInputReconstructionObject.has_value())
	{
		return cacheInputReconstructionObject.value() == deduceType;
	}

	if (!typeTarget.has_value())
	{
		// Internal Compiler Error
		return false;
	}

	std::optional<InputReconstructionObject*> ourType = GetCoreType();
	if (!ourType.has_value())
	{
		// Some semantic error occured which prevented proper reference resolving.
		return false;
	}

	switch (deduceType->GetType())
	{
	case Type::TypeConstruct: {
		auto rhsCoreType = static_cast<TypeConstruct*>(deduceType)->GetCoreType();
		return ourType == rhsCoreType;
	}
	default: {
		if (ourType.value()->GetType() == Type::TemplateArgument)
		{
			auto templateArgument = static_cast<TemplateArgument*>(ourType.value());
			return templateArgument->GetValues().empty() &&
				   templateArgument->GetArgumentType()->GetCoreType() == deduceType;
		}
		else
		{
			return ourType == deduceType;
		}
	}
	}
}

bool Celeste::ir::inputreconstruction::TypeConstruct::Equal(InputReconstructionObject* deduceType)
{
	if (deduceType == nullptr)
	{
		std::cout << "Critical Error Occured, given Deduced Type is nullptr\n";
		return false;
	}

	if (deduceType == this)
	{
		return true;
	}

	if (GetParent()->GetType() == Type::FunctionArgument && (IsAuto() || IsAutoType()))
	{
		// Auto is always equal to whatever we assign it to.
		return true;
	}
	else if (GetParent()->GetType() == Type::TemplateParameter)
	{
		// Template Parameters that represent types are always true in comparison equality.
		// As they can represent any type
		return true;
	}

	return CoreEqual(deduceType);
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::TypeConstruct::GetCoreType()
{
	if (cacheInputReconstructionObject.has_value())
	{
		return cacheInputReconstructionObject.value();
	}

	if (IsAuto())
	{
		auto parent = GetParent();
		switch (parent->GetType())
		{
		case Type::VariableDeclaration: {
			auto varDecl = static_cast<VariableDeclaration*>(parent);
			auto& values = varDecl->GetExpressions();
			if (values.size() != 1)
			{
				// Invalid as we expected a non-array expression
				// However, in later versions we may construct a TypeConstruct to capture the array
				// type at this stage. This shouldnt break anything and make Celeste even more
				// flexible.
				return std::nullopt;
			}

			auto& value = values[0];
			return value->DeduceType();
		}
		case Type::Function: {
			// Even though allowed, this requires deep analysis to verify if the function return
			// type can be deduced Statically or Dynamically. This is not yet supported
			return std::nullopt;
		}
		}

		return std::nullopt;
	}

	return typeTarget.value()->GetResolvedLinkedIr();
}

std::optional<std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>>&
Celeste::ir::inputreconstruction::TypeConstruct::GetSymbolReference()
{
	return typeTarget;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::TypeConstruct::GetIrLinkage(
	NameReferenceSecondary* nameReferenceSecondary)
{
	// This returns the appropiate linkage given the named symbol.
	if (IsArrayDeclaration())
	{
		// Error, Array Declarations hold that the first symbol may not be a name
		return nullptr;
	}

	// Currently for simplicity we dont care if the variable is a type or value
	// For semantic reasons it is possible to restrict AutoType from deducing types from values.
	if (IsAuto() || IsAutoType())
	{
		auto parent = GetParent();
		switch (parent->GetType())
		{
		case Type::VariableDeclaration: {
			auto varDecl = static_cast<VariableDeclaration*>(parent);
			auto& values = varDecl->GetExpressions();
			if (values.size() != 1)
			{
				// Invalid as we expected a non-array expression
				// However, in later versions we may construct a TypeConstruct to capture the array
				// type at this stage. This shouldnt break anything and make Celeste even more
				// flexible.
				return nullptr;
			}

			auto& value = values[0];
			auto deducedType = value->DeduceType();

			if (deducedType == nullptr)
			{
				return nullptr;
			}

			// Retrieve the member located at symbol name
			switch (deducedType->GetType())
			{
			case Type::Class: {
				auto classIr = static_cast<Class*>(deducedType);
				return classIr->GetMember(nameReferenceSecondary);
			}
			}

			return nullptr;
		}
		case Type::Function: {
			// Even though allowed, this requires deep analysis to verify if the function return
			// type can be deduced Statically or Dynamically. This is not yet supported
			return nullptr;
		}
		case Type::FunctionArgument: {
			// Auto function arguments are templates. And thus require monomorphization.
			auto standardTypesFile = GetFile()->GetProject()->GetFile("Celeste/any_type.ce");
			if (standardTypesFile == nullptr)
			{
				return nullptr;
			}

			if (IsAuto())
			{
				auto result = standardTypesFile->GetClass("any");
				if (result.has_value())
				{
					return result.value();
				}
			}
			else if (IsAutoType())
			{
				auto result = standardTypesFile->GetClass("anytype");
				if (result.has_value())
				{
					return result.value();
				}
			}

			return nullptr;
		}
		}

		return nullptr;
	}

	if (!typeTarget.has_value())
	{
		// Invalid
		return nullptr;
	}

	// We get here only when we have a physical name
	auto& typeReference = typeTarget.value();
	auto resolvedLinkedIr = typeReference->GetResolvedLinkedIr();
	if (!resolvedLinkedIr.has_value())
	{
		// Invalid
		return nullptr;
	}

	auto linkedIr = resolvedLinkedIr.value();
	switch (linkedIr->GetType())
	{
	case Type::Class: {
		auto classIr = static_cast<Class*>(linkedIr);
		return classIr->GetMember(nameReferenceSecondary);
	}
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::TypeConstruct::GetIrLinkage(SymbolAccess* access)
{
	// This returns the appropiate linkage given the access symbol.
	return nullptr;
}

bool Celeste::ir::inputreconstruction::TypeConstruct::Trivial()
{
	return !IsArrayDeclaration();
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::TypeConstruct::DeepCopy()
{
	return std::make_unique<TypeConstruct>(*this);
}
