#ifndef CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCESECONDARY_H
#define CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCESECONDARY_H

#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/symbol.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Node/symbol_secondary.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include <optional>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class NameReferenceSecondary : public NameReference
	{
	private:
		std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
			symbolReference;

		std::optional<std::unique_ptr<NameReferenceSecondary>> nameReferenceNext;

	public:
		NameReferenceSecondary(
			std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
				symbolReference_);
		virtual ~NameReferenceSecondary() = default;
		void Complete();

		NameReferenceSecondary(const NameReferenceSecondary& rhs);

	public:
		void StartResolve(
			std::vector<
				std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>>
				nextSymbols);

		std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
		GetSymbolReferenceAst();

		std::optional<NameReferenceSecondary*> GetNameSecondaryReference();

		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCESECONDARY_H
