#ifndef CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Expression;

	class ForIteration : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

		std::vector<std::unique_ptr<InputReconstructionObject>> block;

	public:
		ForIteration(std::unique_ptr<Expression> expression_);
		virtual ~ForIteration() = default;
		void Complete();

		ForIteration(const ForIteration& rhs);

	public:
		std::unique_ptr<Expression>& GetExpression();

	public:
		void Add(std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
					 innerObject) override;
		std::vector<InputReconstructionObject*> GetScope() override;
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FORITERATION_H
