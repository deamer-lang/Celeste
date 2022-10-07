#ifndef CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H
#define CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H

#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/Meta/GroupType.h"
#include "Celeste/Ir/InputReconstruction/Meta/Type.h"
#include <memory>
#include <optional>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class File;

	class InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		InputReconstructionObject(Type type_);
		virtual ~InputReconstructionObject();

		InputReconstructionObject(const InputReconstructionObject& rhs);

	public:
		void SetFile(File* file);
		File* GetFile();

		Type GetType() const;

		void SetParent(InputReconstructionObject* parent_);
		InputReconstructionObject* GetParent();

		virtual void Add(InputReconstructionObject* innerObject);
		virtual void Add(std::vector<InputReconstructionObject*> innerObjects);
		virtual void
		Add(std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
				innerObject);
		virtual std::vector<std::unique_ptr<InputReconstructionObject>>::iterator
		GetIterator(InputReconstructionObject* irComponent);
		virtual std::vector<std::unique_ptr<InputReconstructionObject>>::iterator begin();
		virtual std::vector<std::unique_ptr<InputReconstructionObject>>::iterator end();

		virtual std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent);
		virtual std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rend();
		virtual std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rbegin();

		void SetReferencingObject(InputReconstructionObject* nameReference);
		std::vector<InputReconstructionObject*> GetReferencesToThisObject();

		void SetGroupType(GroupType groupType_);
		GroupType GetGroupType();
		virtual std::unique_ptr<InputReconstructionObject> DeepCopy() = 0;
		virtual std::vector<InputReconstructionObject*> GetScope();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H
