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
		Decimal(double decimal_);
		Decimal(ast::node::DECIMAL* decimal_);
		virtual ~Decimal() = default;

		Decimal(const Decimal& rhs);

	public:
		double GetEvaluation();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_DECIMAL_H
