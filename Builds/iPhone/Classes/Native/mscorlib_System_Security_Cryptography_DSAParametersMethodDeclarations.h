#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t4244;
struct DSAParameters_t4244_marshaled;

void DSAParameters_t4244_marshal(const DSAParameters_t4244& unmarshaled, DSAParameters_t4244_marshaled& marshaled);
void DSAParameters_t4244_marshal_back(const DSAParameters_t4244_marshaled& marshaled, DSAParameters_t4244& unmarshaled);
void DSAParameters_t4244_marshal_cleanup(DSAParameters_t4244_marshaled& marshaled);
