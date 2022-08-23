#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H

#include "Celeste/Ast/Node/value.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Value : public InputReconstructionObject
	{
	private:
		ast::node::value* value;
		std::variant<std::monostate, std::unique_ptr<CodeBlock>,
					 std::unique_ptr<SymbolReferenceCall>, std::unique_ptr<Tuple>,
					 std::unique_ptr<Integer>, std::unique_ptr<Decimal>, std::unique_ptr<Text>>
			underlyingSpecialization;

	public:
		Value(ast::node::value* value_);
		virtual ~Value() = default;

	public:
		void Resolve();
		InputReconstructionObject* DeduceType();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H
