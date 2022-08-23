#include "Celeste/Ir/InputReconstruction/Conditional/If.h"

Celeste::ir::inputreconstruction::If::If(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::If),
	  expression(std::move(expression_))
{
}
