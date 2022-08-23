#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INPUTRECONSTRUCTION
#define CELESTE_IR_INPUTRECONSTRUCTION_INPUTRECONSTRUCTION

#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/InlineClass.h"
#include "Celeste/Ir/InputReconstruction/Structure/Namespace.h"
#include "Deamer/External/Cpp/Ast/Tree.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class InputReconstruction
	{
	private:
		std::vector<std::unique_ptr<Class>> classes;
		std::vector<std::unique_ptr<Enumeration>> enumerations;
		std::vector<std::unique_ptr<Function>> functions;
		std::vector<std::unique_ptr<InlineClass>> inlineClasses;
		std::vector<std::unique_ptr<Namespace>> namespaces;

	public:
		InputReconstruction(std::shared_ptr<::deamer::external::cpp::ast::Tree> sourceTree);
		virtual ~InputReconstruction() = default;

	public:
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INPUTRECONSTRUCTION
