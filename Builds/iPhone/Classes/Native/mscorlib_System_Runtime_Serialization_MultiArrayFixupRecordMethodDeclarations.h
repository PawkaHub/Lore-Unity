#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t5488;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t5485;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t5477;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m21727 (MultiArrayFixupRecord_t5488 * __this, ObjectRecord_t5485 * ___objectToBeFixed, Int32U5BU5D_t119* ___indices, ObjectRecord_t5485 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m21728 (MultiArrayFixupRecord_t5488 * __this, ObjectManager_t5477 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
