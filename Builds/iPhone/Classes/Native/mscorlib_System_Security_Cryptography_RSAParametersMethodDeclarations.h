#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t4242;
struct RSAParameters_t4242_marshaled;

void RSAParameters_t4242_marshal(const RSAParameters_t4242& unmarshaled, RSAParameters_t4242_marshaled& marshaled);
void RSAParameters_t4242_marshal_back(const RSAParameters_t4242_marshaled& marshaled, RSAParameters_t4242& unmarshaled);
void RSAParameters_t4242_marshal_cleanup(RSAParameters_t4242_marshaled& marshaled);
