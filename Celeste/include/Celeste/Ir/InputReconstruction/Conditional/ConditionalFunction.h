#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONALFUNCTION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONALFUNCTION

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class ConditionalFunction : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> functionName;
		std::vector<std::unique_ptr<FunctionArgument>> functionArguments;
		std::vector<std::unique_ptr<FunctionArgument>> conditionalFunctionArguments;
		std::vector<std::unique_ptr<TemplateParameter>> templateParameters;

	public:
		ConditionalFunction(std::unique_ptr<NameReference> functionName_);
		virtual ~ConditionalFunction() override = default;

	public:
		void Add(InputReconstructionObject* newObject) override;
		void AddFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddConditionalFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddTemplateParameter(std::unique_ptr<TemplateParameter> templateParameter);
		NameReference* GetFunctionName();
		bool Accepts(std::variant<ast::reference::Access<ast::node::symbol>,
								  ast::reference::Access<ast::node::symbol_secondary>,
								  ast::reference::Access<ast::node::VARNAME>>
						 symbol);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONALFUNCTION
