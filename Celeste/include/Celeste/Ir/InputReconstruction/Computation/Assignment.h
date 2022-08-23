#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H

#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Assignment : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> symbolReference;
		std::unique_ptr<Expression> expression;
		ast::node::assignment_operator* assignmentOperator;

	public:
		Assignment(std::unique_ptr<SymbolReferenceCall> symbolReference_,
				   std::unique_ptr<Expression> expression_,
				   ast::node::assignment_operator* assignmentOperator_);
		virtual ~Assignment() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H
