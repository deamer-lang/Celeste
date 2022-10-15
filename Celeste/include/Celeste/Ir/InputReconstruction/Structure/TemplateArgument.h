#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TEMPLATEARGUMENT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TEMPLATEARGUMENT_H

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
	class TemplateArgument : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> argumentName;
		std::unique_ptr<TypeConstruct> argumentType;
		std::vector<std::unique_ptr<Expression>> values;
		std::optional<std::unique_ptr<ConditionModifierCall>> conditionModifierCall;

	public:
		TemplateArgument(std::unique_ptr<NameReference> argumentName_,
						 std::unique_ptr<TypeConstruct> argumentType_);
		virtual ~TemplateArgument() = default;
		void Complete();
		std::vector<std::unique_ptr<Expression>>& GetValues();

		TemplateArgument(const TemplateArgument& rhs);

	public:
		void AddValue(std::unique_ptr<Expression> value);
		void AddConditionalModifier(std::unique_ptr<ConditionModifierCall> unique);
		InputReconstructionObject* GetAliasedType();

	public:
		bool Accepts(InputReconstructionObject* functionAccess);
		bool Accepts(const std::unique_ptr<Expression>& expression);
		std::string GetName();
		TypeConstruct* GetArgumentType();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TEMPLATEARGUMENT_H
