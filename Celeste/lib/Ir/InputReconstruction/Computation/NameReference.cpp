#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/NameFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReferenceSecondary.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ConditionalFunction.h"
#include "Celeste/Ir/InputReconstruction/Import.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"

struct Celeste::ir::inputreconstruction::NameReference::ResolveLogic
{
public:
	enum class Direction
	{
		Up,
		Down,
	};

public:
	struct ResolveArgument
	{
		InputReconstructionObject* originObject;
		Direction direction;

		ResolveArgument(InputReconstructionObject* originObject_ = nullptr,
						Direction direction_ = Direction::Up)
			: originObject(originObject_),
			  direction(direction_)
		{
		}
	};

private:
	NameReference* reference;

	std::optional<InputReconstructionObject*> resultEntryPoint;
	std::vector<std::pair<InputReconstructionObject*, ResolveArgument>> uncheckedList;

public:
	ResolveLogic(NameReference* reference_) : reference(reference_)
	{
		uncheckedList.emplace_back(reference, ResolveArgument{});
	}

public:
	InputReconstructionObject* FindEntryPoint()
	{
		while (!uncheckedList.empty())
		{
			const auto uncheckedParameterPair = uncheckedList[0];
			uncheckedList.erase(std::begin(uncheckedList));
			const auto uncheckedMember = uncheckedParameterPair.first;
			const auto uncheckedArgument = uncheckedParameterPair.second;
			EntryPointCheck(uncheckedMember, uncheckedArgument);
		}

		if (resultEntryPoint.has_value())
		{
			return resultEntryPoint.value();
		}

		// Construct an Error
		return nullptr;
	}

	void GetSymbol()
	{
	}

	void EntryPointCheck(InputReconstructionObject* uncheckedMember, ResolveArgument argument)
	{
		if (uncheckedMember == nullptr)
		{
			// This may never occur
			// Finalize, and stop resolving
			// Also construct Internal Compiler Error
			std::cout << "Invalid Starting Ir, should not occur\n";
			Finalize();
			return;
		}
	}

	void Finalize()
	{
		uncheckedList.clear();
	}
};

/* IMPORTANT NOTE
 *
 * There are 2 reference resolving parts:
 * - Searching for an entry point
 * - Static Path Resolving
 *
 * The second algorithm is used whenever an entry point has been found.
 *
 * All encountered legal namespace combinations must be remembered in the entry point algorithm.
 * This allows us to enter namespaces that we may reference.
 */

Celeste::ir::inputreconstruction::NameReference::NameReference(
	ast::node::symbol_reference* symbolReference_)
	: InputReconstructionObject(Type::NameReference),
	  symbolReference(symbolReference_)
{
	SetSymbolName(ast::reference::Access<ast::node::symbol_reference>(symbolReference_)
					  .symbol()
					  .symbol_name()
					  .VARNAME()
					  .GetContent()[0]
					  ->GetText());
}

Celeste::ir::inputreconstruction::NameReference::NameReference(ast::node::VARNAME* varname_)
	: InputReconstructionObject(Type::NameReference),
	  symbolReference(varname_),
	  staticallyResolvable(true)
{
	SetSymbolName(varname_->GetText());
}

Celeste::ir::inputreconstruction::NameReference::NameReference(Type forward_)
	: InputReconstructionObject(forward_)
{
}

Celeste::ir::inputreconstruction::NameReference::NameReference(
	Type forward_, ast::node::symbol_reference* symbolReference_)
	: InputReconstructionObject(forward_),
	  symbolReference(symbolReference_)
{
}

Celeste::ir::inputreconstruction::NameReference::NameReference(Type forward_,
															   ast::node::VARNAME* symbolReference_)
	: InputReconstructionObject(forward_),
	  symbolReference(symbolReference_),
	  staticallyResolvable(true)
{
}

void Celeste::ir::inputreconstruction::NameReference::SetSymbolName(const std::string& symbolName_)
{
	symbolName = symbolName_;
}

std::string Celeste::ir::inputreconstruction::NameReference::GetSymbolNameFromSymbol(
	Celeste::ast::reference::Access<Celeste::ast::node::symbol> symbol)
{
	return symbol.symbol_name().GetContent()[0]->GetText();
}

std::string Celeste::ir::inputreconstruction::NameReference::GetSymbolNameFromSymbol(
	Celeste::ast::reference::Access<Celeste::ast::node::symbol_secondary> symbol)
{
	return symbol.symbol_name_secondary().GetContent()[0]->GetText();
}

