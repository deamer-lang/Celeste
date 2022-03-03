#ifndef CELESTE_AST_LISTENER_TOOL_OOPSYNTAXRECOGNIZER_RECOGNIZER_H
#define CELESTE_AST_LISTENER_TOOL_OOPSYNTAXRECOGNIZER_RECOGNIZER_H

#include "Celeste/Ast/Listener/EnterExitListener.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/AccessModifier.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/ClassObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/EnumObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/FunctionArgument.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/FunctionObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/OopModel.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/StructObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/Type.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/TypeCategory.h"
#include <string>
#include <vector>

namespace Celeste::ast::listener::tool::oopsyntaxrecognizer
{
	/*!	\class Recognizer
	 *
	 *	\brief Used to recognize OOP Concepts.
	 *
	 *	\details The Recognizer utilizes a Flavoring + DUPR tactic
	 *	for recognizing OOP concepts via syntax.
	 *	This recognizer was	created using the OOP Syntax LPD.
	 */
	class Recognizer : public EnterExitListener
	{
		enum class FlavorType
		{
			unknown,

			Class,
			Struct,
			Enum,
			Function,
			FunctionArgument,
		};

		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::Type*> createdTypes;
		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject*>
			globalFunctions;

		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject*>
			createdFunctions; // All functions
		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionArgument*>
			createdFunctionsArguments;

		std::size_t ClassFlavor = 0;
		std::size_t EnumFlavor = 0;
		std::size_t StructFlavor = 0;
		std::size_t FunctionFlavor = 0;
		std::size_t FunctionArgumentFlavor = 0;

		std::vector<FlavorType> FlavorStack;

		::deamer::external::cpp::tool::oopsyntaxrecognizer::ClassObject* currentClassObject =
			nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::ClassObject* currentStructObject =
			nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject* currentFunctionObject =
			nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionArgument*
			currentFunctionArgumentObject = nullptr;

		/*!	\fn GetTopOfFlavorStack
		 *
		 *	\brief Get top of the Flavor stack.
		 *	If no flavor has been given returns unknown flavor.
		 */
		FlavorType GetTopOfFlavorStack() const
		{
			if (FlavorStack.empty())
			{
				return FlavorType::unknown;
			}

			return FlavorStack[FlavorStack.size() - 1];
		}

		/*!	\fn GetType
		 *
		 *	\brief Returns type if it exists, otherwise nullptr
		 */
		::deamer::external::cpp::tool::oopsyntaxrecognizer::Type*
		GetType(const std::string& typeName) const
		{
			const auto iter = std::find_if(
				std::cbegin(createdTypes), std::cend(createdTypes),
				[typeName](
					const ::deamer::external::cpp::tool::oopsyntaxrecognizer::Type* const type) {
					return type != nullptr && type->GetTypeName() == typeName;
				});

			if (iter == std::end(createdTypes))
			{
				return nullptr;
			}

			return *iter;
		}

		void ListenEntry(const Celeste::ast::node::class_declaration* node) override
		{
			ClassFlavor++;
			FlavorStack.push_back(FlavorType::Class);
			currentClassObject =
				new ::deamer::external::cpp::tool::oopsyntaxrecognizer::ClassObject();
			createdTypes.push_back(currentClassObject);
		}

		void ListenExit(const Celeste::ast::node::class_declaration* node) override
		{
			ClassFlavor--;
			FlavorStack.pop_back();
			currentClassObject = nullptr;
		}

		void ListenEntry(const Celeste::ast::node::function_declaration* node) override
		{
			FunctionFlavor++;
			FlavorStack.push_back(FlavorType::Function);
			currentFunctionObject =
				new ::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject();
			createdFunctions.push_back(currentFunctionObject);
		}

