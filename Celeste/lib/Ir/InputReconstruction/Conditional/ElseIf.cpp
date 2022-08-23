#include "Celeste/Ir/InputReconstruction/Conditional/ElseIf.h"

Celeste::ir::inputreconstruction::ElseIf::ElseIf(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ElseIf),
	  expression(std::move(expression_))
{
}
