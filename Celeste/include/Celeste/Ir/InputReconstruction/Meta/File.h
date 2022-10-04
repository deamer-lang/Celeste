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
	class SourceCodeBlockMutationSet;

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
		void RemoveUnresolvedReference(SymbolReferenceCall* symbolReferenceCall);

		void ResolveReferences(std::function<void(InputReconstructionObject*)> callback =
								   [](InputReconstructionObject*) {});

		void
		IdentifyUpperCodeBlockScopes(std::function<void(SourceCodeBlockMutationSet*)> callback =
										 [](SourceCodeBlockMutationSet*) {});

	public:
		void AddCodeBlock(CodeBlock* codeBlock_);

	public:
		std::optional<Class*> GetClass(std::string className, bool expandImports = false);
		std::optional<Function*> GetFunction(const std::string& functionName,
											 bool expandImports = false);

	public:
		Class* CreateClass(const std::string& className);
		Function* CreateFunction(const std::string& className, const std::string& returnType = "");

	public:
		void ResetReferences();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_FILE_H
