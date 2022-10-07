#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATIONMEMBER_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATIONMEMBER_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Enumeration;

	class EnumerationMember : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> enumerationName;
		std::unique_ptr<Expression> enumerationValue;

	public:
		EnumerationMember(std::unique_ptr<NameReference> enumerationName_,
						  std::unique_ptr<Expression> enumerationValue_ = nullptr);
		virtual ~EnumerationMember() = default;
		void Complete();

		EnumerationMember(const EnumerationMember& rhs);

	public:
		std::unique_ptr<NameReference>& GetName();
		std::unique_ptr<Expression>& GetExpression();
		Enumeration* GetEnumeration();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATIONMEMBER_H
