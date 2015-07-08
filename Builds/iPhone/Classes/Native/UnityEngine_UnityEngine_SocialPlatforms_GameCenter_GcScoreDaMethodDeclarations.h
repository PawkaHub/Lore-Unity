#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t4844;
struct GcScoreData_t4844_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t4856;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t4856 * GcScoreData_ToScore_m17783 (GcScoreData_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t4844_marshal(const GcScoreData_t4844& unmarshaled, GcScoreData_t4844_marshaled& marshaled);
void GcScoreData_t4844_marshal_back(const GcScoreData_t4844_marshaled& marshaled, GcScoreData_t4844& unmarshaled);
void GcScoreData_t4844_marshal_cleanup(GcScoreData_t4844_marshaled& marshaled);
