#ifndef Celeste_AST_LISTENER_TOOL_OOPSYNTAXRECOGNIZER_RECOGNIZER_H
#define Celeste_AST_LISTENER_TOOL_OOPSYNTAXRECOGNIZER_RECOGNIZER_H

#include "Celeste/Ast/Listener/EnterExitListener.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/AccessModifier.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/BaseTypeObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/ClassObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/EnumObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/FunctionArgument.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/FunctionObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/InterfaceObject.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/OopModel.h"
#include "Deamer/External/Cpp/Tool/OopSyntaxRecognizer/Type/PropertyObject.h"
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
	public:
		Recognizer() : EnterExitListener()
		{
			unknown_type = new ::deamer::external::cpp::tool::oopsyntaxrecognizer::Type(::deamer::external::cpp::tool::oopsyntaxrecognizer::TypeCategory::unknown, "__unknown");
			createdTypes.push_back(unknown_type);
		}

	private:

		enum class FlavorType
		{
			unknown,

			Class,
			BaseType,
			Struct,
			Interface,
			Enum,
			Function,
			FunctionArgument,
			Property,
		};

		::deamer::external::cpp::tool::oopsyntaxrecognizer::Type* unknown_type = nullptr;

		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::Type*> createdTypes;
		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject*> globalFunctions;
		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::PropertyObject*> globalProperties;

		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject*> createdFunctions; // All functions
		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionArgument*> createdFunctionsArguments;
		std::vector<::deamer::external::cpp::tool::oopsyntaxrecognizer::BaseTypeObject*> createdBaseTypes;

		// Allow checking existence of Flavors
		std::size_t ClassFlavor = 0;
		std::size_t BaseTypeFlavor = 0;
		std::size_t PropertyFlavor = 0;
		std::size_t EnumFlavor = 0;
		std::size_t StructFlavor = 0;
		std::size_t InterfaceFlavor = 0;
		std::size_t FunctionFlavor = 0;
		std::size_t FunctionArgumentFlavor = 0;

		std::vector<FlavorType> FlavorStack;

		::deamer::external::cpp::tool::oopsyntaxrecognizer::ClassObject* currentClassObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::BaseTypeObject* currentBaseTypeObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::StructObject* currentStructObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::InterfaceObject* currentInterfaceObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::PropertyObject* currentPropertyObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::EnumObject* currentEnumObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject* currentFunctionObject = nullptr;
		::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionArgument* currentFunctionArgumentObject = nullptr;

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
		::deamer::external::cpp::tool::oopsyntaxrecognizer::Type* GetType(const std::string& typeName) const
		{
			const auto iter =
				std::find_if(std::cbegin(createdTypes), std::cend(createdTypes),
							 [typeName](const ::deamer::external::cpp::tool::oopsyntaxrecognizer::Type* const type) {
								 return type != nullptr && type->GetTypeName() == typeName;
							 });

			if (iter == std::end(createdTypes))
			{
				return unknown_type;
			}

			return *iter;
		}

		// NonTerminals introducing Concept Scope Flavors
		// The Concept Flavors control the object construction

		void ListenEntry(const Celeste::ast::node::class_declaration* node) override
		{
			ClassFlavor++;
			FlavorStack.push_back(FlavorType::Class);
			currentClassObject = new ::deamer::external::cpp::tool::oopsyntaxrecognizer::ClassObject();
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
			currentFunctionObject = new ::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionObject();
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







		void ListenEntry(const Celeste::ast::node::function_argument* node) override
		{
			FunctionArgumentFlavor++;
			FlavorStack.push_back(FlavorType::FunctionArgument);
			currentFunctionArgumentObject = new ::deamer::external::cpp::tool::oopsyntaxrecognizer::FunctionArgument();
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



		void ListenEntry(const Celeste::ast::node::variable_declaration* node) override
		{
			PropertyFlavor++;
			FlavorStack.push_back(FlavorType::Property);
			currentPropertyObject = new ::deamer::external::cpp::tool::oopsyntaxrecognizer::PropertyObject();
		}



		void ListenExit(const Celeste::ast::node::variable_declaration* node) override
		{
			PropertyFlavor--;
			FlavorStack.pop_back();

			if (ClassFlavor > 0 && FunctionFlavor > 0)
			{
				// Add to function
			}
			else if (StructFlavor > 0 && FunctionFlavor > 0)
			{
				// Add to function
			}
			else if (ClassFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Class && currentClassObject != nullptr)
			{
				currentClassObject->AddProperty(currentPropertyObject);
			}
			else if (StructFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Struct && currentStructObject != nullptr)
			{
				currentStructObject->AddProperty(currentPropertyObject);
			}
			else
			{
				globalProperties.push_back(currentPropertyObject);
			}

			currentPropertyObject = nullptr;
		}


		// NonTerminals and Terminals initializing Concept Properties
		// These NTs and Ts control the property value mechanic

		void ListenEntry(const Celeste::ast::node::class_name* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::class_declaration) && (parent->GetMatchedProductionRule().id == 1))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
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


		}


		void ListenEntry(const Celeste::ast::node::function_arg_type* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::function_argument) && (parent->GetMatchedProductionRule().id == 0))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
							if (FunctionArgumentFlavor > 0 && GetTopOfFlavorStack() == FlavorType::FunctionArgument &&
				currentFunctionArgumentObject != nullptr)
			{
				currentFunctionArgumentObject->SetType(GetType(node->GetText()));
			}
			else
			{
				// Error
			}

			}


			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::function_argument) && (parent->GetMatchedProductionRule().id == 1))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
							if (FunctionArgumentFlavor > 0 && GetTopOfFlavorStack() == FlavorType::FunctionArgument &&
				currentFunctionArgumentObject != nullptr)
			{
				currentFunctionArgumentObject->SetType(GetType(node->GetText()));
			}
			else
			{
				// Error
			}

			}


		}


		void ListenEntry(const Celeste::ast::node::function_arg_name* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::function_argument) && (parent->GetMatchedProductionRule().id == 0))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
							if (FunctionArgumentFlavor > 0 && GetTopOfFlavorStack() == FlavorType::FunctionArgument &&
				currentFunctionArgumentObject != nullptr)
			{
				currentFunctionArgumentObject->SetName(node->GetText());
			}
			else
			{
				// Error
			}

			}


			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::function_argument) && (parent->GetMatchedProductionRule().id == 1))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
							if (FunctionArgumentFlavor > 0 && GetTopOfFlavorStack() == FlavorType::FunctionArgument &&
				currentFunctionArgumentObject != nullptr)
			{
				currentFunctionArgumentObject->SetName(node->GetText());
			}
			else
			{
				// Error
			}

			}


		}


		void ListenEntry(const Celeste::ast::node::type* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::variable_declaration) && (parent->GetMatchedProductionRule().id == 0))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
							if (PropertyFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Property &&
				currentPropertyObject != nullptr)
			{
				currentPropertyObject->SetType(GetType(node->GetText()));
			}
			else
			{
				// Error
			}

			}


		}


		void ListenEntry(const Celeste::ast::node::function_name* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::function_declaration) && (parent->GetMatchedProductionRule().id == 0))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
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


		}


		void ListenEntry(const Celeste::ast::node::return_type* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::function_declaration) && (parent->GetMatchedProductionRule().id == 0))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
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


		}


		void ListenEntry(const Celeste::ast::node::VARNAME* node) override
		{
			// This is extended each time a new specialization
			const ::deamer::external::cpp::ast::Node* parent = node;
parent = parent->GetParent();
			if ((parent != nullptr) && (parent->GetType() == Celeste::ast::Type::variable_declaration) && (parent->GetMatchedProductionRule().id == 0))
			{
				// If the conditional was True, checks if the next conditions are correct
				// And executes the logic.
							if (PropertyFlavor > 0 && GetTopOfFlavorStack() == FlavorType::Property &&
				currentPropertyObject != nullptr)
			{
				currentPropertyObject->SetName(node->GetText());
			}
			else
			{
				// Error
			}

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
			return ::deamer::external::cpp::tool::oopsyntaxrecognizer::OopModel(createdTypes, globalFunctions, createdTypes, createdFunctions,
							createdFunctionsArguments);
		}
	};
}

#endif // Celeste_AST_LISTENER_TOOL_OOPSYNTAXRECOGNIZER_RECOGNIZER_H
