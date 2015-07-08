#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t636;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t5337;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t5338;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t5339;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t5340;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t5341;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t5333;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t5332;
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t5324  : public Type_t
{
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t636* ___interfaces_12;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t5337* ___methods_13;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t5338* ___ctors_14;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t5339* ___properties_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t5340* ___fields_16;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t5341* ___subtypes_17;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_18;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t5333 * ___pmodule_19;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t5332* ___generic_params_20;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_21;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_22;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_23;
};
