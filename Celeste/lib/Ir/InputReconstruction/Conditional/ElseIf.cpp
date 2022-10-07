#include "Celeste/Ir/InputReconstruction/Conditional/ElseIf.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"

Celeste::ir::inputreconstruction::ElseIf::ElseIf(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ElseIf),
	  expression(std::move(expression_))
{
}

void Celeste::ir::inputreconstruction::ElseIf::Complete()
{
	expression->SetParent(this);
}

Celeste::ir::inputreconstruction::ElseIf::ElseIf(const ElseIf& rhs)
	: InputReconstructionObject(rhs),
	  expression(static_cast<Expression*>(rhs.expression->DeepCopy().release()))
{
	this->expression->SetParent(this);

	for (auto& rhsValue : rhs.block)
	{
		auto newRhs = std::unique_ptr<InputReconstructionObject>(
			static_cast<InputReconstructionObject*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->block.push_back(std::move(newRhs));
	}
}

std::unique_ptr<Celeste::ir::inputreconstruction::Expression>&
Celeste::ir::inputreconstruction::ElseIf::GetCondition()
{
	return expression;
}

void Celeste::ir::inputreconstruction::ElseIf::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::ElseIf::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::ElseIf::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::ElseIf::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::ElseIf::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::ElseIf::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::ElseIf::GetReverseIterator(
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
Celeste::ir::inputreconstruction::ElseIf::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::ElseIf::DeepCopy()
{
	return std::make_unique<ElseIf>(*this);
}
