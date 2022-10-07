#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"

Celeste::ir::inputreconstruction::CodeBlock::CodeBlock(ast::node::code_block* value_)
	: InputReconstructionObject(Type::CodeBlock),
	  value(value_)
{
	// Fill in code block input arguments
}

Celeste::ir::inputreconstruction::CodeBlock::~CodeBlock()
{
	GetFile()->RemoveCodeBlock(this);
}

Celeste::ir::inputreconstruction::CodeBlock::CodeBlock(const CodeBlock& rhs)
	: InputReconstructionObject(rhs),
	  value(rhs.value)
{
	for (auto& rhsLocalObject : rhs.localObjects)
	{
		auto newLocalObject = rhsLocalObject->DeepCopy();
		newLocalObject->SetParent(this);
		localObjects.push_back(std::move(newLocalObject));
	}
}

void Celeste::ir::inputreconstruction::CodeBlock::Resolve()
{
	GetFile()->AddCodeBlock(this);

	auto listener = ast::listener::user::ir::InputReconstructionListener(GetFile()->GetProject(),
																		 GetFile(), this);
	listener.Dispatch(
		ast::reference::Access<ast::node::code_block>(value).code_block_program().GetContent()[0]);
}

void Celeste::ir::inputreconstruction::CodeBlock::AddInputReconstructionObject(
	std::unique_ptr<InputReconstructionObject> newObject)
{
	localObjects.push_back(std::move(newObject));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>&
Celeste::ir::inputreconstruction::CodeBlock::GetBlock()
{
	return localObjects;
}

void Celeste::ir::inputreconstruction::CodeBlock::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	localObjects.push_back(std::move(innerObject));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::CodeBlock::begin()
{
	return std::begin(localObjects);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::CodeBlock::end()
{
	return std::end(localObjects);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::CodeBlock::rbegin()
{
	return std::rbegin(localObjects);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::CodeBlock::rend()
{
	return std::rend(localObjects);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::CodeBlock::GetIterator(InputReconstructionObject* irComponent)
{
	for (auto iter = begin(); iter != end(); ++iter)
	{
		if ((*iter).get() == irComponent)
		{
			return iter;
		}
	}

	return end();
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::CodeBlock::GetReverseIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = rbegin(); iter != rend(); ++iter)
	{
		if ((*iter).get() == irComponent)
		{
			return iter;
		}
	}

	return rend();
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::CodeBlock::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : localObjects)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::CodeBlock::DeepCopy()
{
	return std::make_unique<CodeBlock>(*this);
}
