#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t4196;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1355;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.UInt32[]
struct UInt32U5BU5D_t1182;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m20263 (RijndaelTransform_t4196 * __this, Rijndael_t1355 * ___algo, bool ___encryption, ByteU5BU5D_t25* ___key, ByteU5BU5D_t25* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m20264 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m20265 (RijndaelTransform_t4196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m20266 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___input, ByteU5BU5D_t25* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m20267 (RijndaelTransform_t4196 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m20268 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t1182* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m20269 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t1182* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m20270 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t1182* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m20271 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t1182* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m20272 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t1182* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m20273 (RijndaelTransform_t4196 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t1182* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
