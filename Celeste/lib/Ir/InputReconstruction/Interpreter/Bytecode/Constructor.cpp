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
			functionRepresentation.emplace_back(
				std::numeric_limits<std::size_t>::max(), irObject->DeduceType(),
				operator_to_bytecode_instruction(type),
				std::vector<std::variant<std::size_t, InputReconstructionObject*>>{
					variableId, lhsResultId, rhsResultId, irObject->GetMemberFunction()});
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
	// var rhs
	// var rhs_size
	// assign rhs_size rhs.size
	// var iteration
	// assign iteration 0
	// var cond
	// label start
	// assign cond comparison
	// cfalse_jmp cond exit
	//  var element
	//  assign element element_in_rhs
	//	looped_statements
	//	assign iteration iteration + 1
	//	goto start
	// label exit

	auto start = AddLabel();
	auto rhsVariableId = idCounter;
	AddVariable(irObject->GetExpression());
}

void Celeste::ir::inputreconstruction::bytecode::Constructor::AddObject(ForIteration* irObject)
{
	// label start
	// var a
	// assign a expression_value
	// cfalse_jmp a exit
	//	looped_statements
	//	goto
	// label exit

	auto labelId = AddLabel();
	std::size_t expressionResultId = idCounter;
	// This will set up the logic for evaluating the expression.
	AddObject(irObject->GetExpression().get());
	Noop();
	auto reservedExitLable = ReserveLabel();
	ConditionalFalseJumpOnStateOfVariable(expressionResultId, reservedExitLable);
	Noop();
	AddObject(irObject->GetScope());
	Goto(labelId);
	AddLabel(reservedExitLable);
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
	InlineLabels(); // Required Optimization as Labels are no instructions
	return BytecodeRepresentation(std::move(functionRepresentation), idCounter);
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
	return exitLabels[exitLabels.size() - 1];
}

std::size_t
Celeste::ir::inputreconstruction::bytecode::Constructor::GetReservedConditionalExitLabel()
{
	return continuationLabels[continuationLabels.size() - 1];
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
