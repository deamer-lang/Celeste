#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"

Celeste::ir::inputreconstruction::Decimal::Decimal(ast::node::DECIMAL* decimal_)
	: InputReconstructionObject(Type::Decimal),
	  decimal(decimal_)
{
}

double Celeste::ir::inputreconstruction::Decimal::GetEvaluation()
{
	return std::stod(decimal->GetText());
}
