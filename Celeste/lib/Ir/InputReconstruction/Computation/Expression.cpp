#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Operator.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/EnumerationMember.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include <iostream>
#include <variant>

struct Celeste::ir::inputreconstruction::Expression::Impl
{
	::deamer::external::cpp::ast::Node* expression = nullptr;
	std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>> lhs;
	std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>> rhs;
	Operator OperatorType = Operator::Unknown;

	std::optional<InputReconstructionObject*> cachedDeducedType;

	Impl()
	{
	}

	Impl(::deamer::external::cpp::ast::Node* expression_) : expression(expression_)
	{
	}

	~Impl()
	{
	}

	std::unique_ptr<Impl> DeepCopy(Expression* newParent)
	{
		auto newImpl = std::make_unique<Impl>();
		newImpl->expression = this->expression;
		newImpl->OperatorType = this->OperatorType;
		newImpl->cachedDeducedType = this->cachedDeducedType;

		if (std::holds_alternative<std::monostate>(lhs))
		{
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(lhs))
		{
			auto& lhsValue = std::get<std::unique_ptr<Expression>>(lhs);
			auto newLhsValue = std::unique_ptr<Expression>(
				static_cast<Expression*>(lhsValue->DeepCopy().release()));
			newLhsValue->SetParent(newParent);
			newImpl->lhs = std::move(newLhsValue);
		}
		else if (std::holds_alternative<std::unique_ptr<Value>>(lhs))
		{
			auto& lhsValue = std::get<std::unique_ptr<Value>>(lhs);
			auto newLhsValue =
				std::unique_ptr<Value>(static_cast<Value*>(lhsValue->DeepCopy().release()));
			newLhsValue->SetParent(newParent);
			newImpl->lhs = std::move(newLhsValue);
		}

		if (std::holds_alternative<std::monostate>(rhs))
		{
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(rhs))
		{
			auto& rhsValue = std::get<std::unique_ptr<Expression>>(rhs);
			auto newRhsValue = std::unique_ptr<Expression>(
				static_cast<Expression*>(rhsValue->DeepCopy().release()));
			newRhsValue->SetParent(newParent);
			newImpl->rhs = std::move(newRhsValue);
		}
		else if (std::holds_alternative<std::unique_ptr<Value>>(rhs))
		{
			auto& rhsValue = std::get<std::unique_ptr<Value>>(rhs);
			auto newRhsValue =
				std::unique_ptr<Value>(static_cast<Value*>(rhsValue->DeepCopy().release()));
			newRhsValue->SetParent(newParent);
			newImpl->rhs = std::move(newRhsValue);
		}

		return std::move(newImpl);
	}
};

Celeste::ir::inputreconstruction::Expression::Expression(
	::deamer::external::cpp::ast::Node* expression_)
	: InputReconstructionObject(Type::Expression),
	  impl(std::make_unique<Impl>(expression_))
{
}

Celeste::ir::inputreconstruction::Expression::~Expression()
{
}

Celeste::ir::inputreconstruction::Expression::Expression(const Expression& rhs)
	: InputReconstructionObject(rhs),
	  impl(rhs.impl->DeepCopy(this))
{
}

