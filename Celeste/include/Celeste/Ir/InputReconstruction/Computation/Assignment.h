#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H

#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolReferenceCall;
	class Expression;

	class Assignment : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		Assignment(std::unique_ptr<SymbolReferenceCall> symbolReference_,
				   std::unique_ptr<Expression> expression_,
				   ast::node::assignment_operator* assignmentOperator_);
		virtual ~Assignment();
		void Complete();

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H
