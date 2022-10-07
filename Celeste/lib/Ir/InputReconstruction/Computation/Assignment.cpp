#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"

struct Celeste::ir::inputreconstruction::Assignment::Impl
{
	std::unique_ptr<SymbolReferenceCall> symbolReference;
	std::unique_ptr<Expression> expression;
	ast::node::assignment_operator* assignmentOperator = nullptr;

	Impl()
	{
	}

	Impl(std::unique_ptr<SymbolReferenceCall> symbolReference_,
		 std::unique_ptr<Expression> expression_,
		 ast::node::assignment_operator* assignmentOperator_)
		: symbolReference(std::move(symbolReference_)),
		  expression(std::move(expression_)),
		  assignmentOperator(assignmentOperator_)
	{
	}

	~Impl() = default;

	std::unique_ptr<Impl> DeepCopy(Assignment* newParent)
	{
		auto newImpl = std::make_unique<Impl>();
		newImpl->assignmentOperator = assignmentOperator;

		newImpl->symbolReference = std::unique_ptr<SymbolReferenceCall>(
			static_cast<SymbolReferenceCall*>(symbolReference->DeepCopy().release()));
		newImpl->symbolReference->SetParent(newParent);

		newImpl->expression =
			std::unique_ptr<Expression>(static_cast<Expression*>(expression->DeepCopy().release()));
		newImpl->expression->SetParent(newParent);

		return std::move(newImpl);
	}
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

Celeste::ir::inputreconstruction::Assignment::Assignment(const Assignment& rhs)
	: InputReconstructionObject(rhs),
	  impl(rhs.impl->DeepCopy(this))
{
}

std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>&
Celeste::ir::inputreconstruction::Assignment::GetLhs()
{
	return impl->symbolReference;
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::Assignment::GetRhs()
{
	return impl->expression;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Assignment::DeepCopy()
{
	return std::make_unique<Assignment>(*this);
}
