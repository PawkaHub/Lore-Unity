#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t4747;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t642;
struct Object_t642_marshaled;
// System.Exception
struct Exception_t496;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void Debug_DrawLine_m3566 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, Color_t121  ___color, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Debug_DrawLine_m3346 (Object_t * __this /* static, unused */, Vector3_t53  ___start, Vector3_t53  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m17235 (Object_t * __this /* static, unused */, Vector3_t53 * ___start, Vector3_t53 * ___end, Color_t121 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m17236 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t642 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m17237 (Object_t * __this /* static, unused */, Exception_t496 * ___exception, Object_t642 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m90 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
extern "C" void Debug_Log_m2780 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t642 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m2987 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m5386 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t642 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m3248 (Object_t * __this /* static, unused */, Exception_t496 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m5313 (Object_t * __this /* static, unused */, Exception_t496 * ___exception, Object_t642 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2940 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m3028 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t642 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
