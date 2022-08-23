#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATIONMEMBER_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATIONMEMBER_H

#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class EnumerationMember : public InputReconstructionObject
	{
	private:
		std::unique_ptr<NameReference> enumerationName;
		std::unique_ptr<Expression> enumerationValue;

	public:
		EnumerationMember(std::unique_ptr<NameReference> enumerationName_,
						  std::unique_ptr<Expression> enumerationValue_);
		virtual ~EnumerationMember() = default;
		void Complete();

	public:
		std::unique_ptr<NameReference>& GetName();
		std::unique_ptr<Expression>& GetExpression();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ENUMERATIONMEMBER_H
