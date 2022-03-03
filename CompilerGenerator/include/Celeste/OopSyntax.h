#ifndef CELESTE_OOPSYNTAX_H
#define CELESTE_OOPSYNTAX_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/OOPSyntax.h"
#include "Deamer/Language/Type/Definition/Object/Special/Uninitialized.h"

namespace Celeste
{
	class Language;

	/*!	\class OopSyntax
	 *
	 *	\brief This contains the OopSyntax LPD of the language Celeste
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class OopSyntax : public ::deamer::language::generator::definition::property::user::OOPSyntax<
						  ::Celeste::Language>
	{
	public:
		// Oop Concepts
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_class_name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_class_content;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_return_type;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_arguments;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_content;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_type;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_arg_name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_function_arg_type;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_variable_name;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptMember>
			oop_variable_type;

		// Oop encapsulations
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_class_declaration_encapsulation;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_function_declaration_encapsulation;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_function_argument_encapsulation;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopEncapsulation>
			oop_variable_declaration_encapsulation;

		// OopLinks
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			function_declaration_0_oop_link;
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			class_declaration_1_oop_link;
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			function_argument_declaration_0_oop_link;
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			function_argument_declaration_1_oop_link;
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OopLink>
			variable_declaration_0_oop_link;

		// OopConceptLinks
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_function_declaration_0_function_name_member;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_function_declaration_0_returntype_member;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_class_declaration_1_class_name_member;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_function_argument_0_function_arg_type_member;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_function_argument_0_function_arg_name_member;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_function_argument_1_function_arg_type_member;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_function_argument_1_function_arg_name_member;

		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_variable_declaration_0_type_member;
		::deamer::type::SafeReserve<
			::deamer::language::type::definition::object::main::OopConceptLink>
			oop_variable_declaration_0_VARNAME_member;

	public:
		OopSyntax(Celeste::Language* language);

		void GenerateObjects() override;
	};
}

#endif // CELESTE_OOPSYNTAX_H
