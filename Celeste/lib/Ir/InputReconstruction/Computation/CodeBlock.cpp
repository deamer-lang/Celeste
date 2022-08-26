#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"

Celeste::ir::inputreconstruction::CodeBlock::CodeBlock(ast::node::code_block* value_)
	: InputReconstructionObject(Type::CodeBlock),
	  value(value_)
{
	// Fill in code block input arguments
}

void Celeste::ir::inputreconstruction::CodeBlock::Resolve()
{
	GetFile()->AddCodeBlock(this);

	auto listener = ast::listener::user::ir::InputReconstructionListener(GetFile()->GetProject(),
																		 GetFile(), this);
	listener.Dispatch(
		ast::reference::Access<ast::node::code_block>(value).code_block_program().GetContent()[0]);
}
