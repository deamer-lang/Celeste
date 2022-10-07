#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_INTEGER_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_INTEGER_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Integer : public InputReconstructionObject
	{
	private:
		ast::node::NUMBER* integer = nullptr;
		int constexprEvaluation = 0;

	public:
		Integer(ast::node::NUMBER* integer_);
		Integer(int integer_);
		virtual ~Integer() = default;

		Integer(const Integer& rhs);

	public:
		int GetEvaluation();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_INTEGER_H
