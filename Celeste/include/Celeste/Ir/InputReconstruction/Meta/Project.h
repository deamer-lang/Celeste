#ifndef CELESTE_INPUTRECONSTRUCTION_META_PROJECT_H
#define CELESTE_INPUTRECONSTRUCTION_META_PROJECT_H

#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include <memory>
#include <vector>

namespace Celeste::ast::listener::user::ir
{
	class InputReconstructionListener;
}

namespace Celeste::ir::inputreconstruction
{
	class Project
	{
	private:
		std::vector<std::unique_ptr<File>> files;

	public:
		Project() = default;
		virtual ~Project() = default;

	public:
		void AddFile(std::unique_ptr<File> file);
		File* GetFile(const std::string& cs);

		std::unique_ptr<ast::listener::user::ir::InputReconstructionListener>
		GetFileListener(const std::string& filename);
		std::unique_ptr<Celeste::ast::listener::user::ir::InputReconstructionListener>
		GetFileListener(File* file);
		std::vector<File*> GetFiles();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_META_PROJECT_H
