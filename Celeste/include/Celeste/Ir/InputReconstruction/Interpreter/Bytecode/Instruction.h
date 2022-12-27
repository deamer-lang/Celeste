#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_INSTRUCTION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_INSTRUCTION_H

#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeType.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <limits>
#include <variant>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class Instruction
	{
	private:
		BytecodeType bytecodeType = BytecodeType::unknown;

		// Serves as name
		std::size_t id = std::numeric_limits<std::size_t>::max();

		// Serves as type of introduced variable (If introduced)
		// In case the byte code represents a function call, this defines the function call
		// Otherwise, it has no meaning
		InputReconstructionObject* type = nullptr;

		// Serves as function arguments, either referenced as global (by pointer) or by index
		std::vector<std::variant<std::size_t, InputReconstructionObject*>> arguments;

	public:
		Instruction(
			std::size_t id_, InputReconstructionObject* type_, BytecodeType bytecodeType_,
			const std::vector<std::variant<std::size_t, InputReconstructionObject*>>& arguments_);
		Instruction(
			InputReconstructionObject* type_, BytecodeType bytecodeType_,
			const std::vector<std::variant<std::size_t, InputReconstructionObject*>>& arguments_);
		Instruction(
			BytecodeType bytecodeType_,
			const std::vector<std::variant<std::size_t, InputReconstructionObject*>>& arguments_);
		Instruction(BytecodeType bytecodeType_);
		~Instruction() = default;
		void Replace(const Instruction& instruction);

		Instruction(Instruction&& rhs) noexcept;
		Instruction(const Instruction& rhs);

		Instruction& operator=(Instruction&& rhs) noexcept;
		Instruction& operator=(const Instruction& rhs);

	public:
		BytecodeType GetBytecodeType() const;
		std::size_t GetId() const;
		InputReconstructionObject* GetType() const;
		const std::vector<std::variant<std::size_t, InputReconstructionObject*>>&
		GetArguments() const;

		void SetArgument(int index, std::size_t newValue);
		void SetArgument(int index, InputReconstructionObject* newValue);

		template<typename T, typename Q>
		T GetArgument(const Q& index)
		{
			if constexpr (std::is_same_v<std::size_t, T>)
			{
				return std::get<std::size_t>(arguments[index]);
			}
			else
			{
				return static_cast<T>(std::get<InputReconstructionObject*>(arguments[index]));
			}
		}
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_INSTRUCTION_H
