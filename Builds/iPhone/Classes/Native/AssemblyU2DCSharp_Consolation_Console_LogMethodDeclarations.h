#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Consolation.Console/Log
struct Log_t539;
struct Log_t539_marshaled;

void Log_t539_marshal(const Log_t539& unmarshaled, Log_t539_marshaled& marshaled);
void Log_t539_marshal_back(const Log_t539_marshaled& marshaled, Log_t539& unmarshaled);
void Log_t539_marshal_cleanup(Log_t539_marshaled& marshaled);
