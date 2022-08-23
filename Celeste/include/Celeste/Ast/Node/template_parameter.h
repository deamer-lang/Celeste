#ifndef Celeste_AST_NODE_template_parameter_H
#define Celeste_AST_NODE_template_parameter_H

#include "Celeste/Ast/Node/Celeste.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace Celeste { namespace ast { namespace node { 

	class template_parameter : public Celeste<template_parameter>
	{
	private:
	public:
		template_parameter(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: Celeste<template_parameter>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // Celeste_AST_NODE_template_parameter_H
