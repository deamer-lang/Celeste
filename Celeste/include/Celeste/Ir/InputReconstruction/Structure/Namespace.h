#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_NAMESPACE
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_NAMESPACE

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Namespace : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> namespaceName;

	public:
		Namespace(std::unique_ptr<NameReference> namespaceName_);
		virtual ~Namespace() = default;

		Namespace(const Namespace& rhs);

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_NAMESPACE
