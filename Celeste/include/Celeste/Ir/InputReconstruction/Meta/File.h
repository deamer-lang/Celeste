#ifndef CELESTE_INPUTRECONSTRUCTION_META_FILE_H
#define CELESTE_INPUTRECONSTRUCTION_META_FILE_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include <Deamer/External/Cpp/Ast/Tree.h>
#include <memory>
#include <string>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class Project;
	class InputReconstructionObject;

	class File
	{
	private:
		std::unique_ptr<deamer::external::cpp::ast::Tree> ast;
		std::vector<std::unique_ptr<InputReconstructionObject>> inputReconstructionObjects;
		Project* project;
		std::string fileName;
		std::vector<InputReconstructionObject*> unresolvedSymbolReferenceCalls;

	public:
		File(std::string fileName_);
		virtual ~File() = default;

	public:
		void SetProject(Project* project_);
		Project* GetProject();

		void AddInputReconstructionObject(
			std::unique_ptr<InputReconstructionObject> inputReconstructionObject_);
		std::string GetFileName();

		void SetAst(std::unique_ptr<deamer::external::cpp::ast::Tree> ast_);
		deamer::external::cpp::ast::Tree* GetAst();

		void AddUnresolvedSymbolReference(InputReconstructionObject* unresolvedSymbolReferenceCall);
		std::vector<InputReconstructionObject*> GetUnresolvedSymbolReferences();
		InputReconstructionObject* GetIrBottom();
		InputReconstructionObject* GetRoot();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_FILE_H
