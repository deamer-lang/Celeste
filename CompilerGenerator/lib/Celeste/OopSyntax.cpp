#include "Celeste/OopSyntax.h"
#include "Celeste/Language.h"

Celeste::OopSyntax::OopSyntax(Celeste::Language* language)
			:	::deamer::language::generator::definition::property::user::OOPSyntax<
					Celeste::Language>(language)
{
}

void Celeste::OopSyntax::GenerateObjects()
{
	oop_encapsulation_Class__class_declaration.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->class_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Class));
oop_encapsulation_BaseTypes__base_type.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->base_type.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::BaseTypes));
oop_encapsulation_Function__function_declaration.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->function_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Function));
oop_encapsulation_FunctionArguments__function_argument.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->function_argument.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::FunctionArguments));
oop_encapsulation_Property__variable_declaration.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->variable_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Property));
oop_encapsulation_Property__variable_initialization.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->variable_initialization.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Property));
oop_encapsulation_Enum__enum_declaration.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->enum_declaration.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Enum));
oop_encapsulation_Any__enum_stmt.Set(
		::deamer::language::type::definition::object::main::OopEncapsulation(
			Language->enum_stmt.Pointer(),
			deamer::language::type::definition::object::main::OopSyntaxScope::Any));


	oop_link_0__class_declaration.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->class_declaration_CLASS_class_name_COLON_deamerreserved_arrow__base_type___class_block.Pointer(),
			{ oop_concept_link_class_declaration_0__class_declaration__Class_Name__class_name.Pointer()
 }));
oop_link_1__class_declaration.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->class_declaration_CLASS_class_name_class_block.Pointer(),
			{ oop_concept_link_class_declaration_1__class_declaration__Class_Name__class_name.Pointer()
 }));
oop_link_0__base_type.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->base_type_VARNAME.Pointer(),
			{ oop_concept_link_base_type_0__base_type__BaseTypes_Type__VARNAME.Pointer()
 }));
oop_link_0__function_declaration.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_SEMICOLON.Pointer(),
			{ oop_concept_link_function_declaration_0__function_declaration__Function_Name__function_name.Pointer()
, oop_concept_link_function_declaration_0__function_declaration__Function_Type__return_type.Pointer()
 }));
oop_link_0__function_argument.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->function_argument_function_arg_type_function_arg_name_EQ_expression.Pointer(),
			{ oop_concept_link_function_argument_0__function_argument__FunctionArguments_Name__function_arg_name.Pointer()
, oop_concept_link_function_argument_0__function_argument__FunctionArguments_Type__function_arg_type.Pointer()
 }));
oop_link_1__function_argument.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->function_argument_function_arg_type_function_arg_name.Pointer(),
			{ oop_concept_link_function_argument_1__function_argument__FunctionArguments_Name__function_arg_name.Pointer()
, oop_concept_link_function_argument_1__function_argument__FunctionArguments_Type__function_arg_type.Pointer()
 }));
oop_link_0__variable_declaration.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->variable_declaration_type_VARNAME_SEMICOLON.Pointer(),
			{ oop_concept_link_variable_declaration_0__variable_declaration__Property_Name__VARNAME.Pointer()
, oop_concept_link_variable_declaration_0__variable_declaration__Property_Type__type.Pointer()
 }));
oop_link_0__variable_initialization.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->variable_initialization_type_VARNAME_EQ_expression_SEMICOLON.Pointer(),
			{ oop_concept_link_variable_initialization_0__variable_initialization__Property_Name__VARNAME.Pointer()
, oop_concept_link_variable_initialization_0__variable_initialization__Property_Type__type.Pointer()
 }));
oop_link_0__enum_declaration.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->enum_declaration_ENUM_enum_name_enum_block.Pointer(),
			{ oop_concept_link_enum_declaration_0__enum_declaration__Enum_Name__enum_name.Pointer()
 }));
oop_link_0__enum_stmt.Set(
		::deamer::language::type::definition::object::main::OopLink(
			Language->enum_stmt_VARNAME.Pointer(),
			{ oop_concept_link_enum_stmt_0__enum_stmt__Enum_Member__VARNAME.Pointer()
 }));


	oop_concept_link_class_declaration_0__class_declaration__Class_Name__class_name.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->class_name.Pointer(), oop_concept_member__Class_Name.Pointer()));
