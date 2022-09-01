#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H

#include "Celeste/Ast/Node/value.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class CodeBlock;
	class SymbolReferenceCall;
	class Tuple;
	class Integer;
	class Decimal;
	class Text;

	class Value : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		Value(ast::node::value* value_);
		virtual ~Value();

	public:
		void Resolve();
		InputReconstructionObject* DeduceType();

		std::variant<std::monostate, std::unique_ptr<CodeBlock>,
					 std::unique_ptr<SymbolReferenceCall>, std::unique_ptr<Tuple>,
					 std::unique_ptr<Integer>, std::unique_ptr<Decimal>, std::unique_ptr<Text>>&
		GetValue();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H
