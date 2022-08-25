#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERARGUMENT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERARGUMENT_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class NameReference;
	class Expression;
	class TypeConstruct;

	class ConditionModifierArgument : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		ConditionModifierArgument(std::unique_ptr<NameReference> argumentName_,
								  std::unique_ptr<TypeConstruct> argumentType_);
		virtual ~ConditionModifierArgument() = default;
		void AddValue(std::unique_ptr<Expression> value);

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONMODIFIERARGUMENT_H
