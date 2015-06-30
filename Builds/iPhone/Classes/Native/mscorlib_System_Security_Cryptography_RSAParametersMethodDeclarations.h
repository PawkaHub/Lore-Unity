#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1294;
struct RSAParameters_t1294_marshaled;

void RSAParameters_t1294_marshal(const RSAParameters_t1294& unmarshaled, RSAParameters_t1294_marshaled& marshaled);
void RSAParameters_t1294_marshal_back(const RSAParameters_t1294_marshaled& marshaled, RSAParameters_t1294& unmarshaled);
void RSAParameters_t1294_marshal_cleanup(RSAParameters_t1294_marshaled& marshaled);
