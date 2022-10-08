#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TYPEEXPLICITALIAS_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TYPEEXPLICITALIAS_H

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class TypeExplicitAlias : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> aliasName;
		std::unique_ptr<SymbolReferenceCall> aliasedType;

	public:
		TypeExplicitAlias(std::unique_ptr<NameReference> aliasName_,
						  std::unique_ptr<SymbolReferenceCall> aliasedType_);
		virtual ~TypeExplicitAlias() override = default;
		void Complete();

		TypeExplicitAlias(const TypeExplicitAlias& rhs);

	public:
		std::unique_ptr<NameReference>& GetAliasName();
		std::unique_ptr<SymbolReferenceCall>& GetAliasedType();
		std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
		GetAliasedForwardedType();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_TYPEEXPLICITALIAS_H
