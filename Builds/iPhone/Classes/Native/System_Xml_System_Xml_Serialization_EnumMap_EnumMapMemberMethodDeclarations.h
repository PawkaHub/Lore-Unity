﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.EnumMap/EnumMapMember
struct EnumMapMember_t2411;
// System.String
struct String_t;

// System.Void System.Xml.Serialization.EnumMap/EnumMapMember::.ctor(System.String,System.String,System.Int64)
extern "C" void EnumMapMember__ctor_m10426 (EnumMapMember_t2411 * __this, String_t* ___xmlName, String_t* ___enumName, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap/EnumMapMember::get_XmlName()
extern "C" String_t* EnumMapMember_get_XmlName_m10427 (EnumMapMember_t2411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap/EnumMapMember::get_EnumName()
extern "C" String_t* EnumMapMember_get_EnumName_m10428 (EnumMapMember_t2411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.Serialization.EnumMap/EnumMapMember::get_Value()
extern "C" int64_t EnumMapMember_get_Value_m10429 (EnumMapMember_t2411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;