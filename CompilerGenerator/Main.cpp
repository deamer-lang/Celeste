/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#include "Celeste/CompilerGenerator.h"

#include "Deamer/File/Generate/Compiler.h"

int main(int argc, char* argv[])
{
		// Generate: Celeste
	::Celeste::CompilerGenerator Celeste_compiler;
	::deamer::file::generate::Compiler Celeste_WriteToDisk(Celeste_compiler.Generate());
	Celeste_WriteToDisk.SetProjectType(::deamer::file::generate::Compiler::ProjectType::single);
	
	Celeste_WriteToDisk.Generate();


	return 0;
}
