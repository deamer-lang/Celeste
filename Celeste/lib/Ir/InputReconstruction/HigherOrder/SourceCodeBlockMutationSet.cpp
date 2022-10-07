#include "Celeste/Ir/InputReconstruction/HigherOrder/SourceCodeBlockMutationSet.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"

struct Celeste::ir::inputreconstruction::SourceCodeBlockMutationSet::Impl
{
	CodeBlock* codeBlock;

	// This is most likely useless, as codeblocks cannot overlap.
	// As overlapping codeblocks are the same codeblock scope.
	std::vector<InputReconstructionObject*> objectsBelongingToGroup;

	Impl(CodeBlock* codeBlock_) : codeBlock(codeBlock_)
	{
	}
};

Celeste::ir::inputreconstruction::SourceCodeBlockMutationSet::SourceCodeBlockMutationSet(
	CodeBlock* codeBlock_)
	: impl(std::make_unique<Impl>(codeBlock_))
{
}

Celeste::ir::inputreconstruction::SourceCodeBlockMutationSet::~SourceCodeBlockMutationSet()
{
}

void Celeste::ir::inputreconstruction::SourceCodeBlockMutationSet::ConstructCodeBlock()
{
	std::vector<InputReconstructionObject*> newElements = {impl->codeBlock};
	while (!newElements.empty())
	{
		auto currentElement = newElements[0];
		impl->objectsBelongingToGroup.push_back(currentElement);
		currentElement->SetGroupType(GroupType::CodeBlock);
		newElements.erase(std::cbegin(newElements));

		auto references = currentElement->GetReferencesToThisObject();
		if (references.empty())
		{
			auto parent = currentElement->GetParent();
			if (parent->GetType() == Type::Expression &&
				parent->GetType() == Type::VariableDeclaration && parent->GetType() == Type::Value)
			{
				// Default to parent marking
				newElements.push_back(parent);
			}
		}
		else
		{
			for (auto referencesToThisObject : references)
			{
				newElements.push_back(referencesToThisObject);
			}
		}
	}
}

Celeste::ir::inputreconstruction::CodeBlock*
Celeste::ir::inputreconstruction::SourceCodeBlockMutationSet::GetCodeBlock()
{
	return impl->codeBlock;
}
