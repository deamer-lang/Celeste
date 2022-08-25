#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/NameFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Display.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReferenceSecondary.h"
#include "Celeste/Ir/InputReconstruction/Computation/Return.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolDecrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolIncrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ConditionalFunction.h"
#include "Celeste/Ir/InputReconstruction/Import.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForIteration.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/Namespace.h"
#include <set>

struct Celeste::ir::inputreconstruction::NameReference::Impl
{
	std::vector<std::unique_ptr<SymbolAccess>> linkedIrViaAccess;
	std::vector<std::unique_ptr<SymbolAccess>> hiddenAccess;
	std::optional<std::unique_ptr<NameReferenceSecondary>> nameReferenceSecondary;
};

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
		bool addParent;
		bool addByNeighbour;

		ResolveArgument(InputReconstructionObject* originObject_ = nullptr,
						Direction direction_ = Direction::Up, bool addParent_ = true,
						bool addByNeighbour_ = false)
			: originObject(originObject_),
			  direction(direction_),
			  addParent(addParent_),
			  addByNeighbour(addByNeighbour_)
		{
		}
	};

private:
	std::set<File*> importedFiles;
	NameReference* reference;
	deamer::external::cpp::ast::Node* symbol;
	std::string symbolName;
	std::size_t accessCount = 0;

	std::optional<InputReconstructionObject*> resultEntryPoint;
	std::vector<std::pair<InputReconstructionObject*, ResolveArgument>> uncheckedList;

