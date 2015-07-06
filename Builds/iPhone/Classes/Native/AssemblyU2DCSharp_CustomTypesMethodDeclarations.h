#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CustomTypes
struct CustomTypes_t388;
// System.IO.MemoryStream
struct MemoryStream_t576;
// System.Object
struct Object_t;

// System.Void CustomTypes::.cctor()
extern "C" void CustomTypes__cctor_m1520 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::Register()
extern "C" void CustomTypes_Register_m1521 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializeVector3_m1522 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializeVector3_m1523 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializeVector2_m1524 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializeVector2_m1525 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializeQuaternion_m1526 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializeQuaternion_m1527 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializePhotonPlayer_m1528 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializePhotonPlayer_m1529 (Object_t * __this /* static, unused */, MemoryStream_t576 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
