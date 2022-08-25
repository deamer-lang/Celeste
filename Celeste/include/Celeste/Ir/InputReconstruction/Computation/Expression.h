#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <Deamer/External/Cpp/Ast/Node.h>
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class Expression : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		Expression(::deamer::external::cpp::ast::Node* expression_);
		virtual ~Expression();

	public:
		void Resolve();

		/*!	\function DeduceType
		 *
		 *	\brief Deduces the Type of this Expression
		 */
		InputReconstructionObject* DeduceType();

		std::optional<std::string> GetOperatorFunctionName();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
