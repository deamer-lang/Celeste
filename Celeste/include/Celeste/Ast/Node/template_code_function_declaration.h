#ifndef Celeste_AST_NODE_template_code_function_declaration_H
#define Celeste_AST_NODE_template_code_function_declaration_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class template_code_function_declaration : public Celeste<template_code_function_declaration>
	{
	private:
	public:
		template_code_function_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<template_code_function_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_template_code_function_declaration_H
