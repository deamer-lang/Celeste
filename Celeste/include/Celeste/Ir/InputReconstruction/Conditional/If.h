#ifndef CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H
#define CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Expression;

	class If : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		If(std::unique_ptr<Expression> expression_);
		virtual ~If() = default;
		void Complete();

	public:
		std::unique_ptr<Expression>& GetCondition();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H
