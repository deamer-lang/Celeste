#ifndef CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCESECONDARY_H
#define CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCESECONDARY_H

#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include <optional>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class NameReferenceSecondary : public NameReference
	{
	private:
		std::variant<ast::reference::Access<ast::node::symbol>,
					 ast::reference::Access<ast::node::symbol_secondary>,
					 ast::reference::Access<ast::node::VARNAME>>
			symbolReference;

		std::optional<std::unique_ptr<NameReferenceSecondary>> nameReferenceNext;

	public:
		NameReferenceSecondary(std::variant<ast::reference::Access<ast::node::symbol>,
											ast::reference::Access<ast::node::symbol_secondary>,
											ast::reference::Access<ast::node::VARNAME>>
								   symbolReference_);
		virtual ~NameReferenceSecondary() = default;

	public:
		void
		StartResolve(std::vector<std::variant<ast::reference::Access<ast::node::symbol>,
											  ast::reference::Access<ast::node::symbol_secondary>,
											  ast::reference::Access<ast::node::VARNAME>>>
						 nextSymbols);

		std::variant<ast::reference::Access<ast::node::symbol>,
					 ast::reference::Access<ast::node::symbol_secondary>,
					 ast::reference::Access<ast::node::VARNAME>>
		GetSymbolReferenceAst();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCESECONDARY_H