void Celeste::ir::inputreconstruction::Expression::Resolve()
{
	switch (static_cast<ast::Type>(impl->expression->GetType()))
	{
	case ast::Type::expression: {
		auto _ = std::make_unique<Expression>(
			const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(0)));
		_->SetFile(GetFile());
		_->SetParent(this);
		_->Resolve();
		impl->lhs = std::move(_);
		break;
	}
	case ast::Type::expression_no_value: {
		auto access = ast::reference::Access<ast::node::expression_no_value>(
			static_cast<const ast::node::expression_no_value*>(impl->expression));
		if (!access.expression_no_value().GetContent().empty())
		{
			auto lhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(0)));
			lhs_->SetFile(GetFile());
			lhs_->SetParent(this);
			lhs_->Resolve();
			impl->lhs = std::move(lhs_);

			auto rhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(2)));
			rhs_->SetFile(GetFile());
			rhs_->SetParent(this);
			rhs_->Resolve();
			impl->rhs = std::move(rhs_);

			switch (static_cast<ast::Type>(impl->expression->GetIndex(1)->GetType()))
			{
			case ast::Type::PLUS: {
				impl->OperatorType = Operator::Add;
				break;
			}
			case ast::Type::MINUS: {
				impl->OperatorType = Operator::Minus;
				break;
			}
			}
		}
		else
		{
			auto _ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(0)));
			_->SetFile(GetFile());
			_->SetParent(this);
			_->Resolve();
			impl->lhs = std::move(_);
		}
		break;
	}
	case ast::Type::t_expression: {
		auto access = ast::reference::Access<ast::node::t_expression>(
			static_cast<const ast::node::t_expression*>(impl->expression));
		if (!access.t_expression().GetContent().empty())
		{
			auto lhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(0)));
			lhs_->SetParent(this);
			lhs_->SetFile(GetFile());
			lhs_->Resolve();
			impl->lhs = std::move(lhs_);

			auto rhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(2)));
			rhs_->SetParent(this);
			rhs_->SetFile(GetFile());
			rhs_->Resolve();
			impl->rhs = std::move(rhs_);

			switch (static_cast<ast::Type>(impl->expression->GetIndex(1)->GetType()))
			{
			case ast::Type::PLUS: {
				impl->OperatorType = Operator::Add;
				break;
			}
			case ast::Type::MINUS: {
				impl->OperatorType = Operator::Minus;
				break;
			}
			case ast::Type::MULTIPLY: {
				impl->OperatorType = Operator::Multiply;
				break;
			}
			case ast::Type::DIVIDE: {
				impl->OperatorType = Operator::Divide;
				break;
			}
			case ast::Type::LTEQ: {
				impl->OperatorType = Operator::LessOrEqual;
				break;
			}
			case ast::Type::GTEQ: {
				impl->OperatorType = Operator::GreaterOrEqual;
				break;
			}
			case ast::Type::LT: {
				impl->OperatorType = Operator::Less;
				break;
			}
			case ast::Type::GT: {
				impl->OperatorType = Operator::Greater;
				break;
			}
			case ast::Type::EQEQ: {
				impl->OperatorType = Operator::Equal;
				break;
			}
			case ast::Type::NOTEQ: {
				impl->OperatorType = Operator::NotEqual;
				break;
			}
			case ast::Type::NOT: {
				impl->OperatorType = Operator::Not;
				break;
			}
			}
		}
		else
		{
			if (impl->expression->GetIndex(0)->GetType() == ast::Type::f_expression)
			{
				auto _ = std::make_unique<Expression>(
					const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(0)));
				_->SetFile(GetFile());
				_->SetParent(this);
				_->Resolve();
				impl->lhs = std::move(_);
			}
			else
			{
				auto _ = std::make_unique<Expression>(
					const_cast<::deamer::external::cpp::ast::Node*>(impl->expression->GetIndex(1)));
				_->SetFile(GetFile());
				_->SetParent(this);
				_->Resolve();
				impl->lhs = std::move(_);

				switch (static_cast<ast::Type>(impl->expression->GetIndex(0)->GetType()))
				{
				case ast::Type::PLUS: {
					impl->OperatorType = Operator::Add;
					break;
				}
				case ast::Type::MINUS: {
					impl->OperatorType = Operator::Minus;
					break;
				}
				case ast::Type::MULTIPLY: {
					impl->OperatorType = Operator::Multiply;
					break;
				}
				case ast::Type::DIVIDE: {
					impl->OperatorType = Operator::Divide;
					break;
				}
				case ast::Type::LTEQ: {
					impl->OperatorType = Operator::LessOrEqual;
					break;
				}
				case ast::Type::GTEQ: {
					impl->OperatorType = Operator::GreaterOrEqual;
					break;
				}
				case ast::Type::LT: {
					impl->OperatorType = Operator::Less;
					break;
				}
				case ast::Type::GT: {
					impl->OperatorType = Operator::Greater;
					break;
				}
				case ast::Type::EQEQ: {
					impl->OperatorType = Operator::Equal;
					break;
				}
				case ast::Type::NOTEQ: {
					impl->OperatorType = Operator::NotEqual;
					break;
				}
				case ast::Type::NOT: {
					impl->OperatorType = Operator::Not;
					break;
				}
				}
			}
		}
		break;
	}
	case ast::Type::f_expression: {
		auto access = ast::reference::Access<ast::node::f_expression>(
			static_cast<const ast::node::f_expression*>(impl->expression));
		if (!access.expression_no_value().GetContent().empty())
		{
			auto _ = std::make_unique<Expression>(const_cast<::deamer::external::cpp::ast::Node*>(
				static_cast<const ::deamer::external::cpp::ast::Node*>(
					access.expression_no_value().GetContent()[0])));
			_->SetFile(GetFile());
			_->SetParent(this);
			_->Resolve();
			impl->lhs = std::move(_);
		}
		else if (!access.value().GetContent().empty())
		{
			auto lhsValue = std::make_unique<Value>(
				const_cast<ast::node::value*>(access.value().GetContent()[0]));
			lhsValue->SetFile(GetFile());
			lhsValue->SetParent(this);
			lhsValue->Resolve();
			impl->lhs = std::move(lhsValue);
		}
		break;
	}
	}
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Expression::DeduceType()
{
	if (impl->cachedDeducedType.has_value())
	{
		return impl->cachedDeducedType.value();
	}

	auto getDeducedType = [&](auto& variant) {
		if (std::holds_alternative<std::monostate>(variant))
		{
			return std::optional<InputReconstructionObject*>(std::nullopt);
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(variant))
		{
			return std::optional<InputReconstructionObject*>(
				std::get<std::unique_ptr<Expression>>(variant)->DeduceType());
		}
		else if (std::holds_alternative<std::unique_ptr<Value>>(variant))
		{
			return std::optional<InputReconstructionObject*>(
				std::get<std::unique_ptr<Value>>(variant)->DeduceType());
		}
		else
		{
			// Invalid
			return std::optional<InputReconstructionObject*>(nullptr);
		}
	};

	auto deducedTypeLhs = getDeducedType(impl->lhs);
	auto deducedTypeRhs = getDeducedType(impl->rhs);

	if (!deducedTypeLhs.has_value() || deducedTypeLhs.value() == nullptr)
	{
		// Invalid
		return nullptr;
	}

	if (deducedTypeRhs.has_value() && deducedTypeRhs.value() == nullptr)
	{
		// Invalid
		return nullptr;
	}

	// Apply operator functions to lhs type as lhs.operator();
	if (!deducedTypeRhs.has_value())
	{
		auto operatorFunctionName = GetOperatorFunctionName();
		if (!operatorFunctionName.has_value())
		{
			switch (deducedTypeLhs.value()->GetType())
			{
			case Type::Constructor: {
				// The parent of the constructor is always the Class it belongs to
				auto constructor = static_cast<Constructor*>(deducedTypeLhs.value());
				return constructor->GetParent();
			}
			case Type::VariableDeclaration: {
				auto variableDeclarationIr =
					static_cast<VariableDeclaration*>(deducedTypeLhs.value());
				return variableDeclarationIr->GetVariableType();
			}
			case Type::FunctionArgument: {
				auto functionArgumentIr = static_cast<FunctionArgument*>(deducedTypeLhs.value());
				return functionArgumentIr->GetArgumentType();
			}
			case Type::Function: {
				auto functionIr = static_cast<Function*>(deducedTypeLhs.value());
				return functionIr->GetReturnType();
			}
			case Type::TypeConstruct: {
				auto typeConstruct = static_cast<TypeConstruct*>(deducedTypeLhs.value());
				if (typeConstruct->Trivial())
				{
					return typeConstruct->GetCoreType().value();
				}

				return typeConstruct;
			}
			case Type::Enumeration: {
				return deducedTypeLhs.value();
			}
			case Type::EnumerationMember: {
				auto enumerationMember = static_cast<EnumerationMember*>(deducedTypeLhs.value());
				auto targetEnumeration = enumerationMember->GetEnumeration();
				return targetEnumeration;
			}
			case Type::Class: {
				return deducedTypeLhs.value();
			}
			}

			return nullptr;
		}

		switch (deducedTypeLhs.value()->GetType())
		{
		case Type::Class: {
			auto classIr = static_cast<Class*>(deducedTypeLhs.value());
			return classIr->GetMember(operatorFunctionName.value(), {});
		}
		case Type::Integer: {
		}
		case Type::Decimal: {
		}
		case Type::Text: {
		}
		case Type::Boolean: {
		}
		}
	}
	// Apply binary operator functions as lhs.operator(rhs);
	else
	{
		auto operatorFunctionName = GetOperatorFunctionName();

		auto evaluateClass = [&](Class* classIr) {
			if (std::holds_alternative<std::unique_ptr<Expression>>(impl->rhs))
			{
				auto member =
					classIr->GetMember(operatorFunctionName.value(),
									   std::vector<InputReconstructionObject*>{
										   std::get<std::unique_ptr<Expression>>(impl->rhs).get()});
				// It must be function otherwise it is ill-formed.
				return static_cast<Function*>(member)->GetReturnType();
			}
			else if (std::holds_alternative<std::unique_ptr<Expression>>(impl->rhs))
			{
				return classIr->GetMember(operatorFunctionName.value(),
										  std::vector<InputReconstructionObject*>{
											  std::get<std::unique_ptr<Value>>(impl->rhs).get()});
			}

			return static_cast<InputReconstructionObject*>(nullptr);
		};
		switch (deducedTypeLhs.value()->GetType())
		{
		case Type::TypeConstruct: {
			auto typeConstruct = static_cast<TypeConstruct*>(deducedTypeLhs.value());
			if (typeConstruct->Trivial())
			{
				auto coreType = typeConstruct->GetCoreType();
				if (coreType.value()->GetType() == Type::Class)
				{
					return evaluateClass(static_cast<Class*>(coreType.value()));
				}
			}
			else
			{
				// We may only utilize non-trivial operators.
				// Which is not yet implemented.
				throw std::logic_error("Non-Trivial operators are not yet implemented");
			}
		}
		case Type::Class: {
			auto classIr = static_cast<Class*>(deducedTypeLhs.value());
			return evaluateClass(classIr);
		}
		case Type::Function: {
			return nullptr;
		}
		case Type::Constructor: {
			return nullptr;
		}
		case Type::Integer: {
		}
		case Type::Decimal: {
		}
		case Type::Text: {
		}
		case Type::Boolean: {
		}
		}
	}

	return nullptr;
}

