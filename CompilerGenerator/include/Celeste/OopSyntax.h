/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef CELESTE_OOPSYNTAX_H
#define CELESTE_OOPSYNTAX_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/OOPSyntax.h"
#include "Deamer/Language/Type/Definition/Object/Special/Uninitialized.h"

namespace Celeste
{
	class Language;

	class OopSyntax : public ::deamer::language::generator::definition::property::user::OOPSyntax<
								::Celeste::Language>
	{
	public:
		// Oop Concept Member Declarations
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Class_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Struct_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Interface_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Enum_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Enum_Member;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__BaseTypes_Type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Function_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Function_Type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__FunctionArguments_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__FunctionArguments_Type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Property_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Property_Type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Any_Name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Any_Type;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_concept_member__Any_Member;
	
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__class_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_1__class_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__base_type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__function_argument;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_1__function_argument;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__variable_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__variable_initialization;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__enum_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			oop_link_0__enum_stmt;


		
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_class_declaration_0__class_declaration__Class_Name__class_name;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_class_declaration_1__class_declaration__Class_Name__class_name;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_base_type_0__base_type__BaseTypes_Type__VARNAME;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_function_declaration_0__function_declaration__Function_Name__function_name;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_function_declaration_0__function_declaration__Function_Type__return_type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_function_argument_0__function_argument__FunctionArguments_Name__function_arg_name;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_function_argument_0__function_argument__FunctionArguments_Type__function_arg_type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_function_argument_1__function_argument__FunctionArguments_Name__function_arg_name;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_function_argument_1__function_argument__FunctionArguments_Type__function_arg_type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_variable_declaration_0__variable_declaration__Property_Name__VARNAME;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_variable_declaration_0__variable_declaration__Property_Type__type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_variable_initialization_0__variable_initialization__Property_Name__VARNAME;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_variable_initialization_0__variable_initialization__Property_Type__type;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_enum_declaration_0__enum_declaration__Enum_Name__enum_name;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_concept_link_enum_stmt_0__enum_stmt__Enum_Member__VARNAME;

		
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_Class__class_declaration;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_BaseTypes__base_type;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_Function__function_declaration;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_FunctionArguments__function_argument;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_Property__variable_declaration;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_Property__variable_initialization;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_Enum__enum_declaration;
::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_encapsulation_Any__enum_stmt;


	private:
		

	public:
		OopSyntax(Celeste::Language* language);
		
		void GenerateObjects() override;
	};
}

#endif // CELESTE_OOPSYNTAX_H
