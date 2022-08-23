#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CODEBLOCK_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CODEBLOCK_H

#include "Celeste/Ast/Node/code_block.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class CodeBlock : public InputReconstructionObject
	{
	private:
		ast::node::code_block* value;

	public:
		CodeBlock(ast::node::code_block* value_);
		virtual ~CodeBlock() = default;

	public:
		void Resolve();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CODEBLOCK_H
