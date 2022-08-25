#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"

struct Celeste::ir::inputreconstruction::Assignment::Impl
{
	std::unique_ptr<SymbolReferenceCall> symbolReference;
	std::unique_ptr<Expression> expression;
	ast::node::assignment_operator* assignmentOperator;

	Impl(std::unique_ptr<SymbolReferenceCall> symbolReference_,
		 std::unique_ptr<Expression> expression_,
		 ast::node::assignment_operator* assignmentOperator_)
		: symbolReference(std::move(symbolReference_)),
		  expression(std::move(expression_)),
		  assignmentOperator(assignmentOperator_)
	{
	}

	~Impl() = default;
};

Celeste::ir::inputreconstruction::Assignment::Assignment(
	std::unique_ptr<SymbolReferenceCall> symbolReference_, std::unique_ptr<Expression> expression_,
	ast::node::assignment_operator* assignmentOperator_)
	: InputReconstructionObject(Type::Assignment),
	  impl(std::make_unique<Impl>(std::move(symbolReference_), std::move(expression_),
								  assignmentOperator_))
{
}

Celeste::ir::inputreconstruction::Assignment::~Assignment()
{
}

void Celeste::ir::inputreconstruction::Assignment::Complete()
{
	impl->expression->SetParent(this);
	impl->expression->SetFile(GetFile());

	impl->symbolReference->SetParent(this);
	impl->symbolReference->SetFile(GetFile());
}
