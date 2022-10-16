#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

Celeste::ir::inputreconstruction::ForEach::ForEach(std::unique_ptr<TypeConstruct> type_,
												   std::unique_ptr<NameReference> variableName_,
												   std::unique_ptr<Expression> expression_)
	: InputReconstructionObject(Type::ForEach),
	  variable(std::make_unique<VariableDeclaration>(std::move(variableName_), std::move(type_)))
{
	expression = expression_.get();
	variable->AddValue(std::move(expression_));
}

void Celeste::ir::inputreconstruction::ForEach::Complete()
{
	variable->SetParent(this);
	variable->SetFile(GetFile());
	variable->Complete();
}

Celeste::ir::inputreconstruction::ForEach::ForEach(const ForEach& rhs)
	: InputReconstructionObject(rhs),
	  variable(static_cast<VariableDeclaration*>(rhs.variable->DeepCopy().release())),
	  expression(static_cast<Expression*>(rhs.expression->DeepCopy().release()))
{
	this->variable->SetParent(this);
	this->expression->SetParent(this);

	for (auto& rhsValue : rhs.block)
	{
		auto newRhs = std::unique_ptr<InputReconstructionObject>(
			static_cast<InputReconstructionObject*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->block.push_back(std::move(newRhs));
	}
}

Celeste::ir::inputreconstruction::VariableDeclaration*
Celeste::ir::inputreconstruction::ForEach::GetVariableCore()
{
	return variable.get();
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::ForEach::GetVariable()
{
	return variable->GetName();
}

Celeste::ir::inputreconstruction::TypeConstruct*
Celeste::ir::inputreconstruction::ForEach::GetVariableType()
{
	return variable->GetVariableType();
}

Celeste::ir::inputreconstruction::Expression*
Celeste::ir::inputreconstruction::ForEach::GetExpression()
{
	return expression;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::ForEach::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::ForEach::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::ForEach::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::ForEach::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::ForEach::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::ForEach::GetReverseIterator(
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
Celeste::ir::inputreconstruction::ForEach::GetScope()
{
	std::vector<InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

void Celeste::ir::inputreconstruction::ForEach::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::ForEach::DeepCopy()
{
	return std::make_unique<ForEach>(*this);
}
