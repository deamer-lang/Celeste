#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/Return.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Conditional/Else.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ElseIf.h"
#include "Celeste/Ir/InputReconstruction/Conditional/If.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForIteration.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/MonomorphizedFunction.h"
#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"
#include <limits>

Celeste::ir::inputreconstruction::bytecode::Constructor::Constructor(std::size_t level_)
	: level(level_)
{
	ConditionalLabelPush();
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> objects)
{
	for (auto* object : objects)
	{
		AddObject(object);
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	InputReconstructionObject* irObject)
{
	switch (irObject->GetType())
	{
	case Type::Function: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::Function*>(irObject));
		break;
	}
	case Type::VariableDeclaration: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::VariableDeclaration*>(irObject));
		break;
	}
	case Type::SymbolReferenceCall: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::SymbolReferenceCall*>(irObject));
		break;
	}
	case Type::Expression: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::Expression*>(irObject));
		break;
	}
	case Type::Assignment: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::Assignment*>(irObject));
		break;
	}
	case Type::ForEach: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::ForEach*>(irObject));
		break;
	}
	case Type::ForIteration: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::ForIteration*>(irObject));
		break;
	}
	case Type::If: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::If*>(irObject));
		break;
	}
	case Type::ElseIf: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::ElseIf*>(irObject));
		break;
	}
	case Type::Else: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::Else*>(irObject));
		break;
	}
	case Type::Return: {
		AddObject(static_cast<::Celeste::ir::inputreconstruction::Return*>(irObject));
		break;
	}
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(Function* irObject)
{
	for (auto i = 0; i < irObject->GetFunctionArguments().size(); i++)
	{
		mapVariableWithSize.emplace(irObject->GetFunctionArguments()[i].get(), idCounter);
		IncrementIdCounter();
	}

	for (auto& statement : irObject->GetBlock())
	{
		AddObject(statement.get());
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	inputreconstruction::MonomorphizedFunction* irObject)
{
	for (auto i = 0; i < irObject->GetFunctionArguments().size(); i++)
	{
		IncrementIdCounter();
	}

	for (auto& statement : irObject->GetBlock())
	{
		AddObject(statement.get());
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	inputreconstruction::MutationGroup* irObject)
{
	for (auto& statement : irObject->GetScope())
	{
		AddObject(statement);
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	inputreconstruction::Constructor* irObject)
{
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	VariableDeclaration* irObject)
{
	AddVariable(irObject);
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	SymbolReferenceCall* irObject, std::optional<std::size_t> variableIdOpt)
{ // In case it is a variable reference, then it should be optimized by the upper expression.
	// As this would result in less instructions.
	// However, by default it is supported
	// Otherwise, it likely represents a constructor, memberfunction, or function call.

	std::size_t variableId;
	if (variableIdOpt.has_value())
	{
		variableId = variableIdOpt.value();
	}
	else
	{
		variableId = AddVariable(irObject);
	}
	std::optional<InputReconstructionObject*> resolvedIr = irObject->GetFinalLinkedIr();
	std::vector<Celeste::ir::inputreconstruction::SymbolAccess*> accesses =
		irObject->GetSymbolAccessesIncludingHidden();
	auto nextNameReference = irObject->GetNameSecondaryReference();
	std::vector<std::variant<std::size_t, InputReconstructionObject*>> functionArgumentVariableIds;

	if (!nextNameReference.has_value())
	{
		functionArgumentVariableIds.emplace_back(variableId);
	}
	else
	{
		switch (resolvedIr.value()->GetType())
		{
		case Type::Function:
		case Type::Constructor:
		case Type::CodeFunction:
		case Type::NameFunction:
		case Type::ConditionalFunction:
		case Type::VariableDeclaration: {
			functionArgumentVariableIds.emplace_back(variableId);
			break;
		}
		}
	}

	bool constructor_is_created = false;
	while (resolvedIr.has_value())
	{
		if (accesses.size() == 2)
		{
			// This includes template arguments and thus is not yet supported
		}
		else if (accesses.size() == 1)
		{
			// Function arguments
			for (auto& expr : accesses[0]->GetExpressions())
			{
				functionArgumentVariableIds.emplace_back(idCounter);
				AddObject(expr.get());
			}
		}
		else if (accesses.empty())
		{
			// Variable Access
			functionArgumentVariableIds.emplace_back(resolvedIr.value());
		}
		else
		{
			// Error
		}

		// In case the function argument represents some local variable.
		// It will be replaced by the local alternative.
		auto replace_by_local = [&]() {
			for (auto& functionArgument : functionArgumentVariableIds)
			{
				if (std::holds_alternative<InputReconstructionObject*>(functionArgument))
				{
					auto elem = std::get<InputReconstructionObject*>(functionArgument);
					if (elem->GetType() == Type::VariableDeclaration)
					{
						auto iter =
							mapVariableWithSize.find(static_cast<VariableDeclaration*>(elem));
						if (iter == mapVariableWithSize.end())
						{
							continue;
						}
						functionArgument = iter->second;
					}
					else if (elem->GetType() == Type::FunctionArgument)
					{
						auto iter = mapVariableWithSize.find(static_cast<FunctionArgument*>(elem));
						if (iter == mapVariableWithSize.end())
						{
							continue;
						}
						functionArgument = iter->second;
					}
				}
			}
		};

		if (resolvedIr.has_value())
		{
			// Identify type of reference
			switch (resolvedIr.value()->GetType())
			{
			case Type::FunctionArgument: {
				functionArgumentVariableIds.emplace_back(resolvedIr.value());
				replace_by_local();
				functionRepresentation.emplace_back(std::numeric_limits<std::size_t>::max(),
													nullptr, BytecodeType::ReferenceReuseAssign,
													functionArgumentVariableIds);
				break;
			}
			case Type::VariableDeclaration: {
				functionArgumentVariableIds.emplace_back(resolvedIr.value());
				replace_by_local();
				functionRepresentation.emplace_back(std::numeric_limits<std::size_t>::max(),
													nullptr, BytecodeType::ReferenceReuseAssign,
													functionArgumentVariableIds);
				break;
			}
			case Type::Function: {
				if (constructor_is_created)
				{
					std::vector<std::variant<std::size_t, InputReconstructionObject*>> re;
					re.push_back(functionArgumentVariableIds[0]);
					for (auto arg : functionArgumentVariableIds)
					{
						re.push_back(arg);
					}
					functionRepresentation.emplace_back(std::numeric_limits<std::size_t>::max(),
														resolvedIr.value(),
														BytecodeType::MemberFunctionCall, re);
				}
				else
				{
					functionRepresentation.emplace_back(
						std::numeric_limits<std::size_t>::max(), resolvedIr.value(),
						BytecodeType::FunctionCall, functionArgumentVariableIds);
				}
				break;
			}
			case Type::Constructor: {
				functionRepresentation.emplace_back(
					std::numeric_limits<std::size_t>::max(), resolvedIr.value(),
					BytecodeType::ConstructorCall, functionArgumentVariableIds);
				constructor_is_created = true;
				break;
			}
			case Type::CodeFunction: {
				// Currently unsupported
				break;
			}
			case Type::NameFunction: {
				// Currently unsupported
				break;
			}
			case Type::MonomorphizedFunction: {
				// Currently unsupported
				break;
			}
			case Type::ConditionalFunction: {
				// Currently unsupported
				break;
			}
			}
		}
		else
		{
			// Error
		}

		if (!nextNameReference.has_value())
		{
			break;
		}
		else
		{
			resolvedIr = nextNameReference.value()->GetFinalLinkedIr();
			accesses = nextNameReference.value()->GetSymbolAccessesIncludingHidden();
			nextNameReference = nextNameReference.value()->GetNameSecondaryReference();
			auto last_id_store = functionArgumentVariableIds[0];
			functionArgumentVariableIds.clear();

			if (!nextNameReference.has_value())
			{
				functionArgumentVariableIds.emplace_back(variableId);
			}
			else
			{
				switch (resolvedIr.value()->GetType())
				{
				case Type::Function: {
					auto id = AddVariable(static_cast<Function*>(resolvedIr.value()));
					functionArgumentVariableIds.emplace_back(id);
					break;
				}
				case Type::Constructor: {
					auto id = AddVariable(
						static_cast<inputreconstruction::Constructor*>(resolvedIr.value()));
					functionArgumentVariableIds.emplace_back(id);
					break;
				}
				case Type::CodeFunction:
				case Type::NameFunction:
				case Type::ConditionalFunction: {
					// Unsupported
					break;
				}
				case Type::VariableDeclaration: {
					// As variables are replacing the last variable by reference
					functionArgumentVariableIds.emplace_back(last_id_store);
					break;
				}
				}
				// Get the type of the referenced function OR variable and create a new tmp
				// variable with it.
			}
		}
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	Expression* irObject, std::optional<std::size_t> directAssignVariable)
{
	// Unwrap expressions in tmp variables and memberfunction calls
	auto& lhs = irObject->GetLhs();
	auto& rhs = irObject->GetRhs();
	// This is the variable, that will be used to store the result of the following operations.
	std::size_t variableId;

	auto operator_to_bytecode_instruction = [](Operator op) {
		switch (op)
		{
		case Operator::Unknown:
			break;
		case Operator::Add:
			return BytecodeType::Add;
		case Operator::ArrayAccess:
			return BytecodeType::ArrayAccess;
		case Operator::Minus:
			return BytecodeType::Minus;
		case Operator::Multiply:
			return BytecodeType::Multiply;
		case Operator::Divide:
			return BytecodeType::Divide;
		case Operator::Power:
			return BytecodeType::Power;
		case Operator::And:
			return BytecodeType::And;
		case Operator::Or:
			return BytecodeType::Or;
		case Operator::Equal:
			return BytecodeType::Equal;
		case Operator::NotEqual:
			return BytecodeType::NotEqual;
		case Operator::Not:
			return BytecodeType::Not;
		case Operator::Less:
			return BytecodeType::Less;
		case Operator::LessOrEqual:
			return BytecodeType::LessOrEqual;
		case Operator::Greater:
			return BytecodeType::Greater;
		case Operator::GreaterOrEqual:
			return BytecodeType::GreaterOrEqual;
		}
	};

	if (directAssignVariable.has_value())
	{
		variableId = directAssignVariable.value();
	}
	else
	{
		variableId = AddVariable(irObject);
	}
	if (std::holds_alternative<std::monostate>(rhs))
	{
		auto unary_operation = [&](Operator type, auto lhsResultId) {
			functionRepresentation.emplace_back(
				std::numeric_limits<std::size_t>::max(), irObject->DeduceType(),
				operator_to_bytecode_instruction(type),
				std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
					variableId, lhsResultId, irObject->GetMemberFunction()});
		};

		// Unary Operations
		if (std::holds_alternative<std::unique_ptr<Value>>(lhs))
		{
			auto lowerResultId = variableId + 1;
			if (irObject->GetOperatorType() == Operator::Unknown)
			{
				AddObject(std::get<std::unique_ptr<Value>>(lhs).get(), variableId);
			}
			else
			{
				AddObject(std::get<std::unique_ptr<Value>>(lhs).get());

				unary_operation(irObject->GetOperatorType(), lowerResultId);
			}
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(lhs))
		{
			auto lowerResultId = variableId + 1;
			if (irObject->GetOperatorType() == Operator::Unknown)
			{
				AddObject(std::get<std::unique_ptr<Expression>>(lhs).get(), variableId);
			}
			else
			{
				AddObject(std::get<std::unique_ptr<Expression>>(lhs).get());

				unary_operation(irObject->GetOperatorType(), lowerResultId);
			}
		}
	}
	else
	{
		auto binary_operation = [&](Operator type, auto lhsResultId, auto rhsResultId) {
			auto deducedType = irObject->DeduceType();
			auto memberFunction = irObject->GetMemberFunction();
			functionRepresentation.emplace_back(
				std::numeric_limits<std::size_t>::max(), deducedType,
				operator_to_bytecode_instruction(type),
				std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
					variableId, lhsResultId, rhsResultId, memberFunction});
		};

		// Binary Operations
		if (std::holds_alternative<std::unique_ptr<Value>>(lhs))
		{
			auto lhsResultId = variableId + 1;
			auto lhs_ = std::get<std::unique_ptr<Value>>(lhs).get();
			AddObject(lhs_);

			if (std::holds_alternative<std::unique_ptr<Value>>(rhs))
			{
				auto rhsResultId = variableId + 1;
				auto rhs_ = std::get<std::unique_ptr<Value>>(lhs).get();
				AddObject(rhs_);

				binary_operation(irObject->GetOperatorType(), lhsResultId, rhsResultId);
			}
			else if (std::holds_alternative<std::unique_ptr<Expression>>(rhs))
			{
				auto rhsResultId = variableId + 1;
				auto rhs_ = std::get<std::unique_ptr<Expression>>(lhs).get();
				AddObject(rhs_);

				binary_operation(irObject->GetOperatorType(), lhsResultId, rhsResultId);
			}
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(lhs))
		{
			auto lhsResultId = variableId + 1;
			auto lhs_ = std::get<std::unique_ptr<Expression>>(lhs).get();
			AddObject(lhs_);

			if (std::holds_alternative<std::unique_ptr<Value>>(rhs))
			{
				auto rhsResultId = idCounter;
				auto rhs_ = std::get<std::unique_ptr<Value>>(rhs).get();
				AddObject(rhs_);

				binary_operation(irObject->GetOperatorType(), lhsResultId, rhsResultId);
			}
			else if (std::holds_alternative<std::unique_ptr<Expression>>(rhs))
			{
				auto rhsResultId = idCounter;
				auto rhs_ = std::get<std::unique_ptr<Expression>>(rhs).get();
				AddObject(rhs_);

				binary_operation(irObject->GetOperatorType(), lhsResultId, rhsResultId);
			}
		}
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	inputreconstruction::Value* irObject, std::optional<std::size_t> variableIdOpt)
{
	// Create variable where the result of this irObject will be stored.
	std::size_t variableId;
	if (variableIdOpt.has_value())
	{
		variableId = variableIdOpt.value();
	}
	else
	{
		variableId = AddVariable(irObject);
	}
	auto& value = irObject->GetValue();
	if (std::holds_alternative<std::monostate>(value))
	{
		// Error
	}
	else if (std::holds_alternative<std::unique_ptr<CodeBlock>>(value))
	{
		functionRepresentation.emplace_back(
			std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Codeblock,
			std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
				variableId, std::get<std::unique_ptr<CodeBlock>>(value).get()});
	}
	else if (std::holds_alternative<std::unique_ptr<SymbolReferenceCall>>(value))
	{
		AddObject(std::get<std::unique_ptr<SymbolReferenceCall>>(value).get(), variableId);
	}
	else if (std::holds_alternative<std::unique_ptr<Tuple>>(value))
	{
		// Convert To Constructor call
	}
	else if (std::holds_alternative<std::unique_ptr<Integer>>(value))
	{
		functionRepresentation.emplace_back(
			std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Integer,
			std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
				variableId, std::get<std::unique_ptr<Integer>>(value).get()});
	}
	else if (std::holds_alternative<std::unique_ptr<Decimal>>(value))
	{
		functionRepresentation.emplace_back(
			std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Decimal,
			std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
				variableId, std::get<std::unique_ptr<Decimal>>(value).get()});
	}
	else if (std::holds_alternative<std::unique_ptr<Text>>(value))
	{
		functionRepresentation.emplace_back(
			std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Text,
			std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
				variableId, std::get<std::unique_ptr<Text>>(value).get()});
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(Assignment* irObject)
{
	// Calculate right hand side and store it as tmp variable in front
	// Get LHS get id call assignment operator with RHS as input, using id reference.
	auto lhs = irObject->GetLhs().get();
	auto lhsId = idCounter;
	AddObject(lhs);

	auto rhs = irObject->GetRhs().get();
	auto rhsId = idCounter;
	AddObject(rhs);

	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Assign,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{lhsId, rhsId});
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(ForEach* irObject)
{
	/*
	auto expression_id = idCounter;
	AddObject(irObject->GetExpression());
	// Get the size of the expression result.
	auto expression_size_id =
		 MemberFunctionCall(expression_id, irObject->GetExpression()->DeduceType(), "size");
	auto i_id = CreateInteger(0);
	auto var_id = AddVariable(irObject->GetVariable());

	auto check_label = AddLabel();
	auto conditional_id = AddLessThan(i_id, expression_size_id);
	auto exit_label = ReserveLabel();

	ConditionalFalseJumpOnStateOfVariable(conditional_id, exit_label);

	// Assign, Index, Array Like Expression
	ArrayAccess(var_id, i_id, expression_id);

	AddObject(irObject->GetScope());
	AddIntegerToVariable(i_id, 1);
	Goto(check_label);
	AddLabel(exit_label);
	*/
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(ForIteration* irObject)
{
	// label initialize
	// var a expression_value
	// label check
	// var i
	// var cond
	// cfalse_jmp cond exit
	//	looped_statements
	//	i++
	//	goto check
	// label exit

	auto expression_id = idCounter;
	AddObject(irObject->GetExpression().get());
	auto i_id = CreateInteger(0);
	auto check_label = AddLabel();
	auto conditional_id = AddLessThan(i_id, expression_id);
	auto exit_label = ReserveLabel();

	ConditionalFalseJumpOnStateOfVariable(conditional_id, exit_label);
	AddObject(irObject->GetScope());
	AddIntegerToVariable(i_id, 1);
	Goto(check_label);
	AddLabel(exit_label);
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(If* irObject)
{
	// Assumes there is an associated else statement

	// var a
	// assign a expression_value
	// cfalse_jmp a continuation
	//	conditional_statements
	//  goto exit
	// label continuation
	//	else_statements
	// label exit

	std::size_t expressionResultId = idCounter;
	AddObject(irObject->GetCondition().get());
	ReserveConditionalContinuationLabel();
	ReserveConditionalExitLabel();
	ConditionalFalseJumpOnStateOfVariable(expressionResultId,
										  GetReservedConditionalContinuationLabel());
	ConditionalLabelPush();
	AddObject(irObject->GetScope());
	ConditionalLabelPop();
	Goto(GetReservedConditionalExitLabel());
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(ElseIf* irObject)
{
	AddLabel(GetReservedConditionalContinuationLabel());
	ReserveConditionalContinuationLabel();
	std::size_t expressionResultId = idCounter;
	AddObject(irObject->GetCondition().get());
	ConditionalFalseJumpOnStateOfVariable(expressionResultId,
										  GetReservedConditionalContinuationLabel());
	ConditionalLabelPush();
	AddObject(irObject->GetScope());
	ConditionalLabelPop();
	Goto(GetReservedConditionalExitLabel());
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(Else* irObject)
{
	AddLabel(GetReservedConditionalContinuationLabel());
	ConditionalLabelPush();
	AddObject(irObject->GetScope());
	ConditionalLabelPop();
	AddLabel(GetReservedConditionalExitLabel());
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(
	inputreconstruction::Return* irObject)
{
	auto variableId = idCounter;
	AddObject(irObject->GetExpression().get());
	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Return,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{variableId});
}

Celeste::ir::inputreconstruction::BytecodeRepresentation
Celeste::ir::inputreconstruction::bytecode::Constructor::GetRepresentation()
{
	if (level == 1)
	{
		RemoveRedundantZeroInitialization();
		InlineAliasVariables();
	}

	InlineLabels(); // Required Optimization as Labels are no instructions
	return BytecodeRepresentation(std::move(functionRepresentation), idCounter, std::move(integers),
								  std::move(decimals), std::move(texts));
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::RemoveRedundantZeroInitialization()
{
	for (std::size_t index = 0; index < functionRepresentation.size(); index++)
	{
		auto& instruction = functionRepresentation[index];
		if (instruction.GetBytecodeType() != BytecodeType::Variable)
		{
			continue;
		}

		// In case it is a variable analysis whether it is overriden by direct
		// initialization.
		std::size_t variable = instruction.GetId();
		bool removable = false;
		bool initialized = false;
		for (auto i = index; i < functionRepresentation.size(); i++)
		{
			if (DoesInstructionReference(i, variable) && !initialized)
			{
				removable = false;
				break;
			}
			if (DoesInstructionInitialize(i, variable))
			{
				initialized = true;
				removable = true;
				break;
			}
		}

		if (!removable)
		{
			continue;
		}

		RemoveInstruction(index);
	}
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::InlineAliasVariables()
{
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::InlineLabels()
{
	std::size_t instructionCounter = 0;
	for (auto& instruction : functionRepresentation)
	{
		if (instruction.GetBytecodeType() == BytecodeType::Goto)
		{
			auto x = Instruction(BytecodeType::InstructionJump,
								 std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
									 labelInstructionJumpLocations[std::get<std::size_t>(
										 instruction.GetArguments()[0])]});
			instruction.Replace(x);
		}
		else if (instruction.GetBytecodeType() == BytecodeType::ConditionalJump)
		{
			std::size_t trueJump;
			if (instruction.GetArgument<std::size_t>(1) == std::numeric_limits<std::size_t>::max())
			{
				trueJump = instructionCounter + 1;
			}
			else
			{
				trueJump = labelInstructionJumpLocations[instruction.GetArgument<std::size_t>(1)];
			}

			std::size_t falseJump;
			if (instruction.GetArgument<std::size_t>(2) == std::numeric_limits<std::size_t>::max())
			{
				falseJump = instructionCounter + 1;
			}
			else
			{
				falseJump = labelInstructionJumpLocations[instruction.GetArgument<std::size_t>(2)];
			}

			auto x = Instruction(BytecodeType::InstructionConditionalJump,
								 std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
									 instruction.GetArgument<std::size_t>(0), trueJump, falseJump});
			instruction.Replace(x);
		}
		instructionCounter++;
	}
}

bool Celeste::ir::inputreconstruction::bytecode::Constructor::DoesInstructionReference(
	std::size_t instruction, std::size_t variable)
{
	auto& instr = functionRepresentation[instruction];
	switch (instr.GetBytecodeType())
	{
	// Binary Operations
	case BytecodeType::Add:
	case BytecodeType::Minus:
	case BytecodeType::Multiply:
	case BytecodeType::Divide:
	case BytecodeType::ArrayAccess:
	case BytecodeType::Power:
	case BytecodeType::Less:
	case BytecodeType::LessOrEqual:
	case BytecodeType::Greater:
	case BytecodeType::GreaterOrEqual:
	case BytecodeType::Equal:
	case BytecodeType::NotEqual: {
		auto firstArg = instr.GetArgument<std::size_t>(1);
		auto secondArg = instr.GetArgument<std::size_t>(2);
		return firstArg == variable || secondArg == variable;
	}

	// Unary Operation
	case BytecodeType::Not: {
		auto firstArg = instr.GetArgument<std::size_t>(0);
		return firstArg == variable;
	}

	case BytecodeType::Assign: {
		auto firstArg = instr.GetArgument<std::size_t>(0);
		auto secondArg = instr.GetArgument<std::size_t>(1);
		return firstArg == variable || secondArg == variable;
	}
	}

	return false;
}

bool Celeste::ir::inputreconstruction::bytecode::Constructor::DoesInstructionInitialize(
	std::size_t instruction, std::size_t variable)
{
	auto& instr = functionRepresentation[instruction];
	switch (instr.GetBytecodeType())
	{
	// Binary Operations
	case BytecodeType::Add:
	case BytecodeType::Minus:
	case BytecodeType::Multiply:
	case BytecodeType::Divide:
	case BytecodeType::ArrayAccess:
	case BytecodeType::Power:
	case BytecodeType::Less:
	case BytecodeType::LessOrEqual:
	case BytecodeType::Greater:
	case BytecodeType::GreaterOrEqual:
	case BytecodeType::Equal:
	case BytecodeType::NotEqual: {
		auto firstArg = instr.GetArgument<std::size_t>(0);
		return firstArg == variable;
	}
	case BytecodeType::Integer:
	case BytecodeType::Text:
	case BytecodeType::Decimal: {
		auto firstArg = instr.GetArgument<std::size_t>(0);
		return firstArg == variable;
	}
	case BytecodeType::Assign: {
		auto firstArg = instr.GetArgument<std::size_t>(0);
		return firstArg == variable;
	}
	}
	return false;
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::RemoveInstruction(std::size_t index)
{
	for (std::size_t i = 0; i < functionRepresentation.size(); i++)
	{
		auto& current_instruction = functionRepresentation[i];
		switch (current_instruction.GetBytecodeType())
		{
		case BytecodeType::InstructionJump: {
			auto firstArgument = current_instruction.GetArgument<std::size_t>(0);
			if (firstArgument > index)
			{
				current_instruction.SetArgument(0, firstArgument - 1);
			}
			break;
		}
		case BytecodeType::InstructionConditionalJump: {
			auto firstArgument = current_instruction.GetArgument<std::size_t>(0);
			if (firstArgument > index)
			{
				current_instruction.SetArgument(0, firstArgument - 1);
			}

			auto secondArgument = current_instruction.GetArgument<std::size_t>(1);
			if (secondArgument > index)
			{
				current_instruction.SetArgument(0, secondArgument - 1);
			}
			break;
		}
		}
	}

	for (auto& label : labelInstructionJumpLocations)
	{
		if (label > index)
		{
			label--;
		}
	}

	functionRepresentation.erase(std::begin(functionRepresentation) + index);
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(
	InputReconstructionObject* value, bool initialize)
{
	switch (value->GetType())
	{
	case Type::Function: {
		return AddVariable(static_cast<Function*>(value));
	}
	case Type::Constructor: {
		return AddVariable(static_cast<inputreconstruction::Constructor*>(value));
	}
	case Type::VariableDeclaration: {
		return AddVariable(static_cast<VariableDeclaration*>(value), initialize);
	}
	}
	return std::numeric_limits<std::size_t>::max();
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(SymbolReferenceCall* value)
{
	return AddVariable(value->GetResolvedLinkedIr().value(), false);
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(VariableDeclaration* variable,
																	 bool initialize)
{
	if (VariableIsUseless(variable))
	{
		// Optimization, if a variable is useless, then it does not need to be loaded.
		return std::numeric_limits<std::size_t>::max();
	}

	if (variable->GetExpressions().empty() || !initialize)
	{
		auto var_id = idCounter;
		functionRepresentation.emplace_back(
			idCounter, variable->GetVariableType()->GetCoreType().value(), BytecodeType::Variable,
			std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
		mapVariableWithSize.insert({variable, idCounter});
		IncrementIdCounter();
		return var_id;
	}
	else if (variable->GetExpressions().size() == 1)
	{
		auto var_id = idCounter;
		functionRepresentation.emplace_back(
			idCounter, variable->GetVariableType()->GetCoreType().value(), BytecodeType::Variable,
			std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
		mapVariableWithSize.insert({variable, idCounter});
		IncrementIdCounter();
		AddObject(variable->GetExpressions()[0].get(), var_id);
		return var_id;
	}
	else
	{
		// The variable is loaded via a tuple constructor call.
		throw std::logic_error("Not yet implemented");
	}
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(
	inputreconstruction::Constructor* expression)
{
	auto varId = idCounter;
	functionRepresentation.emplace_back(
		idCounter, expression->GetReturnType(), BytecodeType::Variable,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
	IncrementIdCounter();
	return varId;
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(Function* expression)
{
	auto varId = idCounter;
	functionRepresentation.emplace_back(
		idCounter, expression->GetReturnType(), BytecodeType::Variable,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
	IncrementIdCounter();
	return varId;
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(Expression* expression)
{
	auto varId = idCounter;
	functionRepresentation.emplace_back(
		idCounter, expression->DeduceType(), BytecodeType::Variable,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
	IncrementIdCounter();
	return varId;
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable(Value* value)
{
	auto varId = idCounter;
	functionRepresentation.emplace_back(
		idCounter, value->DeduceType(), BytecodeType::Variable,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
	IncrementIdCounter();
	return varId;
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddVariable()
{
	return std::numeric_limits<std::size_t>::max();
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::IncrementIdCounter()
{
	idCounter += 1;
}

bool Celeste::ir::inputreconstruction::bytecode::Constructor::VariableIsUseless(
	VariableDeclaration* variable)
{
	if (variable->GetReferencesToThisObject().empty())
	{
		// Variables that are not referenced are guaranteed to be useless.
		return true;
	}

	return false; // False does not indicate it is useful, it might occur that the analysis is not
				  // powerful enough to prove a variable is useless.
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::ReserveLabel()
{
	labelInstructionJumpLocations.emplace_back(0);
	return labelInstructionJumpLocations.size() - 1;
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddLabel(std::size_t specificLabel)
{
	labelInstructionJumpLocations[specificLabel] = functionRepresentation.size();
	return specificLabel;
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddLabel()
{
	labelInstructionJumpLocations.emplace_back(functionRepresentation.size());
	return labelInstructionJumpLocations.size() - 1;
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::Noop()
{
	functionRepresentation.emplace_back(BytecodeType::Noop);
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ConditionalJumpOnStateOfVariable(
	std::size_t variableId, std::size_t trueLabel, std::size_t falseLabel)
{
	functionRepresentation.emplace_back(
		BytecodeType::ConditionalJump,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{variableId, trueLabel,
																		   falseLabel});
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ConditionalTrueJumpOnStateOfVariable(
	std::size_t variableId, std::size_t label)
{
	functionRepresentation.emplace_back(
		BytecodeType::ConditionalJump,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
			variableId, label, std::numeric_limits<std::size_t>::max()});
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ConditionalFalseJumpOnStateOfVariable(
	std::size_t variableId, std::size_t label)
{
	functionRepresentation.emplace_back(
		BytecodeType::ConditionalJump,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
			variableId, std::numeric_limits<std::size_t>::max(), label});
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::Goto(std::size_t labelId)
{
	functionRepresentation.emplace_back(
		BytecodeType::Goto,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{labelId});
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddLocalVariable()
{
	auto varId = idCounter;
	functionRepresentation.emplace_back(
		idCounter, nullptr, BytecodeType::Variable,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{});
	IncrementIdCounter();
	return varId;
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::CreateInteger(int default_value)
{
	auto iter = mapIntegerWithVariable.find(default_value);
	if (iter != mapIntegerWithVariable.end())
	{
		return iter->second;
	}

	auto new_value = std::make_unique<Integer>(default_value);

	auto var_id = AddLocalVariable();
	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Integer,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{var_id,
																		   new_value.get()});
	integers.push_back(std::move(new_value));
	mapIntegerWithVariable.insert({default_value, var_id});
	return var_id;
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::CreateText(std::string default_value)
{
	auto new_value = std::make_unique<Text>(default_value);
	auto new_value_ptr = new_value.get();
	texts.push_back(std::move(new_value));

	auto var_id = idCounter;
	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Text,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{idCounter,
																		   new_value_ptr});
	IncrementIdCounter();
	return var_id;
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::CreateDecimal(double default_value)
{
	auto new_value = std::make_unique<Decimal>(default_value);
	auto new_value_ptr = new_value.get();
	decimals.push_back(std::move(new_value));

	auto var_id = idCounter;
	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Decimal,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{idCounter,
																		   new_value_ptr});
	IncrementIdCounter();
	return var_id;
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddIntegerToVariable(
	std::size_t assigned_value_id, int i)
{
	auto increasingValue = CreateInteger(i);
	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, BytecodeType::Add,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
			assigned_value_id, assigned_value_id, increasingValue, nullptr});
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddLessThan(std::size_t lhs,
																				 std::size_t rhs)
{
	return AddBinaryOperation(BytecodeType::Less, lhs, rhs);
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddLessThanOrEqual(std::size_t lhs,
																			std::size_t rhs)
{
	return AddBinaryOperation(BytecodeType::LessOrEqual, lhs, rhs);
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddGreaterThan(std::size_t lhs,
																					std::size_t rhs)
{
	return AddBinaryOperation(BytecodeType::Greater, lhs, rhs);
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::AddGreaterThanOrEqual(std::size_t lhs,
																			   std::size_t rhs)
{
	return AddBinaryOperation(BytecodeType::GreaterOrEqual, lhs, rhs);
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddEqual(std::size_t lhs,
																			  std::size_t rhs)
{
	return AddBinaryOperation(BytecodeType::Equal, lhs, rhs);
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddNotEqual(std::size_t lhs,
																				 std::size_t rhs)
{
	return AddBinaryOperation(BytecodeType::NotEqual, lhs, rhs);
}

std::size_t Celeste::ir::inputreconstruction::bytecode::Constructor::AddBinaryOperation(
	BytecodeType bytecode, std::size_t lhs, std::size_t rhs, inputreconstruction::Function* op)
{
	auto assigned_value_id = AddLocalVariable();

	functionRepresentation.emplace_back(
		std::numeric_limits<std::size_t>::max(), nullptr, bytecode,
		std::vector<std::variant<std::size_t, InputReconstructionObject*>>{assigned_value_id, lhs,
																		   rhs, op});
	return assigned_value_id;
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ReserveConditionalContinuationLabel()
{
	continuationLabels[continuationLabels.size() - 1] = ReserveLabel();
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ReserveConditionalExitLabel()
{
	exitLabels[exitLabels.size() - 1] = ReserveLabel();
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::GetReservedConditionalContinuationLabel()
{
	return continuationLabels[continuationLabels.size() - 1];
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::GetReservedConditionalExitLabel()
{
	return exitLabels[exitLabels.size() - 1];
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ConditionalLabelPush()
{
	continuationLabels.emplace_back(0);
	exitLabels.emplace_back(0);
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::ConditionalLabelPop()
{
	continuationLabels.pop_back();
	exitLabels.pop_back();
}
