#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"
#include "Celeste/Ast/Visualisation/Graph.h"
#include "Celeste/Bison/Parser.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

std::string ReadInFile(const std::string& file)
{
	const std::ifstream inputFile(file);

	std::ostringstream sstr;
	sstr << inputFile.rdbuf();

	std::string input = sstr.str();

	return input;
}

void VisualizeProject(const std::unique_ptr<Celeste::ir::inputreconstruction::Project>& project)
{
	for (auto file : project->GetFiles())
	{
		std::cout << "File: " << file->GetFileName() << "\n";
		if constexpr (false)
		{
			auto graph = Celeste::ast::listener::deamer::visualisation::Graph();
			graph.Dispatch(file->GetAst()->GetStartNode());
			std::cout << graph.GetGraph() << "\n";
		}

		for (auto unresolved : file->GetUnresolvedSymbolReferences())
		{
			if (unresolved->GetType() ==
				Celeste::ir::inputreconstruction::Type::SymbolReferenceCall)
			{
				auto unresolved_ =
					static_cast<Celeste::ir::inputreconstruction::SymbolReferenceCall*>(unresolved);
				std::cout << "Unresolved Reference: " << unresolved_->GetNode()->GetText() << "("
						  << (std::size_t)unresolved_ << ") Parent["
						  << (std::size_t)unresolved_->GetParent() << "]"
						  << "\n";
				std::cout << "At Line: " << unresolved_->GetNode()->GetLineNumber() << ", "
						  << unresolved_->GetNode()->GetColumnNumber() << "\n";

				unresolved_->Resolve();
				auto finalLinked = unresolved_->GetFinalLinkedIr();
				auto resolved = unresolved_->GetResolvedLinkedIr();
				std::cout << std::boolalpha << "Reference: " << (finalLinked.has_value());
				if (finalLinked.has_value() && resolved.has_value())
				{
					auto finalLinkedValue = finalLinked.value();
					std::cout << " Type: " << static_cast<std::size_t>(finalLinkedValue->GetType())
							  << "(" << (std::size_t)(finalLinkedValue) << ")";
					auto resolvedValue = resolved.value();
					std::cout << " Full Resolve: "
							  << static_cast<std::size_t>(resolvedValue->GetType()) << "("
							  << (std::size_t)(resolvedValue) << ")";
				}
				std::cout << "\n";

				std::cout << "\n";
			}
			else if (unresolved->GetType() == Celeste::ir::inputreconstruction::Type::NameReference)
			{
				auto unresolved_ =
					static_cast<Celeste::ir::inputreconstruction::NameReference*>(unresolved);
				std::cout << "Unresolved Reference: " << unresolved_->GetNode()->GetText() << "("
						  << (std::size_t)unresolved_ << ") Parent["
						  << (std::size_t)unresolved_->GetParent() << "]"
						  << "\n";
				std::cout << "At Line: " << unresolved_->GetNode()->GetLineNumber() << ", "
						  << unresolved_->GetNode()->GetColumnNumber() << "\n";
				unresolved_->Resolve();
				std::cout << unresolved_->GetResolvedName() << "\n";
				std::cout << "\n";
			}
		}
	}
}

int main(int argc, const char* argv[])
{
	std::vector<std::string> filenames = {"./main.ce", "./Point.ce"};

	for (auto i = 1; i < argc; i++)
	{
		filenames.emplace_back(argv[1]);
	}

	auto project = std::make_unique<Celeste::ir::inputreconstruction::Project>();
	std::vector<std::pair<std::string, Celeste::ir::inputreconstruction::File*>> files;
	for (const auto& filename : filenames)
	{
		auto file = std::make_unique<Celeste::ir::inputreconstruction::File>(filename);
		file->SetProject(project.get());
		files.emplace_back(filename, file.get());
		project->AddFile(std::move(file));
	}

	for (auto& [filename, file] : files)
	{
		auto parser = Celeste::bison::parser::Parser();
		auto tree = std::unique_ptr<::deamer::external::cpp::ast::Tree>(
			parser.Parse(ReadInFile(filename) + "\n"));

		if (tree == nullptr || tree->GetStartNode() == nullptr)
		{
			std::cout << "Could not parse file: " << filename << "\n";
			continue;
		}

		auto visualizer = Celeste::ast::listener::deamer::visualisation::Graph();
		visualizer.Dispatch(tree->GetStartNode());
		// std::cout << visualizer.GetGraph() << "\n";

		auto listener = project->GetFileListener(file);
		listener->Dispatch(tree->GetStartNode());

		file->SetAst(std::move(tree));
	}

	VisualizeProject(project);

	std::cout << "Compilation succeeded!\n";
	return 0;
}
