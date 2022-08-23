#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONSTRUCTOR_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONSTRUCTOR_H

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Constructor : public Function
	{
	private:
		std::unique_ptr<NameReference> functionName;
		std::vector<std::unique_ptr<FunctionArgument>> functionArguments;
		std::vector<std::unique_ptr<TemplateParameter>> templateParameters;

	public:
		Constructor(std::unique_ptr<NameReference> functionName_);
		virtual ~Constructor() override = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CONSTRUCTOR_H
