#ifndef CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H
#define CELESTE_IR_INPUTRECONSTRUCTION_ITERATIVE_FOREACH_H

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
