#pragma once
#include <stdint.h>
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Linq.Expressions.MemberBindingType
#include "System_Core_System_Linq_Expressions_MemberBindingType.h"
// System.Linq.Expressions.MemberBinding
struct  MemberBinding_t3200  : public Object_t
{
	// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::binding_type
	int32_t ___binding_type_0;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::member
	MemberInfo_t * ___member_1;
};
