#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t5525;
// System.WeakReference
struct WeakReference_t1729;
// System.Object
struct Object_t;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C" void Reference__ctor_m32793_gshared (Reference_t5525 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m32793(__this, ___obj, method) (( void (*) (Reference_t5525 *, Object_t *, const MethodInfo*))Reference__ctor_m32793_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t1729 * Reference_get_WeakReference_m32794_gshared (Reference_t5525 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m32794(__this, method) (( WeakReference_t1729 * (*) (Reference_t5525 *, const MethodInfo*))Reference_get_WeakReference_m32794_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m32795_gshared (Reference_t5525 * __this, WeakReference_t1729 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m32795(__this, ___value, method) (( void (*) (Reference_t5525 *, WeakReference_t1729 *, const MethodInfo*))Reference_set_WeakReference_m32795_gshared)(__this, ___value, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m32796_gshared (Reference_t5525 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m32796(__this, method) (( int32_t (*) (Reference_t5525 *, const MethodInfo*))Reference_GetHashCode_m32796_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m32797_gshared (Reference_t5525 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m32797(__this, ___obj, method) (( bool (*) (Reference_t5525 *, Object_t *, const MethodInfo*))Reference_Equals_m32797_gshared)(__this, ___obj, method)
