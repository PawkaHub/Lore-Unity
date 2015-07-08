﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t5364;
// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type[]
struct TypeU5BU5D_t636;
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"

// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern "C" void MonoPropertyInfo_get_property_info_m21265 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t5364 * ___info, int32_t ___req_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern "C" TypeU5BU5D_t636* MonoPropertyInfo_GetTypeModifiers_m21266 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
