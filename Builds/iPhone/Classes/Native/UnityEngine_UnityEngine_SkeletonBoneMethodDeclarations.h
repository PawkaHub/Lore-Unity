#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t4782;
struct SkeletonBone_t4782_marshaled;

void SkeletonBone_t4782_marshal(const SkeletonBone_t4782& unmarshaled, SkeletonBone_t4782_marshaled& marshaled);
void SkeletonBone_t4782_marshal_back(const SkeletonBone_t4782_marshaled& marshaled, SkeletonBone_t4782& unmarshaled);
void SkeletonBone_t4782_marshal_cleanup(SkeletonBone_t4782_marshaled& marshaled);
