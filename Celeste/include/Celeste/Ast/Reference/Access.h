#ifndef CELESTE_AST_REFERENCE_ACCESSTEMPLATEBASE_H
#define CELESTE_AST_REFERENCE_ACCESSTEMPLATEBASE_H

#include "Celeste/Ast/Relation/NodeEnumToType.h"
#include "Celeste/Ast/Relation/NodeTypeToEnum.h"
#include "Celeste/Ast/Relation/NodeIsInlined.h"

#include "Celeste/Ast/Enum/Type.h"
#include "Celeste/Ast/Node/program.h"
#include "Celeste/Ast/Node/deamerreserved_star__stmt__.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/meta_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_star__expression__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.h"
#include "Celeste/Ast/Node/deamerreserved_star__meta_declaration__.h"
#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ast/Node/class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__base_type__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__base_type__.h"
#include "Celeste/Ast/Node/class_name.h"
#include "Celeste/Ast/Node/base_type.h"
#include "Celeste/Ast/Node/class_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/enum_name.h"
#include "Celeste/Ast/Node/enum_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__deamerreserved_optional__function_argument____.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__function_argument__.h"
#include "Celeste/Ast/Node/function_implementation.h"
#include "Celeste/Ast/Node/function_argument.h"
#include "Celeste/Ast/Node/function_arg_type.h"
#include "Celeste/Ast/Node/function_arg_name.h"
#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ast/Node/function_name.h"
#include "Celeste/Ast/Node/return_type.h"
#include "Celeste/Ast/Node/function_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__function_stmt__.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include "Celeste/Ast/Node/enum_stmt.h"
#include "Celeste/Ast/Node/function_stmt.h"
#include "Celeste/Ast/Node/logical_stmt.h"
#include "Celeste/Ast/Node/condtional_declaration.h"
#include "Celeste/Ast/Node/conditional_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__condtional_stmt__.h"
#include "Celeste/Ast/Node/condtional_stmt.h"
#include "Celeste/Ast/Node/variable_declaration.h"
#include "Celeste/Ast/Node/variable_initialization.h"
#include "Celeste/Ast/Node/CLASS.h"
#include "Celeste/Ast/Node/ENUM.h"
#include "Celeste/Ast/Node/FUNCTION.h"
#include "Celeste/Ast/Node/IF.h"
#include "Celeste/Ast/Node/ELSE.h"
#include "Celeste/Ast/Node/LEFT_BRACKET.h"
#include "Celeste/Ast/Node/RIGHT_BRACKET.h"
#include "Celeste/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "Celeste/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "Celeste/Ast/Node/LEFT_PARANTHESIS.h"
#include "Celeste/Ast/Node/RIGHT_PARANTHESIS.h"
#include "Celeste/Ast/Node/COLON.h"
#include "Celeste/Ast/Node/SEMICOLON.h"
#include "Celeste/Ast/Node/COMMA.h"
#include "Celeste/Ast/Node/DOT.h"
#include "Celeste/Ast/Node/EQEQ.h"
#include "Celeste/Ast/Node/EQ.h"
#include "Celeste/Ast/Node/NOTEQ.h"
#include "Celeste/Ast/Node/NOT.h"
#include "Celeste/Ast/Node/PLUS.h"
#include "Celeste/Ast/Node/MINUS.h"
#include "Celeste/Ast/Node/DIVIDE.h"
#include "Celeste/Ast/Node/MULTIPLY.h"
#include "Celeste/Ast/Node/USERDEFINED_OPERATOR.h"
#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/NUMBER.h"
#include "Celeste/Ast/Node/DECIMAL.h"
#include "Celeste/Ast/Node/TEXT.h"
#include "Celeste/Ast/Node/ESCAPE_CHARS.h"


#include <vector>
#include <utility>

namespace Celeste { namespace ast { namespace reference { 

	struct AccessBase
	{	
	public:
		AccessBase() = default;

	protected:
		template<::Celeste::ast::Type T>
		void Get(std::vector<const ::Celeste::ast::relation::NodeEnumToType_t<T>*>& foundNodes, const ::deamer::external::cpp::ast::Node* currentNode)
		{
			for(const auto* const node : currentNode->GetNodes())
			{
				if (node->GetType() == static_cast<::std::size_t>(T))
				{
					foundNodes.push_back(static_cast<const  ::Celeste::ast::relation::NodeEnumToType_t<T>*>(node));
				}
				else if (::Celeste::ast::relation::NodeIsInlined(static_cast<::Celeste::ast::Type>(node->GetType())))
				{
					Get<T>(foundNodes, node);
				}
			}
		}

