#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/HigherOrder/SourceCodeBlockMutationSet.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include <set>

struct Celeste::ir::inputreconstruction::File::Impl
{
	std::unique_ptr<deamer::external::cpp::ast::Tree> ast;
	std::vector<std::unique_ptr<InputReconstructionObject>> inputReconstructionObjects;
	Project* project = nullptr;
	std::string fileName;
	std::vector<InputReconstructionObject*> unresolvedSymbolReferenceCalls;
	std::set<InputReconstructionObject*> unresolvedSymbolReferenceCallsPreReset;
	std::vector<std::unique_ptr<SourceCodeBlockMutationSet>> resolvedCodeBlocks;
	std::vector<std::unique_ptr<SourceCodeBlockMutationSet>> unresolvedCodeBlocks;

	Impl(const std::string& fileName_) : fileName(fileName_)
	{
	}

	~Impl() = default;
};

Celeste::ir::inputreconstruction::File::File(const std::string& fileName_)
	: impl(std::make_unique<Impl>(fileName_))
{
}

Celeste::ir::inputreconstruction::File::~File()
{
	// This guarantees that the objects destruct before the file destructs.
	impl->inputReconstructionObjects.clear();
}

void Celeste::ir::inputreconstruction::File::SetProject(Project* project_)
{
	impl->project = project_;
}

Celeste::ir::inputreconstruction::Project* Celeste::ir::inputreconstruction::File::GetProject()
{
	return impl->project;
}

void Celeste::ir::inputreconstruction::File::AddInputReconstructionObject(
	std::unique_ptr<InputReconstructionObject> inputReconstructionObject_)
{
	inputReconstructionObject_->SetFile(this);
	impl->inputReconstructionObjects.push_back(std::move(inputReconstructionObject_));
}

std::string Celeste::ir::inputreconstruction::File::GetFileName()
{
	return impl->fileName;
}

void Celeste::ir::inputreconstruction::File::SetAst(
	std::unique_ptr<deamer::external::cpp::ast::Tree> ast_)
{
	impl->ast = std::move(ast_);
}

deamer::external::cpp::ast::Tree* Celeste::ir::inputreconstruction::File::GetAst()
{
	return impl->ast.get();
}

