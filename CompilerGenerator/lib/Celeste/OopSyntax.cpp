#include "Celeste/OopSyntax.h"
#include "Celeste/Language.h"

Celeste::OopSyntax::OopSyntax(Celeste::Language* language)
	: ::deamer::language::generator::definition::property::user::OOPSyntax<Celeste::Language>(
		  language)
{
}

void Celeste::OopSyntax::GenerateObjects()
{
	oop_function_declaration_encapsulation.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->function_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Function));

	oop_class_declaration_encapsulation.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->class_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Class));

	oop_function_argument_encapsulation.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->function_argument.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::FunctionArguments));

	oop_variable_declaration_encapsulation.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->variable_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Property));

	class_declaration_1_oop_link.Set(::deamer::language::type::definition::object::main::OopLink(
		Language->class_declaration_CLASS_class_name_class_block.Pointer(),
		{oop_class_declaration_1_class_name_member.Pointer()}));

	function_declaration_0_oop_link.Set(::deamer::language::type::definition::object::main::OopLink(
		Language
			->function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_SEMICOLON
			.Pointer(),
		{oop_function_declaration_0_function_name_member.Pointer(),
		 oop_function_declaration_0_returntype_member.Pointer()}));

	function_argument_declaration_0_oop_link.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->function_argument_function_arg_type_function_arg_name_EQ_expression.Pointer(),
			{oop_function_argument_0_function_arg_name_member.Pointer(),
			 oop_function_argument_0_function_arg_type_member.Pointer()}));

	function_argument_declaration_1_oop_link.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->function_argument_function_arg_type_function_arg_name.Pointer(),
			{oop_function_argument_1_function_arg_name_member.Pointer(),
			 oop_function_argument_1_function_arg_type_member.Pointer()}));

	variable_declaration_0_oop_link.Set(::deamer::language::type::definition::object::main::OopLink(
		Language->variable_declaration_type_VARNAME_SEMICOLON.Pointer(),
		{oop_variable_declaration_0_VARNAME_member.Pointer(),
		 oop_variable_declaration_0_type_member.Pointer()}));

	oop_function_declaration_0_function_name_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_name.Pointer(), oop_function_name.Pointer()));
	oop_function_declaration_0_returntype_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->return_type.Pointer(), oop_function_type.Pointer()));

	oop_class_declaration_1_class_name_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->class_name.Pointer(), oop_class_name.Pointer()));

	oop_function_argument_0_function_arg_name_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_name.Pointer(), oop_function_arg_name.Pointer()));
	oop_function_argument_0_function_arg_type_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_type.Pointer(), oop_function_arg_type.Pointer()));
	oop_function_argument_1_function_arg_name_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_name.Pointer(), oop_function_arg_name.Pointer()));
	oop_function_argument_1_function_arg_type_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_type.Pointer(), oop_function_arg_type.Pointer()));

	oop_variable_declaration_0_VARNAME_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->VARNAME.Pointer(), oop_variable_name.Pointer()));
	oop_variable_declaration_0_type_member.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->type.Pointer(), oop_variable_type.Pointer()));

	oop_class_name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Class,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));

	oop_function_name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Function,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_function_type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Function,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	oop_function_arg_name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::FunctionArguments,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_function_arg_type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::FunctionArguments,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	oop_variable_name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_variable_type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	// Add objects
	AddObject(oop_function_declaration_encapsulation);
	AddObject(oop_class_declaration_encapsulation);
	AddObject(oop_class_name);
	AddObject(oop_function_name);
	AddObject(oop_class_declaration_1_class_name_member);
	AddObject(oop_function_declaration_0_function_name_member);
	AddObject(oop_function_declaration_0_returntype_member);
	AddObject(function_declaration_0_oop_link);
	AddObject(class_declaration_1_oop_link);
	AddObject(oop_class_content);
	AddObject(oop_function_content);
	AddObject(oop_function_arguments);
	AddObject(oop_function_type);

	AddObject(function_argument_declaration_0_oop_link);
	AddObject(function_argument_declaration_1_oop_link);
	AddObject(oop_function_arg_name);
	AddObject(oop_function_arg_type);
	AddObject(oop_function_argument_encapsulation);
	AddObject(oop_function_argument_0_function_arg_name_member);
	AddObject(oop_function_argument_0_function_arg_type_member);
	AddObject(oop_function_argument_1_function_arg_name_member);
	AddObject(oop_function_argument_1_function_arg_type_member);

	AddObject(variable_declaration_0_oop_link);
	AddObject(oop_variable_name);
	AddObject(oop_variable_type);
	AddObject(oop_variable_declaration_0_VARNAME_member);
	AddObject(oop_variable_declaration_0_type_member);
	AddObject(oop_variable_declaration_encapsulation);
}
