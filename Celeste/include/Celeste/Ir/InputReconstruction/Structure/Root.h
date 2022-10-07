#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ROOT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ROOT_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class Root : public InputReconstructionObject
	{
	private:
		std::vector<std::unique_ptr<InputReconstructionObject>> block;

	public:
		Root();
		virtual ~Root() = default;

		Root(const Root& rhs);

	public:
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

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_ROOT_H
