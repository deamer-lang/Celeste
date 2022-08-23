#ifndef CELESTE_IR_INPUTRECONSTRUCTION_META_TYPECONSTRUCT_H
#define CELESTE_IR_INPUTRECONSTRUCTION_META_TYPECONSTRUCT_H

#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReferenceSecondary.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <optional>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class TypeConstruct : public InputReconstructionObject
	{
	private:
		ast::node::type* type;
		std::optional<std::unique_ptr<SymbolReferenceCall>> typeTarget;
		std::optional<std::unique_ptr<Expression>> arrayDeclarationExpression;
		bool isAuto = false;
		bool isAutoType = false;

	public:
		TypeConstruct(ast::node::type* type_);
		virtual ~TypeConstruct() = default;

	public:
		void Destructure();

		bool IsAuto();
		bool IsAutoType();
		bool IsArrayDeclaration();
		bool Equal(InputReconstructionObject* deduceType);

		std::optional<std::unique_ptr<SymbolReferenceCall>>& GetSymbolReference();
		InputReconstructionObject* GetIrLinkage(NameReferenceSecondary* nameReferenceSecondary);
		InputReconstructionObject* GetIrLinkage(SymbolAccess* access);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_META_TYPECONSTRUCT_H
