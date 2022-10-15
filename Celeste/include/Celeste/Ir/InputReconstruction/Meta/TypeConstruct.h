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
		ast::node::type* type = nullptr;
		std::optional<std::unique_ptr<SymbolReferenceCall>> typeTarget;
		std::optional<std::unique_ptr<Expression>> arrayDeclarationExpression;
		bool isAuto = false;
		bool isAutoType = false;
		std::optional<InputReconstructionObject*> cacheInputReconstructionObject;

	public:
		TypeConstruct(InputReconstructionObject* resolvedObject);
		TypeConstruct(std::unique_ptr<SymbolReferenceCall> type);
		TypeConstruct(ast::node::type* type_);
		TypeConstruct();
		virtual ~TypeConstruct() = default;

		TypeConstruct(const TypeConstruct& rhs);

	public:
		void Destructure();

		bool IsAuto();
		bool IsAutoType();
		bool IsArrayDeclaration();
		bool CoreEqual(InputReconstructionObject* deduceType);
		bool Equal(InputReconstructionObject* deduceType);

		std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*> GetCoreType();

		std::optional<std::unique_ptr<SymbolReferenceCall>>& GetSymbolReference();
		InputReconstructionObject* GetIrLinkage(NameReferenceSecondary* nameReferenceSecondary);
		InputReconstructionObject* GetIrLinkage(SymbolAccess* access);

		// A type construct is trivial if it exists of a direct type link.
		// I.e. no array declarations
		bool Trivial();

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_META_TYPECONSTRUCT_H
