#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"

Celeste::ir::inputreconstruction::Integer::Integer(ast::node::NUMBER* integer_)
	: InputReconstructionObject(Type::Integer),
	  integer(integer_)
{
	constexprEvaluation = std::stoi(integer->GetText());
}

Celeste::ir::inputreconstruction::Integer::Integer(int integer_)
	: InputReconstructionObject(Type::Integer)
{
	constexprEvaluation = integer_;
}

Celeste::ir::inputreconstruction::Integer::Integer(const Integer& rhs)
	: InputReconstructionObject(rhs),
	  integer(rhs.integer),
	  constexprEvaluation(rhs.constexprEvaluation)
{
}

int Celeste::ir::inputreconstruction::Integer::GetEvaluation()
{
	return constexprEvaluation;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Integer::DeepCopy()
{
	return std::make_unique<Integer>(*this);
}