void Celeste::ir::inputreconstruction::File::AddUnresolvedSymbolReference(
	InputReconstructionObject* unresolvedSymbolReferenceCall)
{
	impl->unresolvedSymbolReferenceCalls.push_back(unresolvedSymbolReferenceCall);
	impl->unresolvedSymbolReferenceCallsPreReset.insert(unresolvedSymbolReferenceCall);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::File::GetUnresolvedSymbolReferences()
{
	return impl->unresolvedSymbolReferenceCalls;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::File::GetIrBottom()
{
	auto root = GetRoot();
	if (root == nullptr)
	{
		return nullptr;
	}

	auto targetScope = root->GetScope();
	if (targetScope.empty())
	{
		return nullptr;
	}

	return *std::rbegin(targetScope);
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::File::GetRoot()
{
	// Root
	if (impl->inputReconstructionObjects.empty())
	{
		// File has no root
		return nullptr;
	}

	return std::begin(impl->inputReconstructionObjects)->get();
}

std::optional<Celeste::ir::inputreconstruction::Class*>
Celeste::ir::inputreconstruction::File::GetClass(std::string className, bool expandImports)
{
	if (expandImports)
	{
		std::cout
			<< "Expanded Imports are not yet implemented yet. Defaulting to non import usage.\n";
	}

	for (auto& element : GetRoot()->GetScope())
	{
		if (element->GetType() == Type::Class)
		{
			auto classElement = static_cast<Class*>(element);
			if (classElement->GetClassName()->GetResolvedName() == className)
			{
				return classElement;
			}
		}
		else if (element->GetType() == Type::InlineClass)
		{
			std::cout << "Inlined classes are not yet evaluatable\n";
		}
	}

	// Failed to find a class name
	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Function*>
Celeste::ir::inputreconstruction::File::GetFunction(const std::string& functionName,
													bool expandImports)
{
	if (expandImports)
	{
		std::cout
			<< "Expanded Imports are not yet implemented yet. Defaulting to non import usage.\n";
	}

	for (auto& element : GetRoot()->GetScope())
	{
		if (element->GetType() == Type::Function)
		{
			auto functionElement = static_cast<Function*>(element);
			if (functionElement->GetFunctionName()->GetResolvedName() == functionName)
			{
				return functionElement;
			}
		}
	}

	// Failed to find a function name
	return std::nullopt;
}

Celeste::ir::inputreconstruction::Class*
Celeste::ir::inputreconstruction::File::CreateClass(const std::string& className)
{
	auto nameReference = std::make_unique<NameReference>(className);
	nameReference->SetFile(this);
	auto newClass = std::make_unique<Class>(std::move(nameReference));
	newClass->SetParent(GetRoot());
	newClass->SetFile(this);
	newClass->Complete();

	newClass->CreateDefaultConstructor();

	auto newClassPtr = newClass.get();
	GetRoot()->Add(std::move(newClass));
	return newClassPtr;
}

Celeste::ir::inputreconstruction::Function*
Celeste::ir::inputreconstruction::File::CreateFunction(const std::string& className,
													   const std::string& returnType)
{
	std::unique_ptr<SymbolReferenceCall> symbolReference;
	if (returnType.empty())
	{
		symbolReference = std::make_unique<SymbolReferenceCall>("void");
	}
	else
	{
		symbolReference = std::make_unique<SymbolReferenceCall>(returnType);
	}
	symbolReference->SetFile(this);

	auto nameReference = std::make_unique<NameReference>(className);
	nameReference->SetFile(this);

	auto typeConstruct = std::make_unique<TypeConstruct>(std::move(symbolReference));
	typeConstruct->SetFile(this);

	auto newFunction =
		std::make_unique<Function>(std::move(nameReference), std::move(typeConstruct));
	newFunction->SetFile(this);
	newFunction->SetParent(GetRoot());
	newFunction->Complete();

	auto newFunctionPtr = newFunction.get();
	GetRoot()->Add(std::move(newFunction));
	return newFunctionPtr;
}

void Celeste::ir::inputreconstruction::File::ResetReferences()
{
	impl->unresolvedSymbolReferenceCalls.clear();

	while (!impl->unresolvedSymbolReferenceCallsPreReset.empty())
	{
		unregisterFlag = false;
		auto _ = *std::begin(impl->unresolvedSymbolReferenceCallsPreReset);
		impl->unresolvedSymbolReferenceCallsPreReset.erase(
			std::begin(impl->unresolvedSymbolReferenceCallsPreReset));
		impl->unresolvedSymbolReferenceCalls.push_back(_);

		if (_->GetType() == Type::NameReference)
		{
			static_cast<NameReference*>(_)->Reset();
		}
		else if (_->GetType() == Type::SymbolReferenceCall)
		{
			static_cast<SymbolReferenceCall*>(_)->Reset();
		}
	}

	impl->unresolvedSymbolReferenceCallsPreReset.clear();
	for (auto& _ : impl->unresolvedSymbolReferenceCalls)
	{
		impl->unresolvedSymbolReferenceCallsPreReset.insert(_);
	}
}

void Celeste::ir::inputreconstruction::File::RemoveCodeBlock(CodeBlock* codeBlock)
{
	for (auto iter = std::begin(impl->unresolvedCodeBlocks);
		 iter != std::end(impl->unresolvedCodeBlocks); ++iter)
	{
		if ((*iter)->GetCodeBlock() == codeBlock)
		{
			impl->unresolvedCodeBlocks.erase(iter);
			return;
		}
	}

	for (auto iter = std::begin(impl->resolvedCodeBlocks);
		 iter != std::end(impl->resolvedCodeBlocks); ++iter)
	{
		if ((*iter)->GetCodeBlock() == codeBlock)
		{
			impl->resolvedCodeBlocks.erase(iter);
			return;
		}
	}
}

void Celeste::ir::inputreconstruction::File::Unregister(NameReference* nameReference)
{
	if (nameReference->GetType() == Type::SymbolResolveSecondary)
	{
		return;
	}

	unregisterFlag = true;
	auto iter = impl->unresolvedSymbolReferenceCallsPreReset.find(nameReference);
	if (iter != impl->unresolvedSymbolReferenceCallsPreReset.end())
	{
		impl->unresolvedSymbolReferenceCallsPreReset.erase(iter);
	}

	auto iter2 = std::find(std::cbegin(impl->unresolvedSymbolReferenceCalls),
						   std::cend(impl->unresolvedSymbolReferenceCalls), nameReference);
	if (iter2 != impl->unresolvedSymbolReferenceCalls.end())
	{
		impl->unresolvedSymbolReferenceCalls.erase(iter2);
	}
}

void Celeste::ir::inputreconstruction::File::RemoveUnresolvedReference(
	SymbolReferenceCall* symbolReferenceCall)
{
	for (auto iter = std::cbegin(impl->unresolvedSymbolReferenceCalls);
		 iter != std::cend(impl->unresolvedSymbolReferenceCalls); ++iter)
	{
		if (*iter == symbolReferenceCall)
		{
			impl->unresolvedSymbolReferenceCalls.erase(iter);
			std::cout << "Removing not yet resolved reference\n";
			return;
		}
	}

	// It is already resolved
	std::cout << "Already resolved\n";
	return;
}

void Celeste::ir::inputreconstruction::File::ResolveReferences(
	std::function<void(InputReconstructionObject*)> callback)
{
	std::vector<InputReconstructionObject*> newUnresolvedReferences;
	while (!impl->unresolvedSymbolReferenceCalls.empty())
	{
		auto currentElement = impl->unresolvedSymbolReferenceCalls[0];
		impl->unresolvedSymbolReferenceCalls.erase(
			std::cbegin(impl->unresolvedSymbolReferenceCalls));

		auto nameReference =
			static_cast<Celeste::ir::inputreconstruction::NameReference*>(currentElement);
		if (nameReference->GetFinalLinkedIr().has_value())
		{
			// If it has a value then it is already resolved,
			// This sometimes occurs more investigation required to optimize this.
			continue;
		}

		if (currentElement->GetType() == Type::SymbolReferenceCall)
		{
			auto unresolved_ =
				static_cast<Celeste::ir::inputreconstruction::SymbolReferenceCall*>(currentElement);

			unresolved_->Resolve();

			if (!unresolved_->GetResolvedLinkedIr().has_value())
			{
				newUnresolvedReferences.push_back(unresolved_);
			}
		}
		else if (currentElement->GetType() == Type::NameReference)
		{
			auto unresolved_ = nameReference;
			unresolved_->Resolve();

			if (!unresolved_->GetResolvedLinkedIr().has_value())
			{
				newUnresolvedReferences.push_back(unresolved_);
			}
		}

		callback(currentElement);
	}
}

void Celeste::ir::inputreconstruction::File::IdentifyUpperCodeBlockScopes(
	std::function<void(SourceCodeBlockMutationSet*)> callback)
{
	while (!impl->unresolvedCodeBlocks.empty())
	{
		auto& currentCodeBlock = impl->unresolvedCodeBlocks[0];
		currentCodeBlock->ConstructCodeBlock();
		impl->resolvedCodeBlocks.push_back(std::move(currentCodeBlock));
		impl->unresolvedCodeBlocks.erase(std::cbegin(impl->unresolvedCodeBlocks));

		callback(currentCodeBlock.get());
	}
}

void Celeste::ir::inputreconstruction::File::AddCodeBlock(CodeBlock* codeBlock_)
{
	impl->unresolvedCodeBlocks.push_back(std::make_unique<SourceCodeBlockMutationSet>(codeBlock_));
}
