#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>
struct ShimEnumerator_t6009;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24481_gshared (ShimEnumerator_t6009 * __this, Dictionary_2_t28 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24481(__this, ___host, method) (( void (*) (ShimEnumerator_t6009 *, Dictionary_2_t28 *, const MethodInfo*))ShimEnumerator__ctor_m24481_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24482_gshared (ShimEnumerator_t6009 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24482(__this, method) (( bool (*) (ShimEnumerator_t6009 *, const MethodInfo*))ShimEnumerator_MoveNext_m24482_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m24483_gshared (ShimEnumerator_t6009 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24483(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6009 *, const MethodInfo*))ShimEnumerator_get_Entry_m24483_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24484_gshared (ShimEnumerator_t6009 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24484(__this, method) (( Object_t * (*) (ShimEnumerator_t6009 *, const MethodInfo*))ShimEnumerator_get_Key_m24484_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24485_gshared (ShimEnumerator_t6009 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24485(__this, method) (( Object_t * (*) (ShimEnumerator_t6009 *, const MethodInfo*))ShimEnumerator_get_Value_m24485_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24486_gshared (ShimEnumerator_t6009 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24486(__this, method) (( Object_t * (*) (ShimEnumerator_t6009 *, const MethodInfo*))ShimEnumerator_get_Current_m24486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m24487_gshared (ShimEnumerator_t6009 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m24487(__this, method) (( void (*) (ShimEnumerator_t6009 *, const MethodInfo*))ShimEnumerator_Reset_m24487_gshared)(__this, method)