		template<::Celeste::ast::Type T, typename Q>
		inline std::vector<const ::Celeste::ast::relation::NodeEnumToType_t<T>*> Get(std::vector<const Q*>& currentNodes)
		{
			std::vector<const ::Celeste::ast::relation::NodeEnumToType_t<T>*> foundNodes;

			for (const auto* const currentNode : currentNodes)
			{
				AccessBase::Get<T>(foundNodes, currentNode);
			}

			return foundNodes;
		}
	};

	/*!	\class AccessTemplateBase
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 *
	 *	\details This class contains the type dependent implementation of Access<T>.
	 *	Refrain from using this class, as there is no backwards compatibility
	 *	guarantee of this implementation class,
	 *	Use Access<T> instead, this is backwards compatible and offers different benefits.
	 *
	 *	\see Access
	 */
	template<typename T>
	struct AccessTemplateBase : public AccessBase
	{
		AccessTemplateBase() = delete;
		~AccessTemplateBase() = delete;
	};

	/*! \class Access
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 *
	 *	\details Type dispatcher for logic.
	 *
	 *	\see AccessTemplateBase
	 */
	template<typename T>
	struct Access : public AccessTemplateBase<T>
	{
		Access(std::vector<const T*> ts_) : AccessTemplateBase<T>(ts_)
		{
		}

		Access(const T& t) : AccessTemplateBase<T>(t)
		{
		}

		Access(const T* t) : AccessTemplateBase<T>(t)
		{
		}

		Access(const AccessTemplateBase<T>& rhs) : AccessTemplateBase<T>(rhs)
		{
		}

