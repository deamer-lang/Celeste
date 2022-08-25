#ifndef CELESTE_AST_LISTENER_USER_IR_INPUTRECONSTRUCTIONLISTENER_H
#define CELESTE_AST_LISTENER_USER_IR_INPUTRECONSTRUCTIONLISTENER_H

#include "Celeste/Ast/Listener/EnterExitListener.h"
#include "Celeste/Ast/Reference/Access.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/CodeBlock.h"
#include "Celeste/Ir/InputReconstruction/Computation/Display.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/Return.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolDecrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolIncrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ConditionalFunction.h"
#include "Celeste/Ir/InputReconstruction/Conditional/Else.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ElseIf.h"
#include "Celeste/Ir/InputReconstruction/Conditional/If.h"
#include "Celeste/Ir/InputReconstruction/Import.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForIteration.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/CompoundBase.h"
#include "Celeste/Ir/InputReconstruction/Structure/ConditionModifierCall.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/EnumerationMember.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/FunctionArgument.h"
#include "Celeste/Ir/InputReconstruction/Structure/InlineClass.h"
#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"
#include "Celeste/Ir/InputReconstruction/Structure/Namespace.h"

namespace Celeste::ast::listener::user::ir
{
	class InputReconstructionListener : public EnterExitListener
	{
	private:
		Celeste::ir::inputreconstruction::Project* project;
		Celeste::ir::inputreconstruction::File* file;
		std::vector<std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>>
			inputReconstructionObjects;
		std::vector<Celeste::ir::inputreconstruction::Class*> classes;
		bool skip = false;
		std::size_t skipCounter = 0;

		Celeste::ir::inputreconstruction::Class* GetLastClass()
		{
			return *std::rbegin(classes);
		}

	public:
		InputReconstructionListener(Celeste::ir::inputreconstruction::Project* project_,
									Celeste::ir::inputreconstruction::File* file_)
			: project(project_),
			  file(file_)
		{
			OpenScope();
			auto root =
				std::make_unique<Celeste::ir::inputreconstruction::InputReconstructionObject>(
					Celeste::ir::inputreconstruction::Type::Root);
			AddCurrentScope(std::move(root));
			OpenScope();
		}

		InputReconstructionListener(Celeste::ir::inputreconstruction::Project* project_,
									Celeste::ir::inputreconstruction::File* file_,
									Celeste::ir::inputreconstruction::CodeBlock* codeBlock)
			: project(project_),
			  file(file_)
		{
			OpenScope();
			auto root =
				std::make_unique<Celeste::ir::inputreconstruction::InputReconstructionObject>(
					Celeste::ir::inputreconstruction::Type::Root);
			codeBlock->Add(root.get());
			AddCurrentScope(std::move(root));
			OpenScope();
		}

		~InputReconstructionListener() override
		{
			CloseScope();
		}

	public:
		void ListenEntry(const Celeste::ast::node::expression* node) override
		{
			skipCounter++;
			skip = skipCounter == 0;
		}

		void ListenExit(const Celeste::ast::node::expression* node) override
		{
			skipCounter--;
			skip = skipCounter != 0;
		}

		void ListenEntry(const Celeste::ast::node::type* node) override
		{
			skipCounter++;
			skip = skipCounter == 0;
		}

		void ListenExit(const Celeste::ast::node::type* node) override
		{
			skipCounter--;
			skip = skipCounter != 0;
		}

		void ListenEntry(const Celeste::ast::node::symbol_reference* node) override
		{
			if (node->GetParent()->GetType() == Type::stmt)
			{
				if (skip)
				{
					return;
				}

				auto Access = reference::Access(node);

				auto newSymbolReference = GetSymbolReference(node);
				newSymbolReference->SetParent(GetParent());
				AddCurrentScope(std::move(newSymbolReference));
			}
			else
			{
				skipCounter++;
				skip = skipCounter == 0;
			}
		}

		void ListenExit(const Celeste::ast::node::symbol_reference* node) override
		{
			if (node->GetParent()->GetType() == Type::stmt)
			{
				if (skip)
				{
					return;
				}
			}
			else
			{
				skipCounter--;
				skip = skipCounter != 0;
			}
		}

		void OpenScope()
		{
			inputReconstructionObjects.emplace_back();
		}

