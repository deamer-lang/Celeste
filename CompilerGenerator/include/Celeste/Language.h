#ifndef CELESTE_LANGUAGE_H
#define CELESTE_LANGUAGE_H
#include "Deamer/Language/Generator/Definition/Language.h"
#include "Celeste/Threat.h"
#include "Celeste/Identity.h"
#include "Celeste/Generation.h"
#include "Celeste/Grammar.h"
#include "Celeste/Lexicon.h"

namespace Celeste
{
	/*!	\class Language
	 *
	 *	\brief This contains the Language Definition of the language Celeste
	 *
	 *	\details The LD initializes all base LPD's with its own pointer (this).
	 *	This allows the LPD's to access other LPD's via the language object.
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Language : public ::deamer::language::generator::definition::Language<
						 ::Celeste::Language , ::Celeste::Threat
, ::Celeste::Identity
, ::Celeste::Generation
, ::Celeste::Grammar
, ::Celeste::Lexicon
>
						 , public ::Celeste::Threat
, public ::Celeste::Identity
, public ::Celeste::Generation
, public ::Celeste::Grammar
, public ::Celeste::Lexicon

	{
	public:
		Language() : ::deamer::language::generator::definition::Language<
						 ::Celeste::Language , ::Celeste::Threat
, ::Celeste::Identity
, ::Celeste::Generation
, ::Celeste::Grammar
, ::Celeste::Lexicon
>()
		, ::Celeste::Threat::Threat(this)
, ::Celeste::Identity::Identity(this)
, ::Celeste::Generation::Generation(this)
, ::Celeste::Grammar::Grammar(this)
, ::Celeste::Lexicon::Lexicon(this)

		{
		}
		~Language() override = default;
	};
}
#endif // CELESTE_LANGUAGE_H
