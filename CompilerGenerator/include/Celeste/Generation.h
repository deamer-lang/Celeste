/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */
 
#ifndef CELESTE_GENERATION_H
#define CELESTE_GENERATION_H

#include "Deamer/Language/Generator/Definition/Property/User/Special/Generation.h"

namespace Celeste
{
	class Language;

	/*!	\class Generation
	 *
	 *	\brief This contains the generation LPD of the language Celeste
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Generation : public ::deamer::language::generator::definition::property::user::Generation<
								::Celeste::Language>
	{
	public:
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Generate> generate_Flex;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Generate> generate_Bison;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Generate> generate_DeamerAST;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Generate> generate_DeamerDocumentation;

		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Integrate> integrate_FlexAndBison;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Integrate> integrate_FlexAndDeamerAST;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Integrate> integrate_BisonAndDeamerAST;

		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::GenerateArgument> argument_Bison_activate_glr;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::GenerateArgument> argument_Bison_activate_glr_debug;

		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::OSTarget> os_windows;
	
	public:
		Generation(Celeste::Language* language)
			:	::deamer::language::generator::definition::property::user::Generation<
					::Celeste::Language>(language)
		{
		}

		void GenerateObjects() override
		{
			generate_Flex.Set(::deamer::language::type::definition::object::main::Generate(::deamer::tool::type::Tool::Flex));
generate_Bison.Set(::deamer::language::type::definition::object::main::Generate(::deamer::tool::type::Tool::Bison));
generate_DeamerAST.Set(::deamer::language::type::definition::object::main::Generate(::deamer::tool::type::Tool::DeamerAST));
generate_DeamerDocumentation.Set(::deamer::language::type::definition::object::main::Generate(::deamer::tool::type::Tool::DeamerDocumentation));

			integrate_FlexAndBison.Set(::deamer::language::type::definition::object::main::Integrate(::deamer::tool::type::Tool::Flex, ::deamer::tool::type::Tool::Bison));
integrate_FlexAndDeamerAST.Set(::deamer::language::type::definition::object::main::Integrate(::deamer::tool::type::Tool::Flex, ::deamer::tool::type::Tool::DeamerAST));
integrate_BisonAndDeamerAST.Set(::deamer::language::type::definition::object::main::Integrate(::deamer::tool::type::Tool::Bison, ::deamer::tool::type::Tool::DeamerAST));

			argument_Bison_activate_glr.Set(::deamer::language::type::definition::object::main::GenerateArgument(::deamer::tool::type::Tool::Bison, "activate-glr"));
argument_Bison_activate_glr_debug.Set(::deamer::language::type::definition::object::main::GenerateArgument(::deamer::tool::type::Tool::Bison, "activate-glr-debug"));

			os_windows.Set(::deamer::language::type::definition::object::main::OSTarget(::deamer::file::tool::OSType::os_windows));

			// Add object calls
			// AddObject(...)
			AddObject(generate_Flex);
AddObject(generate_Bison);
AddObject(generate_DeamerAST);
AddObject(generate_DeamerDocumentation);

			AddObject(integrate_FlexAndBison);
AddObject(integrate_FlexAndDeamerAST);
AddObject(integrate_BisonAndDeamerAST);

			AddObject(argument_Bison_activate_glr);
AddObject(argument_Bison_activate_glr_debug);

			AddObject(os_windows);

			// Place higher level operations here.
			// ReplaceObject(..., ...)
			// DeleteObject(..., ...)
			
		}
	};
}

#endif // CELESTE_GENERATION_H
