#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t4845;
// System.Byte[]
struct ByteU5BU5D_t25;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t4844;

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C" void DiffieHellmanCryptoProvider__ctor_m17907 (DiffieHellmanCryptoProvider_t4845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_get_PublicKey_m17908 (DiffieHellmanCryptoProvider_t4845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_get_SharedKey_m17909 (DiffieHellmanCryptoProvider_t4845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C" void DiffieHellmanCryptoProvider_DeriveSharedKey_m17910 (DiffieHellmanCryptoProvider_t4845 * __this, ByteU5BU5D_t25* ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Encrypt_m17911 (DiffieHellmanCryptoProvider_t4845 * __this, ByteU5BU5D_t25* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Encrypt_m17912 (DiffieHellmanCryptoProvider_t4845 * __this, ByteU5BU5D_t25* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* DiffieHellmanCryptoProvider_Decrypt_m17913 (DiffieHellmanCryptoProvider_t4845 * __this, ByteU5BU5D_t25* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C" void DiffieHellmanCryptoProvider_Dispose_m17914 (DiffieHellmanCryptoProvider_t4845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C" void DiffieHellmanCryptoProvider_Dispose_m17915 (DiffieHellmanCryptoProvider_t4845 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C" BigInteger_t4844 * DiffieHellmanCryptoProvider_CalculatePublicKey_m17916 (DiffieHellmanCryptoProvider_t4845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t4844 * DiffieHellmanCryptoProvider_CalculateSharedKey_m17917 (DiffieHellmanCryptoProvider_t4845 * __this, BigInteger_t4844 * ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C" BigInteger_t4844 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m17918 (DiffieHellmanCryptoProvider_t4845 * __this, int32_t ___secretLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C" void DiffieHellmanCryptoProvider__cctor_m17919 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
