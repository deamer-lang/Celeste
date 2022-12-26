#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H

#include "Celeste/Ir/InputReconstruction/Computation/Operator.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <Deamer/External/Cpp/Ast/Node.h>
#include <memory>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class Value;
	class Function;

	class Expression : public InputReconstructionObject
	{
	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		Expression(::deamer::external::cpp::ast::Node* expression_);
		virtual ~Expression();
		bool IsTypeReference() const;

		Expression(const Expression& rhs);

	public:
		void Resolve();

		/*!	\function DeduceType
		 *
		 *	\brief Deduces the Type of this Expression
		 */
		InputReconstructionObject* DeduceType() const;

		std::optional<std::string> GetOperatorFunctionName() const;

		std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>>&
		GetLhs() const;
		std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>>&
		GetRhs() const;
		Operator GetOperatorType() const;

	public:
		std::optional<InputReconstructionObject*>
		GetDeducedType(std::variant<std::monostate, std::unique_ptr<Expression>,
									std::unique_ptr<Value>>& variant) const;
		inputreconstruction::InputReconstructionObject*
		GetMemberFunction(InputReconstructionObject* object = nullptr) const;

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_EXPRESSION_H
