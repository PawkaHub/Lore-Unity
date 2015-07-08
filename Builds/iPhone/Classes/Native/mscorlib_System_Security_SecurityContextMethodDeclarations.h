#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t5554;
// System.Threading.CompressedStack
struct CompressedStack_t5553;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m22150 (SecurityContext_t5554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m22151 (SecurityContext_t5554 * __this, SecurityContext_t5554 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t5554 * SecurityContext_Capture_m22152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m22153 (SecurityContext_t5554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t5553 * SecurityContext_get_CompressedStack_m22154 (SecurityContext_t5554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
