#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::Text::Text(ast::node::TEXT* text_)
	: InputReconstructionObject(Type::Text),
	  text(text_)
{
	constexprEvaluation = text->GetText();
	if (constexprEvaluation.size() >= 2)
	{
		constexprEvaluation.erase(0, 1);
		constexprEvaluation.pop_back();
	}
}

Celeste::ir::inputreconstruction::Text::Text(const std::string& text_)
	: InputReconstructionObject(Type::Text),
	  constexprEvaluation(text_)
{
}

Celeste::ir::inputreconstruction::Text::Text(const Text& rhs)
	: InputReconstructionObject(rhs),
	  text(rhs.text),
	  constexprEvaluation(rhs.constexprEvaluation)
{
}

std::string Celeste::ir::inputreconstruction::Text::GetEvaluation()
{
	return constexprEvaluation;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Text::DeepCopy()
{
	return std::make_unique<Text>(*this);
}
