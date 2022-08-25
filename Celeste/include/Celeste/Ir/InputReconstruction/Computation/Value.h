#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H

#include "Celeste/Ast/Node/value.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
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
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_VALUE_H
