#ifndef CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_ELSEIF_H
#define CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_ELSEIF_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Expression;

	class ElseIf : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		ElseIf(std::unique_ptr<Expression> expression_);
		virtual ~ElseIf() = default;
		void Complete();

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_ELSEIF_H
