#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2809;
struct SkeletonBone_t2809_marshaled;

void SkeletonBone_t2809_marshal(const SkeletonBone_t2809& unmarshaled, SkeletonBone_t2809_marshaled& marshaled);
void SkeletonBone_t2809_marshal_back(const SkeletonBone_t2809_marshaled& marshaled, SkeletonBone_t2809& unmarshaled);
void SkeletonBone_t2809_marshal_cleanup(SkeletonBone_t2809_marshaled& marshaled);