std::optional<std::string> Celeste::ir::inputreconstruction::Expression::GetOperatorFunctionName()
{
	switch (impl->OperatorType)
	{
	case Operator::Add:
		return "operator+";
	case Operator::Minus:
		return "operator-";
	case Operator::Multiply:
		return "operator*";
	case Operator::Divide:
		return "operator/";
	case Operator::Power:
		return "operator^";
	case Operator::And:
		return "operator&&";
	case Operator::Or:
		return "operator||";
	case Operator::Equal:
		return "operator==";
	case Operator::NotEqual:
		return "operator!=";
	case Operator::Not:
		return "operator!";
	case Operator::Less:
		return "operator<";
	case Operator::LessOrEqual:
		return "operator<=";
	case Operator::Greater:
		return "operator>";
	case Operator::GreaterOrEqual:
		return "operator>=";
	case Operator::Unknown:
		return std::nullopt;
	}

	return "operatorUnimplemented";
}

std::variant<std::monostate, std::unique_ptr<Celeste::ir::inputreconstruction::Expression>,
			 std::unique_ptr<Celeste::ir ::inputreconstruction::Value>>&
Celeste::ir::inputreconstruction::Expression::GetLhs()
{
	return impl->lhs;
}

std::variant<std::monostate, std::unique_ptr<Celeste::ir::inputreconstruction::Expression>,
			 std::unique_ptr<Celeste::ir ::inputreconstruction::Value>>&
Celeste::ir::inputreconstruction::Expression::GetRhs()
{
	return impl->rhs;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::Expression::DeepCopy()
{
	return std::make_unique<Expression>(*this);
}
