#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"

void Celeste::ir::inputreconstruction::Project::AddFile(std::unique_ptr<File> file)
{
	files.push_back(std::move(file));
}

Celeste::ir::inputreconstruction::File*
Celeste::ir::inputreconstruction::Project::GetFile(const std::string& cs)
{
	auto formatFileName = [](std::string fileName) {
		if (fileName.size() > 2 && fileName[0] == '.' && fileName[1] == '/')
		{
			return fileName.substr(2);
		}

		return fileName;
	};
	const auto requestedFileName = formatFileName(cs);

	for (auto& file : files)
	{
		if (formatFileName(file->GetFileName()) == requestedFileName)
		{
			return file.get();
		}
	}

	return nullptr;
}

std::unique_ptr<Celeste::ast::listener::user::ir::InputReconstructionListener>
Celeste::ir::inputreconstruction::Project::GetFileListener(const std::string& filename)
{
	return std::make_unique<Celeste::ast::listener::user::ir::InputReconstructionListener>(
		this, GetFile(filename));
}

std::unique_ptr<Celeste::ast::listener::user::ir::InputReconstructionListener>
Celeste::ir::inputreconstruction::Project::GetFileListener(File* file)
{
	return std::make_unique<Celeste::ast::listener::user::ir::InputReconstructionListener>(this,
																						   file);
}

std::vector<Celeste::ir::inputreconstruction::File*>
Celeste::ir::inputreconstruction::Project::GetFiles()
{
	std::vector<Celeste::ir::inputreconstruction::File*> output;
	for (auto& _ : files)
	{
		output.push_back(_.get());
	}

	return output;
}
