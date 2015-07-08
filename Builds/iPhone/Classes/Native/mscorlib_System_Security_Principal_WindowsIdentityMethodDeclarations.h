#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t5552;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WindowsIdentity__ctor_m22133 (WindowsIdentity_t5552 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.cctor()
extern "C" void WindowsIdentity__cctor_m22134 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m22135 (WindowsIdentity_t5552 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WindowsIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m22136 (WindowsIdentity_t5552 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::Dispose()
extern "C" void WindowsIdentity_Dispose_m22137 (WindowsIdentity_t5552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Principal.WindowsIdentity::GetCurrentToken()
extern "C" IntPtr_t WindowsIdentity_GetCurrentToken_m22138 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::GetTokenName(System.IntPtr)
extern "C" String_t* WindowsIdentity_GetTokenName_m22139 (Object_t * __this /* static, unused */, IntPtr_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
