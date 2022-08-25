#ifndef CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_ELSE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_ELSE_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Else : public InputReconstructionObject
	{
	private:
	public:
		Else();
		virtual ~Else() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_CONDITIONAL_ELSE_H
