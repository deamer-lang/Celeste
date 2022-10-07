#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERCALL_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERCALL_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/ConditionModifierArgument.h"
#include <memory>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class ConditionModifierCall : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> conditionModifierReference;
		std::vector<std::unique_ptr<Expression>> arguments;

	public:
		ConditionModifierCall(std::unique_ptr<SymbolReferenceCall> conditionModifierReference_);
		virtual ~ConditionModifierCall() = default;

		ConditionModifierCall(const ConditionModifierCall& rhs);

	public:
		void AddValue(std::unique_ptr<Expression> argument);

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERCALL_H
