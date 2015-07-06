#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t5316;
// System.Threading.CompressedStack
struct CompressedStack_t5315;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m21733 (SecurityContext_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m21734 (SecurityContext_t5316 * __this, SecurityContext_t5316 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t5316 * SecurityContext_Capture_m21735 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m21736 (SecurityContext_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t5315 * SecurityContext_get_CompressedStack_m21737 (SecurityContext_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
