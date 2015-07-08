#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CharEnumerator
struct CharEnumerator_t5611;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.CharEnumerator::.ctor(System.String)
extern "C" void CharEnumerator__ctor_m22590 (CharEnumerator_t5611 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.CharEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * CharEnumerator_System_Collections_IEnumerator_get_Current_m22591 (CharEnumerator_t5611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CharEnumerator::System.IDisposable.Dispose()
extern "C" void CharEnumerator_System_IDisposable_Dispose_m22592 (CharEnumerator_t5611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.CharEnumerator::get_Current()
extern "C" uint16_t CharEnumerator_get_Current_m22593 (CharEnumerator_t5611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CharEnumerator::MoveNext()
extern "C" bool CharEnumerator_MoveNext_m22594 (CharEnumerator_t5611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CharEnumerator::Reset()
extern "C" void CharEnumerator_Reset_m22595 (CharEnumerator_t5611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
