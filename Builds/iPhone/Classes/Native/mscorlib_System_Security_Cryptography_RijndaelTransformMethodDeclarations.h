#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t5286;
// System.Security.Cryptography.Rijndael
struct Rijndael_t4429;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.UInt32[]
struct UInt32U5BU5D_t3848;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m21571 (RijndaelTransform_t5286 * __this, Rijndael_t4429 * ___algo, bool ___encryption, ByteU5BU5D_t25* ___key, ByteU5BU5D_t25* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m21572 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m21573 (RijndaelTransform_t5286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m21574 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___input, ByteU5BU5D_t25* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m21575 (RijndaelTransform_t5286 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m21576 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t3848* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m21577 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t3848* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m21578 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t3848* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m21579 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t3848* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m21580 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t3848* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m21581 (RijndaelTransform_t5286 * __this, ByteU5BU5D_t25* ___indata, ByteU5BU5D_t25* ___outdata, UInt32U5BU5D_t3848* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
