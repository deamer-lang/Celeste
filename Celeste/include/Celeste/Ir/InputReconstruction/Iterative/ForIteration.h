#ifndef CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Expression;

	class ForIteration : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		ForIteration(std::unique_ptr<Expression> expression_);
		virtual ~ForIteration() = default;
		void Complete();

	public:
		std::unique_ptr<Expression>& GetExpression();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H
