#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9461;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3300;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m67511_gshared (Enumerator_t9461 * __this, Dictionary_2_t3300 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m67511(__this, ___host, method) (( void (*) (Enumerator_t9461 *, Dictionary_2_t3300 *, const MethodInfo*))Enumerator__ctor_m67511_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m67512_gshared (Enumerator_t9461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m67512(__this, method) (( Object_t * (*) (Enumerator_t9461 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m67512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m67513_gshared (Enumerator_t9461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m67513(__this, method) (( void (*) (Enumerator_t9461 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m67513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m67514_gshared (Enumerator_t9461 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m67514(__this, method) (( void (*) (Enumerator_t9461 *, const MethodInfo*))Enumerator_Dispose_m67514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m67515_gshared (Enumerator_t9461 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m67515(__this, method) (( bool (*) (Enumerator_t9461 *, const MethodInfo*))Enumerator_MoveNext_m67515_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3289  Enumerator_get_Current_m67516_gshared (Enumerator_t9461 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m67516(__this, method) (( TimeType_t3289  (*) (Enumerator_t9461 *, const MethodInfo*))Enumerator_get_Current_m67516_gshared)(__this, method)