oop_concept_link_class_declaration_1__class_declaration__Class_Name__class_name.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->class_name.Pointer(), oop_concept_member__Class_Name.Pointer()));
oop_concept_link_base_type_0__base_type__BaseTypes_Type__VARNAME.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->VARNAME.Pointer(), oop_concept_member__BaseTypes_Type.Pointer()));
oop_concept_link_function_declaration_0__function_declaration__Function_Name__function_name.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_name.Pointer(), oop_concept_member__Function_Name.Pointer()));
oop_concept_link_function_declaration_0__function_declaration__Function_Type__return_type.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->return_type.Pointer(), oop_concept_member__Function_Type.Pointer()));
oop_concept_link_function_argument_0__function_argument__FunctionArguments_Name__function_arg_name.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_name.Pointer(), oop_concept_member__FunctionArguments_Name.Pointer()));
oop_concept_link_function_argument_0__function_argument__FunctionArguments_Type__function_arg_type.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_type.Pointer(), oop_concept_member__FunctionArguments_Type.Pointer()));
oop_concept_link_function_argument_1__function_argument__FunctionArguments_Name__function_arg_name.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_name.Pointer(), oop_concept_member__FunctionArguments_Name.Pointer()));
oop_concept_link_function_argument_1__function_argument__FunctionArguments_Type__function_arg_type.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->function_arg_type.Pointer(), oop_concept_member__FunctionArguments_Type.Pointer()));
oop_concept_link_variable_declaration_0__variable_declaration__Property_Name__VARNAME.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->VARNAME.Pointer(), oop_concept_member__Property_Name.Pointer()));
oop_concept_link_variable_declaration_0__variable_declaration__Property_Type__type.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->type.Pointer(), oop_concept_member__Property_Type.Pointer()));
oop_concept_link_variable_initialization_0__variable_initialization__Property_Name__VARNAME.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->VARNAME.Pointer(), oop_concept_member__Property_Name.Pointer()));
oop_concept_link_variable_initialization_0__variable_initialization__Property_Type__type.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->type.Pointer(), oop_concept_member__Property_Type.Pointer()));
oop_concept_link_enum_declaration_0__enum_declaration__Enum_Name__enum_name.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->enum_name.Pointer(), oop_concept_member__Enum_Name.Pointer()));
oop_concept_link_enum_stmt_0__enum_stmt__Enum_Member__VARNAME.Set(
		::deamer::language::type::definition::object::main::OopConceptLink(
			Language->VARNAME.Pointer(), oop_concept_member__Enum_Member.Pointer()));


	oop_concept_member__Class_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Class,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Struct_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Struct,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Interface_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Interface,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Enum_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Enum,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Enum_Member.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Enum,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Member));

	oop_concept_member__BaseTypes_Type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::BaseTypes,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	oop_concept_member__Function_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Function,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Function_Type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Function,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	oop_concept_member__FunctionArguments_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::FunctionArguments,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__FunctionArguments_Type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::FunctionArguments,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	oop_concept_member__Property_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Property_Type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));

	oop_concept_member__Any_Name.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Name));
	oop_concept_member__Any_Type.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Type));
	oop_concept_member__Any_Member.Set(::deamer::language::type::definition::object::main::OopConceptMember(
		deamer::language::type::definition::object::main::OopSyntaxScope::Property,
		::deamer::language::type::definition::object::main::OopConceptMemberType::Member));
	
	// Unknown References
	

	// Add Oop Concept Members
	AddObject(oop_concept_member__Class_Name);
	AddObject(oop_concept_member__Struct_Name);
	AddObject(oop_concept_member__Interface_Name);
	AddObject(oop_concept_member__Enum_Name);
	AddObject(oop_concept_member__Enum_Member);
	AddObject(oop_concept_member__BaseTypes_Type);
	AddObject(oop_concept_member__Function_Name);
	AddObject(oop_concept_member__Function_Type);
	AddObject(oop_concept_member__FunctionArguments_Name);
	AddObject(oop_concept_member__FunctionArguments_Type);
	AddObject(oop_concept_member__Property_Name);
	AddObject(oop_concept_member__Property_Type);
	AddObject(oop_concept_member__Any_Name);
	AddObject(oop_concept_member__Any_Type);
	AddObject(oop_concept_member__Any_Member);

	// Add Oop Concept Links
	AddObject(oop_concept_link_class_declaration_0__class_declaration__Class_Name__class_name);
AddObject(oop_concept_link_class_declaration_1__class_declaration__Class_Name__class_name);
AddObject(oop_concept_link_base_type_0__base_type__BaseTypes_Type__VARNAME);
AddObject(oop_concept_link_function_declaration_0__function_declaration__Function_Name__function_name);
AddObject(oop_concept_link_function_declaration_0__function_declaration__Function_Type__return_type);
AddObject(oop_concept_link_function_argument_0__function_argument__FunctionArguments_Name__function_arg_name);
AddObject(oop_concept_link_function_argument_0__function_argument__FunctionArguments_Type__function_arg_type);
AddObject(oop_concept_link_function_argument_1__function_argument__FunctionArguments_Name__function_arg_name);
AddObject(oop_concept_link_function_argument_1__function_argument__FunctionArguments_Type__function_arg_type);
AddObject(oop_concept_link_variable_declaration_0__variable_declaration__Property_Name__VARNAME);
AddObject(oop_concept_link_variable_declaration_0__variable_declaration__Property_Type__type);
AddObject(oop_concept_link_variable_initialization_0__variable_initialization__Property_Name__VARNAME);
AddObject(oop_concept_link_variable_initialization_0__variable_initialization__Property_Type__type);
AddObject(oop_concept_link_enum_declaration_0__enum_declaration__Enum_Name__enum_name);
AddObject(oop_concept_link_enum_stmt_0__enum_stmt__Enum_Member__VARNAME);

	
	// Add Oop Links
	AddObject(oop_link_0__class_declaration);
AddObject(oop_link_1__class_declaration);
AddObject(oop_link_0__base_type);
AddObject(oop_link_0__function_declaration);
AddObject(oop_link_0__function_argument);
AddObject(oop_link_1__function_argument);
AddObject(oop_link_0__variable_declaration);
AddObject(oop_link_0__variable_initialization);
AddObject(oop_link_0__enum_declaration);
AddObject(oop_link_0__enum_stmt);


	// Add Oop Encapsulations
	AddObject(oop_encapsulation_Class__class_declaration);
AddObject(oop_encapsulation_BaseTypes__base_type);
AddObject(oop_encapsulation_Function__function_declaration);
AddObject(oop_encapsulation_FunctionArguments__function_argument);
AddObject(oop_encapsulation_Property__variable_declaration);
AddObject(oop_encapsulation_Property__variable_initialization);
AddObject(oop_encapsulation_Enum__enum_declaration);
AddObject(oop_encapsulation_Any__enum_stmt);


	// Unknown References
	
}