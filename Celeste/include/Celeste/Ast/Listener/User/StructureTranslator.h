#ifndef CELESTE_AST_LISTENER_USER_STRUCTURETRANSLATOR_H
#define CELESTE_AST_LISTENER_USER_STRUCTURETRANSLATOR_H

#include "Celeste/Ast/Listener/EnterExitListener.h"
#include <iostream>

namespace Celeste::ast::listener::user
{
	class StructureTranslator : public EnterExitListener
	{
		void EnterAnything(const ::deamer::external::cpp::ast::Node* node) override
		{
			std::cout << "Found entry OF Some declaration\n";
		}
		void ExitAnything(const ::deamer::external::cpp::ast::Node* node) override
		{
			std::cout << "Found exit OF Some declaration\n";
		}
		
		void ListenEntry(const Celeste::ast::node::class_declaration* node) override
		{
		}
		
		void ListenExit(const Celeste::ast::node::class_declaration* node) override
		{
		}
		
		void ListenEntry(const Celeste::ast::node::function_declaration* node) override
		{

		}

		void ListenExit(const Celeste::ast::node::function_declaration* node) override
		{

		}

		void ListenEntry(const Celeste::ast::node::function_implementation* node) override
		{

		}

		void ListenExit(const Celeste::ast::node::function_implementation* node) override
		{

		}

		void ListenEntry(const Celeste::ast::node::enum_declaration* node) override
		{

		}

		void ListenExit(const Celeste::ast::node::enum_declaration* node) override
		{

		}
	};
}

#endif // CELESTE_AST_LISTENER_USER_STRUCTURETRANSLATOR_H