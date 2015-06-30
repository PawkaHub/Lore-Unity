#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t2807;
struct TrackedReference_t2807_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m13626 (TrackedReference_t2807 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m13627 (TrackedReference_t2807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m13628 (Object_t * __this /* static, unused */, TrackedReference_t2807 * ___x, TrackedReference_t2807 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t2807_marshal(const TrackedReference_t2807& unmarshaled, TrackedReference_t2807_marshaled& marshaled);
void TrackedReference_t2807_marshal_back(const TrackedReference_t2807_marshaled& marshaled, TrackedReference_t2807& unmarshaled);
void TrackedReference_t2807_marshal_cleanup(TrackedReference_t2807_marshaled& marshaled);
