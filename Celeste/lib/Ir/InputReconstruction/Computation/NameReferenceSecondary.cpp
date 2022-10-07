#include "Celeste/Ir/InputReconstruction/Computation/NameReferenceSecondary.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"

Celeste::ir::inputreconstruction::NameReferenceSecondary::NameReferenceSecondary(
	std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
		symbolReference_)
	: NameReference(Type::SymbolResolveSecondary),
	  symbolReference(symbolReference_)
{
	if (std::holds_alternative<ast::node::symbol*>(symbolReference))
	{
		auto symbolDereference = ast::reference::Access<ast::node::symbol>(
			std::get<ast::node::symbol*>(symbolReference));
		SetSymbolName(symbolDereference.symbol_name().GetContent()[0]->GetText());
	}
	else if (std::holds_alternative<ast::node::symbol_secondary*>(symbolReference))
	{
		auto symbolDereference = ast::reference::Access<ast::node::symbol_secondary>(
			std::get<ast::node::symbol_secondary*>(symbolReference));
		SetSymbolName(symbolDereference.symbol_name_secondary().GetContent()[0]->GetText());
	}
	else
	{
		// Invalid
	}
}

void Celeste::ir::inputreconstruction::NameReferenceSecondary::Complete()
{
	if (std::holds_alternative<ast::node::symbol*>(symbolReference))
	{
		auto access = ast::reference::Access<ast::node::symbol>(
			std::get<ast::node::symbol*>(symbolReference));
		access.symbol_access().for_all(
			[&](ast::reference::Access<ast::node::symbol_access> symbolAccess) {
				CreateAccess(symbolAccess);
			});
	}
	else if (std::holds_alternative<ast::node::symbol_secondary*>(symbolReference))
	{
		auto access = ast::reference::Access<ast::node::symbol_secondary>(
			std::get<ast::node::symbol_secondary*>(symbolReference));
		access.symbol_access().for_all(
			[&](ast::reference::Access<ast::node::symbol_access> symbolAccess) {
				CreateAccess(symbolAccess);
			});
	}
	else if (std::holds_alternative<ast::node::VARNAME*>(symbolReference))
	{
	}
	else
	{
		// Internal Compiler Error
	}
	initialized = true;
}

Celeste::ir::inputreconstruction::NameReferenceSecondary::NameReferenceSecondary(
	const NameReferenceSecondary& rhs)
	: NameReference(rhs),
	  symbolReference(rhs.symbolReference)
{
	if (rhs.nameReferenceNext.has_value())
	{
		this->nameReferenceNext =
			std::unique_ptr<NameReferenceSecondary>(static_cast<NameReferenceSecondary*>(
				rhs.nameReferenceNext.value()->DeepCopy().release()));
		this->nameReferenceNext.value()->SetParent(this);
	}
}

