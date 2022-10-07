#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CLASS
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CLASS

#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Structure/Accessibility.h"
#include "Celeste/Ir/InputReconstruction/Structure/CompoundBase.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include "Celeste/Ir/InputReconstruction/Structure/InheritBase.h"
#include "Celeste/Ir/InputReconstruction/Structure/TemplateParameter.h"
#include <memory>

namespace Celeste::ir::inputreconstruction
{
	class NameReference;

	class Class : public InputReconstructionObject
	{
	private:
		Accessibility lastAccessibility = Accessibility::Public;
		std::unique_ptr<NameReference> className;
		std::vector<std::pair<Accessibility, InputReconstructionObject*>> block;
		std::vector<std::unique_ptr<InputReconstructionObject>> ownedBlock;
		std::vector<std::unique_ptr<CompoundBase>> compoundBases;
		std::vector<std::unique_ptr<InheritBase>> inheritedBases;
		std::vector<std::unique_ptr<TemplateParameter>> templateParameters;

	public:
		Class(std::unique_ptr<NameReference> className_);
		virtual ~Class() override = default;

		void Complete();

		Class(const Class& rhs);

	public:
		void Add(std::unique_ptr<InputReconstructionObject> object) override;
		void Add(std::unique_ptr<InputReconstructionObject> object, Accessibility accessibility);

		void AddCompoundBase(std::unique_ptr<CompoundBase> compoundBase);
		void AddInheritedBase(std::unique_ptr<InheritBase> inheritBase);
		void AddTemplateParameter(std::unique_ptr<TemplateParameter> templateParameter);

		std::vector<std::unique_ptr<CompoundBase>>& GetCompoundBases();
		std::vector<std::unique_ptr<InheritBase>>& GetInheritedBases();
		std::vector<
			std::pair<Celeste::ir::inputreconstruction::Accessibility, InputReconstructionObject*>>&
		GetMembers();

		InputReconstructionObject* GetMember(NameReference* nameReference,
											 Accessibility accessibility = Accessibility::Public);

		InputReconstructionObject* GetMember(
			std::string memberName_,
			std::optional<std::vector<InputReconstructionObject*>> functionArguments = std::nullopt,
			Accessibility accessibility = Accessibility::Public);
		InputReconstructionObject*
		GetMember(const std::string& memberName_,
				  std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>>&
					  functionArgument,
				  Accessibility accessibility = Accessibility::Public);

		NameReference* GetClassName();
		std::optional<InputReconstructionObject*>
		GetConstructor(NameReference* nameReference,
					   Accessibility accessibility = Accessibility::Public);

		// Gets all constructors of this class.
		std::vector<Constructor*>
		GetConstructors(Accessibility accessibility = Accessibility::Public);

	public:
		Function* CreateMemberFunction(const std::string& functionName,
									   const std::string& returnType = "");
		void CreateDefaultConstructor();

	public:
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator begin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator end() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rbegin() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator rend() override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::iterator
		GetIterator(InputReconstructionObject* irComponent) override;
		std::vector<std::unique_ptr<InputReconstructionObject>>::reverse_iterator
		GetReverseIterator(InputReconstructionObject* irComponent) override;

		std::vector<InputReconstructionObject*> GetScope() override;
		std::unique_ptr<InputReconstructionObject> DeepCopy() override;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_CLASS
