#ifndef CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H
#define CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H

#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class TypeConstruct;
	class NameReference;
	class Expression;

	class ForEach : public InputReconstructionObject
	{
	private:
		std::unique_ptr<VariableDeclaration> variable;
		Expression* expression;

		std::vector<std::unique_ptr<InputReconstructionObject>> block;

	public:
		ForEach(std::unique_ptr<TypeConstruct> type_, std::unique_ptr<NameReference> variableName_,
				std::unique_ptr<Expression> expression_);
		virtual ~ForEach() = default;
		void Complete();

		ForEach(const ForEach& rhs);

	public:
		VariableDeclaration* GetVariableCore();
		NameReference* GetVariable();
		TypeConstruct* GetVariableType();
		Expression* GetExpression();

	public:
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator begin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator end() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rbegin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rend() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator
		GetIterator(InputReconstructionObject* irComponent) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent) override;

		std::vector<InputReconstructionObject*> GetScope() override;
		void Add(std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
					 innerObject) override;
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H
