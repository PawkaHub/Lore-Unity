#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t5083;
// System.Byte[]
struct ByteU5BU5D_t25;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t5082;

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C" void DiffieHellmanCryptoProvider__ctor_m18325 (DiffieHellmanCryptoProvider_t5083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_get_PublicKey_m18326 (DiffieHellmanCryptoProvider_t5083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_get_SharedKey_m18327 (DiffieHellmanCryptoProvider_t5083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C" void DiffieHellmanCryptoProvider_DeriveSharedKey_m18328 (DiffieHellmanCryptoProvider_t5083 * __this, ByteU5BU5D_t25* ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Encrypt_m18329 (DiffieHellmanCryptoProvider_t5083 * __this, ByteU5BU5D_t25* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Encrypt_m18330 (DiffieHellmanCryptoProvider_t5083 * __this, ByteU5BU5D_t25* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Decrypt_m18331 (DiffieHellmanCryptoProvider_t5083 * __this, ByteU5BU5D_t25* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C" void DiffieHellmanCryptoProvider_Dispose_m18332 (DiffieHellmanCryptoProvider_t5083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" void DiffieHellmanCryptoProvider_Dispose_m18333 (DiffieHellmanCryptoProvider_t5083 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" BigInteger_t5082 * DiffieHellmanCryptoProvider_CalculatePublicKey_m18334 (DiffieHellmanCryptoProvider_t5083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t5082 * DiffieHellmanCryptoProvider_CalculateSharedKey_m18335 (DiffieHellmanCryptoProvider_t5083 * __this, BigInteger_t5082 * ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" BigInteger_t5082 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m18336 (DiffieHellmanCryptoProvider_t5083 * __this, int32_t ___secretLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C" void DiffieHellmanCryptoProvider__cctor_m18337 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
