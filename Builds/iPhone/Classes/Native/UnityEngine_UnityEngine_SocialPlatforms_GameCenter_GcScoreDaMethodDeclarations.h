#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2871;
struct GcScoreData_t2871_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2883;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t2883 * GcScoreData_ToScore_m13486 (GcScoreData_t2871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2871_marshal(const GcScoreData_t2871& unmarshaled, GcScoreData_t2871_marshaled& marshaled);
void GcScoreData_t2871_marshal_back(const GcScoreData_t2871_marshaled& marshaled, GcScoreData_t2871& unmarshaled);
void GcScoreData_t2871_marshal_cleanup(GcScoreData_t2871_marshaled& marshaled);
