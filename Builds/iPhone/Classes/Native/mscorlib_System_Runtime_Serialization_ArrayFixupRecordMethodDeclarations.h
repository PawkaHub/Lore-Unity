#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t5249;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t5247;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t5239;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m21308 (ArrayFixupRecord_t5249 * __this, ObjectRecord_t5247 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t5247 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m21309 (ArrayFixupRecord_t5249 * __this, ObjectManager_t5239 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