		void ListenExit(const Celeste::ast::node::function_declaration* node) override
		{
			if (ClassFlavor > 0) // We are in some Class => It is a member function
			{
				currentClassObject->AddFunction(currentFunctionObject);
			}
			else if (StructFlavor > 0) // We are in some Struct => It is a member function
			{
				currentStructObject->AddFunction(currentFunctionObject);
			}
			else if (EnumFlavor > 0) // We are in a enumeration => Something went wrong
			{
				// Error
			}
			else // It is a global function
			{
				globalFunctions.push_back(currentFunctionObject);
			}

			FunctionFlavor--;
			FlavorStack.pop_back();
			currentFunctionObject = nullptr;
		}

		void ListenEntry(const Celeste::ast::node::function_implementation* node) override
		{
			FunctionFlavor++;
			FlavorStack.push_back(FlavorType::Function);
		}

		void ListenExit(const Celeste::ast::node::function_implementation* node) override
		{
			FunctionFlavor--;
			FlavorStack.pop_back();
		}

		void ListenEntry(const Celeste::ast::node::enum_declaration* node) override
		{
			EnumFlavor++;
			FlavorStack.push_back(FlavorType::Enum);
		}

		void ListenExit(const Celeste::ast::node::enum_declaration* node) override
		{
			EnumFlavor--;
			FlavorStack.pop_back();
		}

		void ListenEntry(const Celeste::ast::node::function_argument* node) override
		{
			FunctionArgumentFlavor++;
			FlavorStack.push_back(FlavorType::FunctionArgument);
			currentFunctionArgumentObject =
				new ::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionArgument();
			createdFunctionsArguments.push_back(currentFunctionArgumentObject);
		}

		void ListenExit(const Celeste::ast::node::function_argument* node) override
		{
			if (FunctionFlavor > 0 && currentFunctionObject != nullptr)
			{
				currentFunctionObject->AddArgument(currentFunctionArgumentObject);
			}
			else
			{
				// Error
			}

			FunctionArgumentFlavor--;
			FlavorStack.pop_back();
			currentFunctionArgumentObject = nullptr;
		}

		void ListenEntry(const Celeste::ast::node::class_name* node) override
		{
			if (ClassFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Class &&
				currentClassObject != nullptr)
			{
				currentClassObject->SetTypeName(node->GetText());
			}
			else
			{
				// Error
			}
		}

		void ListenEntry(const Celeste::ast::node::function_name* node) override
		{
			if (FunctionFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Function &&
				currentFunctionObject != nullptr)
			{
				currentFunctionObject->SetName(node->GetText());
			}
			else
			{
				// Error
			}
		}

		void ListenEntry(const Celeste::ast::node::return_type* node) override
		{
			if (FunctionFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Function &&
				currentFunctionObject != nullptr)
			{
				// Assumes the type is predefined
				// Can be updated to insert temporary forward declaration
				// This requires a final check which replaces forward declarations
				currentFunctionObject->SetReturnType(GetType(node->GetText()));
			}
			else
			{
				// Error
			}
		}

		void ListenEntry(const Celeste::ast::node::function_arg_type* node) override
		{
			if (FunctionArgumentFlavor > 0 && GetTopOfFlavorStack() == FlavorType::FunctionArgument)
			{
				currentFunctionArgumentObject->SetType(GetType(node->GetText()));
			}
			else
			{
				// Error
			}
		}

		void ListenEntry(const Celeste::ast::node::function_arg_name* node) override
		{
			if (FunctionArgumentFlavor > 0 && GetTopOfFlavorStack() == FlavorType::FunctionArgument)
			{
				currentFunctionArgumentObject->SetName(node->GetText());
			}
			else
			{
				// Error
			}
		}

	public:
		/*!	\fn GetOutput
		 *
		 *	\brief Converts the output into a OopModel
		 *
		 *	\note This resets the listener
		 */
		::deamer::external::cpp::tool::oopsyntaxrecognizer::OopModel GetOutput()
		{
			return ::deamer::external::cpp::tool::oopsyntaxrecognizer::OopModel(
				createdTypes, globalFunctions, createdTypes, createdFunctions,
				createdFunctionsArguments);
		}
	};
}

#endif // CELESTE_AST_LISTENER_TOOL_OOPSYNTAXRECOGNIZER_RECOGNIZER_H