		void CloseScope()
		{
			if (!(++std::rbegin(inputReconstructionObjects))->empty())
			{
				(*std::rbegin(*(++std::rbegin(inputReconstructionObjects))))
					->Add(*std::rbegin(inputReconstructionObjects));
			}

			inputReconstructionObjects.pop_back();
		}

		void AddCurrentScope(
			std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject> newObject)
		{
			newObject->SetFile(file);
			(*std::rbegin(inputReconstructionObjects)).push_back(newObject.get());
			file->AddInputReconstructionObject(std::move(newObject));
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>
		GetSymbolReference(const node::symbol_reference* symbolReference)
		{
			auto newSymbolReferenceCall =
				std::make_unique<Celeste::ir::inputreconstruction::SymbolReferenceCall>(
					const_cast<node::symbol_reference*>(symbolReference));
			newSymbolReferenceCall->SetFile(file);
			file->AddUnresolvedSymbolReference(newSymbolReferenceCall.get());

			return std::move(newSymbolReferenceCall);
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::SymbolReferenceCall>
		GetSymbolReference(const node::VARNAME* symbolReference)
		{
			auto newSymbolReferenceCall =
				std::make_unique<Celeste::ir::inputreconstruction::SymbolReferenceCall>(
					const_cast<node::VARNAME*>(symbolReference));
			newSymbolReferenceCall->SetFile(file);

			return std::move(newSymbolReferenceCall);
		}

		// Returns a named reference.
		std::unique_ptr<Celeste::ir::inputreconstruction::NameReference>
		GetName(const node::symbol_reference* symbolReference)
		{
			auto newSymbolReferenceCall =
				std::make_unique<Celeste::ir::inputreconstruction::NameReference>(
					const_cast<node::symbol_reference*>(symbolReference));
			newSymbolReferenceCall->SetFile(file);
			file->AddUnresolvedSymbolReference(newSymbolReferenceCall.get());

			return std::move(newSymbolReferenceCall);
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::NameReference>
		GetName(const node::VARNAME* symbolReference)
		{
			auto newSymbolReferenceCall =
				std::make_unique<Celeste::ir::inputreconstruction::NameReference>(
					const_cast<node::VARNAME*>(symbolReference));
			newSymbolReferenceCall->SetFile(file);

			return std::move(newSymbolReferenceCall);
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::TypeConstruct>
		GetType(const node::type* value)
		{
			auto newTypeConstruct =
				std::make_unique<Celeste::ir::inputreconstruction::TypeConstruct>(
					const_cast<node::type*>(value));
			newTypeConstruct->SetFile(file);

			return std::move(newTypeConstruct);
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::Expression>
		GetExpression(const node::expression* value)
		{
			auto newExpression = std::make_unique<Celeste::ir::inputreconstruction::Expression>(
				const_cast<node::expression*>(value));
			newExpression->SetFile(file);
			newExpression->Resolve();

			return std::move(newExpression);
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::ConditionModifierCall>
		GetConditionalFunctionCall(
			const node::condition_modifier_function_call* conditionModifierFunctionCall)
		{
			auto access = reference::Access(conditionModifierFunctionCall);
			auto newObject =
				std::make_unique<Celeste::ir::inputreconstruction::ConditionModifierCall>(
					GetSymbolReference(
						access.condition_modifier_name().symbol_reference().GetContent()[0]));
			access.condition_modifier_argument().for_all(
				[&](reference::Access<node::condition_modifier_argument> argument) {
					newObject->AddValue(
						GetExpression(argument.full_value().expression().GetContent()[0]));
				});
			return std::move(newObject);
		}

		std::unique_ptr<Celeste::ir::inputreconstruction::FunctionArgument>
		GetFunctionArgument(reference::Access<node::function_argument> access)
		{
			auto newFunctionArgument =
				std::make_unique<Celeste::ir::inputreconstruction::FunctionArgument>(
					GetName(access.function_argument_name().symbol_reference().GetContent()[0]),
					GetType(access.function_argument_type().type().GetContent()[0]));
			if (!access.full_value().GetContent().empty())
			{
				newFunctionArgument->AddValue(
					GetExpression(access.full_value().expression().GetContent()[0]));
			}
			if (!access.condition_modifier_function_call().GetContent().empty())
			{
				newFunctionArgument->AddConditionalModifier(GetConditionalFunctionCall(
					access.condition_modifier_function_call().GetContent()[0]));
			}
			newFunctionArgument->SetFile(file);
			newFunctionArgument->SetParent(GetParent());
			newFunctionArgument->Complete();

			return std::move(newFunctionArgument);
		}
		std::unique_ptr<Celeste::ir::inputreconstruction::TemplateParameter>
		GetTemplateParameter(reference::Access<node::template_parameter> access)
		{
			auto newFunctionArgument =
				std::make_unique<Celeste::ir::inputreconstruction::TemplateParameter>(
					GetName(access.template_parameter_name().VARNAME().GetContent()[0]),
					GetType(access.type().GetContent()[0]));
			newFunctionArgument->SetFile(file);
			newFunctionArgument->SetParent(GetParent());
			newFunctionArgument->Complete();

			return std::move(newFunctionArgument);
		}

		void ListenEntry(const Celeste::ast::node::class_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Class = std::make_unique<Celeste::ir::inputreconstruction::Class>(
				GetName(Access.class_name().symbol_reference().GetContent()[0]));

			classes.push_back(Class.get());

			// Implement Inheritance Relations
			Access.class_inherit_base().for_all(
				[&](reference::Access<Celeste::ast::node::class_inherit_base> access) {
					// Implement Compound and Inheritance relations
					if (!access.compound_base().GetContent().empty())
					{
						auto compoundBase =
							std::make_unique<Celeste::ir::inputreconstruction::CompoundBase>(
								GetSymbolReference(access.compound_base()
													   .compound_base_name()
													   .symbol_reference()
													   .GetContent()[0]));
						access.compound_base().compound_base_alias().for_all(
							[&](reference::Access<Celeste::ast::node::compound_base_alias>
									compoundAccess) {
								auto alias = GetName(compoundAccess.VARNAME().GetContent()[0]);
								compoundBase->Add(alias.get());
								file->AddInputReconstructionObject(std::move(alias));
							});
						Class->AddCompoundBase(std::move(compoundBase));
					}
					else if (!access.inherit_base().GetContent().empty())
					{
						auto inheritBase =
							std::make_unique<Celeste::ir::inputreconstruction::InheritBase>(
								GetSymbolReference(access.inherit_base()
													   .inherit_base_name()
													   .symbol_reference()
													   .GetContent()[0]));
						Class->AddInheritedBase(std::move(inheritBase));
					}
				});

			Class->SetParent(GetParent());
			Class->SetFile(file);
			Class->Complete();

			AddCurrentScope(std::move(Class));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::class_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			classes.pop_back();
			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::mutation_group* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto MutationGroup =
				std::make_unique<Celeste::ir::inputreconstruction::MutationGroup>();

			// Implement Inheritance Relations
			Access.symbol_reference().for_all(
				[&](reference::Access<Celeste::ast::node::symbol_reference> access) {
					MutationGroup->AddSetting(GetSymbolReference(access.GetContent()[0]));
				});

			AddCurrentScope(std::move(MutationGroup));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::mutation_group* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::template_class_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Class = std::make_unique<Celeste::ir::inputreconstruction::Class>(
				GetName(Access.class_name().symbol_reference().GetContent()[0]));

			classes.push_back(Class.get());

			// Implement Inheritance Relations
			Access.class_inherit_base().for_all(
				[&](reference::Access<Celeste::ast::node::class_inherit_base> access) {
					// Implement Compound and Inheritance relations
					if (!access.compound_base().GetContent().empty())
					{
						auto compoundBase =
							std::make_unique<Celeste::ir::inputreconstruction::CompoundBase>(
								GetSymbolReference(access.compound_base()
													   .compound_base_name()
													   .symbol_reference()
													   .GetContent()[0]));
						access.compound_base().compound_base_alias().for_all(
							[&](reference::Access<Celeste::ast::node::compound_base_alias>
									compoundAccess) {
								auto alias = GetName(compoundAccess.VARNAME().GetContent()[0]);
								compoundBase->Add(alias.get());
								file->AddInputReconstructionObject(std::move(alias));
							});
						Class->AddCompoundBase(std::move(compoundBase));
					}
					else if (!access.inherit_base().GetContent().empty())
					{
						auto inheritBase =
							std::make_unique<Celeste::ir::inputreconstruction::InheritBase>(
								GetSymbolReference(access.inherit_base()
													   .inherit_base_name()
													   .symbol_reference()
													   .GetContent()[0]));
						Class->AddInheritedBase(std::move(inheritBase));
					}
				});

			Access.template_parameter().for_all(
				[&](reference::Access<node::template_parameter> template_parameter) {
					Class->AddTemplateParameter(GetTemplateParameter(template_parameter));
				});

			Class->SetParent(GetParent());
			Class->SetFile(file);
			Class->Complete();

			AddCurrentScope(std::move(Class));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::template_class_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			classes.pop_back();
			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::template_class_stmt_constructor* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::Constructor>(
				GetName(Access.class_name().symbol_reference().GetContent()[0]));

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			Access.template_parameter().for_all(
				[&](reference::Access<node::template_parameter> template_parameter) {
					Function->AddTemplateParameter(GetTemplateParameter(template_parameter));
				});

			Function->SetParent(GetParent());
			Function->SetFile(file);
			Function->Complete();

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::template_class_stmt_constructor* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::class_stmt_constructor* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::Constructor>(
				GetName(Access.class_name().symbol_reference().GetContent()[0]));

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			Function->SetParent(GetParent());
			Function->SetFile(file);
			Function->Complete();

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::class_stmt_constructor* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::Function>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]),
				GetType(Access.return_type().type().GetContent()[0]));

			Function->SetFile(file);
			Function->SetParent(GetParent());
			Function->Complete();

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		/* // Reserved for Name Function
		void ListenEntry(const Celeste::ast::node::function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::Function>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]),
				GetType(Access.return_type().type().GetContent()[0]));

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}
		*/

		void ListenEntry(const Celeste::ast::node::conditional_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::ConditionalFunction>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]));

			// Implement Conditional Function Arguments
			Access.conditional_function_argument().function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddConditionalFunctionArgument(GetFunctionArgument(functionArgument));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::conditional_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::code_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::CodeFunction>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]));

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::code_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::template_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::Function>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]),
				GetType(Access.return_type().type().GetContent()[0]));

			Function->SetFile(file);
			Function->SetParent(GetParent());
			Function->Complete();

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			Access.template_parameter().for_all(
				[&](reference::Access<node::template_parameter> template_parameter) {
					Function->AddTemplateParameter(GetTemplateParameter(template_parameter));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::template_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		/* // Reserved for Name Function
		void ListenEntry(const Celeste::ast::node::template_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::Function>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]),
				GetType(Access.return_type().type().GetContent()[0]));

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}
		*/

		void ListenEntry(
			const Celeste::ast::node::template_conditional_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::ConditionalFunction>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]));

			// Implement Conditional Function Arguments
			Access.conditional_function_argument().function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddConditionalFunctionArgument(GetFunctionArgument(functionArgument));
				});

			Access.template_parameter().for_all(
				[&](reference::Access<node::template_parameter> template_parameter) {
					Function->AddTemplateParameter(GetTemplateParameter(template_parameter));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(
			const Celeste::ast::node::template_conditional_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void
		ListenEntry(const Celeste::ast::node::template_code_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto Function = std::make_unique<Celeste::ir::inputreconstruction::CodeFunction>(
				GetName(Access.function_name().symbol_reference().GetContent()[0]));

			// Implement Function Arguments
			Access.function_argument().for_all(
				[&](reference::Access<node::function_argument> functionArgument) {
					Function->AddFunctionArgument(GetFunctionArgument(functionArgument));
				});

			Access.template_parameter().for_all(
				[&](reference::Access<node::template_parameter> template_parameter) {
					Function->AddTemplateParameter(GetTemplateParameter(template_parameter));
				});

			AddCurrentScope(std::move(Function));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::template_code_function_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::variable_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto VariableDeclaration =
				std::make_unique<Celeste::ir::inputreconstruction::VariableDeclaration>(
					GetName(Access.variable_name().symbol_reference().GetContent()[0]),
					GetType(Access.type().GetContent()[0]));

			VariableDeclaration->SetFile(file);
			VariableDeclaration->SetParent(GetParent());
			VariableDeclaration->Complete();

			// Add Variable Initialization Value
			for (auto value : Access.value_list().full_value().expression().GetContent())
			{
				VariableDeclaration->AddValue(GetExpression(value));
			}

			AddCurrentScope(std::move(VariableDeclaration));
		}

		void ListenExit(const Celeste::ast::node::variable_declaration* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void
		ListenEntry(const Celeste::ast::node::class_stmt_member_field_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto VariableDeclaration =
				std::make_unique<Celeste::ir::inputreconstruction::VariableDeclaration>(
					GetName(Access.member_field_name().symbol_reference().GetContent()[0]),
					GetType(Access.type().GetContent()[0]));

			VariableDeclaration->SetFile(file);
			VariableDeclaration->SetParent(GetParent());
			VariableDeclaration->Complete();

			// Add Variable Initialization Value
			for (auto value : Access.value_list().full_value().expression().GetContent())
			{
				VariableDeclaration->AddValue(GetExpression(value));
			}

			AddCurrentScope(std::move(VariableDeclaration));
		}

		void
		ListenExit(const Celeste::ast::node::class_stmt_member_field_declaration* node) override
		{
			if (skip)
			{
				return;
			}
		}

		std::string GetText(std::string getText)
		{
			if (!getText.empty() && getText[0] == '"' && (*std::rbegin(getText)) == '"')
			{
				getText.pop_back();
				getText.erase(0, 1);
				return getText;
			}

			return getText;
		}

		void ListenEntry(const Celeste::ast::node::import_statement* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			// This only works for File Imports
			// Also the Project GetFile must be upgraded to allow any location access.
			auto Import = std::make_unique<Celeste::ir::inputreconstruction::Import>(
				project->GetFile(GetText(Access.file_import().TEXT().GetContent()[0]->GetText())));
			Import->SetParent(GetParent());
			Import->SetFile(file);

			// Later Class Specializing Imports are Name limiters in Reference Resolving Stage.

			AddCurrentScope(std::move(Import));
		}

		void ListenExit(const Celeste::ast::node::import_statement* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void ListenEntry(const Celeste::ast::node::PUBLIC* node) override
		{
			if (skip)
			{
				return;
			}

			AddCurrentScope(
				std::make_unique<Celeste::ir::inputreconstruction::InputReconstructionObject>(
					Celeste::ir::inputreconstruction::Type::Public));
		}

		void ListenEntry(const Celeste::ast::node::PROTECTED* node) override
		{
			if (skip)
			{
				return;
			}

			AddCurrentScope(
				std::make_unique<Celeste::ir::inputreconstruction::InputReconstructionObject>(
					Celeste::ir::inputreconstruction::Type::Protected));
		}

		void ListenEntry(const Celeste::ast::node::PRIVATE* node) override
		{
			if (skip)
			{
				return;
			}

			AddCurrentScope(
				std::make_unique<Celeste::ir::inputreconstruction::InputReconstructionObject>(
					Celeste::ir::inputreconstruction::Type::Private));
		}

		void ListenEntry(const Celeste::ast::node::enum_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newEnumeration = std::make_unique<Celeste::ir::inputreconstruction::Enumeration>(
				GetName(Access.enum_name().symbol_reference().GetContent()[0]), node);
			newEnumeration->SetParent(GetParent());
			newEnumeration->SetFile(file);
			newEnumeration->Complete();

			AddCurrentScope(std::move(newEnumeration));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::enum_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::inline_class_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newInlineClass = std::make_unique<Celeste::ir::inputreconstruction::InlineClass>(
				GetName(Access.created_class_name().VARNAME().GetContent()[0]));

			AddCurrentScope(std::move(newInlineClass));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::inline_class_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void
		ListenEntry(const Celeste::ast::node::inline_class_declaration_composite* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			// Not yet implemented
		}

		void ListenExit(const Celeste::ast::node::inline_class_declaration_composite* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void ListenEntry(const Celeste::ast::node::return_statement* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::Return>(
				GetExpression(Access.expression().GetContent()[0]));
			newObject->SetFile(file);
			newObject->SetParent(GetParent());
			newObject->Resolve();

			AddCurrentScope(std::move(newObject));
		}

		void ListenExit(const Celeste::ast::node::return_statement* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void ListenEntry(const Celeste::ast::node::display_call* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::Display>(
				GetSymbolReference(Access.symbol_reference().GetContent()[0]));
			newObject->SetFile(file);
			newObject->SetParent(GetParent());
			newObject->Resolve();

			AddCurrentScope(std::move(newObject));
		}

		void ListenExit(const Celeste::ast::node::display_call* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void ListenEntry(const Celeste::ast::node::namespace_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::Namespace>(
				GetName(Access.namespace_name().VARNAME().GetContent()[0]));

			AddCurrentScope(std::move(newObject));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::namespace_declaration* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::code_block* node) override
		{
			if (skip)
			{
				return;
			}

			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::code_block* node) override
		{
			if (skip)
			{
				return;
			}

			inputReconstructionObjects.pop_back();
		}

		void ListenEntry(const Celeste::ast::node::conditional_if* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::If>(
				GetExpression(Access.expression().GetContent()[0]));

			AddCurrentScope(std::move(newObject));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::conditional_if* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::conditional_else_if* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::ElseIf>(
				GetExpression(Access.expression().GetContent()[0]));

			AddCurrentScope(std::move(newObject));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::conditional_else_if* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::conditional_else* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::Else>();

			AddCurrentScope(std::move(newObject));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::conditional_else* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::for_each_loop* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::ForEach>(
				GetType(Access.type().GetContent()[0]),
				GetName(Access.for_variable().VARNAME().GetContent()[0]),
				GetExpression(Access.iterator().full_value().expression().GetContent()[0]));

			newObject->SetFile(file);
			newObject->SetParent(GetParent());
			newObject->Complete();

			AddCurrentScope(std::move(newObject));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::for_each_loop* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::for_iteration_loop* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::ForIteration>(
				GetExpression(Access.expression().GetContent()[0]));

			newObject->SetParent(GetParent());
			newObject->SetFile(file);
			newObject->Complete();
			
			AddCurrentScope(std::move(newObject));
			OpenScope();
		}

		void ListenExit(const Celeste::ast::node::for_iteration_loop* node) override
		{
			if (skip)
			{
				return;
			}

			CloseScope();
		}

		void ListenEntry(const Celeste::ast::node::assignment* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::Assignment>(
				GetSymbolReference(Access.symbol_reference().GetContent()[0]),
				GetExpression(Access.expression().GetContent()[0]),
				const_cast<node::assignment_operator*>(
					Access.assignment_operator().GetContent()[0]));

			newObject->SetParent(GetParent());
			newObject->SetFile(file);
			newObject->Complete();

			AddCurrentScope(std::move(newObject));
		}

		void ListenExit(const Celeste::ast::node::assignment* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void ListenEntry(const Celeste::ast::node::symbol_increase* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::SymbolIncrease>(
				GetSymbolReference(Access.symbol_reference().GetContent()[0]));

			newObject->SetParent(GetParent());
			newObject->SetFile(file);
			newObject->Complete();
			
			AddCurrentScope(std::move(newObject));
		}

		void ListenExit(const Celeste::ast::node::symbol_increase* node) override
		{
			if (skip)
			{
				return;
			}
		}

		void ListenEntry(const Celeste::ast::node::symbol_decrease* node) override
		{
			if (skip)
			{
				return;
			}

			auto Access = reference::Access(node);
			auto newObject = std::make_unique<Celeste::ir::inputreconstruction::SymbolDecrease>(
				GetSymbolReference(Access.symbol_reference().GetContent()[0]));

			newObject->SetParent(GetParent());
			newObject->SetFile(file);
			newObject->Complete();
			
			AddCurrentScope(std::move(newObject));
		}

		void ListenExit(const Celeste::ast::node::symbol_decrease* node) override
		{
			if (skip)
			{
				return;
			}
		}

		Celeste::ir::inputreconstruction::InputReconstructionObject* GetParent()
		{
			auto iter = std::rbegin(this->inputReconstructionObjects);
			iter++;
			auto parent = (*std::rbegin((*iter)));
			return parent;
		}
	};
}

#endif // CELESTE_AST_LISTENER_USER_IR_INPUTRECONSTRUCTIONLISTENER_H
