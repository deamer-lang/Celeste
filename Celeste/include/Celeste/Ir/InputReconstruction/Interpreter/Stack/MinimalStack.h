#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_STACK_MINIMALSTACK_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_STACK_MINIMALSTACK_H

#include <memory>
#include <optional>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class Interpreter;
	class Symbol;
	class VariableDeclaration;
	class Name;
	class SymbolMember;

	/*	\struct MinimalStack
	 *
	 *	\brief This is an optimized stack that implements scoping as top accessible elements.
	 *
	 */
	struct MinimalStack
	{
	private:
		Interpreter* interpreter = nullptr;
		std::vector<std::unique_ptr<Symbol>> symbols;
		std::vector<std::size_t> symbolStack;

	public:
		MinimalStack(Interpreter* interpreter_);
		~MinimalStack();

		MinimalStack(MinimalStack&& rhs) noexcept;
		MinimalStack(const MinimalStack&) = delete;

		MinimalStack* OpenScope();

		void CloseScope();

		void AddVariable(VariableDeclaration* object);
		void AddVariable(std::unique_ptr<Symbol> symbol);
		void AddVariable(const SymbolMember& value);

		std::optional<Symbol*> GetSymbolMember(Name name);

		MinimalStack* GetCurrentScope();

	private:
		std::size_t& GetCurrentStackSize();
	};

}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_STACK_MINIMALSTACK_H
