﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CharEnumerator
struct CharEnumerator_t4282;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.CharEnumerator::.ctor(System.String)
extern "C" void CharEnumerator__ctor_m20847 (CharEnumerator_t4282 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.CharEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * CharEnumerator_System_Collections_IEnumerator_get_Current_m20848 (CharEnumerator_t4282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CharEnumerator::System.IDisposable.Dispose()
extern "C" void CharEnumerator_System_IDisposable_Dispose_m20849 (CharEnumerator_t4282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.CharEnumerator::get_Current()
extern "C" uint16_t CharEnumerator_get_Current_m20850 (CharEnumerator_t4282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CharEnumerator::MoveNext()
extern "C" bool CharEnumerator_MoveNext_m20851 (CharEnumerator_t4282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
