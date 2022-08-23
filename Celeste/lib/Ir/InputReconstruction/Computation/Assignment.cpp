#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"

Celeste::ir::inputreconstruction::Assignment::Assignment(
	std::unique_ptr<SymbolReferenceCall> symbolReference_, std::unique_ptr<Expression> expression_,
	ast::node::assignment_operator* assignmentOperator_)
	: InputReconstructionObject(Type::Assignment),
	  symbolReference(std::move(symbolReference_)),
	  expression(std::move(expression_)),
	  assignmentOperator(assignmentOperator_)
{
}
