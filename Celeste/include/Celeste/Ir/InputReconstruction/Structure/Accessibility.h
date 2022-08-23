#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ACCESSIBILITY_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ACCESSIBILITY_H

namespace Celeste::ir::inputreconstruction
{
	enum class Accessibility
	{
		// Unknown is invalid, however, for simplicity it is used as an all accessing variant
		Unknown = 0,

		Private = 1,
		Protected = 2,
		Public = 3,
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ACCESSIBILITY_H
