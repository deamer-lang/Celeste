#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"

Celeste::ir::inputreconstruction::Decimal::Decimal(ast::node::DECIMAL* decimal_)
	: InputReconstructionObject(Type::Decimal),
	  decimal(decimal_)
{
}

Celeste::ir::inputreconstruction::Decimal::Decimal(const Decimal& rhs)
	: InputReconstructionObject(rhs),
	  decimal(rhs.decimal),
	  constexprEvaluation(rhs.constexprEvaluation)
{
}

double Celeste::ir::inputreconstruction::Decimal::GetEvaluation()
{
	return std::stod(decimal->GetText());
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Decimal::DeepCopy()
{
	return std::make_unique<Decimal>(*this);
}
