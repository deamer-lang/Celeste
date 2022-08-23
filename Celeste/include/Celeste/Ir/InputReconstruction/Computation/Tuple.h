#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TUPLE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TUPLE_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
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

	public:
		void Resolve();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TUPLE_H
