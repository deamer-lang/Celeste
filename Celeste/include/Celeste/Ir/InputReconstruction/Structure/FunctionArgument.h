#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTIONARGUMENT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTIONARGUMENT_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "ConditionModifierCall.h"
#include <memory>
#include <string>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class FunctionArgument : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> argumentName;
		std::unique_ptr<TypeConstruct> argumentType;
		std::vector<std::unique_ptr<Expression>> values;
		std::optional<std::unique_ptr<ConditionModifierCall>> conditionModifierCall;

	public:
		FunctionArgument(std::unique_ptr<NameReference> argumentName_,
						 std::unique_ptr<TypeConstruct> argumentType_);
		virtual ~FunctionArgument() = default;
		void Complete();

		FunctionArgument(const FunctionArgument& rhs);

	public:
		void AddValue(std::unique_ptr<Expression> value);
		void AddConditionalModifier(std::unique_ptr<ConditionModifierCall> unique);

	public:
		bool Accepts(InputReconstructionObject* functionAccess);
		bool Accepts(const std::unique_ptr<Expression>& expression);
		std::string GetName();
		TypeConstruct* GetArgumentType();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTIONARGUMENT_H