void Celeste::ir::inputreconstruction::NameReferenceSecondary::StartResolve(
	std::vector<std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>>
		nextSymbols)
{
	resolveIsRan = true;

	auto continueAccessResolve = [&](std::size_t startI) {
		if (std::holds_alternative<ast::node::symbol*>(symbolReference))
		{
			auto symbolDereference = ast::reference::Access<ast::node::symbol>(
				std::get<ast::node::symbol*>(symbolReference));
			for (; startI < symbolDereference.symbol_access().GetContent().size(); startI++)
			{
				auto access = symbolDereference.symbol_access().GetContent()[startI];
				ContinueResolveAccess(startI);
			}
		}
		else if (std::holds_alternative<ast::node::symbol_secondary*>(symbolReference))
		{
			auto symbolDereference = ast::reference::Access<ast::node::symbol_secondary>(
				std::get<ast::node::symbol_secondary*>(symbolReference));
			for (; startI < symbolDereference.symbol_access().GetContent().size(); startI++)
			{
				auto access = symbolDereference.symbol_access().GetContent()[startI];
				ContinueResolveAccess(startI);
			}
		}
		else
		{
			// Invalid
			return;
		}
	};
	auto getNextSymbol = [&nextSymbols]() { return *std::begin(nextSymbols); };
	auto continueThisResolve = [&]() {
		if (!nextSymbols.empty())
		{
			nameReferenceNext = std::make_unique<NameReferenceSecondary>(getNextSymbol());
			nameReferenceNext.value()->SetParent(this);
			nameReferenceNext.value()->SetFile(GetFile());
			nameReferenceNext.value()->Complete();

			nextSymbols.erase(std::cbegin(nextSymbols));
			nameReferenceNext.value()->StartResolve(nextSymbols);
		}
	};

	std::optional<InputReconstructionObject*> finalIr;
	if (GetParent()->GetType() == Type::NameReference)
	{
		auto parent = static_cast<NameReference*>(GetParent());
		finalIr = parent->GetFinalLinkedIr();
	}
	else if (GetParent()->GetType() == Type::SymbolReferenceCall)
	{
		auto parent = static_cast<SymbolReferenceCall*>(GetParent());
		finalIr = parent->GetFinalLinkedIr();
	}
	else if (GetParent()->GetType() == Type::SymbolResolveSecondary)
	{
		auto parent = static_cast<NameReferenceSecondary*>(GetParent());
		finalIr = parent->GetFinalLinkedIr();
	}
	else
	{
		// Invalid
		return;
	}

	if (!finalIr.has_value())
	{
		// Invalid
		return;
	}

	switch (finalIr.value()->GetType())
	{
	case Type::Constructor: {
		auto constructor = static_cast<Constructor*>(finalIr.value());
		auto classObject = static_cast<Class*>(constructor->GetReturnType());

		if (classObject == nullptr)
		{
			// Invalid
			return;
		}

		// TODO: implement for properly supporting accessibility.
		auto linkedIr = classObject->GetMember(this, Accessibility::Public);
		if (linkedIr == nullptr)
		{
			// Invalid
			return;
		}

		// Valid if return type is not nullptr
		SetLinkedIr(linkedIr);
		continueAccessResolve(0);
		continueThisResolve();
		break;
	}
	case Type::Function: {
		auto function = static_cast<Function*>(finalIr.value());
		auto returnType = static_cast<TypeConstruct*>(function->GetReturnType());

		// Delegate static linkage to TypeConstruct
		auto linkedIr = returnType->GetIrLinkage(this);

		if (linkedIr == nullptr)
		{
			// Invalid
			return;
		}

		// Valid Linkage as Type Construct returned a valid reference
		SetLinkedIr(linkedIr);
		continueAccessResolve(0);
		continueThisResolve();
		break;
	}
	case Type::Class: {
		auto classIr = static_cast<Class*>(finalIr.value());
		// Delegate referencing to the member to the Class object
		// Currently Accessibility levels are not forwarded, thus they may not be referenced,
		// This will likely result in a bug, i.e. this needs to resolved later
		auto linkedIr = classIr->GetMember(this);
		if (linkedIr == nullptr)
		{
			// Invalid
			return;
		}

		SetLinkedIr(linkedIr);

		// If it was a Function, then the function access is already finished for us.
		if (linkedIr->GetType() == Type::Function || linkedIr->GetType() == Type::Constructor)
		{
			continueAccessResolve(1);
		}
		else
		{
			continueAccessResolve(0);
		}

		continueThisResolve();
		break;
	}
	case Type::Enumeration: {
		auto enumeration = static_cast<Enumeration*>(finalIr.value());
		// Delegate referencing to the member to the Enumeration object
		auto linkedIr = enumeration->GetMember(this);
		if (linkedIr == nullptr)
		{
			// Invalid
			return;
		}

		SetLinkedIr(linkedIr);

		continueAccessResolve(0);
		continueThisResolve();
		break;
	}
	case Type::VariableDeclaration: {
		auto variableDeclaration = static_cast<VariableDeclaration*>(finalIr.value());
		auto variableType = static_cast<TypeConstruct*>(variableDeclaration->GetVariableType());

		// Delegate static linkage to TypeConstruct
		auto linkedIr = variableType->GetIrLinkage(this);

		if (linkedIr == nullptr)
		{
			// Invalid
			return;
		}

		// Valid Linkage as Type Construct returned a valid reference
		SetLinkedIr(linkedIr);
		continueAccessResolve(0);
		continueThisResolve();
		break;
	}
	case Type::FunctionArgument: {
		auto functionArgument = static_cast<FunctionArgument*>(finalIr.value());
		auto functionArgumentType = functionArgument->GetArgumentType();

		auto linkedIr = functionArgumentType->GetIrLinkage(this);

		if (linkedIr == nullptr)
		{
			// Invalid
			return;
		}

		// Valid Linkage as Type Construct returned a valid reference
		SetLinkedIr(linkedIr);
		continueAccessResolve(0);
		continueThisResolve();
		break;
	}
	}
}

std::variant<Celeste::ast::node::symbol*, Celeste::ast::node::symbol_secondary*,
			 Celeste::ast::node::VARNAME*>
Celeste::ir::inputreconstruction::NameReferenceSecondary::GetSymbolReferenceAst()
{
	return symbolReference;
}

std::optional<Celeste::ir::inputreconstruction::NameReferenceSecondary*>
Celeste::ir::inputreconstruction::NameReferenceSecondary::GetNameSecondaryReference()
{
	if (!nameReferenceNext.has_value())
	{
		return std::nullopt;
	}

	return nameReferenceNext.value().get();
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::NameReferenceSecondary::DeepCopy()
{
	return std::make_unique<NameReferenceSecondary>(*this);
}
