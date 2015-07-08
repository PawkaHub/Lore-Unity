#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t5323;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t5694;
// System.Exception
struct Exception_t496;
// System.Reflection.AssemblyName
struct AssemblyName_t2044;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m20821 (AssemblyBuilder_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t5694* AssemblyBuilder_GetModulesInternal_m20822 (AssemblyBuilder_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m20823 (AssemblyBuilder_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t496 * AssemblyBuilder_not_supported_m20824 (AssemblyBuilder_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t2044 * AssemblyBuilder_UnprotectedGetName_m20825 (AssemblyBuilder_t5323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
