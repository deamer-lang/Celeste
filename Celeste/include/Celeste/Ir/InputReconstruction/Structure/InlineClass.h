#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INLINECLASS
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INLINECLASS

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Structure/Accessibility.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class InlineClass : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> inlineClassName;

		Accessibility lastAccessibility = Accessibility::Public;
		std::vector<std::pair<Accessibility, InputReconstructionObject*>> block;

	public:
		InlineClass(std::unique_ptr<NameReference> inlineClassName_);
		virtual ~InlineClass() = default;

	public:
		void Add(InputReconstructionObject* newObject) override;
		void Add(InputReconstructionObject* object, Accessibility accessibility);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_INLINECLASS
