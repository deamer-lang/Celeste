#ifndef CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H
#define CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H

#include "Celeste/Ast/Reference/Access.h"
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

	public:
		void SetFile(File* file);
		File* GetFile();

		Type GetType();

		void SetParent(InputReconstructionObject* parent_);
		InputReconstructionObject* GetParent();

		virtual void Add(InputReconstructionObject* innerObject);
		virtual void Add(std::vector<InputReconstructionObject*> innerObjects);
		virtual std::vector<InputReconstructionObject*>::iterator
		GetIterator(InputReconstructionObject* irComponent);
		virtual std::vector<InputReconstructionObject*>::iterator begin();
		virtual std::vector<InputReconstructionObject*>::iterator end();
		virtual std::vector<InputReconstructionObject*>& GetScope();

		virtual std::vector<InputReconstructionObject*>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent);
		virtual std::vector<InputReconstructionObject*>::reverse_iterator rend();
		virtual std::vector<InputReconstructionObject*>::reverse_iterator rbegin();

		void SetReferencingObject(InputReconstructionObject* nameReference);
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H
