#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TYPESCOPE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TYPESCOPE_H

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class TypeScope : public InputReconstructionObject
	{
	private:
		std::optional<std::unique_ptr<NameReference>> name;
		std::vector<std::unique_ptr<InputReconstructionObject>> block;

	public:
		TypeScope(std::unique_ptr<NameReference> name_);
		TypeScope();
		virtual ~TypeScope() override = default;
		void Complete();

		TypeScope(const TypeScope& rhs);

	public:
	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TYPESCOPE_H
