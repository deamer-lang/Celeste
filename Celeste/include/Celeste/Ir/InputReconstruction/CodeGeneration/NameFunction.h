#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_NAMEFUNCTION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_NAMEFUNCTION

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class SymbolReferenceCall;

	class NameFunction : public InputReconstructionObject
	{
	private:
		std::unique_ptr<SymbolReferenceCall> functionName;

	public:
		NameFunction(std::unique_ptr<SymbolReferenceCall> functionName_);
		virtual ~NameFunction() = default;

	public:
		void Add(InputReconstructionObject* newObject) override;
		NameReference* GetFunctionName();
		bool
		Accepts(std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
					symbol);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_NAMEFUNCTION
