#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H

#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <Deamer/External/Cpp/Ast/Node.h>
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Value;

	class Expression : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		Expression(::deamer::external::cpp::ast::Node* expression_);
		virtual ~Expression();

		Expression(const Expression& rhs);

	public:
		void Resolve();

		/*!	\function DeduceType
		 *
		 *	\brief Deduces the Type of this Expression
		 */
		InputReconstructionObject* DeduceType();

		std::optional<std::string> GetOperatorFunctionName();

		std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>>& GetLhs();
		std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>>& GetRhs();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
