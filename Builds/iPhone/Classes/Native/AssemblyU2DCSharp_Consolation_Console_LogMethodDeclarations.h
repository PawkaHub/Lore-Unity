#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Consolation.Console/Log
struct Log_t563;
struct Log_t563_marshaled;

void Log_t563_marshal(const Log_t563& unmarshaled, Log_t563_marshaled& marshaled);
void Log_t563_marshal_back(const Log_t563_marshaled& marshaled, Log_t563& unmarshaled);
void Log_t563_marshal_cleanup(Log_t563_marshaled& marshaled);
