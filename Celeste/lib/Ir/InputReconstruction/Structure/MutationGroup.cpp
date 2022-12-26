#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Constructor.h"

Celeste::ir::inputreconstruction::MutationGroup::MutationGroup()
	: InputReconstructionObject(Type::MutationGroup)
{
}

Celeste::ir::inputreconstruction::MutationGroup::~MutationGroup()
{
}

Celeste::ir::inputreconstruction::MutationGroup::MutationGroup(const MutationGroup& rhs)
	: InputReconstructionObject(rhs)
{
	for (auto& rhsValue : rhs.settings)
	{
		auto newRhsDownCast = std::unique_ptr<SymbolReferenceCall>(
			static_cast<SymbolReferenceCall*>(rhsValue->DeepCopy().release()));
		newRhsDownCast->SetParent(this);
		this->settings.push_back(std::move(newRhsDownCast));
	}

	for (auto& rhsValue : rhs.block)
	{
		auto newRhs = std::unique_ptr<InputReconstructionObject>(
			static_cast<InputReconstructionObject*>(rhsValue->DeepCopy().release()));
		newRhs->SetParent(this);
		this->block.push_back(std::move(newRhs));
	}
}

void Celeste::ir::inputreconstruction::MutationGroup::AddSetting(
	std::unique_ptr<SymbolReferenceCall> setting)
{
	setting->SetParent(this);
	setting->SetFile(GetFile());

	settings.push_back(std::move(setting));
}

void Celeste::ir::inputreconstruction::MutationGroup::Add(
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> innerObject)
{
	block.push_back(std::move(innerObject));
}

bool Celeste::ir::inputreconstruction::MutationGroup::HasOptimizedBytecode() const
{
	return bytecodeRepresentation.has_value();
}

Celeste::ir::inputreconstruction::BytecodeRepresentation&
Celeste::ir::inputreconstruction::MutationGroup::GetBytecode()
{
	if (!bytecodeRepresentation.has_value())
	{
		ConstructBytecode();
	}

	return bytecodeRepresentation.value();
}

void Celeste::ir::inputreconstruction::MutationGroup::ConstructBytecode(std::size_t level)
{
	bytecode::Constructor construction(level);
	construction.AddObject(this);
	bytecodeRepresentation.emplace(construction.GetRepresentation());
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MutationGroup::begin()
{
	return std::begin(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MutationGroup::end()
{
	return std::end(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MutationGroup::rbegin()
{
	return std::rbegin(block);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MutationGroup::rend()
{
	return std::rend(block);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MutationGroup::GetIterator(InputReconstructionObject* irComponent)
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
Celeste::ir ::inputreconstruction::MutationGroup::GetReverseIterator(
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
Celeste::ir::inputreconstruction::MutationGroup::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : block)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::MutationGroup::DeepCopy()
{
	return std::make_unique<MutationGroup>(*this);
}
