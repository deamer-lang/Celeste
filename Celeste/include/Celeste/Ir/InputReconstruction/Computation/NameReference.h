#ifndef CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCE_H
#define CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCE_H

#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <memory>
#include <optional>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class SymbolAccess;
	class NameReferenceSecondary;

	class NameReference : public InputReconstructionObject
	{
	private:
		struct ResolveLogic;

	private:
		struct Impl;
		std::unique_ptr<Impl> impl;

	public:
		NameReference(ast::node::symbol_reference* symbolReference_);
		NameReference(ast::node::VARNAME* varname_);
		NameReference(const std::string& varname_);
		virtual ~NameReference();
		std::vector<SymbolAccess*> GetSymbolAccesses();
		void Reset();

	protected:
		bool resolveIsRan = false;
		bool initialized = false;

		NameReference(Type forward_);
		NameReference(Type forward_, ast::node::symbol_reference* symbolReference_);
		NameReference(Type forward_, ast::node::VARNAME* symbolReference_);
		NameReference(Type forward_, const std::string& symbolReference_);

		void CreateAccess(
			const Celeste::ast::reference::Access<Celeste::ast::node::symbol_access>& access);

	public:
		void SetLinkedAst(deamer::external::cpp::ast::Node* node);
		void SetSymbolName(const std::string& symbolName_);

		void ContinueResolve(std::variant<ast::reference::Access<ast::node::symbol>,
										  ast::reference::Access<ast::node::symbol_secondary>,
										  ast::reference::Access<ast::node::VARNAME>>
								 symbol);
		void ContinueResolveAccess(std::size_t i);

		void Resolve();

		::deamer::external::cpp::ast::Node* GetNode();

		/*!	\fn GetResolvedName
		 *
		 *	\brief This will return the statically or dynamically deduced Name
		 */
		std::string GetResolvedName();
		bool CanStaticallyBeResolved();

		/*!	\function GetFinalLinkedIr
		 *
		 *	\brief From this Symbol + Accesses, Get the last linked Ir
		 */
		std::optional<InputReconstructionObject*> GetFinalLinkedIr();

		/*!	\function GetFinalLinkedCombination
		 *
		 *	\brief Get the last Access belonging to this Symbol
		 */
		SymbolAccess* GetFinalLinkedCombination();

		/*!	\function GetResolvedLinkedIr
		 *
		 *	\brief From the full symbol reference, get the resolved linked IR.
		 *
		 *	\note This will return the resolved IR that this Name will resolve to.
		 *	In order to be able to return, this must be fully resolved.
		 *
		 *	\note If the Name is generating, this means that no external Ir Linkage has occured.
		 */
		std::optional<InputReconstructionObject*> GetResolvedLinkedIr();

		void SetLinkedIr(InputReconstructionObject* newLinkedIr_);

		/*!	\fn GetSymbolName
		 *
		 *	\brief Returns the Symbol Name use to propagate the static resolving algorithm
		 */
		std::string GetSymbolName();

	public:
		std::string
		GetSymbolNameFromSymbol(Celeste::ast::reference::Access<Celeste::ast::node::symbol> symbol);
		std::string GetSymbolNameFromSymbol(
			Celeste::ast::reference::Access<Celeste::ast::node::symbol_secondary> symbol);
		std::string GetSymbolNameFromSymbol(
			Celeste::ast::reference::Access<Celeste::ast::node::VARNAME> symbol);

		std::vector<const Celeste::ast::node::symbol_access*> GetSymbolAccessesFromSymbol(
			Celeste::ast::reference::Access<Celeste::ast::node::symbol> symbol);
		std::vector<const Celeste::ast::node::symbol_access*> GetSymbolAccessesFromSymbol(
			Celeste::ast::reference::Access<Celeste::ast::node::symbol_secondary> symbol);
		std::vector<const Celeste::ast::node::symbol_access*> GetSymbolAccessesFromSymbol(
			Celeste::ast::reference::Access<Celeste::ast::node::VARNAME> symbol);

		std::variant<ast::node::symbol*, ast::node::symbol_secondary*, ast::node::VARNAME*>
		GetSymbolReferenceAst();

		std::optional<NameReferenceSecondary*> GetNameSecondaryReference();

		std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::SymbolAccess>>&
		GetHiddenAccessSymbols();
		std::vector<Celeste::ir::inputreconstruction::SymbolAccess*>
		GetSymbolAccessesIncludingHidden();
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCE_H
