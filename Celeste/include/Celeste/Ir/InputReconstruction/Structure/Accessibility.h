#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ACCESSIBILITY_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ACCESSIBILITY_H

namespace Celeste::ir::inputreconstruction
{
	enum class Accessibility
	{
		// Unknown is invalid, however, for simplicity it is used as an all accessing variant
		Unknown = 0,

		// Have Private access to all the Class and Its Inherited Bases
		UniversalPrivate = 1,
		Private = 2,
		Protected = 3,
		Public = 4,
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ACCESSIBILITY_H
