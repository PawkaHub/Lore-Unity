#pragma once
#include <stdint.h>
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t5082;
// System.Security.Cryptography.Rijndael
struct Rijndael_t4667;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
#include "mscorlib_System_Object.h"
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t5083  : public Object_t
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t5082 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t5082 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t5082 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t4667 * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t25* ___sharedKey_5;
};
struct DiffieHellmanCryptoProvider_t5083_StaticFields{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t5082 * ___primeRoot_0;
};
