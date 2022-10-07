#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CODEBLOCK_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CODEBLOCK_H

#include "Celeste/Ast/Node/code_block.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class CodeBlock : public InputReconstructionObject
	{
	private:
		ast::node::code_block* value;
		std::vector<std::unique_ptr<InputReconstructionObject>> localObjects;

	public:
		CodeBlock(ast::node::code_block* value_);
		virtual ~CodeBlock();

		CodeBlock(const CodeBlock& rhs);

	public:
		void Resolve();
		void AddInputReconstructionObject(std::unique_ptr<InputReconstructionObject> newObject);

	public:
		std::vector<std::unique_ptr<InputReconstructionObject>>& GetBlock();
		void Add(std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
					 innerObject) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator begin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator end() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rbegin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rend() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator
		GetIterator(InputReconstructionObject* irComponent) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent) override;

		std::vector<InputReconstructionObject*> GetScope() override;
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CODEBLOCK_H
