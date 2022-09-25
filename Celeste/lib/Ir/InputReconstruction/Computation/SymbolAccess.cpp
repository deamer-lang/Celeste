#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"

Celeste::ir::inputreconstruction::SymbolAccess::SymbolAccess(
	InputReconstructionObject* symbolParent_,
	ast::reference::Access<ast::node::symbol_access> symbolAccessAst_)
	: InputReconstructionObject(Type::SymbolAccess),
	  symbolParent(symbolParent_)
{
	if (!symbolAccessAst_.anonymous_access().GetContent().empty())
	{
		AccessType = SymbolAccessType::AnonymousAccess;
		expressions.push_back(std::make_unique<Expression>(const_cast<ast::node::expression*>(
			symbolAccessAst_.anonymous_access().expression().GetContent()[0])));
	}
	else if (!symbolAccessAst_.function_access().GetContent().empty())
	{
		AccessType = SymbolAccessType::FunctionAccess;
		for (auto expression : symbolAccessAst_.function_access().expression())
		{
			expressions.push_back(
				std::make_unique<Expression>(const_cast<ast::node::expression*>(expression)));
		}
	}
	else if (!symbolAccessAst_.auto_deduce_array().GetContent().empty())
	{
		AccessType = SymbolAccessType::AutoDeduceArray;
	}
	else if (!symbolAccessAst_.index_access().GetContent().empty())
	{
		AccessType = SymbolAccessType::IndexAccess;
		expressions.push_back(std::make_unique<Expression>(const_cast<ast::node::expression*>(
			symbolAccessAst_.index_access().expression().GetContent()[0])));
	}
}

void Celeste::ir::inputreconstruction::SymbolAccess::Complete()
{
	for (auto& expression : expressions)
	{
		expression->SetParent(this);
		expression->SetFile(GetFile());
		expression->Resolve();
	}
}

void Celeste::ir::inputreconstruction::SymbolAccess::Resolve()
{
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::SymbolAccess::GetLinkedIr()
{
	return linkedIr;
}

bool Celeste::ir::inputreconstruction::SymbolAccess::IsFunctionAccess()
{
	return AccessType == SymbolAccessType::FunctionAccess;
}

Celeste::ast::reference::Access<Celeste::ast::node::symbol_access>
Celeste::ir::inputreconstruction::SymbolAccess::GetAst()
{
	return symbolAccessAst;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::Expression>>&
Celeste::ir::inputreconstruction::SymbolAccess::GetExpressions()
{
	return expressions;
}

Celeste::ir::inputreconstruction::SymbolAccessType
Celeste::ir::inputreconstruction::SymbolAccess::GetSymbolAccessType()
{
	return AccessType;
}

std::size_t Celeste::ir::inputreconstruction::SymbolAccess::GetAnonymousIndex()
{
	auto text = symbolAccessAst.GetContent()[0]->GetText();
	return std::atol(text.c_str());
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::Expression>>&
Celeste::ir::inputreconstruction::SymbolAccess::GetFunctionArguments()
{
	return expressions;
}
