#ifndef CELESTE_INPUTRECONSTRUCTION_META_FILE_H
#define CELESTE_INPUTRECONSTRUCTION_META_FILE_H

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include <Deamer/External/Cpp/Ast/Tree.h>
#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class Project;
	class InputReconstructionObject;
	class CodeBlock;

	class File
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		File(std::string fileName_);
		virtual ~File();

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
		std::optional<Class*> GetClass(std::string className, bool expandImports = false);
		void RemoveUnresolvedReference(SymbolReferenceCall* symbolReferenceCall);

		void ResolveReferences(std::function<void(InputReconstructionObject*)> callback);

	public:
		void AddCodeBlock(CodeBlock* codeBlock_);
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_FILE_H