public:
	ResolveLogic(NameReference* reference_,
				 std::variant<ast::reference::Access<ast::node::symbol>,
							  ast::reference::Access<ast::node::symbol_secondary>,
							  ast::reference::Access<ast::node::VARNAME>>
					 symbol_)
		: reference(reference_)
	{
		uncheckedList.emplace_back(reference, ResolveArgument{nullptr, Direction::Up, true});

		if (std::holds_alternative<ast::reference::Access<ast::node::VARNAME>>(symbol_))
		{
			auto node = std::get<ast::reference::Access<ast::node::VARNAME>>(symbol_);
			symbolName = node.GetContent()[0]->GetText();
			symbol = const_cast<::deamer::external::cpp::ast::Node*>(
				static_cast<const ::deamer::external::cpp::ast::Node*>(node.GetContent()[0]));
		}
		else if (std::holds_alternative<ast::reference::Access<ast::node::symbol>>(symbol_))
		{
			auto node = std::get<ast::reference::Access<ast::node::symbol>>(symbol_);
			symbolName = node.symbol_name().GetContent()[0]->GetText();
			symbol = const_cast<::deamer::external::cpp::ast::Node*>(
				static_cast<const ::deamer::external::cpp::ast::Node*>(node.GetContent()[0]));
		}
		else if (std::holds_alternative<ast::reference::Access<ast::node::symbol_secondary>>(
					 symbol_))
		{
			auto node = std::get<ast::reference::Access<ast::node::symbol_secondary>>(symbol_);
			symbolName = node.symbol_name_secondary().GetContent()[0]->GetText();
			symbol = const_cast<::deamer::external::cpp::ast::Node*>(
				static_cast<const ::deamer::external::cpp::ast::Node*>(node.GetContent()[0]));
		}
		else
		{
			// Internal Compiler Error
			symbol = nullptr;
		}
		reference->SetLinkedAst(symbol);
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
			reference->SetLinkedIr(resultEntryPoint.value());
			ContinueAccessImpl();

			return resultEntryPoint.value();
		}

		// Construct an Error
		return nullptr;
	}

	deamer::external::cpp::ast::Node* GetSymbol()
	{
		return symbol;
	}

	std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
	GetSymbolVariant()
	{
		if (GetSymbol()->GetType() == ast::Type::VARNAME)
		{
			return static_cast<ast::node::VARNAME*>(GetSymbol());
		}
		else if (GetSymbol()->GetType() == ast::Type::symbol)
		{
			return static_cast<ast::node::symbol*>(GetSymbol());
		}
		else if (GetSymbol()->GetType() == ast::Type::symbol_secondary)
		{
			return static_cast<ast::node::symbol_secondary*>(GetSymbol());
		}
		else
		{
			// Invalid Compiler Error
			throw std::logic_error("Invalid Compiler Error");
		}
	}

	std::string GetSymbolName()
	{
		return symbolName;
	}

	void SetEntryPoint(InputReconstructionObject* linkedIr)
	{
		resultEntryPoint = linkedIr;
	}

	bool EnterableNamespace(Namespace* import)
	{
		// Not yet implemented
		return true;
	}

	void ContinueAccess(std::size_t i = 0)
	{
		accessCount = i;
	}

	void ContinueAccessImpl()
	{
		for (std::size_t i = 0; i < accessCount; i++)
		{
			reference->impl->hiddenAccess.push_back(
				std::move(reference->impl->linkedIrViaAccess[0]));
			reference->impl->linkedIrViaAccess.erase(
				std::begin(reference->impl->linkedIrViaAccess));
		}

		for (std::size_t i = 0; i < reference->impl->linkedIrViaAccess.size(); i++)
		{
			reference->ContinueResolveAccess(i);
		}
	}

	bool IsBiDirectional(Type type_)
	{
		switch (type_)
		{
		case Type::Root:
		case Type::Namespace:
		case Type::Enumeration:
		case Type::Class: {
			return true;
		}
		default: {
			return false;
		}
		}
	}

	bool HasFunctionAccess()
	{
		return !reference->GetSymbolAccesses().empty() &&
			   reference->GetSymbolAccesses()[0]->IsFunctionAccess();
	}

	void EntryPointCheck(InputReconstructionObject* uncheckedMember, ResolveArgument argument)
	{
		if (uncheckedMember == argument.originObject)
		{
			std::cout
				<< "Internal Non-Critical Compiler Error, UncheckedMember is already Checked\n";
			return;
		}

		if (uncheckedMember == nullptr)
		{
			// This may never occur
			// Finalize, and stop resolving
			// Also construct Internal Compiler Error
			std::cout << "Invalid Starting Ir, should not occur\n";
			Finalize();
			return;
		}

		switch (uncheckedMember->GetType())
		{
		case Type::Root: {
			// Failed to resolve
			break;
		}
		case Type::Import: {
			auto irComponent = static_cast<Import*>(uncheckedMember);
			importedFiles.insert(irComponent->GetFile());

			// If the targeted file is already imported, ignore the import.
			if (importedFiles.find(irComponent->GetTarget()) != importedFiles.end())
			{
				return;
			}

			auto targetFile = irComponent->GetTarget();
			if (targetFile == nullptr)
			{
				std::cout << "Referenced Import File does not exist\n";
				return;
			}

			auto next = targetFile->GetIrBottom();
			if (next == nullptr)
			{
				// Target File is empty, and thus useless
				return;
			}

			std::size_t addedCounter = 0;
			for (auto iter = next->GetParent()->GetReverseIterator(next);
				 iter != next->GetParent()->rend(); ++iter)
			{
				Direction direction = argument.direction;
				auto currentElement = *iter;
				if (currentElement->GetType() == Type::Namespace)
				{
					direction = Direction::Down;
				}

				// The referenced File objects may not add the Parent,
				// As we are already starting at the top.
				// Adding the parent will only result in infinite loops
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{currentElement, ResolveArgument{irComponent, direction, false}});
			}
			return;
		}
		case Type::Namespace: {
			auto irComponent = static_cast<Namespace*>(uncheckedMember);
			std::size_t addedCounter = 0;

			if (argument.direction == Direction::Down && EnterableNamespace(irComponent))
			{
				// We may enter the namespace
				for (auto iter = irComponent->rbegin(); iter != irComponent->rend(); ++iter)
				{
					auto currentElement = *iter;
					Direction direction = argument.direction;
					if (currentElement->GetType() == Type::Namespace)
					{
						direction = Direction::Down;
					}

					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{currentElement, ResolveArgument{irComponent, direction, false}});
				}
			}

			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				// Both ways as namespaces can only occur in bi directional accessable blocks.
				for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
					 iter != irComponent->GetParent()->end(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}
			if (argument.addParent && argument.direction == Direction::Up)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}

			break;
		}
		case Type::CodeBlock: {
			auto irComponent = static_cast<CodeBlock*>(uncheckedMember);
			std::size_t addedCounter = 0;

			if (argument.addParent && argument.direction == Direction::Up)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::Enumeration: {
			auto irComponent = static_cast<Enumeration*>(uncheckedMember);
			if (irComponent->GetName()->GetResolvedName() == GetSymbolName())
			{
				// This is what we need
				SetEntryPoint(irComponent);
				ContinueAccess();

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}
			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::Class: {
			auto irComponent = static_cast<Class*>(uncheckedMember);
			const auto symbolName = GetSymbolName();
			const auto className = irComponent->GetClassName()->GetResolvedName();
			if (className == symbolName)
			{
				if (!HasFunctionAccess())
				{
					// This is what we need
					SetEntryPoint(irComponent);
					ContinueAccess();

					Finalize();
					return;
				}

				auto constructor = irComponent->GetConstructor(reference);
				if (constructor.has_value())
				{
					SetEntryPoint(constructor.value());
					ContinueAccess();

					Finalize();
					return;
				}
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::VariableDeclaration: {
			auto irComponent = static_cast<VariableDeclaration*>(uncheckedMember);
			if (irComponent->GetName()->GetResolvedName() == GetSymbolName())
			{
				// This is what we need
				SetEntryPoint(irComponent);
				ContinueAccess();

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up &&
				irComponent->GetParent()->GetType() != Type::Class)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}
			else if (argument.direction == Direction::Up &&
					 irComponent->GetParent()->GetType() == Type::Class)
			{
				if (HasFunctionAccess())
				{
					auto foundMember = static_cast<Class*>(irComponent->GetParent())
										   ->GetMember(reference, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess(1);

						Finalize();
						return;
					}
				}
				else
				{
					auto foundMember =
						static_cast<Class*>(irComponent->GetParent())
							->GetMember(GetSymbolName(), std::nullopt, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess();

						Finalize();
						return;
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::Function: {
			auto irComponent = static_cast<Function*>(uncheckedMember);

			if (irComponent->GetFunctionName()->GetResolvedName() == GetSymbolName() &&
				irComponent->Accepts(reference))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				SetEntryPoint(irComponent);
				ContinueAccess(1);

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up &&
				irComponent->GetParent()->GetType() != Type::Class)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}
			else if (argument.direction == Direction::Up &&
					 irComponent->GetParent()->GetType() == Type::Class)
			{
				if (HasFunctionAccess())
				{
					auto foundMember = static_cast<Class*>(irComponent->GetParent())
										   ->GetMember(reference, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess(1);

						Finalize();
						return;
					}
				}
				else
				{
					auto foundMember =
						static_cast<Class*>(irComponent->GetParent())
							->GetMember(GetSymbolName(), std::nullopt, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess();

						Finalize();
						return;
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::CodeFunction: {
			auto irComponent = static_cast<CodeFunction*>(uncheckedMember);

			if (irComponent->GetFunctionName()->GetResolvedName() == GetSymbolName() &&
				irComponent->Accepts(GetSymbolVariant()))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				SetEntryPoint(irComponent);
				ContinueAccess(1);

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::NameFunction: {
			auto irComponent = static_cast<NameFunction*>(uncheckedMember);

			if (irComponent->GetFunctionName()->GetResolvedName() == GetSymbolName() &&
				irComponent->Accepts(GetSymbolVariant()))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				SetEntryPoint(irComponent);
				ContinueAccess(1);

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::ConditionalFunction: {
			auto irComponent = static_cast<ConditionalFunction*>(uncheckedMember);

			if (irComponent->GetFunctionName()->GetResolvedName() == GetSymbolName() &&
				irComponent->Accepts(GetSymbolVariant()))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				SetEntryPoint(irComponent);
				ContinueAccess(1);

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::FunctionArgument: {
			auto irComponent = static_cast<FunctionArgument*>(uncheckedMember);

			if (irComponent->GetName() == GetSymbolName() && !HasFunctionAccess())
			{
				SetEntryPoint(irComponent);
				ContinueAccess();
				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::SymbolIncrease: {
			auto irComponent = static_cast<SymbolIncrease*>(uncheckedMember);

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::SymbolDecrease: {
			auto irComponent = static_cast<SymbolDecrease*>(uncheckedMember);

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::ForIteration: {
			auto irComponent = static_cast<ForIteration*>(uncheckedMember);

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::ForEach: {
			auto irComponent = static_cast<ForEach*>(uncheckedMember);

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::Assignment: {
			auto irComponent = static_cast<Assignment*>(uncheckedMember);

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::Constructor: {
			auto irComponent = static_cast<Constructor*>(uncheckedMember);

			if (irComponent->GetFunctionName()->GetResolvedName() == GetSymbolName() &&
				irComponent->Accepts(reference))
			{
				// If the Function Name is the same as the Name we are searching for.
				// And the Access utilizes a Function Access,
				// And the Function accepts the Expression list.
				// Then this is our reference!
				SetEntryPoint(irComponent);
				ContinueAccess(1);

				Finalize();
				return;
			}

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up &&
				irComponent->GetParent()->GetType() != Type::Class)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}
			else if (argument.direction == Direction::Up &&
					 irComponent->GetParent()->GetType() == Type::Class)
			{
				if (HasFunctionAccess())
				{
					auto foundMember = static_cast<Class*>(irComponent->GetParent())
										   ->GetMember(reference, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess(1);

						Finalize();
						return;
					}
				}
				else
				{
					auto foundMember =
						static_cast<Class*>(irComponent->GetParent())
							->GetMember(GetSymbolName(), std::nullopt, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess();

						Finalize();
						return;
					}
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::SymbolReferenceCall: {
			auto irComponent = static_cast<SymbolReferenceCall*>(uncheckedMember);

			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		case Type::Display: {
		case Type::Return: {
			auto irComponent = static_cast<Return*>(uncheckedMember);
			if (argument.addByNeighbour)
			{
				return;
			}

			std::size_t addedCounter = 0;
			if (argument.direction == Direction::Up &&
				irComponent->GetParent()->GetType() != Type::Class)
			{
				for (auto iter = irComponent->GetParent()->GetReverseIterator(irComponent);
					 iter != irComponent->GetParent()->rend(); ++iter)
				{
					uncheckedList.insert(
						std::begin(uncheckedList) + addedCounter++,
						{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
				}

				if (IsBiDirectional(irComponent->GetParent()->GetType()))
				{
					for (auto iter = irComponent->GetParent()->GetIterator(irComponent);
						 iter != irComponent->GetParent()->end(); ++iter)
					{
						uncheckedList.insert(
							std::begin(uncheckedList) + addedCounter++,
							{*iter, ResolveArgument{irComponent, Direction::Up, true, true}});
					}
				}
			}
			else if (argument.direction == Direction::Up &&
					 irComponent->GetParent()->GetType() == Type::Class)
			{
				if (HasFunctionAccess())
				{
					auto foundMember = static_cast<Class*>(irComponent->GetParent())
										   ->GetMember(reference, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess(1);

						Finalize();
						return;
					}
				}
				else
				{
					auto foundMember =
						static_cast<Class*>(irComponent->GetParent())
							->GetMember(GetSymbolName(), std::nullopt, Accessibility::Private);
					if (foundMember != nullptr)
					{
						SetEntryPoint(foundMember);
						ContinueAccess();

						Finalize();
						return;
					}
				}
			}

			if (argument.direction == Direction::Up &&
				(irComponent->GetParent()->GetType() == Type::Function ||
				 irComponent->GetParent()->GetType() == Type::Constructor))
			{
				for (auto& functionArgument :
					 static_cast<Function*>(irComponent->GetParent())->GetFunctionArguments())
				{
					uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
										 {functionArgument.get(),
										  ResolveArgument{irComponent, Direction::Up, true, true}});
				}
			}

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(
					std::begin(uncheckedList) + addedCounter++,
					{irComponent->GetParent(), ResolveArgument{irComponent, Direction::Up, true}});
			}
			break;
		}
		default: {
			std::size_t addedCounter = 0;

			if (argument.direction == Direction::Up && argument.addParent)
			{
				uncheckedList.insert(std::begin(uncheckedList) + addedCounter++,
									 {uncheckedMember->GetParent(),
									  ResolveArgument{uncheckedMember, Direction::Up, true}});
			}
			else if (argument.direction == Direction::Down)
			{
				// Internal Compiler Error: Not Implemented
			}
			else
			{
				// Internal Compiler Error
			}

			break;
		}
		}
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
	  impl(std::make_unique<Impl>()),
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
	  impl(std::make_unique<Impl>()),
	  symbolReference(varname_),
	  staticallyResolvable(true)
{
	SetSymbolName(varname_->GetText());
}

Celeste::ir::inputreconstruction::NameReference::~NameReference()
{
}

std::vector<Celeste::ir::inputreconstruction::SymbolAccess*>
Celeste::ir::inputreconstruction::NameReference::GetSymbolAccesses()
{
	std::vector<Celeste::ir::inputreconstruction::SymbolAccess*> result;
	for (auto& access : impl->linkedIrViaAccess)
	{
		result.push_back(access.get());
	}
	return result;
}

Celeste::ir::inputreconstruction::NameReference::NameReference(Type forward_)
	: InputReconstructionObject(forward_),
	  impl(std::make_unique<Impl>())
{
}

Celeste::ir::inputreconstruction::NameReference::NameReference(
	Type forward_, ast::node::symbol_reference* symbolReference_)
	: InputReconstructionObject(forward_),
	  impl(std::make_unique<Impl>()),
	  symbolReference(symbolReference_)
{
}

Celeste::ir::inputreconstruction::NameReference::NameReference(Type forward_,
															   ast::node::VARNAME* symbolReference_)
	: InputReconstructionObject(forward_),
	  impl(std::make_unique<Impl>()),
	  symbolReference(symbolReference_),
	  staticallyResolvable(true)
{
}

void Celeste::ir::inputreconstruction::NameReference::CreateAccess(
	const Celeste::ast::reference::Access<Celeste::ast::node::symbol_access>& access)
{
	auto reference = ast::reference::Access(access);
	auto symbolAccess = std::make_unique<SymbolAccess>(this, reference);
	if (impl->linkedIrViaAccess.empty())
	{
		symbolAccess->SetParent(this);
	}
	else
	{
		symbolAccess->SetParent(GetFinalLinkedCombination());
		GetFinalLinkedCombination()->Add(symbolAccess.get());
	}

	symbolAccess->SetFile(GetFile());
	symbolAccess->Complete();
	impl->linkedIrViaAccess.push_back(std::move(symbolAccess));
}

void Celeste::ir::inputreconstruction::NameReference::SetLinkedAst(
	deamer::external::cpp::ast::Node* node)
{
	linkedAstNode = node;
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

std::variant<Celeste::ast::node::symbol*, Celeste::ast::node::symbol_secondary*,
			 Celeste::ast::node::VARNAME*>
Celeste::ir::inputreconstruction::NameReference::GetSymbolReferenceAst()
{
	if (GetType() == Type::SymbolResolveSecondary)
	{
		return static_cast<NameReferenceSecondary*>(this)->GetSymbolReferenceAst();
	}

	if (std::holds_alternative<ast::node::VARNAME*>(symbolReference))
	{
		return std::get<ast::node::VARNAME*>(symbolReference);
	}
	else if (std::holds_alternative<ast::node::symbol_reference*>(symbolReference))
	{
		auto access = ast::reference::Access<ast::node::symbol_reference>(
			std::get<ast::node::symbol_reference*>(symbolReference));
		if (!access.symbol().GetContent().empty())
		{
			return const_cast<ast::node::symbol*>(access.symbol().GetContent()[0]);
		}
		else if (!access.symbol_secondary().GetContent().empty())
		{
			return const_cast<ast::node::symbol_secondary*>(
				access.symbol_secondary().GetContent()[0]);
		}
		else
		{
			// Unsupported Syntax
			throw std::logic_error("Internal Compiler Error this should not occur.");
		}
	}
	else
	{
		// Internal compiler error
		throw std::logic_error("Internal Compiler Error this should not occur.");
	}
}

void Celeste::ir::inputreconstruction::NameReference::ContinueResolve(
	std::variant<ast::reference::Access<ast::node::symbol>,
				 ast::reference::Access<ast::node::symbol_secondary>,
				 ast::reference::Access<ast::node::VARNAME>>
		symbol)
{
	auto resolveLogic = ResolveLogic(this, symbol);
	auto entryPoint = resolveLogic.FindEntryPoint();

	if (std::holds_alternative<ast::node::symbol_reference*>(symbolReference))
	{
		std::vector<
			std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>>
			nextSymbols;
		for (auto secondary_symbol : ast::reference::Access<ast::node::symbol_reference>(
										 std::get<ast::node::symbol_reference*>(symbolReference))
										 .symbol_secondary()
										 .GetContent())
		{
			nextSymbols.emplace_back(const_cast<ast::node::symbol_secondary*>(secondary_symbol));
		}

		if (nextSymbols.empty())
		{
			// We are done
			return;
		}

		impl->nameReferenceSecondary = std::make_unique<NameReferenceSecondary>(nextSymbols[0]);
		impl->nameReferenceSecondary.value()->SetParent(this);
		impl->nameReferenceSecondary.value()->SetFile(GetFile());
		impl->nameReferenceSecondary.value()->Complete();
		nextSymbols.erase(std::cbegin(nextSymbols));
		impl->nameReferenceSecondary.value()->StartResolve(nextSymbols);
	}
}

void Celeste::ir::inputreconstruction::NameReference::ContinueResolveAccess(std::size_t i)
{
	// Resolving Logic is delegated to Symbol Access object
	impl->linkedIrViaAccess[i]->Resolve();
}

void Celeste::ir::inputreconstruction::NameReference::Resolve()
{
	resolveIsRan = true;

	// This may never be ran as secondary, as secondaries do not have an entry point logic.
	if (GetType() == Type::SymbolResolveSecondary)
	{
		return;
	}

	if (std::holds_alternative<ast::node::VARNAME*>(symbolReference))
	{
		auto varname = std::get<ast::node::VARNAME*>(symbolReference);
		SetSymbolName(varname->GetText());
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
				ContinueResolve(varname);
			}
			else
			{
				ContinueResolve(varname);
			}
		}
		initialized = true;
	}
	else if (std::holds_alternative<ast::node::symbol_reference*>(symbolReference))
	{
		if (!initialized)
		{
			auto access = ast::reference::Access<ast::node::symbol_reference>(
				std::get<ast::node::symbol_reference*>(symbolReference));
			if (!access.symbol().GetContent().empty())
			{
				access.symbol().symbol_access().for_all(
					[&](ast::reference::Access<ast::node::symbol_access> symbolAccess) {
						CreateAccess(symbolAccess);
					});
			}
			else if (!access.symbol_secondary().GetContent().empty())
			{
				access.symbol_secondary().symbol_access().for_all(
					[&](ast::reference::Access<ast::node::symbol_access> symbolAccess) {
						CreateAccess(symbolAccess);
					});
			}
			else
			{
				// Internal Compiler Error
			}
			initialized = true;
		}

		auto symbolRef = std::get<ast::node::symbol_reference*>(symbolReference);
		auto symbolRefAccess = ast::reference::Access<ast::node::symbol_reference>(symbolRef);
		auto symbol = symbolRefAccess.symbol();

		auto symbol_name = symbol.symbol_name().GetContent()[0];
		SetSymbolName(symbol_name->GetText());
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

		// If there is an access, then the symbol is not generating but referencing. Thus we
		// need to reference it. The access part will use this object to continue the resolving.
		//
		// Reasoning behind passing the parent.
		// The parent of the NameReference is each either a Resolved Name Reference Or, the
		// starting IR. In case it is a NameReference, we must retrieve the linked IR.
		// Otherwise, we already have a fresh starting point as we start with resolving.
		// DEPRECATED COMMENT
		//
		ContinueResolve(symbol);
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
	if (!resolveIsRan)
	{
		Resolve();
	}

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
	// Initial function accesses must be hidden
	// When they aren't then we know it failed resolution.
	if (impl->linkedIrViaAccess.empty() ||
		(impl->linkedIrViaAccess.size() == 1 &&
		 (*std::rbegin(impl->linkedIrViaAccess))->IsFunctionAccess()))
	{
		return linkedIr;
	}

	return (*std::rbegin(impl->linkedIrViaAccess))->GetLinkedIr();
}

Celeste::ir::inputreconstruction::SymbolAccess*
Celeste::ir::inputreconstruction::NameReference::GetFinalLinkedCombination()
{
	if (impl->linkedIrViaAccess.empty())
	{
		throw std::logic_error("There is no last Access");
	}

	return (*std::rbegin(impl->linkedIrViaAccess)).get();
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::NameReference::GetResolvedLinkedIr()
{
	if (!resolveIsRan && GetType() != Type::SymbolResolveSecondary)
	{
		Resolve();
	}

	if (impl->nameReferenceSecondary.has_value())
	{
		return impl->nameReferenceSecondary.value()->GetResolvedLinkedIr();
	}

	return GetFinalLinkedIr();
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
