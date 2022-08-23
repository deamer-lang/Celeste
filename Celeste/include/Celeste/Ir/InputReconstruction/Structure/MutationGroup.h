#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MUTATIONGROUP
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MUTATIONGROUP

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class MutationGroup : public InputReconstructionObject
	{
	private:
		std::vector<std::unique_ptr<SymbolReferenceCall>> settings;

	public:
		MutationGroup();
		virtual ~MutationGroup() override = default;

	public:
		void AddSetting(std::unique_ptr<SymbolReferenceCall> setting);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MUTATIONGROUP
