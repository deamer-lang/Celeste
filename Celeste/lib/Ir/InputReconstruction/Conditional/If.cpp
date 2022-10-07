#include "Celeste/Ir/InputReconstruction/Conditional/If.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::If::If(std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::If),
	  expression(std::move(expression_))
{
}

void Celeste::ir::inputreconstruction::If::Complete()
{
	expression->SetParent(this);
}

Celeste::ir::inputreconstruction::If::If(const If& rhs)
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
Celeste::ir::inputreconstruction::If::GetCondition()
{
	return expression;
}

void Celeste::ir::inputreconstruction::If::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::If::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::If::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::If::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::If::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::If::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::If::GetReverseIterator(InputReconstructionObject* irComponent)
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
Celeste::ir::inputreconstruction::If::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::If::DeepCopy()
{
	return std::make_unique<If>(*this);
}
