#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3266;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Linq.Expressions.MemberBindingType
#include "System_Core_System_Linq_Expressions_MemberBindingType.h"

// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::get_BindingType()
extern "C" int32_t MemberBinding_get_BindingType_m10347 (MemberBinding_t3266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::get_Member()
extern "C" MemberInfo_t * MemberBinding_get_Member_m10348 (MemberBinding_t3266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.MemberBinding::ToString()
extern "C" String_t* MemberBinding_ToString_m10349 (MemberBinding_t3266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
