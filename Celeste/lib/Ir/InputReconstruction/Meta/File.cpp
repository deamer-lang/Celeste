#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/HigherOrder/SourceCodeBlockMutationSet.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"

struct Celeste::ir::inputreconstruction::File::Impl
{
	std::unique_ptr<deamer::external::cpp::ast::Tree> ast;
	std::vector<std::unique_ptr<InputReconstructionObject>> inputReconstructionObjects;
	Project* project = nullptr;
	std::string fileName;
	std::vector<InputReconstructionObject*> unresolvedSymbolReferenceCalls;
	std::vector<std::unique_ptr<SourceCodeBlockMutationSet>> unresolvedCodeBlocks;

	Impl(std::string fileName_) : fileName(fileName_)
	{
	}

	~Impl() = default;
};

Celeste::ir::inputreconstruction::File::File(std::string fileName_)
	: impl(std::make_unique<Impl>(fileName_))
{
}

Celeste::ir::inputreconstruction::File::~File()
{
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
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::File::GetUnresolvedSymbolReferences()
{
	return impl->unresolvedSymbolReferenceCalls;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::File::GetIrBottom()
{
	auto targetScope = GetRoot()->GetScope();
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

	for (auto& element : impl->inputReconstructionObjects)
	{
		if (element->GetType() == Type::Class)
		{
			auto classElement = static_cast<Class*>(element.get());
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
			auto unresolved_ =
				static_cast<Celeste::ir::inputreconstruction::NameReference*>(currentElement);
			unresolved_->Resolve();

			if (!unresolved_->GetResolvedLinkedIr().has_value())
			{
				newUnresolvedReferences.push_back(unresolved_);
			}
		}

		callback(currentElement);
	}
}

void Celeste::ir::inputreconstruction::File::AddCodeBlock(CodeBlock* codeBlock_)
{
	impl->unresolvedCodeBlocks.push_back(std::make_unique<SourceCodeBlockMutationSet>(codeBlock_));
}
