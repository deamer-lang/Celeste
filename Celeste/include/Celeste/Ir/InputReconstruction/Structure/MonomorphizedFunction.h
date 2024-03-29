#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MONOMORPHIZEDFUNCTION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MONOMORPHIZEDFUNCTION_H

#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateArgument.h"
#include <memory>
#include <string>

namespace Celeste::ir::inputreconstruction
{
	class Constructor;
	class Function;

	class MonomorphizedFunction : public InputReconstructionObject
	{
	private:
		std::unique_ptr<TypeConstruct> returnType;
		std::unique_ptr<NameReference> functionName;
		std::vector<std::unique_ptr<FunctionArgument>> functionArguments;
		std::vector<std::unique_ptr<TemplateArgument>> templateArguments;

		std::vector<std::unique_ptr<InputReconstructionObject>> block;

		Function* templateParent = nullptr;

		std::optional<Celeste::ir::inputreconstruction::BytecodeRepresentation>
			bytecodeRepresentation;

	public:
		MonomorphizedFunction(std::unique_ptr<NameReference> functionName_,
							  std::unique_ptr<TypeConstruct> returnType_);
		MonomorphizedFunction(Type type, std::unique_ptr<NameReference> functionName_);
		virtual ~MonomorphizedFunction() override = default;
		void Complete();

		MonomorphizedFunction(const MonomorphizedFunction& rhs);
		MonomorphizedFunction(const MonomorphizedFunction& rhs, const std::string& name);

		void SetTemplateParent(Function* templateParent_);
		Function* GetTemplateParent();

	public:
		void Add(std::unique_ptr<InputReconstructionObject> newObject) override;
		void AddFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddTemplateArgument(std::unique_ptr<TemplateArgument> templateArgument);

	public:
		Function* GetVirtualFunctionParent();

		NameReference* GetFunctionName();
		bool Accepts(NameReference* symbol);
		bool Accepts(const std::vector<std::unique_ptr<Expression>>& expressions);
		InputReconstructionObject* GetReturnType();
		bool
		Accepts(const std::string& functionName,
				const std::optional<std::vector<InputReconstructionObject*>>& functionArguments);
		std::vector<std::unique_ptr<FunctionArgument>>& GetFunctionArguments();
		std::vector<std::unique_ptr<TemplateArgument>>& GetTemplateFunctionArguments();
		std::vector<InputReconstructionObject*> GetOwnedBlock();
		std::vector<std::unique_ptr<InputReconstructionObject>>& GetBlock();

	public:
		bool HasOptimizedBytecode() const;
		Celeste::ir::inputreconstruction::BytecodeRepresentation& GetBytecode();
		void ConstructBytecode(std::size_t level = 0);

	public:
		void AddCodeBlock(CodeBlock* codeBlock);

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
		void AddToBlock(std::unique_ptr<InputReconstructionObject> newObject);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MONOMORPHIZEDFUNCTION_H
