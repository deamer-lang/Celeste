#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TUPLE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TUPLE_H

#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Expression;

	class Tuple : public InputReconstructionObject
	{
	private:
		ast::node::tuple* value;
		std::vector<std::unique_ptr<Expression>> expressions;

	public:
		Tuple(ast::node::tuple* value_);
		virtual ~Tuple() = default;

		Tuple(const Tuple& rhs);

	public:
		void Resolve();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TUPLE_H
