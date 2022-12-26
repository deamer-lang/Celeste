/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef CELESTE_COMMENT_H
#define CELESTE_COMMENT_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/Comment.h"
#include "Deamer/Language/Type/Definition/Object/Special/Uninitialized.h"

namespace Celeste
{
	class Language;

	class Comment : public ::deamer::language::generator::definition::property::user::Comment<
								::Celeste::Language>
	{
	public:
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::CommentValue> comment_SINGLE_COMMENT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::CommentValue> comment_MULTI_COMMENT;


	private:
		

	public:
		Comment(Celeste::Language* language);
		
		void GenerateObjects() override;
	};
}

#endif // CELESTE_COMMENT_H
