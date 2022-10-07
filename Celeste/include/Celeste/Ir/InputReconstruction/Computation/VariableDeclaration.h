#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VARIABLEDECLARATION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VARIABLEDECLARATION

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class TypeConstruct;
	class NameReference;
	class Expression;

	class VariableDeclaration : public InputReconstructionObject
	{
	private:
		std::unique_ptr<TypeConstruct> type;
		std::unique_ptr<NameReference> variableName;
		std::vector<std::unique_ptr<Expression>> values;

	public:
		VariableDeclaration(std::unique_ptr<NameReference> variableName_,
							std::unique_ptr<TypeConstruct> type_);
		virtual ~VariableDeclaration() = default;
		void Complete();

		VariableDeclaration(const VariableDeclaration& rhs);

	public:
		void AddValue(std::unique_ptr<Expression> newExpression);
		TypeConstruct* GetVariableType();
		NameReference* GetName();
		std::vector<std::unique_ptr<Expression>>& GetExpressions();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VARIABLEDECLARATION
