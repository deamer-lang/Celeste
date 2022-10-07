#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_RETURN_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_RETURN_H

#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Expression;

	class Return : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		Return(std::unique_ptr<Expression> expression_);
		virtual ~Return() = default;

		Return(const Return& rhs);

		void Resolve();

	public:
		std::unique_ptr<Celeste::ir::inputreconstruction::Expression>& GetExpression();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_RETURN_H
