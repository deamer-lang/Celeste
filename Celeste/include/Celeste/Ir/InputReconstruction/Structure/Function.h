#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTION

#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/MonomorphizedFunction.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <map>
#include <memory>
#include <optional>
#include <string>

namespace Celeste::ir::inputreconstruction
{
	class Constructor;

	class Function : public InputReconstructionObject
	{
	private:
		std::unique_ptr<TypeConstruct> returnType;
		std::unique_ptr<NameReference> functionName;
		std::vector<std::unique_ptr<FunctionArgument>> functionArguments;
		std::vector<std::unique_ptr<TemplateParameter>> templateParameters;
		std::vector<std::unique_ptr<MonomorphizedFunction>> monomorphizedFunctions;
		std::map<std::vector<InputReconstructionObject*>, MonomorphizedFunction*>
			mapTypeListWithMonomorphizedFunction;

		std::vector<std::unique_ptr<InputReconstructionObject>> block;

		std::optional<Celeste::ir::inputreconstruction::BytecodeRepresentation>
			bytecodeRepresentation;

	public:
		Function(std::unique_ptr<NameReference> functionName_,
				 std::unique_ptr<TypeConstruct> returnType_);
		Function(Type type, std::unique_ptr<NameReference> functionName_);
		virtual ~Function() override = default;
		void Complete();

		Function(const Function& rhs);
		Function(const Function& rhs, const std::string& name);

	public:
		void Add(std::unique_ptr<InputReconstructionObject> newObject) override;
		void AddFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddTemplateParameter(std::unique_ptr<TemplateParameter> templateParameter);

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
		std::vector<std::unique_ptr<TemplateParameter>>& GetTemplateFunctionParameters();
		std::vector<InputReconstructionObject*> GetOwnedBlock();
		std::vector<std::unique_ptr<InputReconstructionObject>>& GetBlock();
		bool HasTemplateParameters();

	public:
		std::vector<std::unique_ptr<MonomorphizedFunction>>& GetMonomorphizedFunctions();
		MonomorphizedFunction*
		ConstructMonomorphizedFunction(const std::vector<Expression>& expressionList);
		bool TemplateParametersAcceptsExpressionList(const std::vector<Expression>& vector);

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

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTION
