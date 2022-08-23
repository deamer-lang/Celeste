#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"

Celeste::ir::inputreconstruction::TypeConstruct::TypeConstruct(ast::node::type* type_)
	: InputReconstructionObject(Type::TypeConstruct),
	  type(type_)
{
}

void Celeste::ir::inputreconstruction::TypeConstruct::Destructure()
{
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
	}

	if (!access.array_declaration().GetContent().empty())
	{
		auto _ = std::make_unique<Expression>(
			const_cast<ast::node::array_declaration*>(access.array_declaration().GetContent()[0]));
		_->SetParent(this);
		_->SetFile(GetFile());

		arrayDeclarationExpression = std::move(_);
	}

	GetFile()->AddUnresolvedSymbolReference(GetSymbolReference().value().get());
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

bool Celeste::ir::inputreconstruction::TypeConstruct::Equal(InputReconstructionObject* deduceType)
{
	return false;
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