		Access() = default;
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::program>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::meta_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::expression>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::base_type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_implementation>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_arg_type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_arg_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_name>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::return_type>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::logical_stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condtional_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_block>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condtional_stmt>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_declaration>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_initialization>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CLASS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ENUM>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FUNCTION>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IF>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ELSE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COLON>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::SEMICOLON>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COMMA>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DOT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOTEQ>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUS>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DIVIDE>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MULTIPLY>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::VARNAME>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NUMBER>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DECIMAL>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::TEXT>;
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>;


	
	template<>
	struct AccessTemplateBase<::Celeste::ast::node::program> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::program*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::program*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::program& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::program* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::program>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::program*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> deamerreserved_star__stmt__();
AccessTemplateBase<::Celeste::ast::node::stmt> stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__stmt__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__stmt__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__stmt__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> deamerreserved_star__stmt__();
AccessTemplateBase<::Celeste::ast::node::stmt> stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::meta_declaration> meta_declaration();
AccessTemplateBase<::Celeste::ast::node::class_declaration> class_declaration();
AccessTemplateBase<::Celeste::ast::node::enum_declaration> enum_declaration();
AccessTemplateBase<::Celeste::ast::node::function_declaration> function_declaration();
AccessTemplateBase<::Celeste::ast::node::function_implementation> function_implementation();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::meta_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::meta_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::meta_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::meta_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::meta_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::meta_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::meta_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::meta_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::meta_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::meta_declaration> meta_declaration();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__> deamerreserved_star__expression__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__> deamerreserved_arrow__RIGHT_SQUARE_BRACKET__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> deamerreserved_star__meta_declaration__();
AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::class_declaration> class_declaration();
AccessTemplateBase<::Celeste::ast::node::enum_declaration> enum_declaration();
AccessTemplateBase<::Celeste::ast::node::function_declaration> function_declaration();
AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::meta_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__expression__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__expression__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__expression__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__expression__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__expression__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__expression__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__> deamerreserved_star__expression__();
AccessTemplateBase<::Celeste::ast::node::expression> expression();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::meta_declaration> meta_declaration();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> deamerreserved_star__meta_declaration__();
AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__meta_declaration__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__meta_declaration__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__meta_declaration__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__meta_declaration__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__meta_declaration__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__meta_declaration__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::meta_declaration> meta_declaration();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> deamerreserved_star__meta_declaration__();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::expression> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::expression*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::expression*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::expression& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::expression* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::expression>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::expression>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::expression*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::expression*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::PLUS> PLUS();
AccessTemplateBase<::Celeste::ast::node::MINUS> MINUS();
AccessTemplateBase<::Celeste::ast::node::DIVIDE> DIVIDE();
AccessTemplateBase<::Celeste::ast::node::MULTIPLY> MULTIPLY();
AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR> USERDEFINED_OPERATOR();
AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();
AccessTemplateBase<::Celeste::ast::node::NUMBER> NUMBER();
AccessTemplateBase<::Celeste::ast::node::DECIMAL> DECIMAL();
AccessTemplateBase<::Celeste::ast::node::TEXT> TEXT();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::expression>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__> deamerreserved_arrow__base_type__();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> deamerreserved_star__COMMA__base_type__();
AccessTemplateBase<::Celeste::ast::node::class_name> class_name();
AccessTemplateBase<::Celeste::ast::node::base_type> base_type();
AccessTemplateBase<::Celeste::ast::node::class_block> class_block();
AccessTemplateBase<::Celeste::ast::node::CLASS> CLASS();
AccessTemplateBase<::Celeste::ast::node::COLON> COLON();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__base_type__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__base_type__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__base_type__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__base_type__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__base_type__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__base_type__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> deamerreserved_star__COMMA__base_type__();
AccessTemplateBase<::Celeste::ast::node::base_type> base_type();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__base_type__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__base_type__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__base_type__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__base_type__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__base_type__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__base_type__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> deamerreserved_star__COMMA__base_type__();
AccessTemplateBase<::Celeste::ast::node::base_type> base_type();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::base_type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::base_type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::base_type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::base_type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::base_type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::base_type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::base_type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::base_type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::base_type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::base_type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> deamerreserved_star__class_stmt__();
AccessTemplateBase<::Celeste::ast::node::class_stmt> class_stmt();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__class_stmt__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__class_stmt__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__class_stmt__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> deamerreserved_star__class_stmt__();
AccessTemplateBase<::Celeste::ast::node::class_stmt> class_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enum_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enum_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enum_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enum_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enum_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_name> enum_name();
AccessTemplateBase<::Celeste::ast::node::enum_block> enum_block();
AccessTemplateBase<::Celeste::ast::node::ENUM> ENUM();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enum_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enum_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enum_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enum_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enum_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enum_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enum_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enum_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enum_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enum_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enum_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enum_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____();
AccessTemplateBase<::Celeste::ast::node::enum_stmt> enum_stmt();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enum_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____();
AccessTemplateBase<::Celeste::ast::node::enum_stmt> enum_stmt();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____> deamerreserved_arrow__deamerreserved_optional__function_argument____();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::return_type> return_type();
AccessTemplateBase<::Celeste::ast::node::FUNCTION> FUNCTION();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::SEMICOLON> SEMICOLON();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_implementation> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_implementation*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_implementation*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_implementation& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_implementation* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_implementation>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_implementation>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_implementation*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_implementation*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____> deamerreserved_arrow__deamerreserved_optional__function_argument____();
AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__();
AccessTemplateBase<::Celeste::ast::node::function_argument> function_argument();
AccessTemplateBase<::Celeste::ast::node::function_name> function_name();
AccessTemplateBase<::Celeste::ast::node::return_type> return_type();
AccessTemplateBase<::Celeste::ast::node::function_block> function_block();
AccessTemplateBase<::Celeste::ast::node::FUNCTION> FUNCTION();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::COMMA> COMMA();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_implementation>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_argument> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_argument*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_argument*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_argument* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_argument>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_argument>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_argument*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_argument*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::function_arg_type> function_arg_type();
AccessTemplateBase<::Celeste::ast::node::function_arg_name> function_arg_name();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_argument>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_arg_type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_arg_type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_arg_type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_arg_type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_arg_type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_arg_type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_arg_type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_arg_type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_arg_type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_arg_type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_arg_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_arg_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_arg_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_arg_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_arg_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_arg_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_arg_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_arg_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_arg_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_arg_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_name> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_name*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_name*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_name& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_name* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_name>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_name>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_name*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_name*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_name>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::return_type> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::return_type*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::return_type*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::return_type& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::return_type* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::return_type>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::return_type>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::return_type*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::return_type*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::return_type>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__> deamerreserved_star__function_stmt__();
AccessTemplateBase<::Celeste::ast::node::function_stmt> function_stmt();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__function_stmt__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__function_stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__function_stmt__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__function_stmt__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__function_stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__function_stmt__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__> deamerreserved_star__function_stmt__();
AccessTemplateBase<::Celeste::ast::node::function_stmt> function_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::class_stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::class_stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::class_stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::class_stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::class_stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::class_stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::class_stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::class_stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::function_declaration> function_declaration();
AccessTemplateBase<::Celeste::ast::node::function_implementation> function_implementation();
AccessTemplateBase<::Celeste::ast::node::variable_declaration> variable_declaration();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::class_stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::enum_stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::enum_stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::enum_stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::enum_stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::enum_stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::enum_stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::enum_stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::enum_stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::enum_stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::function_stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::function_stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::function_stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::function_stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::function_stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::function_stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::function_stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::function_stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::logical_stmt> logical_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::function_stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::logical_stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::logical_stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::logical_stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::logical_stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::logical_stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::logical_stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::logical_stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::logical_stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::logical_stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::condtional_declaration> condtional_declaration();
AccessTemplateBase<::Celeste::ast::node::variable_declaration> variable_declaration();
AccessTemplateBase<::Celeste::ast::node::variable_initialization> variable_initialization();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::logical_stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condtional_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::condtional_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::condtional_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condtional_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condtional_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::condtional_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::condtional_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::condtional_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::condtional_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::conditional_block> conditional_block();
AccessTemplateBase<::Celeste::ast::node::IF> IF();
AccessTemplateBase<::Celeste::ast::node::ELSE> ELSE();
AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> LEFT_PARANTHESIS();
AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> RIGHT_PARANTHESIS();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::condtional_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::conditional_block> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::conditional_block*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::conditional_block*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_block& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::conditional_block* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::conditional_block>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::conditional_block>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::conditional_block*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::conditional_block*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__> deamerreserved_star__condtional_stmt__();
AccessTemplateBase<::Celeste::ast::node::condtional_stmt> condtional_stmt();
AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> LEFT_BRACKET();
AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::conditional_block>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::deamerreserved_star__condtional_stmt__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__> deamerreserved_star__condtional_stmt__();
AccessTemplateBase<::Celeste::ast::node::condtional_stmt> condtional_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::condtional_stmt> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::condtional_stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::condtional_stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condtional_stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::condtional_stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::condtional_stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::condtional_stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::condtional_stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::condtional_stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::logical_stmt> logical_stmt();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::condtional_stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::variable_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::variable_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::variable_declaration>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::variable_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::variable_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::variable_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::type> type();
AccessTemplateBase<::Celeste::ast::node::SEMICOLON> SEMICOLON();
AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::variable_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::variable_initialization> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::variable_initialization*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::variable_initialization*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_initialization& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::variable_initialization* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::variable_initialization>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::variable_initialization>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::variable_initialization*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::variable_initialization*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::Celeste::ast::node::expression> expression();
AccessTemplateBase<::Celeste::ast::node::type> type();
AccessTemplateBase<::Celeste::ast::node::SEMICOLON> SEMICOLON();
AccessTemplateBase<::Celeste::ast::node::EQ> EQ();
AccessTemplateBase<::Celeste::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::variable_initialization>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::CLASS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::CLASS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::CLASS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CLASS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::CLASS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::CLASS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::CLASS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::CLASS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::CLASS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::CLASS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ENUM> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ENUM*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ENUM*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ENUM& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ENUM* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ENUM>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ENUM>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ENUM*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ENUM*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ENUM>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::FUNCTION> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::FUNCTION*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::FUNCTION*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FUNCTION& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::FUNCTION* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::FUNCTION>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::FUNCTION>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::FUNCTION*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::FUNCTION*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::FUNCTION>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::IF> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::IF*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::IF*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IF& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::IF* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::IF>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::IF>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::IF*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::IF*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::IF>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ELSE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ELSE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ELSE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ELSE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ELSE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ELSE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ELSE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ELSE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ELSE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ELSE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LEFT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RIGHT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LEFT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RIGHT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_PARANTHESIS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::LEFT_PARANTHESIS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::LEFT_PARANTHESIS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_PARANTHESIS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::RIGHT_PARANTHESIS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::RIGHT_PARANTHESIS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COLON> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::COLON*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::COLON*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COLON& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COLON* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::COLON>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::COLON>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::COLON*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::COLON*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::COLON>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::SEMICOLON> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::SEMICOLON*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::SEMICOLON*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::SEMICOLON& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::SEMICOLON* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::SEMICOLON>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::SEMICOLON>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::SEMICOLON*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::SEMICOLON*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::SEMICOLON>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::COMMA> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::COMMA*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::COMMA*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COMMA& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::COMMA* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::COMMA>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::COMMA>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::COMMA*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::COMMA*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::COMMA>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DOT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DOT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DOT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DOT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DOT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DOT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::EQEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::EQEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::EQEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::EQEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::EQEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::EQEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::EQEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::EQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::EQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::EQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::EQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::EQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::EQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::EQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::EQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::EQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOTEQ> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NOTEQ*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NOTEQ*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOTEQ& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOTEQ* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NOTEQ>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NOTEQ>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NOTEQ*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NOTEQ*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NOTEQ>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NOT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NOT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NOT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NOT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NOT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::PLUS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::PLUS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::PLUS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::PLUS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::PLUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::PLUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::PLUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::PLUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::PLUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MINUS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MINUS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MINUS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MINUS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MINUS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MINUS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MINUS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MINUS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MINUS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DIVIDE> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DIVIDE*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DIVIDE*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DIVIDE& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DIVIDE* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DIVIDE>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DIVIDE>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DIVIDE*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DIVIDE*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DIVIDE>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::MULTIPLY> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::MULTIPLY*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::MULTIPLY*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MULTIPLY& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::MULTIPLY* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::MULTIPLY>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::MULTIPLY>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::MULTIPLY*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::MULTIPLY*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::MULTIPLY>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::USERDEFINED_OPERATOR*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::USERDEFINED_OPERATOR*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::USERDEFINED_OPERATOR& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::USERDEFINED_OPERATOR* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::USERDEFINED_OPERATOR*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::USERDEFINED_OPERATOR*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::VARNAME> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::VARNAME*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::VARNAME*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::VARNAME& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::VARNAME* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::VARNAME>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::VARNAME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::VARNAME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::VARNAME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::VARNAME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::NUMBER> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::NUMBER*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::NUMBER*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NUMBER& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::NUMBER* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::NUMBER>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::NUMBER>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::NUMBER*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::NUMBER*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::NUMBER>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::DECIMAL> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::DECIMAL*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::DECIMAL*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DECIMAL& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::DECIMAL* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::DECIMAL>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::DECIMAL>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::DECIMAL*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::DECIMAL*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::DECIMAL>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::TEXT> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::TEXT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::TEXT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::TEXT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::TEXT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::TEXT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::TEXT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::TEXT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::TEXT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::TEXT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS> : public AccessBase
	{
	protected:
		std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ESCAPE_CHARS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::Celeste::ast::node::ESCAPE_CHARS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::Celeste::ast::node::ESCAPE_CHARS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::Celeste::ast::node::ESCAPE_CHARS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};


	
		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> AccessTemplateBase<::Celeste::ast::node::program>::deamerreserved_star__stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::stmt> AccessTemplateBase<::Celeste::ast::node::program>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::stmt>(Get<::Celeste::ast::Type::stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>::deamerreserved_star__stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__stmt__>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::stmt>(Get<::Celeste::ast::Type::stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::meta_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::meta_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::meta_declaration>(Get<::Celeste::ast::Type::meta_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::class_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_declaration>(Get<::Celeste::ast::Type::class_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::enum_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_declaration>(Get<::Celeste::ast::Type::enum_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_declaration> AccessTemplateBase<::Celeste::ast::node::stmt>::function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_declaration>(Get<::Celeste::ast::Type::function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_implementation> AccessTemplateBase<::Celeste::ast::node::stmt>::function_implementation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_implementation>(Get<::Celeste::ast::Type::function_implementation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::meta_declaration> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::meta_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::meta_declaration>(Get<::Celeste::ast::Type::meta_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::deamerreserved_star__expression__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>(Get<::Celeste::ast::Type::deamerreserved_star__expression__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>(Get<::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::deamerreserved_star__meta_declaration__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>(Get<::Celeste::ast::Type::deamerreserved_star__meta_declaration__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_declaration> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::class_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_declaration>(Get<::Celeste::ast::Type::class_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_declaration> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::enum_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_declaration>(Get<::Celeste::ast::Type::enum_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_declaration> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_declaration>(Get<::Celeste::ast::Type::function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::meta_declaration>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>::deamerreserved_star__expression__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>(Get<::Celeste::ast::Type::deamerreserved_star__expression__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__expression__>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::meta_declaration> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>::meta_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::meta_declaration>(Get<::Celeste::ast::Type::meta_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>::deamerreserved_star__meta_declaration__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>(Get<::Celeste::ast::Type::deamerreserved_star__meta_declaration__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>(Get<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::meta_declaration> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>::meta_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::meta_declaration>(Get<::Celeste::ast::Type::meta_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>::deamerreserved_star__meta_declaration__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__meta_declaration__>(Get<::Celeste::ast::Type::deamerreserved_star__meta_declaration__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::expression>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::PLUS> AccessTemplateBase<::Celeste::ast::node::expression>::PLUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::PLUS>(Get<::Celeste::ast::Type::PLUS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MINUS> AccessTemplateBase<::Celeste::ast::node::expression>::MINUS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MINUS>(Get<::Celeste::ast::Type::MINUS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DIVIDE> AccessTemplateBase<::Celeste::ast::node::expression>::DIVIDE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DIVIDE>(Get<::Celeste::ast::Type::DIVIDE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::MULTIPLY> AccessTemplateBase<::Celeste::ast::node::expression>::MULTIPLY()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::MULTIPLY>(Get<::Celeste::ast::Type::MULTIPLY>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR> AccessTemplateBase<::Celeste::ast::node::expression>::USERDEFINED_OPERATOR()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::USERDEFINED_OPERATOR>(Get<::Celeste::ast::Type::USERDEFINED_OPERATOR>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::expression>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::NUMBER> AccessTemplateBase<::Celeste::ast::node::expression>::NUMBER()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::NUMBER>(Get<::Celeste::ast::Type::NUMBER>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::DECIMAL> AccessTemplateBase<::Celeste::ast::node::expression>::DECIMAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::DECIMAL>(Get<::Celeste::ast::Type::DECIMAL>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::TEXT> AccessTemplateBase<::Celeste::ast::node::expression>::TEXT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::TEXT>(Get<::Celeste::ast::Type::TEXT>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__> AccessTemplateBase<::Celeste::ast::node::class_declaration>::deamerreserved_arrow__base_type__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>(Get<::Celeste::ast::Type::deamerreserved_arrow__base_type__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> AccessTemplateBase<::Celeste::ast::node::class_declaration>::deamerreserved_star__COMMA__base_type__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_name> AccessTemplateBase<::Celeste::ast::node::class_declaration>::class_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_name>(Get<::Celeste::ast::Type::class_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::base_type> AccessTemplateBase<::Celeste::ast::node::class_declaration>::base_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::base_type>(Get<::Celeste::ast::Type::base_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_block> AccessTemplateBase<::Celeste::ast::node::class_declaration>::class_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_block>(Get<::Celeste::ast::Type::class_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::CLASS> AccessTemplateBase<::Celeste::ast::node::class_declaration>::CLASS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::CLASS>(Get<::Celeste::ast::Type::CLASS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COLON> AccessTemplateBase<::Celeste::ast::node::class_declaration>::COLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COLON>(Get<::Celeste::ast::Type::COLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::class_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>::deamerreserved_star__COMMA__base_type__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::base_type> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>::base_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::base_type>(Get<::Celeste::ast::Type::base_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__base_type__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>::deamerreserved_star__COMMA__base_type__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::base_type> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>::base_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::base_type>(Get<::Celeste::ast::Type::base_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__base_type__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::class_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::base_type>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> AccessTemplateBase<::Celeste::ast::node::class_block>::deamerreserved_star__class_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__class_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt> AccessTemplateBase<::Celeste::ast::node::class_block>::class_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt>(Get<::Celeste::ast::Type::class_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::class_block>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::class_block>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>::deamerreserved_star__class_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__class_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::class_stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__class_stmt__>::class_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::class_stmt>(Get<::Celeste::ast::Type::class_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_name> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::enum_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_name>(Get<::Celeste::ast::Type::enum_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_block> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::enum_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_block>(Get<::Celeste::ast::Type::enum_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ENUM> AccessTemplateBase<::Celeste::ast::node::enum_declaration>::ENUM()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ENUM>(Get<::Celeste::ast::Type::ENUM>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::enum_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____> AccessTemplateBase<::Celeste::ast::node::enum_block>::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>(Get<::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_stmt> AccessTemplateBase<::Celeste::ast::node::enum_block>::enum_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_stmt>(Get<::Celeste::ast::Type::enum_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::enum_block>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::enum_block>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::enum_block>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>(Get<::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::enum_stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>::enum_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::enum_stmt>(Get<::Celeste::ast::Type::enum_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____> AccessTemplateBase<::Celeste::ast::node::function_declaration>::deamerreserved_arrow__deamerreserved_optional__function_argument____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>(Get<::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::function_declaration>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::function_declaration>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::function_declaration>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::return_type> AccessTemplateBase<::Celeste::ast::node::function_declaration>::return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::return_type>(Get<::Celeste::ast::Type::return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FUNCTION> AccessTemplateBase<::Celeste::ast::node::function_declaration>::FUNCTION()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FUNCTION>(Get<::Celeste::ast::Type::FUNCTION>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::SEMICOLON> AccessTemplateBase<::Celeste::ast::node::function_declaration>::SEMICOLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::SEMICOLON>(Get<::Celeste::ast::Type::SEMICOLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::function_declaration>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____> AccessTemplateBase<::Celeste::ast::node::function_implementation>::deamerreserved_arrow__deamerreserved_optional__function_argument____()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_arrow__deamerreserved_optional__function_argument____>(Get<::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__> AccessTemplateBase<::Celeste::ast::node::function_implementation>::deamerreserved_star__COMMA__function_argument__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>(Get<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_argument> AccessTemplateBase<::Celeste::ast::node::function_implementation>::function_argument()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_argument>(Get<::Celeste::ast::Type::function_argument>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_name> AccessTemplateBase<::Celeste::ast::node::function_implementation>::function_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_name>(Get<::Celeste::ast::Type::function_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::return_type> AccessTemplateBase<::Celeste::ast::node::function_implementation>::return_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::return_type>(Get<::Celeste::ast::Type::return_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_block> AccessTemplateBase<::Celeste::ast::node::function_implementation>::function_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_block>(Get<::Celeste::ast::Type::function_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::FUNCTION> AccessTemplateBase<::Celeste::ast::node::function_implementation>::FUNCTION()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::FUNCTION>(Get<::Celeste::ast::Type::FUNCTION>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_implementation>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::function_implementation>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::COMMA> AccessTemplateBase<::Celeste::ast::node::function_implementation>::COMMA()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::COMMA>(Get<::Celeste::ast::Type::COMMA>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::function_argument>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_arg_type> AccessTemplateBase<::Celeste::ast::node::function_argument>::function_arg_type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_arg_type>(Get<::Celeste::ast::Type::function_arg_type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_arg_name> AccessTemplateBase<::Celeste::ast::node::function_argument>::function_arg_name()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_arg_name>(Get<::Celeste::ast::Type::function_arg_name>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::function_argument>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::function_arg_type>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::function_arg_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::type>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::function_name>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::return_type>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__> AccessTemplateBase<::Celeste::ast::node::function_block>::deamerreserved_star__function_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__function_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_stmt> AccessTemplateBase<::Celeste::ast::node::function_block>::function_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_stmt>(Get<::Celeste::ast::Type::function_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::function_block>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::function_block>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>::deamerreserved_star__function_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__function_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__function_stmt__>::function_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_stmt>(Get<::Celeste::ast::Type::function_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_declaration> AccessTemplateBase<::Celeste::ast::node::class_stmt>::function_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_declaration>(Get<::Celeste::ast::Type::function_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::function_implementation> AccessTemplateBase<::Celeste::ast::node::class_stmt>::function_implementation()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::function_implementation>(Get<::Celeste::ast::Type::function_implementation>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::variable_declaration> AccessTemplateBase<::Celeste::ast::node::class_stmt>::variable_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::variable_declaration>(Get<::Celeste::ast::Type::variable_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::enum_stmt>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::logical_stmt> AccessTemplateBase<::Celeste::ast::node::function_stmt>::logical_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::logical_stmt>(Get<::Celeste::ast::Type::logical_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condtional_declaration> AccessTemplateBase<::Celeste::ast::node::logical_stmt>::condtional_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condtional_declaration>(Get<::Celeste::ast::Type::condtional_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::variable_declaration> AccessTemplateBase<::Celeste::ast::node::logical_stmt>::variable_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::variable_declaration>(Get<::Celeste::ast::Type::variable_declaration>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::variable_initialization> AccessTemplateBase<::Celeste::ast::node::logical_stmt>::variable_initialization()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::variable_initialization>(Get<::Celeste::ast::Type::variable_initialization>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::condtional_declaration>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::conditional_block> AccessTemplateBase<::Celeste::ast::node::condtional_declaration>::conditional_block()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::conditional_block>(Get<::Celeste::ast::Type::conditional_block>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::IF> AccessTemplateBase<::Celeste::ast::node::condtional_declaration>::IF()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::IF>(Get<::Celeste::ast::Type::IF>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::ELSE> AccessTemplateBase<::Celeste::ast::node::condtional_declaration>::ELSE()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::ELSE>(Get<::Celeste::ast::Type::ELSE>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::condtional_declaration>::LEFT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_PARANTHESIS>(Get<::Celeste::ast::Type::LEFT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS> AccessTemplateBase<::Celeste::ast::node::condtional_declaration>::RIGHT_PARANTHESIS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_PARANTHESIS>(Get<::Celeste::ast::Type::RIGHT_PARANTHESIS>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__> AccessTemplateBase<::Celeste::ast::node::conditional_block>::deamerreserved_star__condtional_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__condtional_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condtional_stmt> AccessTemplateBase<::Celeste::ast::node::conditional_block>::condtional_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condtional_stmt>(Get<::Celeste::ast::Type::condtional_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_block>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::LEFT_BRACKET>(Get<::Celeste::ast::Type::LEFT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET> AccessTemplateBase<::Celeste::ast::node::conditional_block>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::RIGHT_BRACKET>(Get<::Celeste::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>::deamerreserved_star__condtional_stmt__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>(Get<::Celeste::ast::Type::deamerreserved_star__condtional_stmt__>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::condtional_stmt> AccessTemplateBase<::Celeste::ast::node::deamerreserved_star__condtional_stmt__>::condtional_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::condtional_stmt>(Get<::Celeste::ast::Type::condtional_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::logical_stmt> AccessTemplateBase<::Celeste::ast::node::condtional_stmt>::logical_stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::logical_stmt>(Get<::Celeste::ast::Type::logical_stmt>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::SEMICOLON> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::SEMICOLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::SEMICOLON>(Get<::Celeste::ast::Type::SEMICOLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::variable_declaration>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::expression> AccessTemplateBase<::Celeste::ast::node::variable_initialization>::expression()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::expression>(Get<::Celeste::ast::Type::expression>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::type> AccessTemplateBase<::Celeste::ast::node::variable_initialization>::type()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::type>(Get<::Celeste::ast::Type::type>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::SEMICOLON> AccessTemplateBase<::Celeste::ast::node::variable_initialization>::SEMICOLON()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::SEMICOLON>(Get<::Celeste::ast::Type::SEMICOLON>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::EQ> AccessTemplateBase<::Celeste::ast::node::variable_initialization>::EQ()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::EQ>(Get<::Celeste::ast::Type::EQ>(ts));
		}

		inline AccessTemplateBase<::Celeste::ast::node::VARNAME> AccessTemplateBase<::Celeste::ast::node::variable_initialization>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::Celeste::ast::node::VARNAME>(Get<::Celeste::ast::Type::VARNAME>(ts));
		}


	/*!	\class Access_if
	 *
	 *	\brief Accesses the node if it is of the given type.
	 *
	 *	\note A lambda has to be supplied as second argument with paramater: "Access<T>".
	 */
	template<typename T>
	struct Access_if
	{
		const ::deamer::external::cpp::ast::Node* node;

		template<typename FunctionType>
		Access_if(const ::deamer::external::cpp::ast::Node* node_, FunctionType function) : node(node_)
		{
			if (node->GetType() == static_cast<::std::size_t>(::Celeste::ast::relation::NodeTypeToEnum_v<T>))
			{
				function(Access<T>(static_cast<const T*>(node)));
			}
		}
	};

}}}

#endif // CELESTE_AST_REFERENCE_ACCESSTEMPLATEBASE_H