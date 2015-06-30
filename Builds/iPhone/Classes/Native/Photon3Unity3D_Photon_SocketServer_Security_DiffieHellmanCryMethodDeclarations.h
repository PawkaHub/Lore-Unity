#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t3118;
// System.Byte[]
struct ByteU5BU5D_t25;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3117;

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C" void DiffieHellmanCryptoProvider__ctor_m14039 (DiffieHellmanCryptoProvider_t3118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_get_PublicKey_m14040 (DiffieHellmanCryptoProvider_t3118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_get_SharedKey_m14041 (DiffieHellmanCryptoProvider_t3118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C" void DiffieHellmanCryptoProvider_DeriveSharedKey_m14042 (DiffieHellmanCryptoProvider_t3118 * __this, ByteU5BU5D_t25* ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Encrypt_m14043 (DiffieHellmanCryptoProvider_t3118 * __this, ByteU5BU5D_t25* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Encrypt_m14044 (DiffieHellmanCryptoProvider_t3118 * __this, ByteU5BU5D_t25* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Decrypt_m14045 (DiffieHellmanCryptoProvider_t3118 * __this, ByteU5BU5D_t25* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C" void DiffieHellmanCryptoProvider_Dispose_m14046 (DiffieHellmanCryptoProvider_t3118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" void DiffieHellmanCryptoProvider_Dispose_m14047 (DiffieHellmanCryptoProvider_t3118 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" BigInteger_t3117 * DiffieHellmanCryptoProvider_CalculatePublicKey_m14048 (DiffieHellmanCryptoProvider_t3118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * DiffieHellmanCryptoProvider_CalculateSharedKey_m14049 (DiffieHellmanCryptoProvider_t3118 * __this, BigInteger_t3117 * ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" BigInteger_t3117 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m14050 (DiffieHellmanCryptoProvider_t3118 * __this, int32_t ___secretLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C" void DiffieHellmanCryptoProvider__cctor_m14051 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