std::string Celeste::ir::inputreconstruction::NameReference::GetSymbolNameFromSymbol(
	Celeste::ast::reference::Access<Celeste::ast::node::VARNAME> symbol)
{
	return symbol.GetContent()[0]->GetText();
}

std::vector<const Celeste::ast::node::symbol_access*>
Celeste::ir::inputreconstruction::NameReference::GetSymbolAccessesFromSymbol(
	Celeste::ast::reference::Access<Celeste::ast::node::symbol> symbol)
{
	return symbol.symbol_access().GetContent();
}

std::vector<const Celeste::ast::node::symbol_access*>
Celeste::ir::inputreconstruction::NameReference::GetSymbolAccessesFromSymbol(
	Celeste::ast::reference::Access<Celeste::ast::node::symbol_secondary> symbol)
{
	return symbol.symbol_access().GetContent();
}

std::vector<const Celeste::ast::node::symbol_access*>
Celeste::ir::inputreconstruction::NameReference::GetSymbolAccessesFromSymbol(
	Celeste::ast::reference::Access<Celeste::ast::node::VARNAME> symbol)
{
	return {};
}

void Celeste::ir::inputreconstruction::NameReference::ContinueResolve(
	InputReconstructionObject* startingIr,
	std::variant<ast::reference::Access<ast::node::symbol>,
				 ast::reference::Access<ast::node::symbol_secondary>,
				 ast::reference::Access<ast::node::VARNAME>>
		symbol,
	std::vector<std::variant<ast::reference::Access<ast::node::symbol>,
							 ast::reference::Access<ast::node::symbol_secondary>,
							 ast::reference::Access<ast::node::VARNAME>>>
		nextSymbols,
	std::optional<InputReconstructionObject*> cameFromIrComponent, bool extend)
{
	if (startingIr == nullptr)
	{
		// Invalid
		std::cout << "Invalid Starting Ir, should not occur\n";
		return;
	}

	auto getNextSymbol = [&nextSymbols]() { return *std::begin(nextSymbols); };
	auto continueThisResolve = [&]() {
		if (!nextSymbols.empty())
		{
			nameReferenceSecondary = std::make_unique<NameReferenceSecondary>(getNextSymbol());
			nameReferenceSecondary.value()->SetParent(this);
			nameReferenceSecondary.value()->SetFile(GetFile());

			nextSymbols.erase(std::cbegin(nextSymbols));
			nameReferenceSecondary.value()->StartResolve(nextSymbols);
		}
	};

	auto continueAccess = [&](std::size_t i, auto& symbolDerefenced) {
		auto accesses = GetSymbolAccessesFromSymbol(symbolDerefenced);
		for (; i < accesses.size(); i++)
		{
			auto access = accesses[i];
			ContinueResolveAccess(access);
		}
	};

	auto searchEntryUsingSymbol = [&](auto& symbolDerefenced) {
		linkedAstNode = const_cast<::deamer::external::cpp::ast::Node*>(
			static_cast<const ::deamer::external::cpp::ast::Node*>(
				symbolDerefenced.GetContent()[0]));

		switch (startingIr->GetType())
		{
		case Type::Root: {
			// Failed to resolve
			break;
		}
		case Type::Import: {
			auto irComponent = static_cast<Import*>(startingIr);
			auto next = irComponent->GetFile()->GetIrBottom();
			ContinueResolve(next, symbol, nextSymbols, irComponent);
			break;
		}
		case Type::Namespace: {
			auto irComponent = static_cast<Import*>(startingIr);
			break;
		}
		case Type::CodeBlock: {
			auto irComponent = static_cast<CodeBlock*>(startingIr);

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);

			break;
		}
		case Type::Enumeration: {
			auto irComponent = static_cast<Enumeration*>(startingIr);
			if (irComponent->GetName()->GetResolvedName() ==
				GetSymbolNameFromSymbol(symbolDerefenced))
			{
				// This is what we need
				linkedIr = irComponent;
				continueAccess(0, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::Class: {
			auto irComponent = static_cast<Class*>(startingIr);
			if (irComponent->GetClassName()->GetResolvedName() ==
				GetSymbolNameFromSymbol(symbolDerefenced))
			{
				// This is what we need
				linkedIr = irComponent;
				continueAccess(0, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::VariableDeclaration: {
			auto irComponent = static_cast<VariableDeclaration*>(startingIr);
			if (irComponent->GetName()->GetResolvedName() ==
				GetSymbolNameFromSymbol(symbolDerefenced))
			{
				// This is what we need
				linkedIr = irComponent;
				continueAccess(0, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::Function: {
			auto irComponent = static_cast<Function*>(startingIr);

			if (irComponent->GetFunctionName()->GetResolvedName() ==
					GetSymbolNameFromSymbol(symbolDerefenced) &&
				irComponent->Accepts(symbol))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				linkedIr = irComponent;
				continueAccess(1, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::CodeFunction: {
			auto irComponent = static_cast<CodeFunction*>(startingIr);

			if (irComponent->GetFunctionName()->GetResolvedName() ==
					GetSymbolNameFromSymbol(symbolDerefenced) &&
				irComponent->Accepts(symbol))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				linkedIr = irComponent;
				continueAccess(1, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::NameFunction: {
			auto irComponent = static_cast<NameFunction*>(startingIr);

			if (irComponent->GetFunctionName()->GetResolvedName() ==
					GetSymbolNameFromSymbol(symbolDerefenced) &&
				irComponent->Accepts(symbol))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				linkedIr = irComponent;
				continueAccess(1, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::ConditionalFunction: {
			auto irComponent = static_cast<ConditionalFunction*>(startingIr);

			if (irComponent->GetFunctionName()->GetResolvedName() ==
					GetSymbolNameFromSymbol(symbolDerefenced) &&
				irComponent->Accepts(symbol))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				linkedIr = irComponent;
				continueAccess(1, symbolDerefenced);

				continueThisResolve();
				return;
			}

			ContinueResolve(irComponent->GetParent(), symbol, nextSymbols, irComponent);
			break;
		}
		case Type::FunctionArgument: {
			// We may not reference other function arguments in function arguments.
			// Maybe in later versions. But not in this version.
			// So continue to the function.
			ContinueResolve(startingIr->GetParent(), symbol, nextSymbols);
			break;
		}
		default: {
			ContinueResolve(startingIr->GetParent(), symbol, nextSymbols);
		}
		}
	};

	if (std::holds_alternative<ast::reference::Access<ast::node::symbol>>(symbol))
	{
		auto symbolDereferenced = std::get<ast::reference::Access<ast::node::symbol>>(symbol);
		linkedAstNode = const_cast<ast::node::symbol*>(symbolDereferenced.GetContent()[0]);
		searchEntryUsingSymbol(symbolDereferenced);
	}
	else if (std::holds_alternative<ast::reference::Access<ast::node::symbol_secondary>>(symbol))
	{
		auto symbolDereferenced =
			std::get<ast::reference::Access<ast::node::symbol_secondary>>(symbol);
		linkedAstNode =
			const_cast<ast::node::symbol_secondary*>(symbolDereferenced.GetContent()[0]);
		searchEntryUsingSymbol(symbolDereferenced);
	}
	else if (std::holds_alternative<ast::reference::Access<ast::node::VARNAME>>(symbol))
	{
		auto symbolDereferenced = std::get<ast::reference::Access<ast::node::VARNAME>>(symbol);
		linkedAstNode = const_cast<ast::node::VARNAME*>(symbolDereferenced.GetContent()[0]);
		searchEntryUsingSymbol(symbolDereferenced);
	}
}

void Celeste::ir::inputreconstruction::NameReference::ContinueResolveAccess(
	const ast::node::symbol_access* access)
{
	auto irComponentBase = GetFinalLinkedIr();
	if (!irComponentBase.has_value())
	{
		// Invalid
		return;
	}
	auto irComponent = irComponentBase.value();

	auto reference = ast::reference::Access(access);
	auto symbolAccess = std::make_unique<SymbolAccess>(this, reference);
	if (linkedIrViaAccess.empty())
	{
		symbolAccess->SetParent(this);
	}
	else
	{
		symbolAccess->SetParent(GetFinalLinkedCombination().get());
		GetFinalLinkedCombination()->Add(symbolAccess.get());
	}

	symbolAccess->SetFile(GetFile());
	symbolAccess->Complete();

	// Resolving Logic is delegated to Symbol Access object
	symbolAccess->Resolve();

	linkedIrViaAccess.push_back(std::move(symbolAccess));
}

void Celeste::ir::inputreconstruction::NameReference::Resolve()
{
	if (std::holds_alternative<ast::node::VARNAME*>(symbolReference))
	{
		auto varname = std::get<ast::node::VARNAME*>(symbolReference);
		if (GetType() != Type::SymbolReferenceCall)
		{
			linkedAstNode = varname;
			staticallyResolvable = true;
		}
		else
		{
			if (GetParent()->GetType() == Type::NameReference)
			{
				auto parent = static_cast<NameReference*>(GetParent());
				ContinueResolve(parent->linkedIr.value(), varname, {}, parent);
			}
			else
			{
				ContinueResolve(GetParent(), varname, {});
			}
		}
	}
	else if (std::holds_alternative<ast::node::symbol_reference*>(symbolReference))
	{
		auto symbolRef = std::get<ast::node::symbol_reference*>(symbolReference);
		auto symbolRefAccess = ast::reference::Access<ast::node::symbol_reference>(symbolRef);
		auto symbol = symbolRefAccess.symbol();

		auto symbol_name = symbol.symbol_name().GetContent()[0];
		linkedAstNode = const_cast<::deamer::external::cpp::ast::Node*>(
			static_cast<const ::deamer::external::cpp::ast::Node*>(symbol_name));

		if (GetType() != Type::SymbolReferenceCall && symbol.symbol_access().GetContent().empty())
		{
			// Nullptr may only be used to specify that there is no linked IR
			// and that this is okay.
			linkedIr = nullptr;
			staticallyResolvable = true;
			return;
		}

		// As we need to run the code to evaluate resolved names
		staticallyResolvable = false;

		// Calculate the next symbols
		auto calculateNextSymbols = [&]() {
			std::vector<std::variant<ast::reference::Access<ast::node::symbol>,
									 ast::reference::Access<ast::node::symbol_secondary>,
									 ast::reference::Access<ast::node::VARNAME>>>
				nextSymbol;
			for (auto secondary_symbol : symbolRefAccess.symbol_secondary().GetContent())
			{
				nextSymbol.emplace_back(secondary_symbol);
			}
			return nextSymbol;
		};

		// If there is an access, then the symbol is not generating but referencing. Thus we
		// need to reference it. The access part will use this object to continue the resolving.
		//
		// Reasoning behind passing the parent.
		// The parent of the NameReference is each either a Resolved Name Reference Or, the
		// starting IR. In case it is a NameReference, we must retrieve the linked IR.
		// Otherwise, we already have a fresh starting point as we start with resolving.
		if (GetParent()->GetType() == Type::NameReference ||
			GetParent()->GetType() == Type::SymbolReferenceCall ||
			GetParent()->GetType() == Type::TypeConstruct)
		{
			auto parent = static_cast<NameReference*>(GetParent());
			ContinueResolve(parent->linkedIr.value(), symbol, calculateNextSymbols(), parent);
		}
		else
		{
			ContinueResolve(GetParent(), symbol, calculateNextSymbols());
		}
	}
}

::deamer::external::cpp::ast::Node* Celeste::ir::inputreconstruction::NameReference::GetNode()
{
	if (std::holds_alternative<ast::node::VARNAME*>(symbolReference))
	{
		return std::get<ast::node::VARNAME*>(symbolReference);
	}
	else if (std::holds_alternative<ast::node::symbol_reference*>(symbolReference))
	{
		return std::get<ast::node::symbol_reference*>(symbolReference);
	}

	return nullptr;
}

std::string Celeste::ir::inputreconstruction::NameReference::GetResolvedName()
{
	if (CanStaticallyBeResolved())
	{
		return linkedAstNode->GetText();
	}

	// It is not statically resolvable, i.e. we need to interpreter code to find the name.
	return "";
}

bool Celeste::ir::inputreconstruction::NameReference::CanStaticallyBeResolved()
{
	return staticallyResolvable;
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::NameReference::GetFinalLinkedIr()
{
	if (linkedIrViaAccess.empty())
	{
		return linkedIr;
	}

	return (*std::rbegin(linkedIrViaAccess))->GetLinkedIr();
}

std::unique_ptr<Celeste::ir::inputreconstruction::SymbolAccess>&
Celeste::ir::inputreconstruction::NameReference::GetFinalLinkedCombination()
{
	if (linkedIrViaAccess.empty())
	{
		throw std::logic_error("There is no last Access");
	}

	return (*std::rbegin(linkedIrViaAccess));
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::NameReference::GetResolvedLinkedIr()
{
	if (nameReferenceSecondary.has_value())
	{
		return nameReferenceSecondary.value()->GetResolvedLinkedIr();
	}

	if (linkedIrViaAccess.empty())
	{
		return GetFinalLinkedIr();
	}

	return GetFinalLinkedCombination()->GetLinkedIr();
}

void Celeste::ir::inputreconstruction::NameReference::SetLinkedIr(
	InputReconstructionObject* newLinkedIr_)
{
	linkedIr = newLinkedIr_;
}

std::string Celeste::ir::inputreconstruction::NameReference::GetSymbolName()
{
	return symbolName;
}
