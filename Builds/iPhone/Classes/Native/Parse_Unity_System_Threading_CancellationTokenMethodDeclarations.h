#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationToken
struct CancellationToken_t1398;
// System.Action
struct Action_t250;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" CancellationToken_t1398  CancellationToken_get_None_m7262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C" bool CancellationToken_get_IsCancellationRequested_m7263 (CancellationToken_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C" CancellationTokenRegistration_t1518  CancellationToken_Register_m7264 (CancellationToken_t1398 * __this, Action_t250 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
extern "C" void CancellationToken_ThrowIfCancellationRequested_m7265 (CancellationToken_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
