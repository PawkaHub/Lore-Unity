#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9179;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3062;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66596_gshared (Enumerator_t9179 * __this, Dictionary_2_t3062 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m66596(__this, ___host, method) (( void (*) (Enumerator_t9179 *, Dictionary_2_t3062 *, const MethodInfo*))Enumerator__ctor_m66596_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66597_gshared (Enumerator_t9179 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66597(__this, method) (( Object_t * (*) (Enumerator_t9179 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66597_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66598_gshared (Enumerator_t9179 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66598(__this, method) (( void (*) (Enumerator_t9179 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m66599_gshared (Enumerator_t9179 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66599(__this, method) (( void (*) (Enumerator_t9179 *, const MethodInfo*))Enumerator_Dispose_m66599_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66600_gshared (Enumerator_t9179 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66600(__this, method) (( bool (*) (Enumerator_t9179 *, const MethodInfo*))Enumerator_MoveNext_m66600_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3051  Enumerator_get_Current_m66601_gshared (Enumerator_t9179 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66601(__this, method) (( TimeType_t3051  (*) (Enumerator_t9179 *, const MethodInfo*))Enumerator_get_Current_m66601_gshared)(__this, method)
