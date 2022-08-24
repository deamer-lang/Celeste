#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VARIABLEDECLARATION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VARIABLEDECLARATION

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
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

	public:
		void AddValue(std::unique_ptr<Expression> newExpression);
		TypeConstruct* GetVariableType();
		NameReference* GetName();
		std::vector<std::unique_ptr<Expression>>& GetExpressions();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VARIABLEDECLARATION
