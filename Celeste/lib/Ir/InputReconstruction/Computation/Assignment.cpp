#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::Assignment::Assignment(
	std::unique_ptr<SymbolReferenceCall> symbolReference_, std::unique_ptr<Expression> expression_,
	ast::node::assignment_operator* assignmentOperator_)
	: InputReconstructionObject(Type::Assignment),
	  symbolReference(std::move(symbolReference_)),
	  expression(std::move(expression_)),
	  assignmentOperator(assignmentOperator_)
{
}

void Celeste::ir::inputreconstruction::Assignment::Complete()
{
	symbolReference->SetParent(this);
	symbolReference->SetFile(GetFile());

	expression->SetParent(this);
	expression->SetFile(GetFile());
	expression->Resolve();
}
