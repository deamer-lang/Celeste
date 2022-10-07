#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PUBLIC_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PUBLIC_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Public : public InputReconstructionObject
	{
	private:

	public:
		Public();
		virtual ~Public() = default;

		Public(const Public& rhs);

	public:

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_PUBLIC_H
