﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.LockSet
struct LockSet_t1412;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1072;
// System.IComparable
struct IComparable_t43;
// System.Object
struct Object_t;

// System.Void Parse.Internal.LockSet::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C" void LockSet__ctor_m6856 (LockSet_t1412 * __this, Object_t* ___mutexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::Enter()
extern "C" void LockSet_Enter_m6857 (LockSet_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::Exit()
extern "C" void LockSet_Exit_m6858 (LockSet_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::GetStableId(System.Object)
extern "C" Object_t * LockSet_GetStableId_m6859 (Object_t * __this /* static, unused */, Object_t * ___mutex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::<.ctor>b__0(System.Object)
extern "C" Object_t * LockSet_U3C_ctorU3Eb__0_m6860 (Object_t * __this /* static, unused */, Object_t * ___mutex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::<GetStableId>b__2(System.Object)
extern "C" Object_t * LockSet_U3CGetStableIdU3Eb__2_m6861 (Object_t * __this /* static, unused */, Object_t * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::.cctor()
extern "C" void LockSet__cctor_m6862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;