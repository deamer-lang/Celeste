#include "Celeste/Ir/InputReconstruction/Computation/Return.h"

Celeste::ir::inputreconstruction::Return::Return(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::Return),
	  expression(std::move(expression_))
{
}
