#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONALFUNCTION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONALFUNCTION

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class NameReference;
	class FunctionArgument;
	class TemplateParameter;

	class ConditionalFunction : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		ConditionalFunction(std::unique_ptr<NameReference> functionName_);
		virtual ~ConditionalFunction() override;

		ConditionalFunction(const ConditionalFunction& rhs);

	public:
		void Add(InputReconstructionObject* newObject) override;
		void AddFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddConditionalFunctionArgument(std::unique_ptr<FunctionArgument> functionArgument);
		void AddTemplateParameter(std::unique_ptr<TemplateParameter> templateParameter);
		NameReference* GetFunctionName();
		bool
		Accepts(std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
					symbol);

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONDITIONALFUNCTION
