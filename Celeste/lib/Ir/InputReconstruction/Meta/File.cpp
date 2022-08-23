#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"

Celeste::ir::inputreconstruction::File::File(std::string fileName_) : fileName(fileName_)
{
}

void Celeste::ir::inputreconstruction::File::SetProject(Project* project_)
{
	project = project_;
}

Celeste::ir::inputreconstruction::Project* Celeste::ir::inputreconstruction::File::GetProject()
{
	return project;
}

void Celeste::ir::inputreconstruction::File::AddInputReconstructionObject(
	std::unique_ptr<InputReconstructionObject> inputReconstructionObject_)
{
	inputReconstructionObject_->SetFile(this);
	inputReconstructionObjects.push_back(std::move(inputReconstructionObject_));
}

std::string Celeste::ir::inputreconstruction::File::GetFileName()
{
	return fileName;
}

void Celeste::ir::inputreconstruction::File::SetAst(
	std::unique_ptr<deamer::external::cpp::ast::Tree> ast_)
{
	ast = std::move(ast_);
}

deamer::external::cpp::ast::Tree* Celeste::ir::inputreconstruction::File::GetAst()
{
	return ast.get();
}

void Celeste::ir::inputreconstruction::File::AddUnresolvedSymbolReference(
	InputReconstructionObject* unresolvedSymbolReferenceCall)
{
	unresolvedSymbolReferenceCalls.push_back(unresolvedSymbolReferenceCall);
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::File::GetUnresolvedSymbolReferences()
{
	return unresolvedSymbolReferenceCalls;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::File::GetIrBottom()
{
	return std::rbegin(inputReconstructionObjects)->get();
}
