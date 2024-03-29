#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLACCESS_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLACCESS_H

#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Tuple.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	enum class SymbolAccessType
	{
		Unknown,

		IndexAccess,
		AnonymousAccess,
		FunctionAccess,
		AutoDeduceArray,
	};

	class SymbolAccess : public InputReconstructionObject
	{
	private:
		InputReconstructionObject* symbolParent = nullptr;
		InputReconstructionObject* linkedIr = nullptr;
		std::vector<std::unique_ptr<Expression>> expressions;
		ast::reference::Access<ast::node::symbol_access> symbolAccessAst;
		SymbolAccessType AccessType = SymbolAccessType::Unknown;

	public:
		SymbolAccess(InputReconstructionObject* symbolParent_,
					 ast::reference::Access<ast::node::symbol_access> symbolAccessAst_);
		virtual ~SymbolAccess() = default;
		void Complete();

		SymbolAccess(const SymbolAccess& rhs);

	public:
		void Resolve();
		std::optional<InputReconstructionObject*> GetLinkedIr();
		bool IsFunctionAccess();
		bool IsTemplateAccess();
		ast::reference::Access<ast::node::symbol_access> GetAst();
		std::vector<std::unique_ptr<Expression>>& GetExpressions();

		SymbolAccessType GetSymbolAccessType();
		std::size_t GetAnonymousIndex();
		std::vector<std::unique_ptr<Expression>>& GetFunctionArguments();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_SYMBOLACCESS_H
