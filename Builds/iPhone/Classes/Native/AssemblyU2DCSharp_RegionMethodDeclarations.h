#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Region
struct Region_t471;
// System.String
struct String_t;
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// CloudRegionFlag
#include "AssemblyU2DCSharp_CloudRegionFlag.h"

// System.Void Region::.ctor()
extern "C" void Region__ctor_m2121 (Region_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode Region::Parse(System.String)
extern "C" int32_t Region_Parse_m2122 (Object_t * __this /* static, unused */, String_t* ___codeAsString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionFlag Region::ParseFlag(System.String)
extern "C" int32_t Region_ParseFlag_m2123 (Object_t * __this /* static, unused */, String_t* ___codeAsString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Region::ToString()
extern "C" String_t* Region_ToString_m2124 (Region_t471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
