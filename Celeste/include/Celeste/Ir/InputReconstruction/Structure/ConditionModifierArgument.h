#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERARGUMENT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERARGUMENT_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include <memory>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class ConditionModifierArgument : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> argumentName;
		std::unique_ptr<TypeConstruct> argumentType;
		std::vector<std::unique_ptr<Expression>> values;

	public:
		ConditionModifierArgument(std::unique_ptr<NameReference> argumentName_,
								  std::unique_ptr<TypeConstruct> argumentType_);
		virtual ~ConditionModifierArgument() = default;
		void AddValue(std::unique_ptr<Expression> value);

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERARGUMENT_H
