#include "Celeste/Comment.h"
#include "Celeste/Language.h"

Celeste::Comment::Comment(Celeste::Language* language)
			:	::deamer::language::generator::definition::property::user::Comment<
					Celeste::Language>(language)
{
}

void Celeste::Comment::GenerateObjects()
{
	// Unknown References
	

	// Implement Comments
	comment_SINGLE_COMMENT.Set(::deamer::language::type::definition::object::main::CommentValue(
			Language->SINGLE_COMMENT.Pointer(),
			"/",
			"",
			""
		));
comment_MULTI_COMMENT.Set(::deamer::language::type::definition::object::main::CommentValue(
			Language->MULTI_COMMENT.Pointer(),
			"/*",
			"",
			"*/"
		));


	// Unknown References
	

	// Add Comment
	AddObject(comment_SINGLE_COMMENT);
AddObject(comment_MULTI_COMMENT);

}