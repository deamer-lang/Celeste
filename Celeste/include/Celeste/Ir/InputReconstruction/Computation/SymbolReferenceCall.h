#ifndef CELESTE_INPUTRECONSTRUCTION_SYMBOLREFERENCECALL_H
#define CELESTE_INPUTRECONSTRUCTION_SYMBOLREFERENCECALL_H

#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReferenceSecondary.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <optional>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class SymbolReferenceCall : public NameReference
	{
	public:
		SymbolReferenceCall(ast::node::symbol_reference* symbolReference_);
		SymbolReferenceCall(ast::node::VARNAME* varname_);
		SymbolReferenceCall(const std::string& varname_);
		virtual ~SymbolReferenceCall();

		SymbolReferenceCall(const SymbolReferenceCall& rhs);

	public:
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_SYMBOLREFERENCECALL_H
