#ifndef CELESTE_AST_LISTENER_USER_STRUCTURETRANSLATOR_H
#define CELESTE_AST_LISTENER_USER_STRUCTURETRANSLATOR_H

#include "Celeste/Ast/Listener/EnterExitListener.h"

namespace Celeste::ast::listener::user
{
	class StructureTranslator : public EnterExitListener
	{
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