#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t4226;
// System.Threading.CompressedStack
struct CompressedStack_t4225;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m20424 (SecurityContext_t4226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m20425 (SecurityContext_t4226 * __this, SecurityContext_t4226 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t4226 * SecurityContext_Capture_m20426 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m20427 (SecurityContext_t4226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t4225 * SecurityContext_get_CompressedStack_m20428 (SecurityContext_t4226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
