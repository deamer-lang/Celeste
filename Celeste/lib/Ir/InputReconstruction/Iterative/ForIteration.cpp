#include "Celeste/Ir/InputReconstruction/Iterative/ForIteration.h"

Celeste::ir::inputreconstruction::ForIteration::ForIteration(
	std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ForIteration),
	  expression(std::move(expression_))
{
}
