#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MUTATIONGROUP
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MUTATIONGROUP

#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/TypeConstruct.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class MutationGroup : public InputReconstructionObject
	{
	private:
		std::vector<std::unique_ptr<SymbolReferenceCall>> settings;

		std::vector<std::unique_ptr<InputReconstructionObject>> block;

	public:
		MutationGroup();
		virtual ~MutationGroup() override;

		MutationGroup(const MutationGroup& rhs);

	public:
		void AddSetting(std::unique_ptr<SymbolReferenceCall> setting);

	public:
		void Add(std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
					 innerObject) override;

		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator begin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator end() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rbegin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rend() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator
		GetIterator(InputReconstructionObject* irComponent) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent) override;

		std::vector<InputReconstructionObject*> GetScope() override;
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_MUTATIONGROUP
