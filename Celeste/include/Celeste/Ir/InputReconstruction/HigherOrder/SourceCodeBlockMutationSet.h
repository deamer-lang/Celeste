#ifndef CELESTE_INPUTRECONSTRUCTION_HIGHERORDER_SOURCECODEBLOCKMUTATIONSET_H
#define CELESTE_INPUTRECONSTRUCTION_HIGHERORDER_SOURCECODEBLOCKMUTATIONSET_H

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class CodeBlock;

	struct SourceCodeBlockMutationSet
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		SourceCodeBlockMutationSet(CodeBlock* codeBlock_);
		~SourceCodeBlockMutationSet();

		void ConstructCodeBlock();

	public:
		CodeBlock* GetCodeBlock();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_HIGHERORDER_SOURCECODEBLOCKMUTATIONSET_H
