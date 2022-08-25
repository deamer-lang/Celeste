#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ast/Listener/User/Ir/InputReconstructionListener.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"

struct Celeste::ir::inputreconstruction::Value::Impl
{
	ast::node::value* value;
	std::variant<std::monostate, std::unique_ptr<CodeBlock>, std::unique_ptr<SymbolReferenceCall>,
				 std::unique_ptr<Tuple>, std::unique_ptr<Integer>, std::unique_ptr<Decimal>,
				 std::unique_ptr<Text>>
		underlyingSpecialization;

	Impl(ast::node::value* value_) : value(value_)
	{
	}

	~Impl() = default;
};

Celeste::ir::inputreconstruction::Value::Value(ast::node::value* value_)
	: InputReconstructionObject(Type::Value),
	  impl(std::make_unique<Impl>(value_))
{
}

Celeste::ir::inputreconstruction::Value::~Value()
{
}

void Celeste::ir::inputreconstruction::Value::Resolve()
{
	auto child = const_cast<deamer::external::cpp::ast::Node*>(impl->value->GetIndex(0));
	switch (static_cast<ast::Type>(child->GetType()))
	{
	case ast::Type::NUMBER: {
		auto newNumber = std::make_unique<Integer>(static_cast<ast::node::NUMBER*>(child));
		newNumber->SetParent(this);
		newNumber->SetFile(GetFile());
		impl->underlyingSpecialization = std::move(newNumber);
		break;
	}
	case ast::Type::DECIMAL: {
		auto newDecimal = std::make_unique<Decimal>(static_cast<ast::node::DECIMAL*>(child));
		newDecimal->SetParent(this);
		newDecimal->SetFile(GetFile());
		impl->underlyingSpecialization = std::move(newDecimal);
		break;
	}
	case ast::Type::TEXT: {
		auto newText = std::make_unique<Text>(static_cast<ast::node::TEXT*>(child));
		newText->SetParent(this);
		newText->SetFile(GetFile());
		impl->underlyingSpecialization = std::move(newText);
		break;
	}
	case ast::Type::symbol_reference: {
		auto newSymbolReferenceCall =
			std::make_unique<Celeste::ir::inputreconstruction::SymbolReferenceCall>(
				static_cast<ast::node::symbol_reference*>(child));
		newSymbolReferenceCall->SetFile(GetFile());
		newSymbolReferenceCall->SetParent(this);
		GetFile()->AddUnresolvedSymbolReference(newSymbolReferenceCall.get());
		impl->underlyingSpecialization = std::move(newSymbolReferenceCall);
		break;
	}
	case ast::Type::code_block: {
		auto newCodeBlock = std::make_unique<Celeste::ir::inputreconstruction::CodeBlock>(
			static_cast<ast::node::code_block*>(child));
		newCodeBlock->SetFile(GetFile());
		newCodeBlock->SetParent(this);
		newCodeBlock->Resolve();
		impl->underlyingSpecialization = std::move(newCodeBlock);
		break;
	}
	case ast::Type::tuple: {
		auto newTuple = std::make_unique<Celeste::ir::inputreconstruction::Tuple>(
			static_cast<ast::node::tuple*>(child));
		newTuple->SetFile(GetFile());
		newTuple->SetParent(this);
		newTuple->Resolve();
		impl->underlyingSpecialization = std::move(newTuple);
		break;
	}
	}
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Value::DeduceType()
{
	if (std::holds_alternative<std::monostate>(impl->underlyingSpecialization))
	{
		return nullptr;
	}
	else if (std::holds_alternative<std::unique_ptr<CodeBlock>>(impl->underlyingSpecialization))
	{
		return std::get<std::unique_ptr<CodeBlock>>(impl->underlyingSpecialization).get();
	}
	else if (std::holds_alternative<std::unique_ptr<SymbolReferenceCall>>(
				 impl->underlyingSpecialization))
	{
		auto result = std::get<std::unique_ptr<SymbolReferenceCall>>(impl->underlyingSpecialization)
						  ->GetResolvedLinkedIr();
		if (!result.has_value())
		{
			// Invalid
			return nullptr;
		}

		return result.value();
	}
	else if (std::holds_alternative<std::unique_ptr<Decimal>>(impl->underlyingSpecialization))
	{
		auto standardTypesFile = GetFile()->GetProject()->GetFile("Celeste/standard_types.ce");
		if (standardTypesFile == nullptr)
		{
			return nullptr;
		}

		auto result = standardTypesFile->GetClass("decimal");
		if (result.has_value())
		{
			return result.value();
		}

		return nullptr;
	}
	else if (std::holds_alternative<std::unique_ptr<Integer>>(impl->underlyingSpecialization))
	{
		auto standardTypesFile = GetFile()->GetProject()->GetFile("Celeste/standard_types.ce");
		if (standardTypesFile == nullptr)
		{
			return nullptr;
		}

		auto result = standardTypesFile->GetClass("int");
		if (result.has_value())
		{
			return result.value();
		}

		return nullptr;
	}
	else if (std::holds_alternative<std::unique_ptr<Text>>(impl->underlyingSpecialization))
	{
		auto standardTypesFile = GetFile()->GetProject()->GetFile("Celeste/standard_types.ce");
		if (standardTypesFile == nullptr)
		{
			return nullptr;
		}

		auto result = standardTypesFile->GetClass("text");
		if (result.has_value())
		{
			return result.value();
		}

		return nullptr;
	}
}
