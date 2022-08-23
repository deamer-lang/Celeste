#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATION
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATION

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Structure/EnumerationMember.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Enumeration : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> enumerationName;
		std::vector<std::unique_ptr<EnumerationMember>> enumerationMembers;
		ast::reference::Access<ast::node::enum_declaration> enumeration;

	public:
		Enumeration(std::unique_ptr<NameReference> enumerationName_,
					ast::reference::Access<ast::node::enum_declaration> enumeration_);
		virtual ~Enumeration() = default;
		void Complete();

	public:
		InputReconstructionObject* GetMember(NameReferenceSecondary* nameReferenceSecondary);
		NameReference* GetName();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATION
