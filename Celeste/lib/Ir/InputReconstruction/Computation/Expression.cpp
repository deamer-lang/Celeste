#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include <iostream>

Celeste::ir::inputreconstruction::Expression::Expression(
	::deamer::external::cpp::ast::Node* expression_)
	: InputReconstructionObject(Type::Expression),
	  expression(expression_)
{
}

void Celeste::ir::inputreconstruction::Expression::Resolve()
{
	switch (static_cast<ast::Type>(expression->GetType()))
	{
	case ast::Type::expression: {
		auto _ = std::make_unique<Expression>(
			const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(0)));
		_->SetFile(GetFile());
		_->SetParent(this);
		_->Resolve();
		lhs = std::move(_);
		break;
	}
	case ast::Type::expression_no_value: {
		auto access = ast::reference::Access<ast::node::expression_no_value>(
			static_cast<const ast::node::expression_no_value*>(expression));
		if (!access.expression_no_value().GetContent().empty())
		{
			auto lhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(0)));
			lhs_->SetFile(GetFile());
			lhs_->SetParent(this);
			lhs_->Resolve();
			lhs = std::move(lhs_);

			auto rhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(2)));
			rhs_->SetFile(GetFile());
			rhs_->SetParent(this);
			rhs_->Resolve();
			rhs = std::move(rhs_);

			switch (static_cast<ast::Type>(expression->GetIndex(1)->GetType()))
			{
			case ast::Type::PLUS: {
				OperatorType = Operator::Add;
				break;
			}
			case ast::Type::MINUS: {
				OperatorType = Operator::Minus;
				break;
			}
			}
		}
		else
		{
			auto _ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(0)));
			_->SetFile(GetFile());
			_->SetParent(this);
			_->Resolve();
			lhs = std::move(_);
		}
		break;
	}
	case ast::Type::t_expression: {
		auto access = ast::reference::Access<ast::node::t_expression>(
			static_cast<const ast::node::t_expression*>(expression));
		if (!access.t_expression().GetContent().empty())
		{
			auto lhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(0)));
			lhs_->SetParent(this);
			lhs_->SetFile(GetFile());
			lhs_->Resolve();
			lhs = std::move(lhs_);

			auto rhs_ = std::make_unique<Expression>(
				const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(2)));
			rhs_->SetParent(this);
			rhs_->SetFile(GetFile());
			rhs_->Resolve();
			rhs = std::move(rhs_);

			switch (static_cast<ast::Type>(expression->GetIndex(1)->GetType()))
			{
			case ast::Type::PLUS: {
				OperatorType = Operator::Add;
				break;
			}
			case ast::Type::MINUS: {
				OperatorType = Operator::Minus;
				break;
			}
			case ast::Type::MULTIPLY: {
				OperatorType = Operator::Multiply;
				break;
			}
			case ast::Type::DIVIDE: {
				OperatorType = Operator::Divide;
				break;
			}
			case ast::Type::LTEQ: {
				OperatorType = Operator::LessOrEqual;
				break;
			}
			case ast::Type::GTEQ: {
				OperatorType = Operator::GreaterOrEqual;
				break;
			}
			case ast::Type::LT: {
				OperatorType = Operator::Less;
				break;
			}
			case ast::Type::GT: {
				OperatorType = Operator::Greater;
				break;
			}
			case ast::Type::EQEQ: {
				OperatorType = Operator::Equal;
				break;
			}
			case ast::Type::NOTEQ: {
				OperatorType = Operator::NotEqual;
				break;
			}
			case ast::Type::NOT: {
				OperatorType = Operator::Not;
				break;
			}
			}
		}
		else
		{
			if (expression->GetIndex(0)->GetType() == ast::Type::f_expression)
			{
				auto _ = std::make_unique<Expression>(
					const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(0)));
				_->SetFile(GetFile());
				_->SetParent(this);
				_->Resolve();
				lhs = std::move(_);
			}
			else
			{
				auto _ = std::make_unique<Expression>(
					const_cast<::deamer::external::cpp::ast::Node*>(expression->GetIndex(1)));
				_->SetFile(GetFile());
				_->SetParent(this);
				_->Resolve();
				lhs = std::move(_);

				switch (static_cast<ast::Type>(expression->GetIndex(0)->GetType()))
				{
				case ast::Type::PLUS: {
					OperatorType = Operator::Add;
					break;
				}
				case ast::Type::MINUS: {
					OperatorType = Operator::Minus;
					break;
				}
				case ast::Type::MULTIPLY: {
					OperatorType = Operator::Multiply;
					break;
				}
				case ast::Type::DIVIDE: {
					OperatorType = Operator::Divide;
					break;
				}
				case ast::Type::LTEQ: {
					OperatorType = Operator::LessOrEqual;
					break;
				}
				case ast::Type::GTEQ: {
					OperatorType = Operator::GreaterOrEqual;
					break;
				}
				case ast::Type::LT: {
					OperatorType = Operator::Less;
					break;
				}
				case ast::Type::GT: {
					OperatorType = Operator::Greater;
					break;
				}
				case ast::Type::EQEQ: {
					OperatorType = Operator::Equal;
					break;
				}
				case ast::Type::NOTEQ: {
					OperatorType = Operator::NotEqual;
					break;
				}
				case ast::Type::NOT: {
					OperatorType = Operator::Not;
					break;
				}
				}
			}
		}
		break;
	}
	case ast::Type::f_expression: {
		auto access = ast::reference::Access<ast::node::f_expression>(
			static_cast<const ast::node::f_expression*>(expression));
		if (!access.expression_no_value().GetContent().empty())
		{
			auto _ = std::make_unique<Expression>(const_cast<::deamer::external::cpp::ast::Node*>(
				static_cast<const ::deamer::external::cpp::ast::Node*>(
					access.expression_no_value().GetContent()[0])));
			_->SetFile(GetFile());
			_->SetParent(this);
			_->Resolve();
			lhs = std::move(_);
		}
		else if (!access.value().GetContent().empty())
		{
			auto lhsValue = std::make_unique<Value>(
				const_cast<ast::node::value*>(access.value().GetContent()[0]));
			lhsValue->SetFile(GetFile());
			lhsValue->SetParent(this);
			lhsValue->Resolve();
			lhs = std::move(lhsValue);
		}
		break;
	}
	}
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Expression::DeduceType()
{
	if (cachedDeducedType.has_value())
	{
		return cachedDeducedType.value();
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

	auto deducedTypeLhs = getDeducedType(lhs);
	auto deducedTypeRhs = getDeducedType(rhs);

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
			case Type::TypeConstruct:
			case Type::Enumeration:
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
		switch (deducedTypeLhs.value()->GetType())
		{
		case Type::Class: {
			auto classIr = static_cast<Class*>(deducedTypeLhs.value());
			if (std::holds_alternative<std::unique_ptr<Expression>>(rhs))
			{
				return classIr->GetMember(operatorFunctionName.value(),
										  std::vector<InputReconstructionObject*>{
											  std::get<std::unique_ptr<Expression>>(rhs).get()});
			}
			else if (std::holds_alternative<std::unique_ptr<Expression>>(rhs))
			{
				return classIr->GetMember(operatorFunctionName.value(),
										  std::vector<InputReconstructionObject*>{
											  std::get<std::unique_ptr<Value>>(rhs).get()});
			}

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
	switch (OperatorType)
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
