#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3200;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Linq.Expressions.MemberBindingType
#include "System_Core_System_Linq_Expressions_MemberBindingType.h"

// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::get_BindingType()
extern "C" int32_t MemberBinding_get_BindingType_m14561 (MemberBinding_t3200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::get_Member()
extern "C" MemberInfo_t * MemberBinding_get_Member_m14562 (MemberBinding_t3200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.MemberBinding::ToString()
extern "C" String_t* MemberBinding_ToString_m14563 (MemberBinding_t3200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
