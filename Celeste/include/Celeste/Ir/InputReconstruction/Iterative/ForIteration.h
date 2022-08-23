#ifndef CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class ForIteration : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		ForIteration(std::unique_ptr<Expression> expression_);
		virtual ~ForIteration() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H
