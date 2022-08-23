#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::Text::Text(ast::node::TEXT* text_)
	: InputReconstructionObject(Type::Text),
	  text(text_)
{
}

std::string Celeste::ir::inputreconstruction::Text::GetEvaluation()
{
	return text->GetText();
}
