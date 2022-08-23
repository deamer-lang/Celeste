#ifndef CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCE_H
#define CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCE_H

#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include <optional>
#include <variant>

namespace Celeste::ir::inputreconstruction
{
	class NameReferenceSecondary;

	class NameReference : public InputReconstructionObject
	{
	private:
		struct ResolveLogic;

	private:
		std::variant<ast::node::symbol_reference*, ast::node::VARNAME*> symbolReference;
		std::optional<InputReconstructionObject*> cacheReferencedObjects;
		// The link in the syntax tree, this is not the referenced syntax part.
		::deamer::external::cpp::ast::Node* linkedAstNode = nullptr;
		// The resolved reference to the IR, the Name of the IR Component must be the same as the
		// linkedAstNode value
		std::optional<InputReconstructionObject*> linkedIr;

		std::vector<std::unique_ptr<SymbolAccess>> linkedIrViaAccess;

		bool staticallyResolvable = false;
		std::optional<std::unique_ptr<NameReferenceSecondary>> nameReferenceSecondary;

		std::string symbolName;

	public:
		NameReference(ast::node::symbol_reference* symbolReference_);
		NameReference(ast::node::VARNAME* varname_);
		virtual ~NameReference() = default;
		std::vector<const ast::node::symbol_access*> GetSymbolAccesses();

	protected:
		NameReference(Type forward_);
		NameReference(Type forward_, ast::node::symbol_reference* symbolReference_);
		NameReference(Type forward_, ast::node::VARNAME* symbolReference_);

	public:
		void SetLinkedAst(deamer::external::cpp::ast::Node* node);
		void SetSymbolName(const std::string& symbolName_);

		void ContinueResolve(std::variant<ast::reference::Access<ast::node::symbol>,
										  ast::reference::Access<ast::node::symbol_secondary>,
										  ast::reference::Access<ast::node::VARNAME>>
								 symbol);
		void ContinueResolveAccess(const ast::node::symbol_access* access);

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
		std::unique_ptr<SymbolAccess>& GetFinalLinkedCombination();

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
	};
}

#endif // CELESTE_INPUTRECONSTRUCTION_NAMEREFERENCE_H
