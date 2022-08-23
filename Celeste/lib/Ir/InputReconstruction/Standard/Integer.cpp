#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"

Celeste::ir::inputreconstruction::Integer::Integer(ast::node::NUMBER* integer_)
	: InputReconstructionObject(Type::Integer),
	  integer(integer_)
{
}

int Celeste::ir::inputreconstruction::Integer::GetEvaluation()
{
	return std::stoi(integer->GetText());
}
