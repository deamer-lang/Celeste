#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_TEXT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_TEXT_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <string>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Text : public InputReconstructionObject
	{
	private:
		ast::node::TEXT* text = nullptr;
		std::string constexprEvaluation;

	public:
		Text(ast::node::TEXT* text_);
		Text(const std::string& text_);
		virtual ~Text() = default;

		Text(const Text& rhs);

	public:
		std::string GetEvaluation();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STANDARD_TEXT_H
