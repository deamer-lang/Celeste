#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_RETURN_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_RETURN_H

#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Return : public InputReconstructionObject
	{
	private:
		std::unique_ptr<Expression> expression;

	public:
		Return(std::unique_ptr<Expression> expression_);
		virtual ~Return() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_RETURN_H
