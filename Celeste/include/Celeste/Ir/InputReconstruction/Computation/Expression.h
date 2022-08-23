#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H

#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Operator.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Value;

	class Expression : public InputReconstructionObject
	{
	private:
		::deamer::external::cpp::ast::Node* expression;
		std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>> lhs;
		std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>> rhs;
		Operator OperatorType = Operator::Unknown;

		std::optional<InputReconstructionObject*> cachedDeducedType;

	public:
		Expression(::deamer::external::cpp::ast::Node* expression_);
		virtual ~Expression() = default;

	public:
		void Resolve();

		/*!	\function DeduceType
		 *
		 *	\brief Deduces the Type of this Expression
		 */
		InputReconstructionObject* DeduceType();

		std::string GetOperatorFunctionName();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
