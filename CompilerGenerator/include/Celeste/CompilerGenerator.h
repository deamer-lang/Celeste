/*
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef CELESTE_COMPILERGENERATOR_H
#define CELESTE_COMPILERGENERATOR_H

#include "Celeste/Language.h"
#include "Deamer/Ast/Generation/CPP/CPP.h"
#include "Deamer/Compiler/Generator/Compiler.h"
#include "Deamer/Language/Reference/PropertyDefinition.h"
#include "Deamer/Lexer/Generator/Flex/Flex.h"
#include "Deamer/Parser/Generator/Bison/Bison.h"
#include "Deamer/Tool/Type/DeamerDocumentation/DeamerDocumentation.h"
#include "Deamer/Tool/Type/OopSyntaxRecognizer/OopSyntaxRecognizer.h"

namespace Celeste
{
	/*!	\class CompilerGenerator
	 *
	 *	\brief This contains the CompilerGenerator of the language Celeste
	 *
	 *	\details The CompilerGenerator class generates the compiler and various ecosystems.
	 *
	 *	\note This is auto-generated via the DLDL definitions.
	 */
	class CompilerGenerator : public ::deamer::compiler::generator::Compiler<::Celeste::Language>

	{
	public:
		CompilerGenerator() : deamer::compiler::generator::Compiler<::Celeste::Language>()

		{
		}

		deamer::file::compiler::Output Generate() override
		{
			// Retrieve the Language Definition (LD)
			::deamer::file::compiler::Output output(::deamer::compiler::generator::Compiler<
													::Celeste::Language>::GetLanguageDefinition());
			::deamer::language::reference::PropertyDefinition(
				::deamer::compiler::generator::Compiler<
					::Celeste::Language>::GetLanguageDefinition())
				.GetDefinition<::deamer::language::type::definition::property::Type::Threat>()
				.PrintThreats();

			// Initialize language outputs
			::deamer::lexer::generator::flex::Flex Flex(
				::deamer::compiler::generator::Compiler<
					::Celeste::Language>::GetLanguageDefinition());
			::deamer::parser::generator::bison::Bison Bison(
				::deamer::compiler::generator::Compiler<
					::Celeste::Language>::GetLanguageDefinition());
			::deamer::ast::generation::cpp::CPP CPP(::deamer::compiler::generator::Compiler<
													::Celeste::Language>::GetLanguageDefinition());
			::deamer::tool::type::deamerdocumentation::DeamerDocumentation DeamerDocumentation(
				::deamer::compiler::generator::Compiler<
					::Celeste::Language>::GetLanguageDefinition());
			::deamer::tool::type::oopsyntaxrecognizer::OopSyntaxRecognizer OopSyntaxRecognizer(
				::deamer::compiler::generator::Compiler<
					::Celeste::Language>::GetLanguageDefinition());

			// The language generation targets
			output.AddLanguageToolOutput(Flex.Generate());
			output.AddLanguageToolOutput(Bison.Generate());
			output.AddLanguageToolOutput(CPP.Generate());
			output.AddLanguageToolOutput(DeamerDocumentation.Generate());
			output.AddLanguageToolOutput(OopSyntaxRecognizer.Generate());

			return output;
		}

		~CompilerGenerator() override = default;
	};
}

#endif // CELESTE_COMPILERGENERATOR_H
