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

		Assignment(const Assignment& rhs);

	public:
		std::unique_ptr<SymbolReferenceCall>& GetLhs();
		std::unique_ptr<Expression>& GetRhs();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ASSIGNMENT_H
