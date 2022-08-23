#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTION

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Function : public InputReconstructionObject
	{
	private:
		std::unique_ptr<TypeConstruct> returnType;
		std::unique_ptr<NameReference> functionName;
		std::vector<std::unique_ptr<FunctionArgument>> functionArguments;
		std::vector<std::unique_ptr<TemplateParameter>> templateParameters;

	public:
		Function(std::unique_ptr<NameReference> functionName_,
				 std::unique_ptr<TypeConstruct> returnType_);
		Function(Type type, std::unique_ptr<NameReference> functionName_);
		virtual ~Function() override = default;
		void Complete();

	public:
		void Add(InputReconstructionObject* newObject) override;
		void AddFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddTemplateParameter(std::unique_ptr<TemplateParameter> templateParameter);

	public:
		NameReference* GetFunctionName();
		bool Accepts(std::variant<ast::reference::Access<ast::node::symbol>,
								  ast::reference::Access<ast::node::symbol_secondary>,
								  ast::reference::Access<ast::node::VARNAME>>
						 symbol);
		InputReconstructionObject* GetReturnType();
		bool
		Accepts(const std::string& functionName,
				const std::optional<std::vector<InputReconstructionObject*>>& functionArguments);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_FUNCTION
