#ifndef CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H
#define CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class If : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		If(std::unique_ptr<Expression> expression_);
		virtual ~If() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H
