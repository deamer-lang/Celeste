#ifndef CELESTE_IR_INPUTRECONSTRUCTION_META_TYPE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_META_TYPE_H

namespace Celeste::ir::inputreconstruction
{
	enum class Type
	{
		Unknown,

		// Structuring
		Class,
		InheritBase,
		CompoundBase,
		Enumeration,
		EnumerationMember,
		Constructor,
		Function,
		FunctionArgument,
		InlineClass,
		Namespace,

		Import,

		// Computation
		NameReference,
		SymbolReferenceCall,
		VariableDeclaration,
		SymbolIncrease,
		SymbolDecrease,
		Return,
		Assignment,

		// Code generation
		MutationGroup,
		Display,
		CodeFunction,
		NameFunction,

		// Iteration
		ForEach,
		ForIteration,
		WhileIteration,

		// Conditional
		ConditionalFunction,
		If,
		ElseIf,
		Else,

		// Value
		Expression,
		Value,

		// Type
		TypeConstruct,

		// Accessibility
		Public,
		Protected,
		Private,

		//
		Root,
		CodeBlockRoot,
		CodeBlock,
		Tuple,

		// Arguments
		ConditionModifierCall,
		ConditionModifierArgument,
		TemplateParameter,

		SymbolAccess,
		SymbolResolveSecondary,

		// Standard Types
		Decimal,
		Integer,
		Text,
		Boolean,
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_META_TYPE_H
