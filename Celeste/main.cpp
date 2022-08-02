#include "Celeste/Ast/Listener/User/StructureTranslator.h"
#include "Celeste/Ast/Visualisation/Graph.h"
#include "Celeste/Bison/Parser.h"
//#include "Celeste/Dleg/Lexer.h"
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
	}

	std::cout << "Compilation succeeded!\n";
	return 0;
}
