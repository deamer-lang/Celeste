#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PROTECTED_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PROTECTED_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Protected : public InputReconstructionObject
	{
	private:

	public:
		Protected();
		virtual ~Protected() = default;

		Protected(const Protected& rhs);

	public:

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PROTECTED_H
