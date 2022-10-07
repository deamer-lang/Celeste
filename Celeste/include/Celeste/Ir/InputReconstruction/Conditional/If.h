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

		std::vector<std::unique_ptr<InputReconstructionObject>> block;

	public:
		If(std::unique_ptr<Expression> expression_);
		virtual ~If() = default;
		void Complete();

		If(const If& rhs);

	public:
		std::unique_ptr<Expression>& GetCondition();

	public:
		void Add(std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
					 innerObject) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator begin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator end() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rbegin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rend() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator
		GetIterator(InputReconstructionObject* irComponent) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent) override;

		std::vector<InputReconstructionObject*> GetScope() override;
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_IF_H
