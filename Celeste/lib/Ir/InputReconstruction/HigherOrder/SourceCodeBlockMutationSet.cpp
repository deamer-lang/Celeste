#include "Celeste/Ir/InputReconstruction/HigherOrder/SourceCodeBlockMutationSet.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"

struct Celeste::ir::inputreconstruction::SourceCodeBlockMutationSet::Impl
{
	CodeBlock* codeBlock;

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
