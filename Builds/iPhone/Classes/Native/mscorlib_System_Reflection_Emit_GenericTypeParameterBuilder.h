#pragma once
#include <stdint.h>
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t5324;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t5330;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t5331  : public Type_t
{
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t5324 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t5330 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_11;
};
