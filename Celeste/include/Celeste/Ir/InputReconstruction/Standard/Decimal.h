#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_DECIMAL_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_DECIMAL_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Decimal : public InputReconstructionObject
	{
	private:
		ast::node::DECIMAL* decimal;
		double constexprEvaluation = 0;

	public:
		Decimal(ast::node::DECIMAL* decimal_);
		virtual ~Decimal() = default;

	public:
		double GetEvaluation();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_DECIMAL_H
