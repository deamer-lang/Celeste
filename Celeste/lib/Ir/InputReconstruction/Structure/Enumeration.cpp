#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReferenceSecondary.h"

Celeste::ir::inputreconstruction::Enumeration::Enumeration(
	std::unique_ptr<NameReference> enumerationName_,
	ast::reference::Access<ast::node::enum_declaration> enumeration_)
	: InputReconstructionObject(Type::Enumeration),
	  enumerationName(std::move(enumerationName_)),
	  enumeration(enumeration_)
{
}

void Celeste::ir::inputreconstruction::Enumeration::Complete()
{
	enumerationName->SetParent(this);
	enumerationName->SetFile(GetFile());

	enumeration.enumeration().for_all([&](ast::reference::Access<ast::node::enumeration> access) {
		if (access.enumeration_value().full_value().expression().GetContent().empty())
		{
			auto newMember = std::make_unique<EnumerationMember>(
				std::make_unique<NameReference>(const_cast<ast::node::symbol_reference*>(
					access.enumeration_name().symbol_reference().GetContent()[0])));
			newMember->SetParent(this);
			newMember->SetFile(GetFile());
			newMember->Complete();
			enumerationMembers.push_back(std::move(newMember));
		}
		else
		{
			auto newMember = std::make_unique<EnumerationMember>(
				std::make_unique<NameReference>(const_cast<ast::node::symbol_reference*>(
					access.enumeration_name().symbol_reference().GetContent()[0])),
				std::make_unique<Expression>(const_cast<ast::node::expression*>(
					access.enumeration_value().full_value().expression().GetContent()[0])));
			newMember->SetParent(this);
			newMember->SetFile(GetFile());
			newMember->Complete();
			enumerationMembers.push_back(std::move(newMember));
		}
	});
}

Celeste::ir::inputreconstruction::Enumeration::Enumeration(const Enumeration& rhs)
	: InputReconstructionObject(rhs),
	  enumerationName(static_cast<NameReference*>(rhs.enumerationName->DeepCopy().release())),
	  enumeration(rhs.enumeration)
{
	enumerationName->SetParent(this);

	for (auto& rhsValue : rhs.enumerationMembers)
	{
		auto newRhsValue = std::unique_ptr<EnumerationMember>(
			static_cast<EnumerationMember*>(rhsValue->DeepCopy().release()));
		newRhsValue->SetParent(this);
		this->enumerationMembers.push_back(std::move(newRhsValue));
	}
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Enumeration::GetMember(
	NameReferenceSecondary* nameReferenceSecondary)
{
	for (auto& member : enumerationMembers)
	{
		if (member->GetName()->GetResolvedName() == nameReferenceSecondary->GetSymbolName())
		{
			return member.get();
		}
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::Enumeration::GetName()
{
	return enumerationName.get();
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Enumeration::DeepCopy()
{
	return std::make_unique<Enumeration>(*this);
}
