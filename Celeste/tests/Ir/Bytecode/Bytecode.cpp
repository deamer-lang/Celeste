#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"
#include "Celeste/Bison/Parser.h"
#include "Celeste/Ir/InputReconstruction/HigherOrder/SourceCodeBlockMutationSet.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Interpreter.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include <fstream>
#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

static std::string ReadInFile(const std::string& file)
{
	const std::ifstream inputFile(file);

	std::ostringstream sstr;
	sstr << inputFile.rdbuf();

	std::string input = sstr.str();

	return input;
}
static std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
EvaluateMain(const std::unique_ptr<Celeste::ir::inputreconstruction::Project>& project)
{
	auto files = project->GetFiles();
	for (auto file : files)
	{
		if (file->GetFileName().find("main.ce") == std::string::npos)
		{
			continue;
		}

		file->ResolveReferences();
		file->IdentifyUpperCodeBlockScopes();

		auto functionObject = file->GetFunction("main");
		if (!functionObject.has_value())
		{
			return std::nullopt;
			;
		}

		auto interpreter = Celeste::ir::inputreconstruction::Interpreter(
			Celeste::ir::inputreconstruction::GroupType::Standard);
		return interpreter.Interpret(functionObject.value());
	}
	return std::nullopt;
}

static void
EvaluateCodeTime(const std::unique_ptr<Celeste::ir::inputreconstruction::Project>& project)
{
	auto files = project->GetFiles();
	for (auto file : files)
	{
		auto interpreter = Celeste::ir::inputreconstruction::Interpreter(
			Celeste::ir::inputreconstruction::GroupType::CodeBlock);
		interpreter.Interpret(file->GetRoot());

		for (auto fileReset : files)
		{
			fileReset->ResetReferences();
		}
	}
}

class Bytecode : public testing::Test
{
protected:
	Bytecode()
	{
	}

	virtual ~Bytecode()
	{
	}
};

static std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
setup(const std::string& main_function)
{
	std::vector<std::string> filenames = {
		"./Celeste/standard_types.ce", "./Celeste/CodeBlock.ce", "./Celeste/Boolean.ce",
		"./Celeste/Array.ce",		   "./Celeste/Object.ce",	 "./Celeste/Range.ce",
		"./Celeste/any_type.ce",	   "./Celeste/io.ce",		 "./Celeste/mutate.ce"};

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

		auto listener = project->GetFileListener(file);
		listener->Dispatch(tree->GetStartNode());

		file->SetAst(std::move(tree));
	}

	auto file = std::make_unique<Celeste::ir::inputreconstruction::File>("main.ce");
	auto fileptr = file.get();
	file->SetProject(project.get());
	files.emplace_back("main.ce", file.get());
	project->AddFile(std::move(file));

	auto parser = Celeste::bison::parser::Parser();
	auto tree = std::unique_ptr<::deamer::external::cpp::ast::Tree>(
		parser.Parse("Import File \"./Celeste/standard_types.ce\"\n" + main_function + "\n"));

	if (tree == nullptr || tree->GetStartNode() == nullptr)
	{
		std::cout << "Could not parse test file: "
				  << "main.ce"
				  << "\n";
		return std::nullopt;
	}

	auto listener = project->GetFileListener(fileptr);
	listener->Dispatch(tree->GetStartNode());

	fileptr->SetAst(std::move(tree));

	EvaluateCodeTime(project);

	return EvaluateMain(project);
}

TEST_F(Bytecode, Expression_a_is_10)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 10;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 10);
}

TEST_F(Bytecode, Expression_a_is_100)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 100;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 100);
}

TEST_F(Bytecode, Expression_a_is_m10)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = -10;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), -10);
}

TEST_F(Bytecode, Expression_a_is_0)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 0);
}

TEST_F(Bytecode, Expression_a_add_b_is_20)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int b = 10;\n"
		"	int a = 10 + b;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 20);
}

TEST_F(Bytecode, Expression_a_add_2b_is_30)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int b = 10;\n"
		"	int a = 10 + b + b;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 30);
}

TEST_F(Bytecode, Expression_a_add_b_then_add_a)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int b = 10;\n"
		"	int a = 10 + b;\n"
		"	a = 10 + a;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 30);
}

TEST_F(Bytecode, Expression_a_add_b_then_add_a_10)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int b = 10;\n"
		"	int a = 10 + b;\n"
		"	a = a + 10;\n"
		"	return a;"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 30);
}

