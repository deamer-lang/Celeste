#ifndef CELESTE_IDENTITY_H
#define CELESTE_IDENTITY_H
#include "Deamer/Language/Generator/Definition/Property/User/Special/Identity.h"
namespace Celeste
{
	class Language;
	/*!	\class Identity
	 *
	 *	\brief This contains the identity LPD of the language Celeste
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Identity : public ::deamer::language::generator::definition::property::user::Identity<
								::Celeste::Language>
	{
	public:
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Name> name;
	public:
		Identity(Celeste::Language* language)
			:	::deamer::language::generator::definition::property::user::Identity<
					::Celeste::Language>(language)
		{
		}
		void GenerateObjects() override
		{
			name.Set(::deamer::language::type::definition::object::main::Name("Celeste"));
			
			AddObject(name);
			// Place higher level operations here.
			// ReplaceObject(..., ...)
			// DeleteObject(..., ...)
			
		}
	};
}
#endif // CELESTE_IDENTITY_H
