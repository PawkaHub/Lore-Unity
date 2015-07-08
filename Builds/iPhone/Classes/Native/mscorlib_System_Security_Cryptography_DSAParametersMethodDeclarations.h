#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t4482;
struct DSAParameters_t4482_marshaled;

void DSAParameters_t4482_marshal(const DSAParameters_t4482& unmarshaled, DSAParameters_t4482_marshaled& marshaled);
void DSAParameters_t4482_marshal_back(const DSAParameters_t4482_marshaled& marshaled, DSAParameters_t4482& unmarshaled);
void DSAParameters_t4482_marshal_cleanup(DSAParameters_t4482_marshaled& marshaled);
