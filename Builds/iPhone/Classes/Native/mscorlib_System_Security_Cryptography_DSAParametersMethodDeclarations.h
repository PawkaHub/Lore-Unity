#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1321;
struct DSAParameters_t1321_marshaled;

void DSAParameters_t1321_marshal(const DSAParameters_t1321& unmarshaled, DSAParameters_t1321_marshaled& marshaled);
void DSAParameters_t1321_marshal_back(const DSAParameters_t1321_marshaled& marshaled, DSAParameters_t1321& unmarshaled);
void DSAParameters_t1321_marshal_cleanup(DSAParameters_t1321_marshaled& marshaled);
