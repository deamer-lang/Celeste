#ifndef CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H
#define CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H

#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/Meta/Type.h"
#include <optional>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class File;

	class InputReconstructionObject
	{
	private:
		Type type;
		File* file;
		std::optional<InputReconstructionObject*> parent;
		std::vector<InputReconstructionObject*> scope;

	public:
		InputReconstructionObject(Type type_);
		virtual ~InputReconstructionObject() = default;

	public:
		void SetFile(File* file);
		File* GetFile();

		Type GetType();

		void SetParent(InputReconstructionObject* parent_);
		InputReconstructionObject* GetParent();

		virtual void Add(InputReconstructionObject* innerObject);
		virtual void Add(std::vector<InputReconstructionObject*> innerObjects);
		virtual std::vector<InputReconstructionObject*>::iterator
		GetIterator(InputReconstructionObject* parent);
		virtual std::vector<InputReconstructionObject*>& GetScope();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_INPUTRECONSTRUCTIONOBJECT_H