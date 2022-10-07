#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PRIVATE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PRIVATE_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Private : public InputReconstructionObject
	{
	private:

	public:
		Private();
		virtual ~Private() = default;

		Private(const Private& rhs);

	public:

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PRIVATE_H
