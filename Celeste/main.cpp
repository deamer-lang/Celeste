#include "Celeste/Ast/Listener/User/StructureTranslator.h"
#include "Celeste/Ast/Visualisation/Graph.h"
#include "Celeste/Bison/Parser.h"
#include "Celeste/OopSyntaxRecognizer/OopSyntaxRecognizer.h"
#include "Deamer/External/Cpp/Tool/OopToPlantUML/Type/ConvertOopModelToPUML.h"
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

int main(int argc, const char* argv[])
{
	std::vector<std::string> filenames = {"./test.txt"};

	for (auto i = 1; i < argc; i++)
	{
		filenames.push_back(argv[1]);
	}

	for (const auto& filename : filenames)
	{
		std::string text = ReadInFile(filename);

		std::cout << "File: " << filename << "\n";
		std::cout << text << "\n";
		std::cout << "\n";

		auto parser = Celeste::parser::Parser();
		auto* ast = parser.Parse(text);
		if (ast == nullptr)
		{
			std::cout << "Compilation failed!\n";
			return -1;
		}

		if (ast->GetStartNode() == nullptr)
		{
			std::cout << "Compilation failed!\n";
			return -1;
		}

		if (true)
		{
			auto graph = Celeste::ast::listener::deamer::visualisation::Graph();
			graph.Dispatch(ast->GetStartNode());
			std::cout << graph.GetGraph() << std::endl;
		}
		if (true)
		{
			auto structTranslater = Celeste::ast::listener::user::StructureTranslator();
			structTranslater.Dispatch(ast->GetStartNode());
			std::cout << "Struct translated!\n";
		}
		if (true)
		{
			auto oopRecognizer = Celeste::ast::listener::tool::oopsyntaxrecognizer::Recognizer();
			oopRecognizer.Dispatch(ast->GetStartNode());
			auto oopModel = oopRecognizer.GetOutput();
			std::cout << "Oop concepts recognized! Now showing the result:\n";
			oopModel.Print();
			std::cout << "\n";

			std::cout << "PlantUml class diagram:\n";
			const auto puml =
				deamer::external::cpp::tool::ooptoplantuml::ConvertOopModelToPUML::ConvertOopModel(
					oopModel);
			std::cout << puml << "\n";
		}
		delete ast;
	}

	std::cout << "Compilation succeeded!\n";
	return 0;
}