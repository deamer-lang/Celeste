#ifndef CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H
#define CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class ForEach : public InputReconstructionObject
	{
	private:
		std::unique_ptr<TypeConstruct> variableType;
		std::unique_ptr<NameReference> variableName;
		std::unique_ptr<Expression> expression;

	public:
		ForEach(std::unique_ptr<TypeConstruct> type_, std::unique_ptr<NameReference> variableName_,
				std::unique_ptr<Expression> expression_);
		virtual ~ForEach() = default;
		void Complete();

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H
