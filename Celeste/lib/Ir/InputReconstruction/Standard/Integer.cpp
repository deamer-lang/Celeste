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

int Celeste::ir::inputreconstruction::Integer::GetEvaluation()
{
	return constexprEvaluation;
}