TEST_F(Bytecode, ConditionalIfElse_TrueCase_a_is_20)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 10;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 20);
}

TEST_F(Bytecode, ConditionalIfElse_FalseCase_a_is_0)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 5;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 0);
}

TEST_F(Bytecode, ConditionalIfElseIfElse_Case1_a_is_20)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 10;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 20);
}

TEST_F(Bytecode, ConditionalIfElseIfElse_Case2_a_is_10)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 4;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 10);
}

TEST_F(Bytecode, ConditionalIfElseIfElse_Case3_a_is_0)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 2;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 0);
}

TEST_F(Bytecode, ConditionalIfElseIfElseIfElse_Case1_a_is_20)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 10;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else if (a > 1) {\n"
		"		a = 5\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 20);
}

TEST_F(Bytecode, ConditionalIfElseIfElseIfElse_Case2_a_is_10)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 4;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else if (a > 1) {\n"
		"		a = 5\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 10);
}

TEST_F(Bytecode, ConditionalIfElseIfElseIfElse_Case3_a_is_5)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 2;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else if (a > 1) {\n"
		"		a = 5\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 5);
}

TEST_F(Bytecode, ConditionalIfElseIfElseIfElse_Case4_a_is_0)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	if (a > 5) {\n"
		"		a = 20\n"
		"	}\n"
		"	else if (a > 3) {\n"
		"		a = 10\n"
		"	}\n"
		"	else if (a > 1) {\n"
		"		a = 5\n"
		"	}\n"
		"	else {\n"
		"		a = 0\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 0);
}

TEST_F(Bytecode, ForIteration_Loop0Times)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	for 0 {\n"
		"		a = a + 1\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 0);
}

TEST_F(Bytecode, ForIteration_Loop10Times)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	for 10 {\n"
		"		a = a + 1\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 10);
}

TEST_F(Bytecode, ForIteration_LoopLoop10Times)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	for 10 {\n"
		"		for 10 {\n"
		"			a = a + 1\n"
		"		}\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 100);
}

TEST_F(Bytecode, ForIteration_LoopLoopLoop10Times)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	for 10 {\n"
		"		for 10 {\n"
		"			for 10 {\n"
		"				a = a + 1\n"
		"			}\n"
		"		}\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 1000);
}

TEST_F(Bytecode, ForIteration_AssignVariableAndNumberCase1)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 20;\n"
		"	int i = 20;\n"
		"	if (i > 10) {\n"
		"		i = 10;\n"
		"	}\n"
		"	else {\n"
		"		i = 5;\n"
		"	}\n"
		"	a = a + 1 + i\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 31);
}

TEST_F(Bytecode, ForIteration_AssignVariableAndNumberCase2)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 20;\n"
		"	int i = 0;\n"
		"	i = a;\n"
		"	if (i > 10) {\n"
		"		i = 10;\n"
		"	}\n"
		"	else {\n"
		"		i = 5;\n"
		"	}\n"
		"	a = a + 1 + i\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 31);
}

TEST_F(Bytecode, ForIteration_AssignVariableAndNumber)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 20;\n"
		"	auto i = a;\n"
		"	if (i > 10) {\n"
		"		i = 10;\n"
		"	}\n"
		"	else {\n"
		"		i = 5;\n"
		"	}\n"
		"	a = a + 1 + i\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 31);
}

TEST_F(Bytecode, ForIteration_LoopLoopLoop10Times_And_Conditional)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	for 10 {\n"
		"		auto i = a;\n"
		"		if (i > 10) {\n"
		"			i = 10;\n"
		"		}\n"
		"		else {\n"
		"			i = 5;\n"
		"		}\n"
		"		a = a + 1 + i\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 100);
}

TEST_F(Bytecode, ForIteration_LoopLoopLoop20Times_And_Conditional)
{
	auto result = setup(
		"function Auto main() {\n"
		"	int a = 0;\n"
		"	for 20 {\n"
		"		auto i = a;\n"
		"		if (i > 10) {\n"
		"			i = 10;\n"
		"		}\n"
		"		else {\n"
		"			i = 5;\n"
		"		}\n"
		"		a = a + 1 + i\n"
		"	}\n"
		"	return a;\n"
		"}\n"
		"\n");

	ASSERT_TRUE(result.has_value());
	ASSERT_EQ(std::get<int>(result.value().value), 210);
}
