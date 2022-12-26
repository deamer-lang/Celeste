#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEPRINTER_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEPRINTER_H

#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class BytecodeRepresentation;
	class Instruction;
}

namespace Celeste::ir::inputreconstruction::bytecode
{
	struct BytecodePrinter
	{
		static void
		Print(const Celeste::ir::inputreconstruction::BytecodeRepresentation& representation);
		static void Print(const Instruction& value);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEPRINTER_H
