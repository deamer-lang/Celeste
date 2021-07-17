#include "Celeste/CompilerGenerator.h"

#include "Deamer/File/Generate/Compiler.h"
int main(int argc, char* argv[])
{
		// Generate: Celeste
	::Celeste::CompilerGenerator Celeste_compiler;
	::deamer::file::generate::Compiler Celeste_WriteToDisk(Celeste_compiler.Generate());
	Celeste_WriteToDisk.Generate();

	return 0;
}
