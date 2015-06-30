#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t2383;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern "C" void ObjectIDGenerator__ctor_m11502 (ObjectIDGenerator_t2383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern "C" void ObjectIDGenerator__cctor_m19982 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern "C" int64_t ObjectIDGenerator_GetId_m19983 (ObjectIDGenerator_t2383 * __this, Object_t * ___obj, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::HasId(System.Object,System.Boolean&)
extern "C" int64_t ObjectIDGenerator_HasId_m19984 (ObjectIDGenerator_t2383 * __this, Object_t * ___obj, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
